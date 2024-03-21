#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int arr1[9] = {0};
  for (int i = 0; i < 9; i++) {
    cin >> arr1[i];  
  }
  swap(arr1[1], arr1[3]);
  
  swap(arr1[2], arr1[6]);
  swap(arr1[5], arr1[7]);
  for (int i = 0; i < 3; i++) {
    cout << arr1[i] << " ";
  }
  cout<< endl;
  for (int i = 3; i < 6; i++) {
    cout << arr1[i] << " ";
  }
  cout<< endl;
  for (int i = 6; i < 9; i++) {
    cout << arr1[i] << " ";
  }
  cout<< endl;
}
