// https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1?page=1&difficulty[]=-1&difficulty[]=0&category[]=Numbers&category[]=number-theory&sortBy=submissions

class Solution {
  public:
    long long squaresInChessBoard(long long n) {
        // code here
        if (n==1){
            return 1;
        }
        return (n*(n+1)*(2*n+1))/6;
    }
};