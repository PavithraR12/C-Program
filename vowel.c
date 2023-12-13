

#include<stdio.h>
#include<conio.h>
void main()
{
    char q;
    printf("enter any character:");
    scanf("%c",&q);
    switch(q)
    {
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
    case'A':
    case'E':
    case'I':
    case'O':
    case'U':
        printf("VOWEL");
        break;
        default:printf("CONSONANT");
    }return 0;


}
