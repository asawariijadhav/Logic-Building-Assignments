///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Copy small characters into another string.
//  Problem     : Write a program which accepts string from user and copies
//                small characters into another string.
//
//                Input  : "Marvellous multi OS"
//                Output : arvellous multi
//
//  Author      : Asawari Jadhav
//  Date        : 02/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

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
