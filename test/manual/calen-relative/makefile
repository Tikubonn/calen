
all:
	make calen-relative.lib

clean:
	rm -f compiled/test-manual-calen-relative.o
	rm -f compiled/test-manual-init-calen-relative.o
	rm -f compiled/test-manual-add-calen-and-relative-manually.o
	rm -f compiled/test-manual-sub-calen-and-relative-manually.o

calen-relative.lib: compiled/test-manual-calen-relative.o compiled/test-manual-init-calen-relative.o compiled/test-manual-add-calen-and-relative-manually.o compiled/test-manual-sub-calen-and-relative-manually.o
	rm -f calen-relative.lib
	ar r calen-relative.lib compiled/test-manual-calen-relative.o compiled/test-manual-init-calen-relative.o compiled/test-manual-add-calen-and-relative-manually.o compiled/test-manual-sub-calen-and-relative-manually.o

compiled/test-manual-calen-relative.o: src/test-manual-calen-relative.c
	$(CC) $(CFLAGS) -c src/test-manual-calen-relative.c -o compiled/test-manual-calen-relative.o

compiled/test-manual-init-calen-relative.o: src/test-manual-init-calen-relative.c
	$(CC) $(CFLAGS) -c src/test-manual-init-calen-relative.c -o compiled/test-manual-init-calen-relative.o

compiled/test-manual-add-calen-and-relative-manually.o: src/test-manual-add-calen-and-relative-manually.c
	$(CC) $(CFLAGS) -c src/test-manual-add-calen-and-relative-manually.c -o compiled/test-manual-add-calen-and-relative-manually.o

compiled/test-manual-sub-calen-and-relative-manually.o: src/test-manual-sub-calen-and-relative-manually.c
	$(CC) $(CFLAGS) -c src/test-manual-sub-calen-and-relative-manually.c -o compiled/test-manual-sub-calen-and-relative-manually.o
