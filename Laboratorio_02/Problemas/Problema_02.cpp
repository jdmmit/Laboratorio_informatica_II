#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    const int N = 200;
    string s;
    s.reserve(N);
    for(int i=0;i<N;i++) s.push_back('A' + rand()%26);
    cout<<s<<"\n";
    int cnt[26]={0};
    for(char c: s) cnt[c-'A']++;
    for(int i=0;i<26;i++) if(cnt[i]) cout<<char('A'+i)<<": "<<cnt[i]<<"\n";
    return 0;
}