//////////////////////////////////////////////////////////////////////////////////////////////
//
//    File Name     : question3.java
//    Description   : Accept matrix and reverse contents of each column
//    Problem       : Reverse each column of a matrix
//
//    Author        : Asawari Jadhav
//
//    Date          : 30-07-2025
//  
//
//////////////////////////////////////////////////////////////////////////////////////////////

 
 



class MatrixX
{
    public void ReverseCol(int Arr[][], int iRow, int iCol)
    {
        for(int j = 0; j < iCol; j++)
        {
            int top = 0;
            int bottom = iRow - 1;

            while(top < bottom)
            {
                int temp = Arr[top][j];
                Arr[top][j] = Arr[bottom][j];
                Arr[bottom][j] = temp;
                top++;
                bottom--;
            }
        }
    }
}

public class program3
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
        mobj.ReverseCol(Arr, 4, 4);

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
