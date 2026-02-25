#include<bits/stdc++.h>
using namespace std;
int main(){ // same as set but only stores unique elements in random order 
    unordered_set <int> u;
    u.insert(1);
    u.emplace(6);
    u.insert(3);
    u.emplace(0);

    //all operations are similar to set but lower and upper bound doesn't work

    // all operations are generally in O(1) 
    
    return 0;
}