#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& s) {
        int n = s.size();
        if(n == 1) return s[0];
        for(int i = 0; i< n-1; i++){
            if(s[i][0]!=s[i+1][0]) return "";
        }
        int mini = 200;
        for(int i = 0; i < n;i++){
            if(s[i].size() < mini) mini = s[i].size();
        }
        string ans = "";
        for(int i = 0; i < mini;i++){
            for(int j=0;j<n-1;j++){
                if(s[j][i]!=s[j+1][i]) return ans;
            }
            ans += s[0][i];
        }
        return ans;
    }
    // time complexity: O(n*m) and space complexity: O(1)
    
int main() {
    vector<string> s = {"flower", "flow", "flight"};
    string result = longestCommonPrefix(s);
    cout << "The longest common prefix is: " << result << endl;
    return 0;
}