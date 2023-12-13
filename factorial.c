5#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,c;
    printf("enter the value of n ");
    scanf("%d",&n);
    c=1;
    for(i=1;i<=n;i++)
    {
        c=c*i;
    }
    printf("%d",c);
    getch();
}
