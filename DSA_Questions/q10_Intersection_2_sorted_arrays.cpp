#include<bits/stdc++.h>
using namespace std;
    
    vector<int> intersection(vector<int> &a, vector<int> &b) {
        int i = 0 , j = 0;
        int x = a.size();
        int y = b.size();
        vector <int> inter;
        while(i<x && j<y){
            if(a[i]!=b[j]){
                if(a[i]>b[j]){
                    j++;
                }
                else{
                    i++;
                }
            }
            else{
                if(inter.size()==0 || inter.back()!=a[i]){
                    inter.emplace_back(a[i]);
                }
                i++;
                j++;
            }
        }
        return inter;
    }

int main(){
    vector <int> a = {1,1,2,2,3,4,5,6,6};
    vector <int> b = {1,1,1,2,3,4,4,4,4,5};
    intersection(a,b);
}
