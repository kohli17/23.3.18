#include <stdio.h>
#include<conio.h>
int main()
{
    int a[100000],n,i,k,j;
    scanf("%d",&n);
    if(n<=100000){
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        int flag=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]&&i!=j){
                flag+=1;
            }
        }
            if(flag==0)
            printf("%d",a[i]);}
    
    
    return 0;}
}
