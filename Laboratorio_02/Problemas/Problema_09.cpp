#include <iostream>
#include <string>
using namespace std;
int main(){
    int n; string s;
    cin>>n>>s;
    int rem = s.size() % n;
    if(rem) s = string(n-rem, '0') + s;
    long long sum=0;
    for(size_t i=0;i<s.size(); i+=n){
        sum += stoll(s.substr(i,n));
    }
    cout<<sum<<"\n";
}