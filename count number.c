#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter a  number");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        count++;
    }
    printf("count=%d",count);
    return 0;

}