//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question.java
//  Description : Return addition of diagonal elements from matrix
//  Problem     : Write a program which accept matrix from user and return
//                addition of diagonal elements.
//
//  Author      : Asawari Jadhav
//
//  Date        : 30/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

class MatrixX 
{
    public int AddDiagonal(int[][] Arr, int iRow, int iCol) 
    {
        int i = 0, j = 0;
        int sum = 0;

        for (i = 0; i < iRow; i++) 
        {
            for (j = 0; j < iCol; j++) 
            {
                if (i == j) 
                {
                    sum += Arr[i][j];
                }
            }
        }
        return sum;
    }
}

public class question1 
{
    public static void main(String[] args) 
    {
        int[][] matrix = {
            {3, 2, 5, 9},
            {4, 3, 2, 2},
            {8, 4, 1, 9},
            {3, 9, 7, 5}
        };
        MatrixX mobj = new MatrixX();

        int iResult = mobj.AddDiagonal(matrix, 4, 4);
        
        System.out.println("Addition of diagonal elements is: " + iResult);
    }
}
