//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question5.java
//  Description   : Accept string from user and display pattern
//  Problem       : Print increasing and then decreasing pattern of string characters
//
//  Author        : Asawari Jadhav
//
//  Date          : 19-08-2025           
//
//////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Pattern
{
    public void DisplayPattern(String str)
    {
        int len = str.length();

        for (int i = 1; i <= len; i++)
        {
            for (int j = 0; j < i; j++)
            {
                System.out.print(str.charAt(j) + " ");
            }
            System.out.println();
        }

        for (int i = len - 1; i >= 1; i--)
        {
            for (int j = 0; j < i; j++)
            {
                System.out.print(str.charAt(j) + " ");
            }
            System.out.println();
        }
    }
}

public class question5
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter a string : ");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.DisplayPattern(str);

        
    }
}
