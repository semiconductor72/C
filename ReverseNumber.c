//Reverse the number
//if a= 1234 --> 4321


#include<stdio.h>

int Number = 1234;

void PrintReverseNumbers(int num) 
{
    int div = 1;
    
    while(num/div)
    {
        div = div*10;
        printf("%d",(num%div)/(div/10));
    }
}

int main(void)
{    
    PrintReverseNumbers(Number);
    printf("\n\n");
    return 0;
}
