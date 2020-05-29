#include<bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> mymap;
  mymap["Tetrahedron"]= 4;
  mymap["Cube"] = 6;
  mymap["Octahedron"] = 8;
  mymap["Dodecahedron"] = 12;
  mymap["Icosahedron"] = 20;
  map<string, int>::iterator it = mymap.begin();
  int size;
  scanf("%d", &size);
  int sum = 0;
  char str [50];
  while (size) {
      scanf("%s", str);
      it = mymap.find(str);
      if (it->second >= 0) {
          sum += it->second;
      }
    size--;
  };
  cout << sum << "\n";
  return 0;
}