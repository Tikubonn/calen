
all:
	make calen.lib

clean:
	rm -f compiled/test-tmp-calen.o
	rm -f compiled/test-tmp-make-calen-temporary.o
	rm -f compiled/test-tmp-add-calen-temporary.o
	rm -f compiled/test-tmp-sub-calen-temporary.o

calen.lib: compiled/test-tmp-calen.o compiled/test-tmp-make-calen-temporary.o compiled/test-tmp-add-calen-temporary.o compiled/test-tmp-sub-calen-temporary.o
	rm -f calen.lib
	ar r calen.lib compiled/test-tmp-calen.o compiled/test-tmp-make-calen-temporary.o compiled/test-tmp-add-calen-temporary.o compiled/test-tmp-sub-calen-temporary.o

compiled/test-tmp-calen.o: src/test-tmp-calen.c
	$(CC) $(CFLAGS) -c src/test-tmp-calen.c -o compiled/test-tmp-calen.o

compiled/test-tmp-make-calen-temporary.o: src/test-tmp-make-calen-temporary.c
	$(CC) $(CFLAGS) -c src/test-tmp-make-calen-temporary.c -o compiled/test-tmp-make-calen-temporary.o

compiled/test-tmp-add-calen-temporary.o: src/test-tmp-add-calen-temporary.c
	$(CC) $(CFLAGS) -c src/test-tmp-add-calen-temporary.c -o compiled/test-tmp-add-calen-temporary.o

compiled/test-tmp-sub-calen-temporary.o: src/test-tmp-sub-calen-temporary.c
	$(CC) $(CFLAGS) -c src/test-tmp-sub-calen-temporary.c -o compiled/test-tmp-sub-calen-temporary.o
