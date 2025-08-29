//////////////////////////////////////////////////////////////////////////////////////////////
//
//
//  File Name     : question1.java
//  Description   : Accept a matrix from user and swap the contents of each consecutive row
//  Problem       : Swap rows in a given matrix
//
//  Author        : Asawari Jadhav
//
//  Date          : 21-08-2025            
//
//////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

public class SwapRows 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int rows = sc.nextInt();

        System.out.print("Enter number of columns: ");
        int cols = sc.nextInt();
        
        int[][] matrix = new int[rows][cols];

        System.out.println("Enter matrix elements:");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                matrix[i][j] = sc.nextInt();
            }
        }

        // Swap consecutive rows
        for (int i = 0; i < rows - 1; i += 2) 
        {
            for (int j = 0; j < cols; j++) 
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i + 1][j];
                matrix[i + 1][j] = temp;
            }
        }

        System.out.println("Matrix after swapping consecutive rows:");
        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++)
            {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

    } 
} 
