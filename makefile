
export CC := gcc
export CFLAGS := -I$(CURDIR) -L$(CURDIR) -Wall
export ROOTDIR := $(CURDIR)

all:
	make -C manual
	make -C auto
	make dist/calen.lib
	make dist/calen.dll

export CALEN_INCLUDE := $(CURDIR)
export CALEN_LIBRARY := $(CURDIR)/dist

always:
test: always
	make all
	make test -C test

clean:
	make clean -C manual
	make clean -C auto
	make clean -C test

temp = $(shell mktemp -d)

dist/calen.lib: manual/manual.lib auto/auto.lib
	rm -f dist/calen.lib
	cd $(temp) && \
	ar x $(ROOTDIR)/manual/manual.lib && \
	ar x $(ROOTDIR)/auto/auto.lib && \
	ar r $(ROOTDIR)/dist/calen.lib *.o

dist/calen.dll: manual/manual.lib auto/auto.lib
	cd $(temp) && \
	ar x $(ROOTDIR)/manual/manual.lib && \
	ar x $(ROOTDIR)/auto/auto.lib && \
	$(CC) $(CFLAGS) -shared *.o -o $(ROOTDIR)/dist/calen.dll
