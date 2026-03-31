#include<bits/stdc++.h>
using namespace std;
int main(){ 
    list<int> a;
    a.push_back(1); //{1}
    a.emplace_back(2);//{1,2}
    a.push_front(3);//{3,1,2}
    a.emplace_front(4);//{4,3,1,2}

    //in list elemnts are not stored in contiguous memory so we cant access like a[2] or a[1]
    //it doesn't have index

    //rest function are same as vector
    
    return 0;
}