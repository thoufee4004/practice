///	The program will recieve 3 English words inputs from STDIN
//1.	These three words will be read one at a time, in three separate line
//2.	The first word should be changed like all vowels should be replaced by $
//3.	The second word should be changed like all consonants should be replaced by #
//4.	The third word should be changed like all char should be converted to upper case
//5.	Then concatenate the three words and print them




#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20],str3[20];
    scanf("%s%s%s",str1,str2,str3);
    int p1=strlen(str1);
    int p2=strlen(str2);
    int p3=strlen(str3);
    //printf("%s%s%s",str1,str2,str3);
    for(int i=0;i<=p1;i++){
    if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
    {
       str1[i]='$'; 
    }
    //printf("%s",str1);
    }
    for(int i=0;i<p2;i++){
    if(str2[i]!='a'&&str2[i]!='e'&&str2[i]!='i'&&str2[i]!='o'&&str2[i]!='u')
    {
       str2[i]='#'; 
    }
    //printf("%s",str2);
    }
    for(int i=0;i<p3;i++)
    {
        str3[i]=str3[i]-32;
    }
    printf("%s%s%s",str1,str2,str3);
}
