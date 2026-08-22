#include <bits/stdc++.h>
using namespace std;

    // Brute force approach
    bool isAnagram_brute(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> ss;
        unordered_map<char, int> tt;

        for (int i = 0; i < s.size(); i++) {
            ss[s[i]]++;
            tt[t[i]]++;
        }

        for (auto it : ss) {
            if (tt[it.first] != it.second)
                return false;
        }

        return true;
    }
// time complexity: O(n) and space complexity: O(n)

// Optimal approach
bool isAnagram_optimal(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> freq;

        for (auto c : s)
            freq[c]++;

        for (auto c : t)
            freq[c]--;

        for (auto it : freq) {
            if (it.second != 0)
                return false;
        }

        return true;
    }
// time complexity: O(n) and space complexity: O(n)


int main() {
    bool result = isAnagram_optimal("anagram", "nagaram");
    cout << "The strings are anagrams: " << (result ? "true" : "false") << endl;
    return 0;
}