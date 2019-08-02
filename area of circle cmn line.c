#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]) {
    if (argc < 3)
    {
        printf(" Please provide values for both base and height \n");
        return 0;
        
    } 
    else
    {

    //float area,b,h;
   // printf("enter the base and height");
   // scanf("%f,%f",&b,&h);
    float b=atof(argv[1]);
    float h=atof(argv[2]);
    float area=0.5*b*h;
    printf("the are of given triangle is\t %0.2f",area);
        
    }
    
}
