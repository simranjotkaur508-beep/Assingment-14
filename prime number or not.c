#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    while(a)
    {
        if(a*2==0)
        
        {
            printf("prime");
            a++;
            break;
        }
    


        else
        {
            printf("not prime");
        }
    }
    return 0;

}