
all:
	make -C calen
	make -C calen-relative
	make manual.lib

clean:
	make clean -C calen
	make clean -C calen-relative

temp = $(shell mktemp -d)

manual.lib: calen/calen.lib calen-relative/calen-relative.lib
	rm -f manual.lib
	cd $(temp) && \
	ar x $(ROOTDIR)/manual/calen/calen.lib && \
	ar x $(ROOTDIR)/manual/calen-relative/calen-relative.lib && \
	ar r $(ROOTDIR)/manual/manual.lib *.o
