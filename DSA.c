#include<stdio.h>
#include<string.h>

void PrintReverseNumbers(int num) 
{
    int div = 1;
    printf("\nReverse Number : "); 
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

void RemoveSpace(char *str, char * ResultStr)
{
    static int i = 0;
    static int j = 0;

    while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {
            ResultStr[j] = str[i];
            j++;
        }
        i++;
    }
    ResultStr[j] = '\0';
}

int main(void)
{
    //Print Reverse Decimal Number 1234 -->> 4321
    int Number = 1234;
    printf("\nPrint the reverse of given decimal number %d",Number);
    PrintReverseNumbers(Number);
    printf("\n\n");

    //Print Reverse string "Somnath Arjun Yadav" -->> "htanmoS nujrA vadaY"
    char *str = "Somnath Arjun Yadav";
    char RevStr[strlen(str)];
    PrintReverseString(str, RevStr);
    printf("\nstring before revert : %s",str);
    printf("\nstring after revert : %s",RevStr);
    printf("\n\n");

    //Remove the spaces from given string  " A BB CDC   E"
    char str2[] = " A BB CDC   E";
    char result[strlen(str2)];
    RemoveSpace(str2, result);
    printf("\nString Before Removing Space : %s",str2);
    printf("\nString After Removing Space : %s",result);
    printf("\n\n");
    return 0;
}
