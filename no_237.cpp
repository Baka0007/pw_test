#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    int i=0,j=1;
    while (j<n){
        if (v[i]==0&&v[j]!=0){
            swap(v[i],v[j]);
            i++;
            j++;
        }
        else if (v[i]==0&&v[j]==0){
            j++;
        }
    }
    for (auto value:v){
        cout<<value<<" ";
    }
    cout<<endl;
}