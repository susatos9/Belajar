#include <bits/stdc++.h>
#define high 10000000
using namespace std;

vector <int> arr;
bool prime[high];

void sieve(){
  memset(prime, true, sizeof(prime));
  for (int i = 2; i * i <= high; i++) {
    if (prime[i] == true) {
      for (int j = i * i; j <= high; j += i) {
        prime[j] = false;
      }
    }
  }
  for (int i = 2; i < high; i++) {
    if (prime[i] == true) {
      arr.push_back(i);
    }
  }
  return;
}



int main () {
  int n,s;
  cin >> n;
  sieve();
  while (n--) {
    cin >> s;
    std::cout << arr[s-1] << endl;
  }
  return 0;
}
