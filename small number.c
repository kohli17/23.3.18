#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    int x,y,i,s;
    printf("Enter the two numbers:");
    scanf("%d%d",&x,&y);
    for(i=0;i<=x||i<=y;i++)
    {
        if(i%x==0&&i%y==0)
        {
            s=i;
        }
    }
    printf("\nThe smallest number divide by both x&y are:%d",s);
    
}
