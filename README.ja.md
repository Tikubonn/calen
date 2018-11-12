[English](README.md) | [日本語](README.ja.md)

# Calen

CalenはC言語用に書かれた、グレゴリオ暦の日付を操作するためのライブラリです。
日付同士の基本的な演算に対応しており、できるだけ自然に操作できるように書かれています。
一応、簡単なテストは通してありますが、これは私が趣味で書いたものなので、安全性を要求されるアプリケーションでは使わないほうが良いでしょう。

## 導入

ダウンロード後に`make`を実行すれば`./dist`ディレクトリ配下にライブラリファイルが作成されます。
ほかにも、コンパイル後の動作確認も行いたい方のために`make test`も用意されています。
残念ながら、このライブラリは**64bit**の整数型に依存しているため、対応していないコンピュータではちゃんとコンパイルできないかもしれません。

```bash
make
```

## 使い方

ここでは簡単な使い方のみを紹介します。
細かい仕様に関しましては、ソースコードに書かれているコメントか、
doxygenで生成されたドキュメントを参照ください。

* [日付インスタンスの作成](#-2)
* [基本的な演算](#-7)
* [曜日の操作]()

### 日付インスタンスの作成

#### 手動的な作成

Calenは用途に応じて、複数の方法で日付型`calen`のインスタンスを「初期化・作成」することができます。
下記のコードに書かれている、`init_calen`関数は、それぞれ「年・月・日・時・分・秒」を受け取り、最後の引数に指定されたインスタンスを初期化します。
もし仮に、有効でない日付を引数で受け取った場合には、処理を中断し、0でない値を返します。
`init_calen`をはじめとする幾つかの手動的な関数は、`malloc`ではなく、自作の言語処理系でのGCなどで、独自のメモリ管理を行いたい場合などに活用できます。

```c
calen cal;
int status = init_calen(2018, 11, 12, 7, 44, 32, &cal); // non-zero is failed.
```

#### 自動的な作成

`make_calen`関数は、標準ライブラリの`malloc`で割り当てられたインスタンスを生成します。
これは初期化あるいは、メモリの割り当てが失敗した場合には、`NULL`を返します。
`make_calen`関数で生成されたインスタンスは、不要になれば  `free_calen`関数を実行して解放することができます。

```c
calen *cal;
cal = make_calen(2018, 11, 12, 7, 44, 32); // NULL is failed.
```

#### 一時的な作成

`make_calen_temporary`マクロは、最初の引数に与えられた変数名をもとに、現在のスコープに一時的なインスタンスを生成します。
これによって生成されたインスタンスは、スコープを抜けると自動的に解放されます。
使い捨ての値が必要な際に役に立つでしょう。

```c
make_calen_temporary(cal, 2018, 11, 12, 7, 44, 32); // cal == NULL is failed.
```

#### ゼロ時間からの経過秒数を用いた作成

Calenでは`init_calen_from_time`をはじめとする幾つかの関数で、「ゼロ時間からの経過秒数」を利用したインスタンスの初期化・作成に対応しています。
また、逆にインスタンスから経過秒数を取得することもできます。

```c
calen cal;
int status = init_calen_from_time((60 * 60 * 24) * 365, &cal); // non-zero is failed.
```

### 日付同士の演算

#### 基本的な演算

`calen`インスタンスは「加算・減算・比較」の基本的な演算に対応しています。
ただし、これらはインスタンスのゼロ時間からの経過秒数を基に計算されるため、予想に反した結果が帰ってくる場合があります。
詳細については次項の[相対的な時間操作]()を参照ください。

```c
calen *cal1 = make_calen(1997, 7, 19, 0, 0, 0);
calen *cal2 = make_calen(2018, 11, 11, 0, 0, 0);
add_calen(cal1, cal2); // cal1 + cal2
sub_calen(cal1, cal2); // cal1 - cal2
equal_calen(cal1, cal2); // cal1 == cal2
unequal_calen(cal1, cal2); // cal1 != cal2
less_calen(cal1, cal2); // cal1 < cal2
lesseq_calen(cal1, cal2); // cal1 <= cal2
great_calen(cal1, cal2); // cal1 > cal2
greateq_calen(cal1, cal2); // cal1 >= cal2
```

#### 相対的な時間操作

どうしても去年や翌週などの日付が欲しい場合があるでしょう。
しかし、それを`calen`インスタンス同士の計算で求めるのはいささか直感に反します。
また、残念ながら、計算結果が閏年を跨いでしまう場合には誤差が発生してしまいます。
そこでCalenは相対的な時間を、より自然に取り扱えるように`calen_relative`型を提供しています。

```c
calen *cal1 = make_calen(1, 1, 1, 0, 0, 0);
calen *cal2 = make_calen(2, 1, 1, 0, 0, 0);
calen *result = add_calen(cal1, cal2);
assert(result.year == 2); // next year!
```

`calen_relative`型は相対的な時間を管理します。
この型を用いた「加算・減算」の操作は、閏年や日数の丸め込みなどを加味した結果を返すため、
より自然に時間を取り扱うことができます。

```c
calen *cal = make_calen(1, 1, 1, 0, 0, 0);
calen_relative *rel = make_calen_relative(1, 0, 0, 0, 0, 0);
calen *result = add_calen_and_relative(cal, rel);
assert(result.year == 2); // next year!
```

### 曜日の操作

#### 曜日の取得

Calenでは曜日の取得や変更などにも対応しています。
Calenではすべての曜日を保持できる`calen_weekday`型が提供されており、
`calen`インスタンスから曜日を取得するための関数`get_calen_weekday`が定義されています。

```c
calen *cal = make_calen(2018, 11, 12, 0, 0, 0);
calen_weekday weekday = get_calen_weekday(cal); // CALEN_MONDAY
```

#### 曜日の変更

勿論、取得だけではなく曜日を変更することもできます。
Calenは曜日を変更するための関数`change_calen_weekday_with_increase`と`change_calen_weekday_with_decrease`を提供しています。
これら二つの関数の違いは、曜日を変更する際に、日付を前にずらすか後ろにずらすかが違うだけです。

```c
calen *cal = make_calen(2018, 11, 12, 0, 0, 0);
int status = change_calen_weekday_with_increment(CALEN_SUNDAY, cal); // non-zero is failed.
```

# ライセンス 

このライブラリはMITライセンスで公開されています。
