
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  
//    File Name    :  question5.java
//    Description  :  Check whether matrix is a sparse matrix
//    Problem      :  Sparse matrix: majority elements are 0
//
//    Author       :  Asawari Jadhav
//
//    Date         :  30-07-2025
//  
//  
//
//////////////////////////////////////////////////////////////////////////////////////////////

  class MatrixX
{
    public boolean ChkSparse(int Arr[][], int iRow, int iCol)
    {
        int zeroCount = 0;
        int totalElements = iRow * iCol;

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if(Arr[i][j] == 0)
                    zeroCount++;
            }
        }

        return (zeroCount > totalElements / 2);
    }
}

public class question5
{
    public static void main(String args[])
    {
        int[][] Arr = {
            {1, 0, 0},
            {0, 0, 0},
            {9, 0, 0}
        };

        MatrixX mobj = new MatrixX();
        boolean bRet = mobj.ChkSparse(Arr, 3, 3);

        if(bRet)
        {
            System.out.println("Matrix is Sparse Matrix");
        }
            
        else
        {
             System.out.println("Matrix is not Sparse Matrix");
        }
           
    }
}
