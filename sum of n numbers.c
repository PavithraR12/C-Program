

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a positive integer: ");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        sum+=i;
    }
    printf("Sum = %d",sum);
   return 0;

}
