//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question3.java
//  Description   : Accept number of rows and columns from user and display hollow star pattern
//  Problem       : Display * on borders and diagonals, spaces inside
//
//  Author        : Asawari Jadhav
//
//  Date          : 21-08-2025            
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
                if (i == 0 || i == iRow - 1 || j == 0 || j == iCol - 1 || i == j || i + j == iCol - 1)
                {
                    System.out.print("* ");
                }
                    
                else
                {
                    System.out.print("  ");
                }
                    
            }
            System.out.println();
        }
    }
}

public class question3 
{
    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of rows: ");
        int iRow = sc.nextInt();
        System.out.print("Enter number of columns: ");
        int iCol = sc.nextInt();

        Pattern pobj = new Pattern();
        pobj.DisplayPattern(iRow, iCol);

        
    }
}
