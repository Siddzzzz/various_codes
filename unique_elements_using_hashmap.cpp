#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements:- ";cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" element:- ";cin>>arr[i];
    }
    unordered_map<int,int>freq;
    for(int num:arr){
        freq[num]++;
    }
    for(auto entry:freq){
        if(entry.second==1) cout<<entry.first<<" ";
    }
    return 0;
}
