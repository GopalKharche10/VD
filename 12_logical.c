#include <stdio.h>

int main(void)
{
int iAns=1&&1;  //1
printf("%d\n",iAns);

int iAns1=1&&0;
printf("%d\n",iAns1);//0

int iAns2=1||0;
printf("%D\n",iAns2);//1

int iAns3=0||0;
printf("%d\n",iAns3);//0

int iAns4=!0;
printf("%d\n",iAns4);//1


//integer

int a=10;
int b=20;

int iAns=a&&b;  //1
printf("%d\n",iAns);//it is true but we directly assign the int 10 or 20 to iAns so its warning so avoid it we can assign int a or int b

int iAns1=a&&b; //1
printf("%d\n",iAns1);

int iAns2=a||b;
printf("%D\n",iAns2); //1

int iAns3=a||b;
printf("%d\n",iAns3);//1

int iAns4=!a;
printf("%d\n",iAns4);//0


return 0;
}