\
            // Bruteforce STL
            #include <iostream>
            #include <vector>
            #include <string>
            using namespace std;
            uint8_t rotl(uint8_t b,int n){return (uint8_t)((b<<n)|(b>>(8-n))); }
            uint8_t rotr(uint8_t b,int n){return (uint8_t)((b>>n)|(b<<(8-n))); }
            uint8_t decryptByte(uint8_t c,int n,uint8_t K){ return rotr((uint8_t)(c^K),n); }
            bool rleDecompress(const string &in, string &out){ out.clear(); int i=0,n=in.size(); while(i<n){ if(!isdigit(in[i])) return false; int num=0; while(i<n && isdigit(in[i])){ num=num*10+(in[i]-'0'); ++i;} if(i>=n) return false; char ch=in[i++]; out.append(num,ch);} return true;}
            int main(){
                string rle = "4A3B4C4D"; int n_true=3; uint8_t K_true=0x5A;
                vector<uint8_t> cipher; for(char c: rle){ cipher.push_back( (uint8_t)(( ( (uint8_t)c<<n_true) | ((uint8_t)c>>(8-n_true)) ) ^ K_true) );}
                string frag="BBB"; bool found=false;
                for(int n=1;n<=7 && !found;++n) for(int K=0;K<256 && !found;++K){
                    string plain; for(auto cb:cipher) plain.push_back((char)decryptByte(cb,n,(uint8_t)K));
                    string out; if(rleDecompress(plain,out)) if(out.find(frag)!=string::npos){ cout<<"Found n="<<n<<" K="<<K<<"\n"; cout<<"Msg="<<out<<"\n"; found=true; break;}
                }
                if(!found) cout<<"Not found\n";
            }
