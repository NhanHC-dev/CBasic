#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;

    printf("Enter a month:");
    scanf("%d", &a);

    printf("Enter a year:");
    scanf("%d", &b);

      if(a>0 && a<=12)
      switch(a)
      {
        case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12: 
                 printf("thang nay co 30 ngay! \n"); break;
		case 4: 
		case 6: 
		case 9: 
		case 11: 
                 printf("thang nay co 31 ngay! \n"); break;
		case 2: 
				if(b%4==0)
				printf("nam nay la nam nhuan co 29 ngay \n");
				else
				printf("thang nay co 28 ngay\n");
				break;
      }
      switch(a)
      {
          case 1: 
          case 2:
          case 3: printf("Quy I"); break;
          case 4: case 5: case 6: printf("Quy II"); break;
          case 7: case 8: case 9: printf(" Quy III"); break;
          case 10: case 11: case 12: printf(" Quy IV"); break;
      }
      
      getch();
}