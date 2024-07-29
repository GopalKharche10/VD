# include <stdio.h>
# include "calculation.h"

int main()
{
    printf("\n for multiplication %d\n\n",multplication());

    int no1;
    int no2;
    int ans;
    printf("\n for addition,\n Enter two number:\t");
    scanf("%d%d",&no1,&no2);

    ans= addition (no1,no2);
    printf("\n addition is %d\n\n",ans);

    subtraction();

    printf("\n for division,\n Enter the numenator : \t");
    scanf("%d",&no1);

    printf("\nEnter the denomenator;\t");
    scanf("%d",&no2);

    division(no1,no2);

    ans=modulous();
    printf("\nRemainder is %d\n\n",ans);
    return 0;

}
int multplication (void)
{
    int no1;
    int no2;
    int ans;
    printf("\nEnter two number:\t");
    scanf("%d%d",&no1,&no2);
    ans=no1*no2;
    return ans;
}
int addition (int no1, int no2)
{
    return no1+no2;
}
int modulous (void)
{
    int numenator;
    int denomenator;
    int Remainder;
    printf("\nfor Modulous\n\nEnter numenator:- \t");
    scanf ("%d",&numenator);

    printf ( "\n Enter denomenator:- \t");
    scanf("%d",&denomenator);

    Remainder=numenator%denomenator;
    return Remainder;
}

void subtraction(void)
{
    int no1;
    int no2;
    int ans;
    printf("\n for subtraction\n Enter two number");
    scanf("%d%d",&no1,&no2);

    ans=no1-no2;
    printf("\n subtraction is %d\n",ans);
}
void division (int no1, int no2)
{
    printf("\n quotient(division) is %d",no1/no2);
}