#include<bits/stdc++.h>
using namespace std;
int main(){ 
    deque <int> a;
    a.push_back(1); //{1}
    a.emplace_back(2);//{1,2}
    a.push_front(3);//{3,1,2}
    a.emplace_front(4);//{4,3,1,2}

    a.pop_back();//{4,3,1}
    a.pop_front();//{3,1}

    a.front();  // returns first element → 3
    a.back();   // returns last element → 1

    //rest function are same as vector
    //supports indexing like vector
    
    return 0;
}