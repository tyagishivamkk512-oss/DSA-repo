#include<bits/stdc++.h>
using namespace std;
int main(){ 
    vector <int> v ={10,12,43,65};
    vector <int>::iterator x = v.begin();
    cout << *(x) <<" ";
    x++;
    cout << *(x) << " ";

    vector<int>::iterator y = v.end();// end() points on the position just after lasts element 
    y--;
    cout << *(y) << " ";

    vector<int>::reverse_iterator z = v.rend();
    //points on position just before first element
    vector<int>::reverse_iterator w = v.rbegin();
    //points on last element in reverse iterator moves in reverse direction

    cout << v.back()<< endl;

    //to print whole vector
    for(vector<int>::iterator x =v.begin();x!=v.end();x++) 
    cout<<*(x)<< " ";

    cout<< endl;

    for(auto x =v.begin();x!=v.end();x++) cout<<*(x)<< " ";
    return 0;
}