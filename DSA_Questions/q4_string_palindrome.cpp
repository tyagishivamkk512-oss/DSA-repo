#include<bits/stdc++.h>
    using namespace std;
    bool isPalindrome(string s) {
        vector <char> v;
        for(int i =0;i<s.size();i++){
            if(s[i]<48){
                continue;
            }
            if(s[i]>47 && s[i]<58){
                v.emplace_back(s[i]);
            }
            if(s[i]>57 && s[i]<=64){
                continue;
            }
            if(s[i]>64 && s[i]<91){
                v.emplace_back(s[i]+32);
            }
            if(s[i]>=91 && s[i]<=96){
                continue;
            }
            if(s[i]>=97 && s[i]<123){
                v.emplace_back(s[i]);
            }
            if(s[i]>=123){
                continue;
            }
        }
        if(v.size()==0) return true;
        auto it1 = v.begin();
        auto it2 = v.end();
        it2--;
        int a =5;
        
        for(int i=0;i<v.size()/2;i++){
            if(*(it1)!=*(it2)){
                a =0;
                break;
            }
            it1++;
            it2--;
        }
        return a==5;
}
int main(){
    string s;
}