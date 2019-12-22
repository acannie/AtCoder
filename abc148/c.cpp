#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    long long int A, B;

    cin >> A >> B;

    //ユークリッドの互除法を用いて最大公約数を求める
    long long int x = A * B;
 
  /* 自然数 a > b を確認・入替 */
  if(A<B){
    long long int tmp = A;
    A = B;
    B = tmp;
  }
 
  /* ユークリッドの互除法 */
  long long int r = A % B;
  while(r!=0){
    A = B;
    B = r;
    r = A % B;
  }

  long long int gcd = B;
  long long int lcm = x / gcd;

  cout << lcm << endl;

  return 0;
}