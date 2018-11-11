#pragma once
#include <stdint.h>
#define CALEN_SUNDAY 0
#define CALEN_MONDAY 1
#define CALEN_TUESDAY 2
#define CALEN_WEDNESDAY 3
#define CALEN_THURSDAY 4
#define CALEN_FRIDAY 5
#define CALEN_SATURDAY 6

/**
 * @typedef 
 * this type can contain the date.
 * dont modify member value with manually!
 * you should modify this type with routine that is provided by this library.
 */

typedef struct calen {
  unsigned int year;
  unsigned int month;
  unsigned int day;
  unsigned int hour;
  unsigned int minute;
  unsigned int second;
} calen;

/**
 * @typedef 
 * this type can contain the total seconds from <1/1/1 00:00:00>.
 * this type must be 64 bits unsigned integer.
 */

typedef uint64_t calen_time;

/**
 * @typedef 
 * this type can contain the identify of weekday.
 */

typedef unsigned int calen_weekday;
