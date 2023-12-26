#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 20
void str_copy(char *s1, char *s2);
void test(char str1[], char *str2);
int main(void)
{
  int array[] = {0,1,2,3,4,5,6,7,8,9,10};
  int *p = &array[2];
  printf("%d", p[6]);//the third el. is 2, to which we add 6 and get 8;
  printf("%d", p[-1]);//p points to the 3. el, thus p[-1] = *(p - 1), thus p now
  //points to the 2. el of the array.
  char s1[10];
  char s2[] = "There are";
  str_copy(s1, s2);
  puts(s1);
  test(s1, s2);
  return 0;
}
void str_copy(char *s1, char *s2)//the string = an array of chars
//when array name is passed, the receiving func gets a pointer to the first el of the array, 
//because the array name is actually a pointer to it's first el.
//so the pointer declaration is the same, but what if we print the sizeof(str), will 
//that be the size of the pointer to str, or the size of the string(char array)
{
  for(char *value = s1; s1 - value < SIZE;)//value points to the first el. of the array,
  //the difference in the first iteraion is 0; in second 1, because s1 will then point 
  //to the next el in the array.(the scaling is done automatically by the compiler
  //), where SIZE is the size of the array;
  { 
    *s1++ = *s2++;
  }
}
void test(char str1[], char *str2)
{
  printf("The difference between str1 and str2 is: %lu %lu", sizeof(str1), sizeof(str2));
  //warning , it returs the size of char pointer , not the size of array

}