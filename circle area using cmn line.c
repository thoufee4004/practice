#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]) {
    if (argc < 2)
    {
        printf("no arguments");
        return 0;
        
    } 
    else
    {
        int pi=3.14;
        float r=atof(argv[1]);
        float area=pi*r*r;
        printf("area of circle is %.2f\n",area);

   
       
    }
}
