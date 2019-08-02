#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20],str3[20];
    scanf("%s%s%s",str1,str2,str3);
    int p1=strlen(str1);
    int p2=strlen(str2);
    int p3=strlen(str3);
    //printf("%s%s%s",str1,str2,str3);
    for(int i=0;i<p1;i++){
    if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
    {
       str1[i]='$'; 
    }
    printf("%s",str1);
    }
    for(int i=0;i<p2;i++){
    if(str2[i]!='a'||str2[i]!='e'||str2[i]!='i'||str2[i]!='o'||str2[i]!='u')
    {
       str2[i]='#'; 
    }
    printf("%s",str2);
    for(int i=0;i<p3;i++)
    {
        str3[i]=str3[i]-32;
    }
    printf("%s",str3);
}}
