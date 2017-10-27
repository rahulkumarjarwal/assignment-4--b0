#include <iostream>
using namespace std;

int odd(int n){
  if (n == 0){
  return 1;
  }
  odd(n-1);
  if (n%2 == 1){
  cout << n << endl;}
  return 0;
}

int even(int n){
  if (n == 0){
  return 1;
  }
  even(n-1);
  if (n%2 == 0){
  cout << n << endl;}
  return 0;
}
int main(){
  int n;
  cout << "enter natural n : ";
  cin >> n;
  cout << "the odd nos. are:"<<endl;
  odd(n);
  cout << "the even nos. are:"<<endl;
  even(n);
  return 0;
}
