#include <iostream>
#include <string>
using namespace std;
string remover(const string &s){
    bool seen[256] = {0};
    string out;
    for(unsigned char c: s) if(!seen[c]){ seen[c]=true; out.push_back(c); }
    return out;
}
int main(){ string s; getline(cin,s); cout<<remover(s)<<"\n"; }