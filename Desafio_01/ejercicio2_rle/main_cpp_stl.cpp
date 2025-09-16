\
            // RLE STL version
            #include <iostream>
            #include <string>
            using namespace std;
            string rleCompress(const string &plain) {
                string out; int i=0,n=plain.size();
                while (i<n) {
                    char c=plain[i]; int j=i+1; while (j<n && plain[j]==c) ++j;
                    out += to_string(j-i); out.push_back(c); i=j;
                }
                return out;
            }
            bool rleDecompress(const string &in, string &out) {
                out.clear(); int i=0,n=in.size();
                while (i<n) {
                    if (!isdigit(in[i])) return false;
                    int num=0; while (i<n && isdigit(in[i])) { num = num*10 + (in[i]-'0'); ++i; }
                    if (i>=n) return false;
                    char c = in[i++]; out.append(num, c);
                }
                return true;
            }
            int main(){ string s="AAAAABBBCCDAA"; cout<<"Orig:"<<s<<endl; string c=rleCompress(s); cout<<"Comp:"<<c<<endl; string d; if(rleDecompress(c,d)) cout<<"Decomp:"<<d<<endl; }
