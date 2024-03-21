#include <bits/stdc++.h>
using namespace std;

int n;
int note[10] = {0};
bool checked[11] = {false};
bool zigzag = 0;

void permute(int x){
  if(x >= n){
    zigzag = 1;
    for (int i = 1; i < n-1; i++) {
      if (note[i] > min(note[i-1], note[i+1]) && note[i] < max(note[i-1], note[i+1])) {
        zigzag = 0;
      }
    }
    if (zigzag == 1) {
      for (int i = 0; i < n; i++) {
        cout << note[i];
      }
      cout << endl;
    }
  }
  else {
    for (int i = 1; i <= n ; i++) {
      if (!checked[i]) {
        checked[i] = true;
        note[x] = i;
        permute(x+1);
        checked[i] = 0;
      }
    }
  }
}


int main(){
  cin >> n;
  permute(0);
}
