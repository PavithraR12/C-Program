
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20]={'h','i','/0'};
    char ch2[20]={'e','v','e','r','y','o','n','e','/0'};
    strcat(ch,ch2);
    printf("value of first string is %s",ch);
    return 0;

}
