#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#define LENGTH 10
bool is_polynom(char *str);
void reverse(char *str);
void print_dollars(void);
#if 0
int main(void)
{
  char s1[] = "AB";
  char s2[] = "AC";
  printf("%d", strcmp(s1, s2));// -1
  printf("%d", strcmp("AC", "AB"));// 1
  char s[] = "There are some times when I miss you";
  char separator[] = "e";
  char *string;
  for(string = strtok(s, separator);string != NULL;string = strtok(NULL, separator))
  { //strtok discards the letter it is looking for in the string.
    //..do something here
    puts(string);//each word + '\n'
    //after the first call to the func the position in the string is saved, 
    //cause the string in the memory is essentially just a sequence of chars, so this is like walking through bytes
    
  }
  double arr[LENGTH];
    //initialize all elements of the array arr to 0:
    memset(arr, 0, LENGTH);
    for(int i = 0; i < LENGTH;++i)
    {
      printf(" %.3lf", arr[i]);
    }
    //before testing set the value of errno to 0:
    errno = 0;
    //do the test;
    // double result = sqrt(-2);
    // printf("%lf", result);
    // if(errno != 0)
    // {
    //   perror("Square root error");//Domain error means that the arg was out of valid scope.
    //   exit(EXIT_FAILURE);
    // }
    char str_[] = "aha";
    if(is_polynom(str_))
    {
      printf("The string is a polyndrome.");
    }else{
      printf("The string is not a polyndrome.");
    }
  
  return 0;

}
bool is_polynom(char *str)
{
  char *start = str;
  bool is_p = true;
  char *end = str + strlen(str) - 1;//str _ strlen(str) points to the str[10] which is 11.th element of our array, 
  //which is a null terminator, that's why we need to subtract -1, cause it is scaled to the appropriate type of the 
  //str;
  printf(">>%c", *end);
  while(start < end)
  {
    if(*start++ != *end--)
    {
      is_p = false;
    }
  }
  return is_p;
}
//if the length of the string is even, then the sit. in the middle: start -> &c;end -> &c + 1;
//if the length of the string is odd, then the middle element is not compared, but there is no need to 
//compare it, since it is in the middle, and the comparison doesn't matter, so in line while(start < end)
//the <= sign is not needed.
#endif
int main(void)
{
  print_dollars();
}

void print_dollars(void)
{
  unsigned long long int integer = 0;
  scanf("%llu", &integer);
  double fraction = (double)(integer / 100.0) - integer / 100;
  integer /= 100;
  char str[15], frc[10];
  sprintf(str, "%llu", integer);
  sprintf(frc,"%.2f",fraction);
  reverse(str);
  bool print_comma = false;
  int length = strlen(str);
  for(int i = length - 1; i >=0;--i)
  {

    if(print_comma)
    {
      printf(",");
      print_comma = false;
    }
    if(i % 3 == 0)
    {
      print_comma = true;
    }
    printf("%c", str[i]);
  }
  int f_length = strlen(frc);
  for(int i = 1; i < f_length ;++i)//we don't need 0
  {
    printf("%c", frc[i]);
  }
}
void reverse(char *str)
{
  char copy[15];
  strcpy(copy, str);
  puts(copy);
  int i = strlen(str) - 1, j = 0;
  while(i >= 0)
  {
    str[i--] = copy[j++];
  }
}
