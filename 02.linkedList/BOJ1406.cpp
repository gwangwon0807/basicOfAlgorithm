#include <bits/stdc++.h>
using namespace std;
/*
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string s;
  int c;
  cin >> s;
  list<char> L; 

  for(auto t : s)L.push_back(t);
  auto cursor = L.end();
  cin >> c;

  while(c--){
    char x; 
    cin >> x;
    if(x == 'P'){
      char y;
      cin >> y;
      L.insert(cursor, y);
    }
    else if (x == 'L'){
      if(cursor != L.begin()) cursor--;
    }
    else if(x == 'D'){
      if(cursor != L.end()) cursor++;
    }
    else{
      if(cursor != L.begin()){
        cursor--;
        cursor = L.erase(cursor);
      }
    }
  }

  for(auto i : L) cout << i;

  return 0;
}
*/

const int MX = 1000005;
char dat[MX];
int pre[MX]; 
int nxt[MX];
int unused = 1;

void insert(int addr, char num){
  dat[unused] = num;
  pre[unused] = addr;
  nxt[unused] = nxt[addr];
  if(nxt[addr] != -1) pre[nxt[addr]] = unused;
  nxt[addr] = unused;
  unused++;
}

void erase(int addr){
  nxt[pre[addr]] = nxt[addr];
  if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traversal(){
  int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur];
    cur = nxt[cur];
  }
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  fill(pre,pre+MX,-1);
  fill(nxt,nxt+MX,-1);
  string init;
  cin >> init;
  int cursor = 0;
  for(auto c : init){
    insert(cursor, c);
    cursor++;
  }  
  int q;
  cin >> q;
  while (q--) {
    char op;
    cin >> op;
    if (op == 'P') {
      char add;
      cin >> add;
      insert(cursor, add);
      cursor = nxt[cursor];
    }
    else if (op == 'L') {
      if (pre[cursor] != -1) cursor = pre[cursor];
    }
    else if (op == 'D') {
      if (nxt[cursor] != -1) cursor = nxt[cursor];
    }
    else { // 'B'
      if (pre[cursor] != -1) {
        erase(cursor);
        cursor = pre[cursor];
      }
    }
  }
  traversal();
}