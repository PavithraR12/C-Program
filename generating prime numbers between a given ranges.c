
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,j,flag;
    printf("enter the lower bound of the interval: ");
    scanf("%d",&a);
    printf("\n enter the upper bound of the interval: ");
    scanf("%d",&b);
    printf("/n prime numbers between %d & %d are : ",a,b);
    for(i=a;i<b;i++)
    {
        if(i==1||i==0)
            continue;
        flag =1 ;
        for(j=2;j<=i/2;++j)
        {
            if(i%j==0){
                flag = 0;
                break;
            }
        } if(flag==1)
        printf("%d\n",i);

    } getch();
}
