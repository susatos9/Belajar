#include <bits.stdc++.h>
using namespace std; 
  
bool identical(arr1, arr)

bool checksymetry(int arr1[n1][n2], arr2, n1, n2){
  bool hasil = false;
  if(identical(arr1, arr2, n1, n2)){
    return true;
  }
  if(verticalsymetry(arr1, arr2, n1, n2)){
    return true;
  }
  if(horizontalsymetry(arr1, arr2, n1, n2)){
    return true;
  }
  if(diagonalsymetry(arr1, arr2, n1, n2)){
    return true;
  }
  return false;
}



int main(){
  int arr1[n1][n2];
  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n2; j++) {
      arr1[i][j] = 0;
    }
  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n2; j++) {
      cin >> arr1[i][j];
    }
  }

  int arr2[n2][n1];
  for (int i = 0; i < n1; i++) {   
    for (int j = 0; j < n2; j++) { }
      arr2[i][j] = 0;              
    }                              
  for (int i = 0; i < n1; i++) {   
    for (int j = 0; j < n2; j++) { 
      cin >> arr2[i][j];           
    }                              
  }                                

}
