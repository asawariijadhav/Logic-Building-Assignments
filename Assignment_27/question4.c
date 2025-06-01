/*
4. Write a program which accept string from user and copy small characters of that string into another string.

Input:

Output:

"Marvellous multi OS"

"arvellous multi"


*/

#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
    if (src == NULL || dest == NULL)
        return;

    while (*src != '\0')
    {
        if ((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous multi OS";
    char brr[30];

    StrCpySmall(arr, brr);

    printf("%s\n", brr);

    return 0;
}
