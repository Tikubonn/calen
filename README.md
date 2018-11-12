[English](README.md) | [日本語](README.ja.md)

# Calen

Calen is a small library that provide some datatype and routines for managing Gregorian Calendar for C language.
this library has supported abstract controlling, and calculating date time by date time.
this library has been already tested. but, I dont recommend about using this library for your application that need more security and safety.

## Installing

finished download, then move to this libraries directory, then put `make` command. 
if it was successed, library files were made under the `./dist` directory.
note, this library depend the 64bit large integer type. so, some computer cannot compile this library. maybe XD

```bash
make
```

## Quickstart

here is a simple guide.
if you want to know detail of this library, you can read comment in source file.

* [Making an Instance](#-2)
* [Operation Functions](#-7)
* [Controlling Weekday]()

### Making an Instance

#### Making Manually

Calen has many routines for making or initializing an instance.
in this code, `init calen` function get some arguments (year, month, day, hour, minute and second) then initialize instance that is last argument.
if invalid value in the argument, it will abort processing then return non-zero integer.
some manual routines that like as `init_calen` is useful for managing memory with homemade GC or something.

```c
calen cal;
int status = init_calen(2018, 11, 12, 7, 44, 32, &cal); // non-zero is failed.
```

#### Making Automatically

`make_calen` function make a new instance that is allocated by `malloc` standard library function. 
if allocating or initialization has failed, this function return `NULL`.
you can free maken instance with `free_calen` function when it is unnecessary.

```c
calen *cal;
cal = make_calen(2018, 11, 12, 7, 44, 32); // NULL is failed.
```

#### Making Temporary

`make_calen_temporary` function define a new variable with name of first argument in the current scope, then assign a new instance to it.
maken instance will be free when leaving scope.
so it is useful for making a temporary value.

```c
make_calen_temporary(cal, 2018, 11, 12, 7, 44, 32); // cal == NULL is failed.
```

#### Making with Total Seconds from Zero Time.

Calen provide some functions these like as `init_calen_from_time`.
those can make or initialize an instance with total seconds from zero time.
reversely, you can get total seconds by provided function.

```c
calen cal;
int status = init_calen_from_time((60 * 60 * 24) * 365, &cal); // non-zero is failed.
```

### Operation functions

#### Basic Operation

`calen` instance can be used for calculation of addition, subtraction and comparing.
but, those calculation use total seconds, so in some cases, those give you some surprised result.
if you want to know details, you can read to [Relative Time Operation](#relative-time-operation) of next section.

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

#### Relative Time Operation

in some cases, if you want to get a date of next year, next month or tomorrow by calculating, I do not recommend that calculating date by date for it. 
because, if calculation result was passed the leap year, its value has contain error a little.
so, Calen provide `calen_relative` data type for calculating with relative time naturally.

```c
calen *cal1 = make_calen(1, 1, 1, 0, 0, 0);
calen *cal2 = make_calen(2, 1, 1, 0, 0, 0);
calen *result = add_calen(cal1, cal2);
assert(result.year == 2); // next year!
```
`calen_relative` manage the relative date time.
some routines these use it calculate date time creverly (for example, fix error of leap year, and adjust date time automatically).
so, you can control abstractly relative date time with it.

```c
calen *cal = make_calen(1, 1, 1, 0, 0, 0);
calen_relative *rel = make_calen_relative(1, 0, 0, 0, 0, 0);
calen *result = add_calen_and_relative(cal, rel);
assert(result.year == 2); // next year!
```

### Controlling weekday

#### Get a weekday

Calen has supported setting and getting the day of the week.
Calen provide `calen weekday` data type that can contain all day of the week. 
and, Calen provide `get_calen_weekday` routine that get the day of the week.

```c
calen *cal = make_calen(2018, 11, 12, 0, 0, 0);
calen_weekday weekday = get_calen_weekday(cal); // CALEN_MONDAY
```

#### Change a weekday

you can change instances day of week.
Calen provide two routines these `change_calen_weekday_with_increase` and `change_calen_weekday_with_decrease`.
those difference is how to adjust date time with the increment or decrement.

```c
calen *cal = make_calen(2018, 11, 12, 0, 0, 0);
int status = change_calen_weekday_with_increment(CALEN_SUNDAY, cal); // non-zero is failed.
```

# License 

this library released under the MIT License.
