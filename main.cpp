#include <iostream>>
using namespace std;

int climbStair(int n){
  if(n == 0 | n == 1)
    return 1;
}

int main(void) {
  int n;
  cout<< "enter a number n "<< endl;
  cin>>n;

  int ans = climbStair(n);
  cout << "ans is :";
  
  return 0;
}