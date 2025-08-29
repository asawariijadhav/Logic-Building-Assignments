//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question1.java
//  Description   : Accept number of rows and columns from user and display pattern of * and #
//  Problem       : Display * in all positions except last column which is #
//
//  Author        : Asawari Jadhav
//
//  Date          : 21-08-2025            
//
//////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Pattern {
    public void DisplayPattern(int iRow, int iCol) 
    {
        for (int i = 0; i < iRow; i++) 
        {
            for (int j = 0; j < iCol; j++) 
            {
                if (j == iCol - i - 1)
                {
                    System.out.print("# ");
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
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of rows: ");
        int iRow = sc.nextInt();
        System.out.print("Enter number of columns: ");
        int iCol = sc.nextInt();

        Pattern pobj = new Pattern();
        pobj.DisplayPattern(iRow, iCol);

        
    }
}
