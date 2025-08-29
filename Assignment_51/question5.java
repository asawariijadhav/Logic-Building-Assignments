//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question5.java
//  Description   : Accept a matrix from user and return the addition of border elements
//  Problem       : Sum all elements located on the border of the matrix
//
//  Author        : Asawari Jadhav
//
//  Date          : 21-08-2025            
//
//////////////////////////////////////////////////////////////////////////////////////////////




import java.util.Scanner;

public class BorderSum 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        // Input matrix dimensions
        System.out.print("Enter number of rows: ");
        int rows = sc.nextInt();
        System.out.print("Enter number of columns: ");
        int cols = sc.nextInt();

        int[][] matrix = new int[rows][cols];
        int sum = 0;

        // Input matrix elements
        System.out.println("Enter matrix elements:");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                matrix[i][j] = sc.nextInt();
            }
        }

        // Sum of border elements
        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
                {
                    sum += matrix[i][j];
                }
            }
        }

        // Output result
        System.out.println("Sum of border elements: " + sum);

    } 
}
