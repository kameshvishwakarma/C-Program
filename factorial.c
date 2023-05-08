#include<stdio.h>
int main()
{
    int n ,fact=1;
    printf("enter ant number:");
    scanf("%d",&n);
    while(n>0)
    {
        fact=n*fact;
        n--;
    }
    printf("factorial =%d",fact);
        return 0;
    
}