#include <bits/stdc++.h>
using namespace std;

int main(void) {
  list<int> L = {1,2}; // 1 2
  auto t = L.begin(); // t -> 1 가리키는중
  
  L.push_front(10); // 맨앞에 10추가 10 1 2
  L.push_back(5); // 맨 뒤에 5추가 10 1 2 5
  L.insert(t, 6); //t가 가리리키는 곳 앞에 6추가 10 6 1 2 5
  t++; //t 1칸 앞으로 전진 -> 2를 가리킴
  t = L.erase(t); // t가 가리키는 값 제거, 그 다음값을 t가 가리킴

  cout << *t << '\n';
  for(auto i : L) cout << i << ' ';
  cout << '\n'; 
}