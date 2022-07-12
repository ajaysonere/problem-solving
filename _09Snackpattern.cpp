// Given a matrix of size N x N. Print the elements of the matrix in the snake pattern ;
#include<iostream>
#include<vector>
using namespace std;
vector<int> snackPattern(vector<vector<int>> &matrix)
{
   int n = matrix.size();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(i%2==0){
                for(int j=0;j<n;j++){
                    v.push_back(matrix[i][j]);
                }
            }
            else{
                for(int j=n-1;j>=0;j--){
                    v.push_back(matrix[i][j]);
                }
            }
        }
        return v;
}
int main ()
 { 
   int n;
   cin >> n;
   vector<vector<int>> matrix(n);
   for(int i=0;i<n;i++) {
      matrix[i].assign(n,0);
      for(int j=0;j<n;j++){
         cin >> matrix[i][j];
      }
   }
  vector<int> v =  snackPattern(matrix);
   for(int i=0;i<v.size();i++){
       cout << v[i] << " ";
    }
   return 0;
 }