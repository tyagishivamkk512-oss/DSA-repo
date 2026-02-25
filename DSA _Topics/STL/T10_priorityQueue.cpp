#include<bits/stdc++.h>
using namespace std;
int main(){ 
    priority_queue <int> pq; //first in first out (max heap)
    pq.push(5); //{5}
    pq.push(3);// {5,3}
    pq.emplace(2);// {5,3,2}
    pq.emplace(10);// {10,5,3,2}

    cout << pq.top() <<endl; // 10
    
    pq.pop(); // {5,3,2}

    cout << pq.top() <<endl; // 5
    //rest swap, size,empty are there

//for minimum priority queue (min heap)
    priority_queue < int, vector<int> , greater<int>> p;
    p.push(5); //{5}
    p.push(2);// {2,5}
    p.emplace(3);// {2,3,5}

    cout <<p.top(); // 2
    return 0;
}