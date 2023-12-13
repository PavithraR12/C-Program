//To read a 3 digit number and output as 1 hundreds 7 tens 2 units for 172 and print the reverse of the number .
#include<stdio.h>
#include<conio.h>
void main()
{
    int n=172,h,t,u;
    h=n/100;
    t=(n%100)/10;
    u=n%10;
    printf("%d hundreds %d tens %d units ",h,t,u);
    printf("the reverse of the number is %d %d %d",u,t,h);
    getch();

}
