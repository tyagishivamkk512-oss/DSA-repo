#include <bits/stdc++.h>
using namespace std;
 void reverseArray(vector<int> &arr) {
        auto it1 = arr.begin();
        auto it2 = arr.end();
        it2--;
        int temp;
        for(int i=0;i<(arr.size()/2);i++){
            temp = *(it1);
            *(it1) = *(it2);
            *(it2) = temp;
            it1++;
            it2--;
        }
        for(auto it : arr) cout << it << " ";
    }

int main(){
    vector <int> arr = {1,2,3,4};

    reverseArray(arr);
}
   