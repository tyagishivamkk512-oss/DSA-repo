#include<bits/stdc++.h>
using namespace std;
int main(){ //we can store any data type in vector 
    // push_back and emplace_back are used to put values in vector 
    vector <int> v;
    v.push_back(1);// it inserts 1 in vector, it Create a pair first, then insert it into the vector
    v.emplace_back(2); // it inserts 2 in vector, it is faster, creates the pair directly in vector
    cout << v[1] <<" " << v[0] <<" "<< v.at(0) <<endl;

    vector <pair<int,int>>vec;

    vec.push_back({4,5});
    vec.emplace_back(4,5);

    vector <int> a(5,20); // it creates a={20,20,20,20,20}
    vector <int> b(5); //it makes a vector of space 5 and could contain 5 zero of 5 garbage value

    vector <int> v1(4,12);//make vector of 4 twelves
    vector <int> v2(v1);// v2 copies v1 in itself and also contains 4 twelves

    for(int i=0;i<4;i++){
        cout << v1[i] << " ";
    }
    return 0;
}