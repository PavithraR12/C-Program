#include<stdio.h>
#include<conio.h>
void main()
{
    int i,m,n ,GCD;

    printf("enter the value m:");
    scanf("%d",&m);
    printf("enter the value n");
    scanf("%d",&m);
    for (i=1;i<=n&&i<=m;i++)
    {
        if (n%i==0&&m%i)
            GCD=i;
    }
    printf("the GCD is %d",GCD);
    getch();
}
