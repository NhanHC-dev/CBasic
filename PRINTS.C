#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char const*argv[])
{
    int a;      float b;          char c;
    printf("Enter an int:");
    scanf("%d", &a);

    printf("Enter an float:");
    scanf("%f", &b);

    printf("Enter a character:");
    scanf(" %c", &c);

    printf("integer: %d\n",a);
    printf("float: %f\n",b);
    printf("character: %c",c);
    getch(); 
    return 0;
}