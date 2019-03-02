#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);

    if(n==0)
    {
        printf("The weekday is: Monday");
    }
    if(n==1)
    {
        printf("The weekday is: Tuesday");
    }
    if(n==2)
    {
        printf("The weekday is: Wednesday");
    }
    if(n==3)
    {
        printf("The weekday is: Thursday");
    }
    if(n==4)
    {
        printf("The weekday is: Friday");
    }
    if (n==5)
    {
        printf("The weekday is: Saturday");
    }
    if(n==6)
    {
        printf("The weekday is: Sunday");
    }
    getch();
}