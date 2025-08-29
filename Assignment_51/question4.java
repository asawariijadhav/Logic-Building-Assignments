//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name     : question4.java
//  Description   : Accept a square matrix from user and calculate its trace and norm
//  Problem       : Trace is sum of main diagonal elements, norm is square root of sum of squares of all elements
//
//  Author        : Asawari Jadhav
//
//  Date          : 21-08-2025            
//
//////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

public class TraceAndNorm 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        // Input matrix size
        System.out.print("Enter size of square matrix: ");
        int n = sc.nextInt();

        int[][] matrix = new int[n][n];
        int trace = 0;
        double sumSquares = 0;

        // Input matrix elements and compute trace & sum of squares
        System.out.println("Enter matrix elements:");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++) 
            {
                matrix[i][j] = sc.nextInt();
                sumSquares += matrix[i][j] * matrix[i][j];
                if (i == j) trace += matrix[i][j]; 
            }
        }

        // Compute norm
        double norm = Math.sqrt(sumSquares);

        // Output results
        System.out.println("Trace of the matrix: " + trace);
        System.out.println("Norm of the matrix: " + norm);

    } 
} 
