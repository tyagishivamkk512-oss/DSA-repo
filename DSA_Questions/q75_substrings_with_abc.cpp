#include <bits/stdc++.h>
using namespace std;

//brute force approach

    int numberOfSubstrings(string s) {
        int n = s.size();
        int ans = 0;

        for (int i = 0; i< n; i++){
            int hash[3] = {0};
            for(int j = i;j<n;j++){
                hash[s[j]-'a'] = 1;
                if(hash[0]==1 && hash[1]==1 && hash[2]==1){
                    ans += (n - j);
                    break;
                }
            }
        }
        return ans;
    }
    // time complexity: O(n^2) and space complexity: O(1)

//optimal approach

    int numberOfSubstrings(string s) {
        int n = s.size();
        int ans = 0;

        int last[3] = {-1,-1,-1};

        for (int i = 0; i< n; i++){
            last[s[i] - 'a'] = i;
            if(last[0]!=-1 && last[1]!=-1 && last[2]!=-1){
                ans += min({last[0],last[1],last[2]}) + 1;
            }
        }
        return ans;
    }


int main() {
    string s;
    cin >> s;
    cout << numberOfSubstrings(s) << endl;
    return 0;
}