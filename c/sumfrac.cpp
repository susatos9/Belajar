#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if(b == 0){
    return a;
  }
  return gcd(b, a%b);
}

int main(){
  long long a,b,c,d;
  cin>>a>>b>>c>>d;
  long long e,f;

  e = a*d + b*c;
  f = b*d;
  cout  <<  e/gcd(e,f)  << ' ' << f/gcd(e,f) << endl;
}
