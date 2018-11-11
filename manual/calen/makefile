
all:
	make calen.lib

clean:
	rm -f compiled/calen-month-of-days.o
	rm -f compiled/init-calen.o
	rm -f compiled/init-calen-from-time.o
	rm -f compiled/get-calen-time.o
	rm -f compiled/set-calen-year.o
	rm -f compiled/set-calen-month.o
	rm -f compiled/set-calen-day.o
	rm -f compiled/set-calen-hour.o
	rm -f compiled/set-calen-minute.o
	rm -f compiled/set-calen-second.o
	rm -f compiled/add-calen-manually.o
	rm -f compiled/sub-calen-manually.o
	rm -f compiled/equal-calen.o
	rm -f compiled/unequal-calen.o
	rm -f compiled/less-calen.o
	rm -f compiled/lesseq-calen.o
	rm -f compiled/great-calen.o
	rm -f compiled/greateq-calen.o
	rm -f compiled/get-calen-weekday.o
	rm -f compiled/change-calen-weekday-with-increment.o
	rm -f compiled/change-calen-weekday-with-decrement.o
	
calen.lib: compiled/calen-month-of-days.o compiled/init-calen.o compiled/init-calen-from-time.o compiled/get-calen-time.o compiled/set-calen-year.o compiled/set-calen-month.o compiled/set-calen-day.o compiled/set-calen-hour.o compiled/set-calen-minute.o compiled/set-calen-second.o compiled/add-calen-manually.o compiled/sub-calen-manually.o compiled/equal-calen.o compiled/unequal-calen.o compiled/less-calen.o compiled/lesseq-calen.o compiled/great-calen.o compiled/greateq-calen.o compiled/get-calen-weekday.o compiled/change-calen-weekday-with-increment.o compiled/change-calen-weekday-with-decrement.o
	rm -f calen.lib
	ar r calen.lib compiled/calen-month-of-days.o compiled/init-calen.o compiled/init-calen-from-time.o compiled/get-calen-time.o compiled/set-calen-year.o compiled/set-calen-month.o compiled/set-calen-day.o compiled/set-calen-hour.o compiled/set-calen-minute.o compiled/set-calen-second.o compiled/add-calen-manually.o compiled/sub-calen-manually.o compiled/equal-calen.o compiled/unequal-calen.o compiled/less-calen.o compiled/lesseq-calen.o compiled/great-calen.o compiled/greateq-calen.o compiled/get-calen-weekday.o compiled/change-calen-weekday-with-increment.o compiled/change-calen-weekday-with-decrement.o

compiled/calen-month-of-days.o: src/calen-month-of-days.c
	$(CC) $(CFLAGS) -c src/calen-month-of-days.c -o compiled/calen-month-of-days.o

compiled/init-calen.o: src/init-calen.c
	$(CC) $(CFLAGS) -c src/init-calen.c -o compiled/init-calen.o

compiled/init-calen-from-time.o: src/init-calen-from-time.c
	$(CC) $(CFLAGS) -c src/init-calen-from-time.c -o compiled/init-calen-from-time.o

compiled/get-calen-time.o: src/get-calen-time.c
	$(CC) $(CFLAGS) -c src/get-calen-time.c -o compiled/get-calen-time.o

compiled/set-calen-year.o: src/set-calen-year.c
	$(CC) $(CFLAGS) -c src/set-calen-year.c -o compiled/set-calen-year.o

compiled/set-calen-month.o: src/set-calen-month.c
	$(CC) $(CFLAGS) -c src/set-calen-month.c -o compiled/set-calen-month.o

compiled/set-calen-day.o: src/set-calen-day.c
	$(CC) $(CFLAGS) -c src/set-calen-day.c -o compiled/set-calen-day.o

compiled/set-calen-hour.o: src/set-calen-hour.c
	$(CC) $(CFLAGS) -c src/set-calen-hour.c -o compiled/set-calen-hour.o

compiled/set-calen-minute.o: src/set-calen-minute.c
	$(CC) $(CFLAGS) -c src/set-calen-minute.c -o compiled/set-calen-minute.o

compiled/set-calen-second.o: src/set-calen-second.c
	$(CC) $(CFLAGS) -c src/set-calen-second.c -o compiled/set-calen-second.o

compiled/add-calen-manually.o: src/add-calen-manually.c
	$(CC) $(CFLAGS) -c src/add-calen-manually.c -o compiled/add-calen-manually.o

compiled/sub-calen-manually.o: src/sub-calen-manually.c
	$(CC) $(CFLAGS) -c src/sub-calen-manually.c -o compiled/sub-calen-manually.o

compiled/equal-calen.o: src/equal-calen.c
	$(CC) $(CFLAGS) -c src/equal-calen.c -o compiled/equal-calen.o

compiled/unequal-calen.o: src/unequal-calen.c
	$(CC) $(CFLAGS) -c src/unequal-calen.c -o compiled/unequal-calen.o

compiled/less-calen.o: src/less-calen.c
	$(CC) $(CFLAGS) -c src/less-calen.c -o compiled/less-calen.o

compiled/lesseq-calen.o: src/lesseq-calen.c
	$(CC) $(CFLAGS) -c src/lesseq-calen.c -o compiled/lesseq-calen.o

compiled/great-calen.o: src/great-calen.c
	$(CC) $(CFLAGS) -c src/great-calen.c -o compiled/great-calen.o

compiled/greateq-calen.o: src/greateq-calen.c
	$(CC) $(CFLAGS) -c src/greateq-calen.c -o compiled/greateq-calen.o

compiled/get-calen-weekday.o: src/get-calen-weekday.c
	$(CC) $(CFLAGS) -c src/get-calen-weekday.c -o compiled/get-calen-weekday.o

compiled/change-calen-weekday-with-increment.o: src/change-calen-weekday-with-increment.c
	$(CC) $(CFLAGS) -c src/change-calen-weekday-with-increment.c -o compiled/change-calen-weekday-with-increment.o

compiled/change-calen-weekday-with-decrement.o: src/change-calen-weekday-with-decrement.c
	$(CC) $(CFLAGS) -c src/change-calen-weekday-with-decrement.c -o compiled/change-calen-weekday-with-decrement.o
