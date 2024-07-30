#include <stdio.h>

int main(void)
{
   printf("hello"); // hello

     printf(""hello""); // error
   printf("\"hello\"");  // "hello"

     printf("'hello'"); // 'hello'
     printf("\'hello\'");// 'hello'

     printf("hello?");  // hello?
     printf("hello\?");  // hello?

     printf("\temp\bin\new");// ew
    printf("\\temp\\bin\\new"); // \temp\bin\new

    return 0;



}