#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    int hash[256] = {0}; // 256 characters in programming
    for(int i=0;i<s.size();i++){
        hash[s[i]] +=1;
    }
    char q;
    cout << "letter = ";
    cin >>q;
    cout << hash[q];
}