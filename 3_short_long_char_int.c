#include <stdio.h>
int main(void)
{
    printf("size of (int)= %lu\n", sizeof(int));  //4

   printf("size of (short int)=%lu\n",sizeof(short int)); //2

   printf("size of (long int)=%lu\n",sizeof(long int)); //8

   printf("size of (long long int)=%lu\n",sizeof(long long int)); //8


    printf("size of (char)=%lu\n",sizeof(char));//1

    printf("size of (short char)=%lu\n",sizeof(short char)); // invalid

   printf("size of (long char)=%lu\n",sizeof(long char)); //invalid

   printf("size of (long long char)=%lu\n",sizeof(long long char));// invalid



    printf("size of (float)=%lu\n",sizeof(float)); // 4

   printf("size of (short float)=%lu\n",sizeof(short float));// invalid

     printf("size of (long float)=%lu\n",sizeof(long float));// invalid

printf("size of (long long float)=%lu\n",sizeof(long long float)); //invalid



    printf("size of (double)=%lu\n",sizeof(double)); //8

    printf("size of (short double)=%lu\n",sizeof(short double));// invalid

   printf("size of (long double)=%d\n",sizeof(long double)); // invalid

     printf("size of (long long double)=%d\n",sizeof(long long double)); // invalid

     return 0;
    
 }
 