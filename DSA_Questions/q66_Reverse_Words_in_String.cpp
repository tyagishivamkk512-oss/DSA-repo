#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
        vector <string> v;
        string a = "";
        int n = s.size();
        string ans = "";

        for(int i=0; i<n;i++){
            if(s[i] == ' '){
                if(a != "") v.emplace_back(a);
                a = "";
            }
            else{
                a += s[i];
            }
        }
        if(a!="")v.emplace_back(a);
        reverse(v.begin(), v.end());

        for(int i = 0; i<v.size()-1; i++){
            ans += v[i];
            ans += " ";
        }
        ans += v[v.size()-1];
        return ans;
    }
    // time complexity: O(n) and space complexity: O(n)
    
int main() {
    string s = "Hello, World!";
    string result = reverseWords(s);
    cout << "The string after reversing the words is: " << result << endl;
    return 0;
}