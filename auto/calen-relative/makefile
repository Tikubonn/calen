
all:
	make calen-relative.lib

clean:
	rm -f compiled/make-calen-relative.o
	rm -f compiled/free-calen-relative.o
	rm -f compiled/add-calen-and-relative.o
	rm -f compiled/sub-calen-and-relative.o

calen-relative.lib: compiled/make-calen-relative.o compiled/free-calen-relative.o compiled/add-calen-and-relative.o compiled/sub-calen-and-relative.o
	rm -f calen-relative.lib
	ar r calen-relative.lib compiled/make-calen-relative.o compiled/free-calen-relative.o compiled/add-calen-and-relative.o compiled/sub-calen-and-relative.o

compiled/make-calen-relative.o: src/make-calen-relative.c
	$(CC) $(CFLAGS) -c src/make-calen-relative.c -o compiled/make-calen-relative.o

compiled/free-calen-relative.o: src/free-calen-relative.c
	$(CC) $(CFLAGS) -c src/free-calen-relative.c -o compiled/free-calen-relative.o

compiled/add-calen-and-relative.o: src/add-calen-and-relative.c
	$(CC) $(CFLAGS) -c src/add-calen-and-relative.c -o compiled/add-calen-and-relative.o

compiled/sub-calen-and-relative.o: src/sub-calen-and-relative.c
	$(CC) $(CFLAGS) -c src/sub-calen-and-relative.c -o compiled/sub-calen-and-relative.o
