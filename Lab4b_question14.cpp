#include <iostream>
using namespace std;

int SUM(int array[],int L,int sum = 0){
  if (L == 1){
  sum = sum + array[0];
  return sum;}
  else{
  sum = sum + array[L-1];
  return SUM(array,L-1,sum);
  }
}

int main(){
  int L;
  cout << "enter length of array(<1000): ";
  cin >> L;
  cout << "enter elements: ";
  int A[1000];
  for (int i = 0; i < L; i++){
  cin >> A[i];}
  cout << "the sum of elements of the array are: " << endl;
  int S = SUM(A,L);
  cout << S << endl;
  return 0;
}
