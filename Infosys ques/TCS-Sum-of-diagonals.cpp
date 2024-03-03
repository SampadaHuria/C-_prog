class Solution {
   public static int diagonalSum(int[][] matrix) {
       int row=0,col,leftSum=0,rightSum=0,n=matrix.length;
       col=n-1;
       while(row<n){
          //Calculate sum of left diagonal
           leftSum += matrix[i][i];
           //Check if row and column are not same 
           if(row!=col)
               //Calculate the sum of right diagonal
               rightSum += matrix[i][j];
               //update row and col
           row++;
           col--;
       }
       return (leftSum + rightSum);
   }
   public static void main(String []args){
       //Input matrix
       int [][]matrix = {{10,20,30},
                     {40,50,60},
                     {70,80,90}};
       int result = diagonalSum(matrix);
       System.out.println(result);
   }
}