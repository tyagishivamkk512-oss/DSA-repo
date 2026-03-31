#include<bits/stdc++.h>
using namespace std;
int main(){ // stores in sorted and unique way 
    set <int> s = {2,1}; // {1,2}
    s.insert(2); // {1,2}
    s.insert(0); // {0,1,2}
    s.insert(5); // {0,1,2,5}

    set <int>::iterator x = s.begin();
    cout << *(x);

    auto it = s.find(2); // returns iterator pointing on 2
    auto it = s.find(9); //returns iterator pointing on position after last element

    s.erase(2); //erases 2

    int a = s.count(5); // if 5 present will return 1 otherwise 0

    /* s = {1,2,3,4,5,6}
      auto it1 = s.find(3);
      auto it2 = s.find(6);            [first , last)
      s.erase(it1,it2); erases 3 to 5
      {1,2,6} */
    return 0;
}