#include<bits/stdc++.h>
using namespace std;
int main(){ // same as set stores unique elements in sorted order consist of key and value
    // keys are unique
    // {key , value}
    map <int,int> m;
    m.insert({1,2}); // {{1,2}}
    m[3] = 4;  // {{1,2},{3,4}}
    m.emplace(2,4); // {{1,2},{2,4},{3,4}}
      
    /* map <pair <int ,int>, int> m;
       m[{2,3}] = 10;
    */
    
    for(auto it : m) cout << it.first << " " << it.second << endl;

    cout << m[3] << endl;
    cout << m[5] << endl; // as key 5 is absent it creates a key 5and assignes 0 {5,0}
    
    auto it = m.find(2); // we get iterator pointing on key 2
    if(it!=m.end())
    cout << it->first << " " << it->second;
    
    //erase swap size empty are same 

    // there is multimap same as map in which we can store duplicate keys 
    // only m[key] can not be used 
    //there is unordered_map same as map stores unique kiy but in random order 

    // map time complexity is log N in every case best or worst
    //while unordered map is O(1) in best and averagecase and in worst case can reach O(N)
    
    
    return 0;
}