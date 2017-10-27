#include <iostream>
using namespace std;

int oddsum(int n){
  if (n <= 0){
  return 0;
  }
  else if (n%2 == 1){
  return (n+oddsum(n-2));}
  else{
  return (n-1 + oddsum(n-3));}
}

int evensum(int n){
  if (n <= 0){
  return 0;
  }
  else if (n%2 == 0){
  return (n+evensum(n-2));}
  else{
  return (n-1 + evensum(n-3));}
}
int main(){
  int n;
  cout << "enter natural n : ";
  cin >> n;
  cout << "the sum of odd nos. are:"<<endl;
  int ODD = oddsum(n);
  cout << ODD << endl;
  cout << "the sum of even nos. are:"<<endl;
  int EVEN = evensum(n);
  cout << EVEN << endl;
  return 0;
}
