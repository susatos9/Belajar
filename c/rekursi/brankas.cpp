#include <bits/stdc++.h>
using namespace std;

int n; int k;
int note[100] = {0};

void combination(int x){
  if (x >= k) {
    for (int i = 0; i < k; i++) {
      cout << note[i] << ' ';
    }
    cout << endl;
  }
  else {
    for (int i = note[x-1] + 1; i <= n; i++) {
      note[x] = i;
      combination(x+1);
    }
  }
}


int main(){
  cin >> n >> k;
  combination(0);
}
