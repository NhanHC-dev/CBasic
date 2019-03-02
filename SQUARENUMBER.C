#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a,b;
    printf(" Enter b: ");
    scanf("%d", &b);

    printf(" Enter a: ");
    scanf("%d", &a);
   
    if(b==pow(a,2))
    {
        printf("%d * %d",a,a);
    }
    else
    {
        printf("False");
    }
    getch();
}