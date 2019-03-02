#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a,ican,ichi;

    printf(" Enter a year:");
    scanf("%d", &a);

    if(a>100)
    ican= a % 10;
    ichi= a % 12;
    switch(ican)
    {
        case 0: printf("Canh"); break;
        case 1: printf("Tan"); break;
        case 2: printf("Nham"); break;
        case 3: printf("Quy"); break;
        case 4: printf("Giap"); break;
        case 5: printf("At"); break;
        case 6: printf("Binh"); break;
        case 7: printf("Dinh"); break;
        case 8: printf("Mau"); break;
        case 9: printf("Ki"); break;
    }
    switch(ichi)
    {
        case 0: printf("Than "); break;
        case 1: printf("Dau"); break;
        case 2: printf("Tuat"); break;
        case 3: printf("Hoi"); break;
        case 4: printf("Ti"); break;
        case 5: printf("Suu"); break;
        case 6: printf("Dan"); break;
        case 7: printf("Mao"); break;
        case 8: printf("Thin"); break;
        case 9: printf("Ty"); break;
        case 10: printf("Ngo"); break;
        case 11: printf("Mui"); break;
    }
   
    getch();
}