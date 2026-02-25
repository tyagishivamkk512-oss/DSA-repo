#include<bits/stdc++.h>
using namespace std;
void print_divisors(int n) {
        set <int> s;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
            
            s.insert(i);
            if(n/i!=i) s.insert(n/i);
            }
        }
        for(auto it : s) cout << it<<" ";
    }
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    print_divisors(n);
}