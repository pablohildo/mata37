#include <iostream>
using namespace std;
int main() {
  int temperatura;
  cin >> temperatura;
  if(temperatura < 0){
    cout << "Muito frio" << endl;
  } else if(temperatura < 19){
    cout << "Frio" << endl;
  } else if(temperatura < 25){
    cout << "Agradável" << endl;
  } else if(temperatura < 32){
    cout << "Quente" << endl;
  } else {
    cout << "Muito quente" << endl;
  }
  return 0;
}
