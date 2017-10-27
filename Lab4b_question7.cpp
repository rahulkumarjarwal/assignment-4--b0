#include <iostream>
#include <math.h>
using namespace std;

int digit(int n){
  int d = 0;
  while (n!=0){
    d = d + 1;
    n = n/10;
  }
  return d;
}

int rev(int n){
  int D = digit(n);
  if ( D < 1){
    return n;}
  else{
    return ((n%10)*pow(10,D-1) + rev(n/10));
  }
}

int main(){
  int n;
  cout << "enter no.: " ;
  cin >> n;
  int r = rev(n);
  if (r == n){
    cout << "palindrome" << endl;
  }
  else{
  cout << "not plaindrome" << endl;}
  return 0;
}
