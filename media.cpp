#include <iostream>
using namespace std;
int main(){
  int x, y, z, mediaInteira;
  float mediaDecimal;
  cin >> x >> y >> z;
  mediaDecimal = (x+y+z)/3.0;
  mediaInteira = (x+y+z)/3;
  cout << mediaDecimal << " " << mediaInteira << endl;
  return 0;
}
