
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,c=0,i=1;
    printf("enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        c=c+i;
        i++;
    }
    printf("%d",c);
    getch();
}
