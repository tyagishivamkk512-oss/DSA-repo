#include<bits/stdc++.h>
using namespace std;
int main(){ 
    vector <int> v ={1,2,3,4,5,6}; 

    for(vector<int>::iterator x =v.begin(); x!=v.end(); x++) 
    cout<< *(x) << " ";

    cout<< endl;

    for(auto x =v.begin();x!=v.end();x++) cout<<*(x)<< " ";

    cout<< endl; 

    for(auto x :v) cout << x << " ";
    return 0;
}