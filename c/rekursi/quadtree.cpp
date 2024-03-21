#include <bits/stdc++.h>
using namespace std; 

int arr1[128][128];
string answer[128*128];
int counter = 0;

bool homogen(int kiri, int atas, int k){
  int patokan = arr1[atas][kiri];
  for (int i = atas; i < atas + k; i++) {
    for (int j = kiri; j < kiri + k; j++) {
      if (arr1[i][j] != patokan) {
        return false; // Not homogeneous
      }
    }
  }
  return true;
}
void quadtree(int kiri, int atas, int k, string koordinat){
  if (homogen(kiri,atas,k)) {
    if (arr1[atas][kiri] == 1) {
      answer[counter] = "1" + koordinat;
      counter++;
    }
  } 
  else {
    quadtree(kiri, atas, k/2, koordinat + "0");
    quadtree(kiri + k/2, atas, k/2, koordinat + "1");
    quadtree(kiri, atas + k/2, k/2, koordinat + "2");
    quadtree(kiri + k/2, atas + k/2, k/2, koordinat + "3");
  } 
}

int main(){
  int R,C; cin >> R >> C;
  /*
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cout << arr1[i][j] << ' ';
    }
    cout << endl;
  }
  */
  int maxrc = max(R,C); 
  int pow2 = 1;

  while (pow2 < maxrc) {
    pow2 *= 2;
  }

  for (int i = 0; i < pow2; i++) {
    for (int j = 0; j < pow2; j++) {
      arr1[i][j] = 0;
    }
  }

  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cin >> arr1[i][j];
    }
  }

  quadtree(0,0,pow2,"");
  cout << counter << endl;
  for (int i = 0; i < counter; i++) {
    cout << answer[i] << endl;
  }

}
