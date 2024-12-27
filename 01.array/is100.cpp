/*
  This program finds values ​​that add up to 100.
  if True, this program return 1;
*/

#include <bits/stdc++.h>

using namespace std;

int func2(int arr[], int N){
  int flag[101];    //0 ~ 100

  for(int i = 0; i < N; i++){
    if(flag[100 - arr[i]] == 1){
      return 1;
    }
    flag[arr[i]] = 1;
  }

  return 0;
}

int main(){
  int testArr1[3] = {1, 52, 48};
  int testArr2[2] = {52, 42};
  int testArr3[4] = {4, 13, 63, 87};

  int test1 = func2(testArr1, 3);
  int test2 = func2(testArr2, 2);
  int test3 = func2(testArr3, 4);

  cout << test1 << '\n' << test2 << '\n' << test3;
  return 0;
}