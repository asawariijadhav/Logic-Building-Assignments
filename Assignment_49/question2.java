//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question2.java
//  Description   : Accept string from user and display pattern
//  Problem       : Replace trailing characters with * (decreasing characters)
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
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (j < len - i)
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

public class question2
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
