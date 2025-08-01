//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.java
//  Description : Display addition of elements from each column
//  Problem     : Write a program which accept matrix and display addition of
//                elements from each column.
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

    public void AddColumns() 
    {
        System.out.println("Sum of each column:");
        for (int j = 0; j < Arr[0].length; j++) 
        {
            int sum = 0;
            for (int i = 0; i < Arr.length; i++)
            {
                sum += Arr[i][j];
            }
            System.out.print(sum + " ");
        }
        System.out.println();
    }
}

public class question4 
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

        mobj.AddColumns();
    }
}
