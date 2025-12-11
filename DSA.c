#include<stdio.h>
#include<string.h>

void PrintReverseNumbers(int num) 
{
    int div = 1;
    
    while(num/div)
    {
        div = div*10;
        printf("%d",(num%div)/(div/10));
    }
}

void PrintReverseString(const char *strptr, char *RevStr)
{
    int StartWordPos = 0;
    int EndWordPos = 0;
    char WordFlag = 0;
    int i = 0;
    int i_RevStr = 0;
    int size = strlen(strptr) + 1;

    while(size)
    {
         if(strptr[i] == ' ' || strptr[i] == '\0')
         {
            RevStr[i] = strptr[i];
            EndWordPos = i-1;
            i_RevStr = StartWordPos;
            while(EndWordPos >= StartWordPos)
            {
                RevStr[i_RevStr] = strptr[EndWordPos];
                EndWordPos--;
                i_RevStr++;
            }
           StartWordPos = i+1;
         }

         i++;
         size--;
    }
}

int main(void)
{
    //Print Reverse Decimal Number 1234 -->> 4321
    int Number = 1234;
    PrintReverseNumbers(Number);
    printf("\n\n");

    //Print Reverse string "Somnath Arjun Yadav" -->> "htanmoS nujrA vadaY"
    char *str = "Somnath Arjun Yadav";
    char RevStr[] = "Somnath Arjun Yadav";
    PrintReverseString(str, RevStr);
    printf("%s",RevStr);
    printf("\n\n");
    return 0;
}
