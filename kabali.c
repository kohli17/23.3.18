#include<stdio.h>
#include<string.h>
#include<conio.h>
int main() 
{
    char s[10];
    char str[]="kabali";
    int i,j,temp,n,a,k=0,l,count=0;
    n=strlen(str);
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            }
        }
    }
   while(k<a)
   {
       scanf("%s",&a);
       len=strlen(s);
       if(n==l)
       {
           for(i=0;i<n;i++)
           {
               for(j=i+1;j<n;j++)
               {
                   if(s[i]>s[j])
                   {
                       temp=s[i];
                       s[i]=s[j];
                       s[j]=temp;
                   }
               }
           }
           if(strcmp(str,s)==0)
           {
               count++;
           }
       }k++;
   }
   printf("%d",count);
	return 0;
}
