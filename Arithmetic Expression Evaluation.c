//used to include basic C libraries
#include <stdio.h>
//main method for run c application
int main()
{
//declaring variables
int a,b,result_art_eval;
//Asking the user to enter 2 numbers
printf("Enter 2 numbers for Arithmetic evaluation operation\n");
//Storing 2 numbers in varaibles a and b
scanf("%d\n%d",&a,&b);
//Arithmetic evaluation operations and its result displaying
result_art_eval = a+b*a/b-a%b;
printf("================ARITHMETIC EXPRESSION EVALUATION==============\n");
printf("Arithmetic expression evaluation of %d and %d is = %d \n",a,b,result_art_eval);
printf("==============================================================");
return 0;
}
