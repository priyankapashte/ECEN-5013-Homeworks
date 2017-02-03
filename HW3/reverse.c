#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char reverse(char * str, int length);

int main()
{
    char s[100];
    printf("Enter a string..\n");
    gets(s);
    char *str = s;
    char res;
    int len = 0;
    while(*str != '\0')
    {
        len++;
        str++;
    }
    res = reverse(s,len);
    if(res=='1')
        printf("Reversing the string failed\n");
    else
    {
        printf("Successfully reversed the string.\n");
        printf("Reversed String: %s",s);
    }
    return 0;
}

char reverse(char *str, int length)
{
    char temp, *end_ptr;

    /* If str is NULL or empty, do nothing */
    if( str == NULL || !(*str) )
    {
        printf("NULL String passed\n");
        return '1';
    }

    end_ptr = str + length - 1;

    /* Swap the chars */
    while( end_ptr > str )
    {
        temp = *str;
        *str = *end_ptr;
        *end_ptr = temp;
        str++;
        end_ptr--;
    }
    return '0';
}
