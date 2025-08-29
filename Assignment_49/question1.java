//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question1.java
//  Description   : Accept string from user and display pattern
//  Problem       : Replace remaining characters with * (increasing characters)
//
//  Author        : Asawari Jadhav
//
//  Date          : 21-08-2025    
//
//////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Pattern
{
    public void DisplayPattern(String str)
    {
        int len = str.length();
        for (int i = 0; i < len - 1; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (j <= i)
                {
                    System.out.print(str.charAt(j) + " ");
                }
                else
                {
                    System.out.print("* ");
                }
            }
            System.out.println();
        }
    }
}

public class question1
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
