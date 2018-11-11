
all:
	make calen.lib

clean:
	rm -f compiled/test-auto-calen.o
	rm -f compiled/test-auto-make-calen.o
	rm -f compiled/test-auto-make-calen-from-time.o
	rm -f compiled/test-auto-add-calen.o
	rm -f compiled/test-auto-sub-calen.o

calen.lib: compiled/test-auto-calen.o compiled/test-auto-make-calen.o compiled/test-auto-make-calen-from-time.o compiled/test-auto-add-calen.o compiled/test-auto-sub-calen.o
	rm -f calen.lib
	ar r calen.lib compiled/test-auto-calen.o compiled/test-auto-make-calen.o compiled/test-auto-make-calen-from-time.o compiled/test-auto-add-calen.o compiled/test-auto-sub-calen.o

compiled/test-auto-calen.o: src/test-auto-calen.c
	$(CC) $(CFLAGS) -c src/test-auto-calen.c -o compiled/test-auto-calen.o

compiled/test-auto-make-calen.o: src/test-auto-make-calen.c
	$(CC) $(CFLAGS) -c src/test-auto-make-calen.c -o compiled/test-auto-make-calen.o

compiled/test-auto-make-calen-from-time.o: src/test-auto-make-calen-from-time.c
	$(CC) $(CFLAGS) -c src/test-auto-make-calen-from-time.c -o compiled/test-auto-make-calen-from-time.o

compiled/test-auto-add-calen.o: src/test-auto-add-calen.c
	$(CC) $(CFLAGS) -c src/test-auto-add-calen.c -o compiled/test-auto-add-calen.o

compiled/test-auto-sub-calen.o: src/test-auto-sub-calen.c
	$(CC) $(CFLAGS) -c src/test-auto-sub-calen.c -o compiled/test-auto-sub-calen.o
