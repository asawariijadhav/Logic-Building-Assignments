//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question2.java
//  Description   : Accept matrix and reverse contents of each row
//  Problem       : Reverse each row of a matrix
//
//  Author        : Asawari Jadhav
//
//  Date          : 30-07-2025            
//                        
//
//////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class MatrixX
{
    public void ReverseRow(int Arr[][], int iRow, int iCol)
    {
        for(int i = 0; i < iRow; i++)
        {
            int start = 0;
            int end = iCol - 1;
            while(start < end)
            {
                int temp = Arr[i][start];
                Arr[i][start] = Arr[i][end];
                Arr[i][end] = temp;
                start++;
                end--;
            }
        }
    }
}

public class program2
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        
        int[][] Arr = {
            {3, 2, 5, 9},
            {4, 3, 2, 2},
            {8, 4, 1, 9},
            {3, 9, 7, 5}
        };

        MatrixX mobj = new MatrixX();
        mobj.ReverseRow(Arr, 4, 4);

        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                System.out.print(Arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}
