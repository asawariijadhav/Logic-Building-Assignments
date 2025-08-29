//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question2.java
//  Description   : Accept number of rows and columns from user and display pattern
//  Problem       : Alternate rows should display uppercase and lowercase alphabets
//
//  Author        : Asawari Jadhav
//
//  Date          : 19-08-2025            
//
//////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Pattern
{
    public void DisplayPattern(int iRow, int iCol)
    {
        for (int i = 0; i < iRow; i++)
        {
            for (int j = 0; j < iCol; j++)
            {
                if (i % 2 == 0)
                {
                    System.out.print((char)('A' + j) + " ");
                }
                else
                {
                    System.out.print((char)('a' + j) + " ");
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

        System.out.print("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.print("Enter number of columns : ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.DisplayPattern(iRow, iCol);

        
    }
}
