#include<stdio.h>
#include<string.h>
int main()
{
    int flag=0,len,i;
    char string[100];
    scanf("%s",string);
    len=strlen(string);
    for(i=0;i<len;i++)
    {
        if(string[i]!=string[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag){
    printf(" not palindrom");
    }
    else
    {
        printf(" palindrome");
    }
}
