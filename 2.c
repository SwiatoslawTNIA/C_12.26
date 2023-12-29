#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
//compute the processor time for this program:
#define MAX3(a,b,c) ((a > b)?(b > c)?a:(a > c)?c:a)
int main(void)
{
  // clock_t time_measure = clock();
  time_t current_time = time(NULL);
  
  char *p = ctime(&current_time);
  //convert the current_time to struct:
  struct tm *pointer = localtime(&current_time);
  printf("The current time is following: %d:%d:%d, year: %4d", pointer->tm_hour, pointer->tm_min, pointer->tm_sec,
  pointer->tm_year);

  //convert the time to struct and then 
  // time_t time_ = time(NULL);
  // printf("%lld", time_);
  printf(" %llu ", current_time);
  puts(p);
  //assert program:
  int i = -1;// a[10];
  // assert(i >= 0 && i <= 9);//this code generates an error
  // a[i] = 0;
  errno = 0;//reset the errno
  int y = sqrt(i);
  if(errno != 0)
  {
   fprintf(stderr, "Use unallowed variable."); 
    // perror("Square root function failure");
    exit(EXIT_FAILURE);
  }
  printf("%d", y);
  // //working with time:
  
  // struct tm time1;
  // printf("%d, %d, %d, %d, %d, %d, %d", time1.tm_sec, time1.tm_min, time1.tm_hour, time1.tm_wday, time1.tm_mday, 
  // time1.tm_yday, time1.tm_year);
  // printf("The total processor time that program have used: %.25Lf ", (clock() - time_measure ) / (long double) CLOCKS_PER_SEC);
  // time_t t = time(NULL);
  // printf("%llu", t);
  return 0;
}