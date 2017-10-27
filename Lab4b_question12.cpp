#include <iostream>
using namespace std;

int gcd(int a, int b){
  if ((a==1) || (b==1)){
  return 1;}
  else if (a > b){
  return gcd(a-b,b);}
  else if (a < b){
  return gcd(a,b-a);}
  else{
  return a;}
}


int lcm(int a, int b){
  return (a*b)/gcd(a,b);
}

int main(){
  int a,b;
  cout << "enter 2 nos.: ";
  cin >> a >> b;
  int L = lcm(a,b);
  cout << "lcm(" << a << "," << b << ")"<< "= " << L; 
  return 0;
}
