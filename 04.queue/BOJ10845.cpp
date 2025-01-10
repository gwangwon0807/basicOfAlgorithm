#include <bits/stdc++.h>

using namespace std;

int main(void){
  queue<int> Q;
  int c;
  cin >> c;

  while(c--){
    string x;
    cin >> x;
    if(x == "push"){
      int y;
      cin >> y;

      Q.push(y);
    }
    else if(x =="pop"){
      if(Q.empty()){
          cout << -1<< '\n';
          continue;
        }
      cout << Q.front() << '\n';
      Q.pop();
    }
    else if(x == "size"){
      cout << Q.size()<< '\n';
    }
    else if(x == "empty"){
      if(Q.empty()){
        cout << 1<< '\n';
        continue;
      }
      cout << 0<< '\n';
    }
    else if (x=="front"){
      if(Q.empty()){
        cout << -1<< '\n';
        continue;
      }
      cout << Q.front()<< '\n';
    }else{
      if(Q.empty()){
        cout << -1<< '\n';
        continue;
      }
      cout << Q.back()<< '\n';
    }
    
  }
  return 0;
}