#include<stdio.h>
#include<conio.h>
void main()
{
int days,date1,date2,n,yyyy1,yyyy2,mm1,mm2;
printf("Enter the date: yyyy1-mm1-date1\n");
scanf("%d%d%d",&yyyy1,&mm1,&date1);
printf("Enter the date: yyyy2-mm2-date2\n");
scanf("%d%d%d",&yyyy2,&mm2,&date2);
days=abs(date1-date2);
printf("%d",days);
getch();
}
