//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question4.java
//  Description   : Accept number of rows and columns from user and display solid star pattern
//  Problem       : Display * in all positions of the matrix
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
                System.out.print("* ");
            }
                
            System.out.println();
        }
    }
}

public class question4 
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
