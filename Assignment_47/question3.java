//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question3.java
//  Description   : Accept number of rows and columns from user and display pattern
//  Problem       : Display numbers from iCol down to 1 in each row
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
            for (int j = iCol; j >= 1; j--)
            {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}

public class question3
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
