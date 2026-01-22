// 21:11 22/01/26
#include <bits/stdc++.h>
using namespace std;
vector<int> fnd(string s1, string s2){
    vector<int> rs;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] == s2[0]){
            int t = i + 1;
            bool ch = true;
            for(int j = 1; j < s2.length(); j++){
                if(s1[t] != s2[j]){
                    ch = false;
                    break;
                }
                t++;
            }
            if(ch){
                rs.push_back(i);
            }
        }
    }
    return rs;
}
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    // find sub string s2 in s1
    vector<int> f = fnd(s1, s2);
    for(int i : f){
        cout << i << (char)32;
    }
    return 0;
}
