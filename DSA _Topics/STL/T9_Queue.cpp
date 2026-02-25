#include<bits/stdc++.h>
using namespace std;
int main(){ 
    queue <int> q; //first in first out
    q.push(1); //{1}
    q.push(3);// {1,3}
    q.emplace(7);// {1,3,7}
    q.emplace(9);// {1,3,7,9}

    cout << q.back()-3 <<endl; // 5
    cout << q.front() << endl; // 1
    q.pop(); // {3,7,9}
    
    //rest swap, size,empty same as stack
    return 0;
}