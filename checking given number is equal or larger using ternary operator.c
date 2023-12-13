
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    a=20,b=30;
    if(a==b)
        printf("both are equal");
    else {
        temp=a>b?a:b;
        printf("%d is largest",temp);
    } getch();
}
