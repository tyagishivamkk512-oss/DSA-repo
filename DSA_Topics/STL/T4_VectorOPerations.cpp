#include<bits/stdc++.h>
using namespace std;
int main(){ 
    vector <int> v ={1,2,3,4,5,6}; 
//Erase Function
    v.erase(v.begin()+1);//erases 2
    //for(auto x :v) cout << x << " ";

    v.erase(v.begin()+1,v.begin()+4);//erases from 3 to 5
    // we give input of element we want to remove to one element later we want to remove
    //for(auto x :v) cout << x << " ";

//insert function
    vector<int> v1(3,55); //{55,55,55}
    for(auto x :v1) cout << x << " ";
    cout <<endl;

    v1.insert(v1.begin(),100); //{100,55,55,55}
    for(auto x :v1) cout << x << " ";
    cout <<endl;

    v1.insert(v1.begin()+1,2,7); //{100,7,7,55,55,55}
    for(auto x :v1) cout << x << " ";
    cout <<endl;

    vector<int> v2(2,0);
    v1.insert(v1.begin(),v2.begin(),v2.end()); //{0,0,100,7,7,55,55,55}
    for(auto x :v1) cout << x << " ";
    cout <<endl;

//size() function
    cout << v1.size() << endl; //tells size of v1
    
    v1.pop_back(); // removes last element
    
/*swap function
    v1 ={1,2}
    v2 ={3,4}
    v1.swap(v2) or v2.swap(v1)
    v1 ={3,4}
    v2 ={1,2}*/

    //v.clear(); deletes entire vector
    cout<<v1.empty();
    return 0;
}