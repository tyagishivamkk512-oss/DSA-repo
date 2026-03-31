#include<bits/stdc++.h>
using namespace std;
int main(){ // same as set but only stores duplicate elements
    multiset <int> m = {1,1};
    m.insert(1); //{1,1,1}
    m.insert(1); //{1,1,1,1}
    m.insert(1); //{1,1,1,1,1}

   // m.erase(1); all 1 gets erased

    cout << m.count(1) <<endl; //5 1's are there

    m.erase(m.find(1)); // removes single 1

    cout << m.count(1);

    //m.erase(m.find(1),m.find(1)+2);   erases 2 1's  [start , end)

    //rest all func are same as set
    return 0;
}