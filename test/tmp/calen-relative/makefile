
all:
	make calen-relative.lib

clean:
	rm -f compiled/test-tmp-calen-relative.o
	rm -f compiled/test-tmp-make-calen-relative-temporary.o
	rm -f compiled/test-tmp-add-calen-and-relative-temporary.o
	rm -f compiled/test-tmp-sub-calen-and-relative-temporary.o

calen-relative.lib: compiled/test-tmp-calen-relative.o compiled/test-tmp-make-calen-relative-temporary.o compiled/test-tmp-add-calen-and-relative-temporary.o compiled/test-tmp-sub-calen-and-relative-temporary.o
	rm -f calen-relative.lib
	ar r calen-relative.lib compiled/test-tmp-calen-relative.o compiled/test-tmp-make-calen-relative-temporary.o compiled/test-tmp-add-calen-and-relative-temporary.o compiled/test-tmp-sub-calen-and-relative-temporary.o

compiled/test-tmp-calen-relative.o: src/test-tmp-calen-relative.c
	$(CC) $(CFLAGS) -c src/test-tmp-calen-relative.c -o compiled/test-tmp-calen-relative.o

compiled/test-tmp-make-calen-relative-temporary.o: src/test-tmp-make-calen-relative-temporary.c
	$(CC) $(CFLAGS) -c src/test-tmp-make-calen-relative-temporary.c -o compiled/test-tmp-make-calen-relative-temporary.o

compiled/test-tmp-add-calen-and-relative-temporary.o: src/test-tmp-add-calen-and-relative-temporary.c
	$(CC) $(CFLAGS) -c src/test-tmp-add-calen-and-relative-temporary.c -o compiled/test-tmp-add-calen-and-relative-temporary.o

compiled/test-tmp-sub-calen-and-relative-temporary.o: src/test-tmp-sub-calen-and-relative-temporary.c
	$(CC) $(CFLAGS) -c src/test-tmp-sub-calen-and-relative-temporary.c -o compiled/test-tmp-sub-calen-and-relative-temporary.o
