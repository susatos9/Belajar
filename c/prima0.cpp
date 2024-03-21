#include <iostream>
using namespace std;

void sieveoferatosthenes(bool prime[], long long size) {
  prime[0] = prime[1] = false;
  for (long long i = 2; i * i <= size; i++) {
    if (prime[i] == true){
      for (long long j = i * i; j <= size && j <= size / i; j += i) {
        prime[j] = false;
      }
    }
  }
}

int main () {
  int T;
  cin >> T;
  bool prime[10000000]; 
  for (long long i = 0; i < 10000000; i++) {
    prime[i] = true;
  }
  sieveoferatosthenes(prime,10000000);

  for (long long i = 0; i < T; i++) {
    long long n; long long counter = 0;
    cin >> n;

    for (long long j = 0; j <= 10000000; j++) {
      if (prime[j] == true) {
        counter += 1;
      }
      if (counter == n) {
        cout << j << endl;
        break;
      }
    }
  }
  return 0;
}
  
