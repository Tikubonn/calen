
export CC := gcc
export CFLAGS := -I$(CURDIR) -L$(CURDIR) -I$(CALEN_INCLUDE) -L$(CALEN_LIBRARY)
export ROOTDIR := $(CURDIR)

all:
	make -C manual
	make -C auto
	make -C tmp
	make test.exe

clean:
	make clean -C manual
	make clean -C auto
	make clean -C tmp

always:
test: always
	make all
	./test.exe

test.exe: test.c manual/manual.lib auto/auto.lib tmp/tmp.lib $(CALEN_LIBRARY)/calen.lib
	$(CC) $(CFLAGS) test.c manual/manual.lib auto/auto.lib tmp/tmp.lib $(CALEN_LIBRARY)/calen.lib -o test.exe
