#pragma once

/**
 * @typedef 
 * this type can contain the distance of date.
 * you can use this type for calculation by date.
 */

typedef struct calen_relative {
  unsigned int year;
  unsigned int month;
  unsigned int day;
  unsigned int hour;
  unsigned int minute;
  unsigned int second;
} calen_relative;
