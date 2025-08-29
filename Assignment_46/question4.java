//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question4.java
//  Description   : Accept number of rows and columns from user and display pattern
//  Problem       : Display numbers in decreasing order from top to bottom
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
        for (int i = iRow; i >= 1; i--)
        {
            for (int j = 0; j < iCol; j++)
            {
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}

public class question4
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
