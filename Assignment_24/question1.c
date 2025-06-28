///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Count number of capital characters in string.
//  Problem     : Write a program which accepts string from user and counts number
//                of capital characters.
//
//                Input  : "Marvellous Multi OS"
//                Output : 4
//
//  Author      : Asawari Jadhav
//  Date        : 30/05/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    iRet = CountCapital(arr);

    printf("%d\n", iRet);

    return 0;
}
