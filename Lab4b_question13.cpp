#include <iostream>
using namespace std;

int parse(int array[],int L){
  if (L == 1){
  cout << array[0] << " ";
  return 0;}
  else{
  parse(array, L-1);
  cout << array[L-1] << " ";
  return 0;}
}

int main(){
  int L;
  cout << "enter length of array(<1000): ";
  cin >> L;
  cout << "enter elements: ";
  int A[1000];
  for (int i = 0; i < L; i++){
  cin >> A[i];}
  cout << "the elements of the array are: " << endl;
  parse(A,L);
  return 0;
}
