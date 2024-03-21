#include <bits/stdc++.h>
using namespace std;

int n; int k;
int note[100] = {0};

void combination(int x){
  if (n - x + 1 < k - x) return; // Not enough elements remaining
                                 //
  if (x > k) {
    for (int i = 0; i < k; i++) {
      cout << note[i];
    }
    cout << endl;
  }
  else {
    for (int i = 0; i <= n; i++) {
      note[x] = i;
      combination(x+1);
    }
  }
}


int main(){
    cin >> n >> k;
    combination(0);
}

