#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
   
    printf("Enter a number:");
    scanf("%d", &a);

     ( a%2 ) ? printf(" Not divisible") : printf("Divisible");
 getch();
}