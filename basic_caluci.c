#include<stdio.h>
int n;
int a,b,n,ch,result=1,i;
int addition()
{
    n=a+b;
    printf("%d\n",n) ;
}
void substraction()
{
    n=a-b;
    printf("%d\n",n);
}
void multiplication()
{
    n=a*b;
    printf("%d\n",n);
}
void division()
{
    n=a/b;
    printf("%d\n",n);
}
void modulas()
{
    n=a%b;
    printf("%d\n",n);
}
void power_of_a_number()
{
    for(i=1;i<=b;i++)
    {
        result=result*a;
    }
    printf("%d power %d=%d\n",a,b,result);
}
void main()
{
while(1)
{
    printf("1.addition\n");
    printf("2.substraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.modulas\n");
    printf("6.power_of_a_number\n");
    printf("enter your choice: ");
    scanf("%d",&ch);
    printf("enter values a and b\n");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1:
            addition();
            break;
        case 2:
            substraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            modulas();
            break;
        case 6:
            power_of_a_number();
            break;
        default:printf("invalid choice");
    }
}
}


