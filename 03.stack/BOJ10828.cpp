#include<bits/stdc++.h>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int i;
  cin >> i;

  stack<int> S;

  while(i--){
    string x;
    cin >> x;
    if(x == "push"){
      int y;
      cin >> y;

      S.push(y);
    }
    else if(x=="top"){
      if(S.empty()){
        cout << -1 << '\n';
      }else{
        cout << S.top() << '\n';
      }
    }
    else if(x=="size"){
      cout << S.size() << '\n';
    }
    else if(x=="empty"){
      int z = S.empty();
      cout << z << '\n';
    }else{
      if(S.empty()){
        cout << -1 << '\n';
        }else{
          cout << S.top() << '\n';
          S.pop();
        }
      }
    }
  return 0;
}