#include<stdio.h>
int main(void)
{
    char a;
    scanf("%c",&a);
    if(a>='A' && a<='Z')
    {
        a='a'+(a-'A'); //ch='a'+(ch-'A'); is rule for convert UPPER CASE into lower case
    }
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
        printf("Vowels");
    else
        printf("not vowels");
        
}

        case 12:
        printf("dec");
        default:
        printf("invalid input");
            break;
    }
}
