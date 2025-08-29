//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question5.java
//  Description   : Accept number of rows and columns from user and display number pattern
//  Problem       : Display numbers on borders and diagonals, spaces elsewhere
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
        for (int i = 1; i <= iRow; i++) 
        {
            for (int j = 1; j <= iCol + 1; j++) 
            {
                if (i == 1 || i == iRow || j == 1 || j == iCol + 1 || i == j)
                {
                    System.out.print(j + " ");
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

public class question5 
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
