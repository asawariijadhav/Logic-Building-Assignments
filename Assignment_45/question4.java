//////////////////////////////////////////////////////////////////////////////////////////////
//
//  
//  File Name     : question4.java
//  Description   : Check whether matrix is an identity matrix
//  Problem       : Identity matrix: 1s on diagonal, 0s elsewhere
//
//  Author        : Asawari Jadhav
//
//  Date          : 30-07-2025
// 
//////////////////////////////////////////////////////////////////////////////////////////////


class MatrixX
{
    public boolean ChkIdentity(int Arr[][], int iRow, int iCol)
    {
        if(iRow != iCol)
        {
             return false;
        }
           

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if(i == j && Arr[i][j] != 1)
                {
                    return false;
                }
                    
                else if(i != j && Arr[i][j] != 0)
                {
                    return false;
                }
                    
            }
        }
        return true;
    }
}

public class question4
{
    public static void main(String args[])
    {
        int[][] Arr = {
            {1, 0, 0},
            {0, 1, 0},
            {0, 0, 1}
        };

        MatrixX mobj = new MatrixX();
        boolean bRet = mobj.ChkIdentity(Arr, 3, 3);

        if(bRet)
        {
            System.out.println("Matrix is Identity Matrix");
        }
        else
        {
            System.out.println("Matrix is not Identity Matrix");
        }
            
    }
}
