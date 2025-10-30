#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>&v){
    int k=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0) swap(v[i],v[k++]);
    }
}

int main(){
    vector<int>a={0,1,0,3,12};
    moveZeroes(a);
    for(int x:a) cout<<x<<" ";
}
