#include <iostream>
#include <math.h>
using namespace std;

int sumd(int n){
  if (log(n) < 1){
  return n;}
  else{
  return ((n%10) + sumd(n/10));}  
}

int main(){
  int n;
  cout << "enter no: ";
  cin >> n;
  int S = sumd(n);
  cout << "sum of digits is: " << S << endl;
  return 0;
}
