#include <iostream>
using namespace std;

int nat(int n){
  if (n == 0){
  return 1;
  }
  nat(n-1);
  cout << n << endl;
  return 0;
}

int main(){
  int n;
  cout << "enter natural n : ";
  cin >> n;
  nat(n);
  return 0;
}
