#include <stdio.h>
int main()
{
    int iNo1=0;
    int iNo2=1;
    int iNo3=2;
    int iAns;

    iAns=iNo1 && ++iNo2 || iNo3++;
    printf("%d %d %d\n ",iNo1,iNo2,iNo3);
    printf("%d",iAns);

    return 0;
}
