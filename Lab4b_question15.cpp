#include <iostream>
using namespace std;

int max(int A[],int L, int M = -100000){
  if (A[L-1] > M){
  M = A[L-1];}
  if (L==1){
  return M;} 
  else{
  return max(A,L-1,M);}
}

int min(int A[],int L, int m = 100000){
  if (A[L-1] < m){
  m = A[L-1];}
  if (L==1){
  return m;} 
  else{
  return min(A,L-1,m);}
}
int main(){
  int A[1000];
  int L;
  cout << "Enter length of array(<1000): ";
  cin >> L;
  cout << "enter elements of array(integers): ";
  for (int i = 0; i<L ; i++){
  cin >> A[i];}
  int ma = max(A,L);
  cout << "MAX. of array: " << ma << endl;
  int mi = min(A,L);
  cout << "MIN. of array: " << mi << endl;
  return 0; 
}
