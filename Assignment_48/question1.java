//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question1.java
//  Description   : Accept string from user and display pattern
//  Problem       : Print string characters in full length on each row
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
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                System.out.print(str.charAt(j) + " ");
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
