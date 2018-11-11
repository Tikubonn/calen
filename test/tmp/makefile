
all:
	make -C calen
	make -C calen-relative
	make tmp.lib

clean:
	make clean -C calen
	make clean -C calen-relative

temp = $(shell mktemp -d)

tmp.lib: calen/calen.lib calen-relative/calen-relative.lib
	rm -f tmp.lib
	cd $(temp) && \
	ar x $(ROOTDIR)/tmp/calen/calen.lib && \
	ar x $(ROOTDIR)/tmp/calen-relative/calen-relative.lib && \
	ar r $(ROOTDIR)/tmp/tmp.lib *.o
