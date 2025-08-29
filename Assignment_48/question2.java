//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question2.java
//  Description   : Accept string from user and display pattern
//  Problem       : Print decreasing pattern of string characters
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
        for (int i = len; i >= 1; i--)
        {
            for (int j = 0; j < i; j++)
            {
                System.out.print(str.charAt(j) + " ");
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
