#include<stdio.h>
#include<conio.h>
void main()

{   int n,c;
    printf("enter the uppercase character = ");
    scanf("%d",n);
    c=getchar();
    printf("the lowercase = ");
    putchar(c+32);
    getch();
}
