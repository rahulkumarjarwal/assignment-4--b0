#include <iostream>
using namespace std;

int sum(int n){
  if (n==1){
  return n;}
  else{
  return (n + sum(n-1));
  }
}

int main(){
  int n;
  cout << "enter natural n : ";
  cin >> n;
  int T = sum(n);
  cout << "the sum is: " << T;
  return 0;
}
