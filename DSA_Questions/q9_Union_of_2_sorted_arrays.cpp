#include<bits/stdc++.h>
using namespace std;
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int i = 0, j = 0;
        vector<int> unionA;

        while (i < a.size() && j < b.size()) {
            if (a[i] <= b[j]) {
                if (unionA.size() == 0 || unionA.back() != a[i]) {
                    unionA.push_back(a[i]);
                }
                i++;  
            } else {
                if (unionA.size() == 0 || unionA.back() != b[j]) {
                    unionA.push_back(b[j]);
                }
                j++; 
            }
        }
        while (i < a.size()) {
            if (unionA.size() == 0 || unionA.back() != a[i]) {
                unionA.push_back(a[i]);
            }
            i++;
        }
        while (j < b.size()) {
            if (unionA.size() == 0 || unionA.back() != b[j]) {
                unionA.push_back(b[j]);
            }
            j++;
        }
        return unionA;
    }
int main(){
    vector <int> a = {1,1,2,2,3,4,5,6,6};
    vector <int> b = {1,1,1,2,3,4,4,4,4,5};
    findUnion(a,b);
}
