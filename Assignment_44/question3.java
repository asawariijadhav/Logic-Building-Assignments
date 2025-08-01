//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.java
//  Description : Return largest number from both diagonals
//  Problem     : Write a program which accept matrix and return largest number
//                from both the diagonals.
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

    public int MaxDiagonal() 
    {
        int max = Integer.MIN_VALUE;
        int n = Arr.length;
        for (int i = 0; i < n; i++) 
        {
           
            if (Arr[i][i] > max) 
            {
                max = Arr[i][i];
            }
          
            if (Arr[i][Arr[i].length - i - 1] > max) 
            {
                max = Arr[i][Arr[i].length - i - 1];
            }
        }
        return max;
    }
}

public class question3 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of rows and columns (square matrix):");
        int n = sc.nextInt();

        MatrixX mobj = new MatrixX(n, n);
        mobj.Accept();

        int iRet = mobj.MaxDiagonal();
        System.out.println("Maximum element from diagonals: " + iRet);
    }
}
