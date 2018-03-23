#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
void main()
{
int a[4],b[4],c[4],d;
clrscr();
printf("Enter the three set of points:");
printf("\nEnter the first set:");
scanf("%d%d",&a[0],&a[1]);
printf("\nEnter the second set:");
scanf("%d%d",&b[0],&b[1]);
printf("\nEnter the third set:");
scanf("%d%d",&c[0],&c[1]);
a[2]=pow((c[0]-a[0]),2)+pow((c[1]-a[1]),2);
b[2]=pow((b[0]-a[0]),2)+pow((b[1]-a[1]),2);
c[2]=pow((c[0]-b[0]),2)+pow((c[1]-b[1]),2);
a[3]=sqrt(a[2]);
b[3]=sqrt(b[2]);
c[3]=sqrt(c[2]);
d=b[3]+c[3];
if(a[3]==d)
{
printf("Yes");
}
else
{
printf("No");
}
getch();
}


