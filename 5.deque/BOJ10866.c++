#include <bits/stdc++.h>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  deque <int> D;

  string x;
  int c, y;
  cin >> c;

  while(c--){
    cin >> x;

    if(x == "push_back") {
      cin >> y;
      D.push_back(y);
    }
    else if(x == "push_front"){
      cin >> y;
      D.push_front(y);
    }
    else if(x=="pop_front"){
      if(D.empty()){
        cout << -1 << '\n';
        continue;
      }
      cout << D.front();
      D.pop_front();
    }
    else if(x == "pop_back"){
      if(D.empty()){
        cout << -1 << '\n';
        continue;
      }
      cout << D.back();
      D.pop_back();
    }
    else if(x == "size"){
      cout << D.size() << '\n';
    }
    else if(x == "empty"){
      if (D.empty()){
        cout << 1 << '\n';
      }else{
        cout << 0 << '\n';
      }
    }
    else if(x == "front"){
      if(D.empty()){
        cout << -1 << '\n';
      }else{
        cout << D.front() << '\n';
      }
    }
    else if(x == "back"){
      if(D.empty()){
        cout << -1 << '\n';
      }else{
        cout << D.back() << '\n';
      }
    }
  }

  return 0;
}