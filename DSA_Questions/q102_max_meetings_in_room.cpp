#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    struct Meeting {
        int start, end, pos;
    };

    static bool cmp(const Meeting& a, const Meeting& b) {
        if (a.end != b.end)
            return a.end < b.end;

        return a.pos < b.pos;
    }

    vector<int> maxMeetings(vector<int>& s, vector<int>& f) {
        int n = s.size();
        vector<Meeting> meetings;

        for (int i = 0; i < n; i++)
            meetings.push_back({s[i], f[i], i + 1});

        sort(meetings.begin(), meetings.end(), cmp);

        vector<int> ans;
        int lastEnd = -1;

        for (auto m : meetings) {
            if (m.start > lastEnd) {
                ans.push_back(m.pos);
                lastEnd = m.end;
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};
// Time Complexity: O(n log n) and space Complexity: O(n)