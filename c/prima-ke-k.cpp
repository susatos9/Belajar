#include <iostream>
using namespace std;

void sieveoferatosthenes(bool prime[], long long size, long long hasil[]) {
  prime[0] = prime[1] = false;
  long long counter = 0;
  for (long long i = 2; i * i <= size; i++) {
    if (prime[i] == true){
      for (long long j = i * i; j <= size && j <= size / i; j += i) {
        prime[j] = false;
      }
    }
  }
  for (long long i = 0; i <= size; i++) {
    if (prime[i] == true) {
      hasil[counter] = i;
      counter += 1;
    }
  }
}

int main () {
  int T;
  cin >> T;
  bool prime[10000001]; 
  for (long long i = 0; i < 10000001; i++) {
    prime[i] = true;
  }
  long long hasil[10000001] = {0};
  sieveoferatosthenes(prime,10000000, hasil);
  for (long long i = 0; i < T; i++) {
    long long n; long long counter = 2;
    cin >> n;
    while (hasil[counter] < n) {
      cout << hasil[counter] << endl;
      counter += 1;
    }
  }
  return 0;
}
  
