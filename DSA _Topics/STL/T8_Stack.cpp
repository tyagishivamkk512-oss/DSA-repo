#include<bits/stdc++.h>
using namespace std;
int main(){ 
    stack <int> s; //last in first out
    s.push(7);//{7}
    s.emplace(5);//{5,7}
    s.push(1);//{1,5,7}
    s.push(1);//{1,1,5,7}
    s.push(9);//{9,1,1,5,7}

    cout <<s.top() <<endl; // 9

    s.pop();         // {1,1,5,7}

    cout <<s.top() <<endl; // 1

    cout <<s.size() <<endl; // 4

    cout <<s.empty() <<endl; // 0

    cout <<s.top()+3; // 4

    /*stack <int> s1,s2;
      s1.swap(s2);*/

    
    return 0;
}