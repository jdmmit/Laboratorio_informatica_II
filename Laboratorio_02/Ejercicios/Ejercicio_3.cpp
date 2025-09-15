#include <iostream>
using namespace std;
int main(){
  unsigned short b[4][2] = {{77,50},{5,2},{28,39},{99,3}};
  cout << "b (base): " << (void*)b << "\n";
  cout << "b+2: " << (void*)(b+2) << "\n";
  cout << "*(*(b+2)+1): " << *(*(b+2)+1) << "\n";
  cout << "b[3][1]: " << b[3][1] << "\n";
  return 0;
}