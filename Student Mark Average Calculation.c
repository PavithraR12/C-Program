#include<stdio.h>
#include<conio.h>
void main()
{
    int a,c,d,e,f,g,tot;
    float avg;
    char b[20];

    printf("Roll No.Student = ");
    scanf("%d",&a);
    printf("Name of the student = ");
    scanf("%s",&b);
    printf("\nEnter the Mark of Tamil = ");
    scanf("%d",&c);
    printf("\nEnter the Mark of English = ");
    scanf("%d",&d);
    printf("\nEnter the Mark of Maths = ");
    scanf("%d",&e);
    printf("\nEnter the Mark of Science = ");
    scanf("%d",&f);
    printf("\nEnter the Mark of Social = ");
    scanf("%d",&g);
    tot = c+d+e+f+g;
    avg = tot/5;
    printf("Roll No.Student = %d",a);
    printf("Name of the student = %s",b);
    printf("The Total is %d",tot);
    printf("The average percentage is %f",avg);
    getch();
}
