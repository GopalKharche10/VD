# include <stdio.h>

int main(void)
{
 printf("%d",10);  //10
printf("%u",10);  //10
 printf("%d",-10); //-10
 printf("%u",-10); 4294967286

printf("%o",10); //12
printf("%x",10); //a
 printf("%X",10); //A


printf("%d",012);//10
printf("%d",0x0A);//10

 printf("%c",10); // not shown
printf("%i",10);// 10
 printf("%ld",10); // 10 warning
printf("%d",10);// 10
 printf("%hd",25); //25

 printf("%lu",20); //20
printf("%hu",50); //50
printf("%f",10);  //0.00000 warning 
 printf("%e",10); // 4.940656e-323%
 printf("%E",10);
 printf("%g",10);
 printf("%G",30);
 printf("%lf",10);
 printf("%s",10);
 printf("%p",10);


 return 0;


















 }