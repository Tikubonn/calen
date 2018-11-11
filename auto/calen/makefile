
all:
	make calen.lib

clean:
	rm -f compiled/make-calen.o
	rm -f compiled/make-calen-from-time.o
	rm -f compiled/free-calen.o
	rm -f compiled/add-calen.o
	rm -f compiled/sub-calen.o

calen.lib: compiled/make-calen.o compiled/make-calen-from-time.o compiled/free-calen.o compiled/add-calen.o compiled/sub-calen.o
	rm -f calen.lib
	ar r calen.lib compiled/make-calen.o compiled/make-calen-from-time.o compiled/free-calen.o compiled/add-calen.o compiled/sub-calen.o

compiled/make-calen.o: src/make-calen.c
	$(CC) $(CFLAGS) -c src/make-calen.c -o compiled/make-calen.o

compiled/make-calen-from-time.o: src/make-calen-from-time.c
	$(CC) $(CFLAGS) -c src/make-calen-from-time.c -o compiled/make-calen-from-time.o

compiled/free-calen.o: src/free-calen.c
	$(CC) $(CFLAGS) -c src/free-calen.c -o compiled/free-calen.o

compiled/add-calen.o: src/add-calen.c
	$(CC) $(CFLAGS) -c src/add-calen.c -o compiled/add-calen.o

compiled/sub-calen.o: src/sub-calen.c
	$(CC) $(CFLAGS) -c src/sub-calen.c -o compiled/sub-calen.o
