
all:
	make calen.lib

clean:
	rm -f compiled/test-manual-calen.o
	rm -f compiled/test-manual-init-calen.o
	rm -f compiled/test-manual-init-calen-from-time.o
	rm -f compiled/test-manual-get-calen-time.o
	rm -f compiled/test-manual-set-calen-year.o
	rm -f compiled/test-manual-set-calen-month.o
	rm -f compiled/test-manual-set-calen-day.o
	rm -f compiled/test-manual-set-calen-hour.o
	rm -f compiled/test-manual-set-calen-minute.o
	rm -f compiled/test-manual-set-calen-second.o
	rm -f compiled/test-manual-add-calen-manually.o
	rm -f compiled/test-manual-sub-calen-manually.o
	rm -f compiled/test-manual-equal-calen.o
	rm -f compiled/test-manual-unequal-calen.o
	rm -f compiled/test-manual-less-calen.o
	rm -f compiled/test-manual-lesseq-calen.o
	rm -f compiled/test-manual-great-calen.o
	rm -f compiled/test-manual-greateq-calen.o
	rm -f compiled/test-manual-get-calen-weekday.o
	rm -f compiled/test-manual-change-calen-weekday-with-increment.o
	rm -f compiled/test-manual-change-calen-weekday-with-decrement.o

calen.lib: compiled/test-manual-calen.o compiled/test-manual-init-calen.o compiled/test-manual-init-calen-from-time.o compiled/test-manual-get-calen-time.o compiled/test-manual-set-calen-year.o compiled/test-manual-set-calen-month.o compiled/test-manual-set-calen-day.o compiled/test-manual-set-calen-hour.o compiled/test-manual-set-calen-minute.o compiled/test-manual-set-calen-second.o compiled/test-manual-add-calen-manually.o compiled/test-manual-sub-calen-manually.o compiled/test-manual-equal-calen.o compiled/test-manual-unequal-calen.o compiled/test-manual-less-calen.o compiled/test-manual-lesseq-calen.o compiled/test-manual-great-calen.o compiled/test-manual-greateq-calen.o compiled/test-manual-get-calen-weekday.o compiled/test-manual-change-calen-weekday-with-increment.o compiled/test-manual-change-calen-weekday-with-decrement.o
	rm -f calen.lib
	ar r calen.lib compiled/test-manual-calen.o compiled/test-manual-init-calen.o compiled/test-manual-init-calen-from-time.o compiled/test-manual-get-calen-time.o compiled/test-manual-set-calen-year.o compiled/test-manual-set-calen-month.o compiled/test-manual-set-calen-day.o compiled/test-manual-set-calen-hour.o compiled/test-manual-set-calen-minute.o compiled/test-manual-set-calen-second.o compiled/test-manual-add-calen-manually.o compiled/test-manual-sub-calen-manually.o compiled/test-manual-equal-calen.o compiled/test-manual-unequal-calen.o compiled/test-manual-less-calen.o compiled/test-manual-lesseq-calen.o compiled/test-manual-great-calen.o compiled/test-manual-greateq-calen.o compiled/test-manual-get-calen-weekday.o compiled/test-manual-change-calen-weekday-with-increment.o compiled/test-manual-change-calen-weekday-with-decrement.o

compiled/test-manual-calen.o: src/test-manual-calen.c 
	$(CC) $(CFLAGS) -c src/test-manual-calen.c -o compiled/test-manual-calen.o

compiled/test-manual-init-calen.o: src/test-manual-init-calen.c 
	$(CC) $(CFLAGS) -c src/test-manual-init-calen.c -o compiled/test-manual-init-calen.o

compiled/test-manual-init-calen-from-time.o: src/test-manual-init-calen-from-time.c
	$(CC) $(CFLAGS) -c src/test-manual-init-calen-from-time.c -o compiled/test-manual-init-calen-from-time.o

compiled/test-manual-get-calen-time.o: src/test-manual-get-calen-time.c
	$(CC) $(CFLAGS) -c src/test-manual-get-calen-time.c -o compiled/test-manual-get-calen-time.o

compiled/test-manual-set-calen-year.o: src/test-manual-set-calen-year.c
	$(CC) $(CFLAGS) -c src/test-manual-set-calen-year.c -o compiled/test-manual-set-calen-year.o

compiled/test-manual-set-calen-month.o: src/test-manual-set-calen-month.c
	$(CC) $(CFLAGS) -c src/test-manual-set-calen-month.c -o compiled/test-manual-set-calen-month.o

compiled/test-manual-set-calen-day.o: src/test-manual-set-calen-day.c
	$(CC) $(CFLAGS) -c src/test-manual-set-calen-day.c -o compiled/test-manual-set-calen-day.o

compiled/test-manual-set-calen-hour.o: src/test-manual-set-calen-hour.c
	$(CC) $(CFLAGS) -c src/test-manual-set-calen-hour.c -o compiled/test-manual-set-calen-hour.o

compiled/test-manual-set-calen-minute.o: src/test-manual-set-calen-minute.c
	$(CC) $(CFLAGS) -c src/test-manual-set-calen-minute.c -o compiled/test-manual-set-calen-minute.o

compiled/test-manual-set-calen-second.o: src/test-manual-set-calen-second.c
	$(CC) $(CFLAGS) -c src/test-manual-set-calen-second.c -o compiled/test-manual-set-calen-second.o

compiled/test-manual-add-calen-manually.o: src/test-manual-add-calen-manually.c
	$(CC) $(CFLAGS) -c src/test-manual-add-calen-manually.c -o compiled/test-manual-add-calen-manually.o

compiled/test-manual-sub-calen-manually.o: src/test-manual-sub-calen-manually.c
	$(CC) $(CFLAGS) -c src/test-manual-sub-calen-manually.c -o compiled/test-manual-sub-calen-manually.o

compiled/test-manual-equal-calen.o: src/test-manual-equal-calen.c
	$(CC) $(CFLAGS) -c src/test-manual-equal-calen.c -o compiled/test-manual-equal-calen.o

compiled/test-manual-unequal-calen.o: src/test-manual-unequal-calen.c
	$(CC) $(CFLAGS) -c src/test-manual-unequal-calen.c -o compiled/test-manual-unequal-calen.o

compiled/test-manual-less-calen.o: src/test-manual-less-calen.c
	$(CC) $(CFLAGS) -c src/test-manual-less-calen.c -o compiled/test-manual-less-calen.o

compiled/test-manual-lesseq-calen.o: src/test-manual-lesseq-calen.c
	$(CC) $(CFLAGS) -c src/test-manual-lesseq-calen.c -o compiled/test-manual-lesseq-calen.o

compiled/test-manual-great-calen.o: src/test-manual-great-calen.c
	$(CC) $(CFLAGS) -c src/test-manual-great-calen.c -o compiled/test-manual-great-calen.o

compiled/test-manual-greateq-calen.o: src/test-manual-greateq-calen.c
	$(CC) $(CFLAGS) -c src/test-manual-greateq-calen.c -o compiled/test-manual-greateq-calen.o

compiled/test-manual-get-calen-weekday.o: src/test-manual-get-calen-weekday.c
	$(CC) $(CFLAGS) -c src/test-manual-get-calen-weekday.c -o compiled/test-manual-get-calen-weekday.o

compiled/test-manual-change-calen-weekday-with-increment.o: src/test-manual-change-calen-weekday-with-increment.c
	$(CC) $(CFLAGS) -c src/test-manual-change-calen-weekday-with-increment.c -o compiled/test-manual-change-calen-weekday-with-increment.o

compiled/test-manual-change-calen-weekday-with-decrement.o: src/test-manual-change-calen-weekday-with-decrement.c
	$(CC) $(CFLAGS) -c src/test-manual-change-calen-weekday-with-decrement.c -o compiled/test-manual-change-calen-weekday-with-decrement.o
