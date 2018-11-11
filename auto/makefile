
all:
	make -C calen
	make -C calen-relative
	make auto.lib

clean:
	make clean -C calen
	make clean -C calen-relative

temp = $(shell mktemp -d)

auto.lib: calen/calen.lib calen-relative/calen-relative.lib
	rm -f auto.lib
	cd $(temp) && \
	ar x $(ROOTDIR)/auto/calen/calen.lib && \
	ar x $(ROOTDIR)/auto/calen-relative/calen-relative.lib && \
	ar r $(ROOTDIR)/auto/auto.lib *.o
