\
            // LZ78 STL version (same as before)
            #include <iostream>
            #include <vector>
            #include <string>
            using namespace std;
            bool lz78DecompressBin(const vector<uint8_t> &in, string &out) {
                if (in.size()%2!=0) return false;
                vector<string> dict; dict.push_back(string());
                out.clear();
                for (size_t i=0;i+1<in.size();i+=2) {
                    uint8_t idx=in[i]; char c=(char)in[i+1];
                    if (idx>=dict.size()) return false;
                    string entry = dict[idx] + string(1,c);
                    out += entry; dict.push_back(entry);
                }
                return true;
            }
            int main(){ string plain="ABAABABAAB"; vector<uint8_t> comp; // compress
                // simple compress
                vector<string> dict; dict.push_back(string());
                size_t pos=0;
                while (pos<plain.size()) {
                    int bestIdx=0; string best;
                    for (int i=0;i<dict.size();++i) {
                        if (pos+dict[i].size()>=plain.size()) continue;
                        if (plain.substr(pos, dict[i].size())==dict[i]) {
                            if (dict[i].size()>=best.size()) { best=dict[i]; bestIdx=i;}
                        }
                    }
                    char next = plain[pos+best.size()];
                    comp.push_back((uint8_t)bestIdx); comp.push_back((uint8_t)next);
                    dict.push_back(best + string(1,next));
                    pos += best.size()+1;
                }
                string decomp; lz78DecompressBin(comp, decomp);
                cout << \"Decomp:\" << decomp << endl;
            }
