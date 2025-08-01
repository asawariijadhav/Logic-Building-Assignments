//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.java
//  Description : Swap contents of consecutive rows in matrix
//  Problem     : Write a program which accept matrix and swap the contents
//                of consecutive rows.
//
//  Author      : Asawari Jadhav
//
//  Date        : 30/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class MatrixX 
{
    private int[][] Arr;

    public MatrixX(int iRow, int iCol) 
    {
        Arr = new int[iRow][iCol];
    }

    public void Accept() 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter matrix elements:");

        for (int i = 0; i < Arr.length; i++) 
        {
            for (int j = 0; j < Arr[i].length; j++) 
            {
                Arr[i][j] = sc.nextInt();
            }
        }
    }

    public void SwapRows()
     {
        for (int i = 0; i < Arr.length - 1; i += 2) 
        {
            int[] temp = Arr[i];
            Arr[i] = Arr[i + 1];
            Arr[i + 1] = temp;
        }
    }

    public void Display() 
    {
        System.out.println("Matrix after swapping rows:");
        for (int[] row : Arr) 
        {
            for (int val : row)
            {
                System.out.print(val + "\t");
            }
            System.out.println();
        }
    }
}

public class question5 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int iRow = sc.nextInt();

        System.out.println("Enter number of columns:");
        int iCol = sc.nextInt();

        MatrixX mobj = new MatrixX(iRow, iCol);
        mobj.Accept();

        mobj.SwapRows();
        mobj.Display();
    }
}
