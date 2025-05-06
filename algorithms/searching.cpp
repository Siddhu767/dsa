#include <bits/stdc++.h>
using namespace std;

int linear_search(int n,int arr[],int targert){  //search the target and return index
    for(int i=0;i<n;i++){
        if(arr[i]==targert){
            return i;
        }
    }
    return 0;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    int targert;
    cin>>targert;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<linear_search(n,arr,targert);
}
