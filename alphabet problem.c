///input: 1 output: a or A assign number to albabet to print albabet by cooresponded number like 25=z
///the below code does not give output and any error

Alphabet = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
numbers = [3,6,12,1,1,3]
letters = Alphabet(numbers)
  
  
  
#include  <stdio.h>
void print(int);
int main(void)
{
  int num,n;
  //printf("enter the number\t");
  scanf("%d",&num);
  num=n;
  //Base 26 representation from 1 to 26.
}
void print(int n)
{
 if(n>0)
 {
  n--;
  print(n/26);
  int a=(n%26)+65;
  printf("%c",a);
 }
}
