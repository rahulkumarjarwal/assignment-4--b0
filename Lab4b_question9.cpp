#include <iostream>
using namespace std;

int fact(int n){
  if (n == 1){
  return 1;}
  else{
  return n*fact(n-1);}
}

int main(){
  int n;
  cout << "enter no.: ";
  cin >> n;
  int F = fact(n);
  cout << n << "! =" << F << endl;
  return 0; 
}
