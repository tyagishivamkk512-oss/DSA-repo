#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cout << "Enter size of array: ";
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    map <int ,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]] ++;
    }
    cout << "Enter number: ";
    cin >> k;
    cout << "Frequency is: " << m[k];
}
/*can also be used in character hashing 
    map <char, int> m;   */

/* but we should use unordered_map because it works exactly same and its time complexity is 
   O(1) and in worst case O(N)
   but if unordered fails only then we should move up to map*/ 