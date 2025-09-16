\
            // Verify STL
            #include <iostream>
            #include <string>
            using namespace std;
            string rleCompress(const string &plain){ string out; int i=0,n=plain.size(); while(i<n){ char c=plain[i]; int j=i+1; while(j<n && plain[j]==c) ++j; out+=to_string(j-i); out.push_back(c); i=j;} return out;}
            uint8_t rotl(uint8_t b,int n){ return (uint8_t)((b<<n)|(b>>(8-n))); }
            uint8_t encryptByte(uint8_t p,int n,uint8_t K){ return (uint8_t)(rotl(p,n)^K); }
            int main(){ string rec="AAAABBBCC"; int n=3; uint8_t K=0x5A; string recompr = rleCompress(rec); cout<<"Recompr:"<<recompr<<endl; cout<<"Reencript:"; for(char c: recompr) printf("%02X ", encryptByte((uint8_t)c,n,K)); cout<<endl; }
