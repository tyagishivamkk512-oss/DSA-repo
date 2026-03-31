#include<bits/stdc++.h>
using namespace std;
int main(){//we can store any data type in pair 
    pair<int,int> p ={1,2};
    cout << p.second << " " <<p.first << endl;

    pair<int, pair<int,int>> x = {4,{3,7}}; //pair nesting
    cout << x.first << " " << x.second.first <<" " << x.second.second << endl;

    pair<string,char> s ={"tyagi",'s'};
    cout << s.second <<" "<<s.first <<endl;

    pair<int,int> arr[]={{1,2},{3,4}};
    cout<< arr[0].first << " " << arr[1].first;
    return 0;
}