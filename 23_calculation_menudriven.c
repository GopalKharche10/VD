# include <stdio.h>
int Addition(int iNo1,int iNo2)
{
    return  iNo1+iNo2;
}

int Subtraction (int iNo1,int iNo2)
{
    return iNo1-iNo2;
}

int Multiplication (int iNo1,int iNo2)
{
    return iNo1*iNo2;
}

int Division (int iNo1,int iNo2)
{
    return iNo1/iNo2;
}

int Modulus (int iNo1,int iNo2)
{
    return iNo1%iNo2;
}



int main(void)
{
    int iNo1;
    int iNo2;
    int iAns;
    int ichoice;

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n");

    printf("Enter your choice:\t");
    scanf("%d",&ichoice);

    if (ichoice <= 0 || ichoice>5)
    {
        printf("invalid choice\n");
        return 0;
    }

    printf("Enter two numbers:\t");
    scanf("%d %d",&iNo1,&iNo2);

    switch (ichoice)
    {
        case 1:
        iAns= Addition (iNo1,iNo2);
        printf("Answer is %d\n",iAns);
        break;

        case 2:
        iAns= Subtraction (iNo1,iNo2);
        printf("Answer is %d\n",iAns);

        break;

        case 3:
        iAns= Multiplication (iNo1,iNo2);
        break;

        case 4:
        iAns= Division (iNo1,iNo2);
        break;

        case 5:
        iAns= Modulus (iNo1,iNo2);
        break;

        printf("Answer is %d\n",iAns);
        return 0;
    }


}