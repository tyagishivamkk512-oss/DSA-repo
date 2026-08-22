#include <bits/stdc++.h>
using namespace std;

int romanToInt_brute(string s) {
        int n = s.size();
        int ans = 0;
        int i = 0;
        if(n==1){
            if(s[0]=='I') return 1;
            else if(s[0]=='V') return 5;
            else if(s[0]=='X') return 10;
            else if(s[0]=='L') return 50;
            else if(s[0]=='C') return 100;
            else if(s[0]=='D') return 500;
            else if(s[0]=='M') return 1000;
        }
        while( i < n-1){
            if(s[i]=='I'){
                if(s[i+1]=='V'){
                    ans+=4;
                    i+=2;
                }
                else if(s[i+1] == 'X'){
                    ans += 9;
                    i += 2;
                }
                else{
                    ans += 1;
                    i++;
                }
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L'){
                    ans+=40;
                    i+=2;
                }
                else if(s[i+1] == 'C'){
                    ans += 90;
                    i += 2;
                }
                else{
                    ans += 10;
                    i++;
                }
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D'){
                    ans+=400;
                    i+=2;
                }
                else if(s[i+1] == 'M'){
                    ans += 900;
                    i += 2;
                }
                else{
                    ans += 100;
                    i++;
                }
            }
            else if(s[i] == 'V'){
                ans += 5;
                i++;
            }
            else if(s[i] == 'L'){
                ans += 50;
                i++;
            }
            else if(s[i] == 'D'){
                ans += 500;
                i++;
            }
            else if(s[i] == 'M'){
                ans += 1000;
                i++;
            }
        }
        if(i == n-1){
            if(s[i]=='I') ans+= 1;
            else if(s[i]=='V') ans+= 5;
            else if(s[i]=='X') ans+= 10;
            else if(s[i]=='L') ans+= 50;
            else if(s[i]=='C') ans+= 100;
            else if(s[i]=='D') ans+= 500;
            else if(s[i]=='M') ans+= 1000;
        }

        return ans;
    }
    // time complexity: O(n) and space complexity: O(1)

    int romanToInt_optimal(string s) {
        int n = s.size();

        unordered_map <char, int> mpp = {
            {'I', 1},{'V', 5},{'X', 10}, {'L', 50},{'C', 100},
            {'D', 500},{'M', 1000}
        };

        int ans = 0;

        for(int i = 0; i< n-1; i++){
            if(mpp[s[i]] < mpp[s[i+1]]){
                ans -= mpp[s[i]];
            }
            else ans += mpp[s[i]];
        }
        ans += mpp[s[n-1]];
        return ans;
    }
    // time complexity: O(n) and space complexity: O(1)

int main() {
    string s = "MCMXCIV";
    int result = romanToInt_optimal(s);
    cout << "The integer value of the Roman numeral is: " << result << endl;
}