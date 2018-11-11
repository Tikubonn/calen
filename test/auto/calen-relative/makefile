
all:
	make calen-relative.lib

clean:
	rm -f compiled/test-auto-calen-relative.o
	rm -f compiled/test-auto-make-calen-relative.o
	rm -f compiled/test-auto-add-calen-and-relative.o
	rm -f compiled/test-auto-sub-calen-and-relative.o

calen-relative.lib: compiled/test-auto-calen-relative.o compiled/test-auto-make-calen-relative.o compiled/test-auto-add-calen-and-relative.o compiled/test-auto-sub-calen-and-relative.o
	rm -f calen-relative.lib
	ar r calen-relative.lib compiled/test-auto-calen-relative.o compiled/test-auto-make-calen-relative.o compiled/test-auto-add-calen-and-relative.o compiled/test-auto-sub-calen-and-relative.o

compiled/test-auto-calen-relative.o: src/test-auto-calen-relative.c
	$(CC) $(CFLAGS) -c src/test-auto-calen-relative.c -o compiled/test-auto-calen-relative.o

compiled/test-auto-make-calen-relative.o: src/test-auto-make-calen-relative.c
	$(CC) $(CFLAGS) -c src/test-auto-make-calen-relative.c -o compiled/test-auto-make-calen-relative.o

compiled/test-auto-add-calen-and-relative.o: src/test-auto-add-calen-and-relative.c
	$(CC) $(CFLAGS) -c src/test-auto-add-calen-and-relative.c -o compiled/test-auto-add-calen-and-relative.o

compiled/test-auto-sub-calen-and-relative.o: src/test-auto-sub-calen-and-relative.c
	$(CC) $(CFLAGS) -c src/test-auto-sub-calen-and-relative.c -o compiled/test-auto-sub-calen-and-relative.o
