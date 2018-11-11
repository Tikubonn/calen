
all:
	make calen-relative.lib

clean:
	rm -f compiled/init-calen-relative.o
	rm -f compiled/add-calen-and-relative-manually.o
	rm -f compiled/sub-calen-and-relative-manually.o

calen-relative.lib: compiled/init-calen-relative.o compiled/add-calen-and-relative-manually.o compiled/sub-calen-and-relative-manually.o
	rm -f calen-relative.lib
	ar r calen-relative.lib compiled/init-calen-relative.o compiled/add-calen-and-relative-manually.o compiled/sub-calen-and-relative-manually.o

compiled/init-calen-relative.o: src/init-calen-relative.c
	$(CC) $(CFLAGS) -c src/init-calen-relative.c -o compiled/init-calen-relative.o

compiled/add-calen-and-relative-manually.o: src/add-calen-and-relative-manually.c
	$(CC) $(CFLAGS) -c src/add-calen-and-relative-manually.c -o compiled/add-calen-and-relative-manually.o

compiled/sub-calen-and-relative-manually.o: src/sub-calen-and-relative-manually.c
	$(CC) $(CFLAGS) -c src/sub-calen-and-relative-manually.c -o compiled/sub-calen-and-relative-manually.o
