//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question1.java
//  Description   : Accept a matrix and display its elements
//  Problem       : Display all elements of the matrix in row-wise format
//
//  Author        : Asawari Jadhav
//
//  Date          : 30-07-2025            
//            
//             
//
//////////////////////////////////////////////////////////////////////////////////////////////

class MatrixX
{
    public void DisplayMatrix(int Arr[][], int iRow, int iCol)
    {
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}

public class program1
{
    public static void main(String args[])
    {
        int[][] Arr = {
            {3, 2, 5, 9},
            {4, 3, 2, 2},
            {8, 4, 1, 9},
            {3, 9, 7, 5}
        };

        MatrixX mobj = new MatrixX();
        mobj.DisplayMatrix(Arr, 4, 4);
    }
}
