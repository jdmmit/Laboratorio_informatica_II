#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long amount;
    if(!(cin>>amount)) return 0;
    vector<int> denom = {50000,20000,10000,5000,2000,1000,500,200,100,50};
    for(int d: denom){
        cout<<d<<": "<< (amount/d) <<"\n";
        amount %= d;
    }
    cout<<"Faltante: "<<amount<<"\n";
    return 0;
}