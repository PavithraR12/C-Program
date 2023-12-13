//To find the sum of "n" numbers using do while statement.
//PAVITHRA.R AIDS-1-B.
#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("\n enter any integer value = ");
    scanf("%d",&n);
    do
      {
          sum=sum+i;
          i++;
      }
   while(i<=n);
   printf("sum of n numbers = %d",sum);
   return 0;
}
