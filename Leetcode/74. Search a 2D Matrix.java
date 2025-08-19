
// 74. Search a 2D Matrix
// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.

// Bruthforce solution

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int rowWiseSize = matrix.length;
        int colWiseSize = matrix[0].length;

        for(int row = 0; row < rowWiseSize; row++){
            for(int col = 0; col < colWiseSize; col++){
                if(matrix[row][col] == target){
                    return true;
                }
            }
        }
        return false;
    }
}