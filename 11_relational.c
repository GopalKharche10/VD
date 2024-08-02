#include <stdio.h>

int main(void)
{
int iAns;

iAns = 10>20; //0
printf("10>20=%d\n",iAns);

iAns = 10<20;//1
printf("10<0=%d\n",iAns);

iAns = 10<=20;//1
printf("10<=20=%d\n",iAns);

iAns = 10>=20;//0
printf("10>=20=%d\n",iAns);

iAns = 10==20;//0
printf("10==20=%d\n",iAns);

iAns = 10!=20;//1
printf("10!=20=%d\n",iAns);

iAns = 10==20;//0
printf("10==20=%d\n",iAns);

iAns = 10!=20;//1
printf("10!=20=%d\n",iAns);

iAns = 10<20!=1;0
printf("10<20=%d\n",iAns);
iAns = 10>20==1;0
printf("10>20=%d\n",iAns);
return 0;
}