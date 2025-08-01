//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.java
//  Description : Return frequency of given number from matrix
//  Problem     : Write a program which accept matrix and one number from user and
//                return frequency of that number.
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

    public int CountFrequency(int no) 
    {
        int count = 0;
        for (int[] row : Arr) 
        {
            for (int val : row) 
            {
                if (val == no) 
                {
                    count++;
                }
            }
        }
        return count;
    }
}

public class question2 
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

        System.out.println("Enter number to search:");
        int iNo = sc.nextInt();

        int iRet = mobj.CountFrequency(iNo);
        System.out.println("Frequency of " + iNo + " is: " + iRet);
    }
}
