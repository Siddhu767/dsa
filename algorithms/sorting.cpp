#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int n,int arr[]){//check the adjacents and swap
    for(int i=0;i<n;i++){// this loop to iterate n time
        for(int j=0;j<n-i-1;j++){// this loop to iterate n*n times preventing out of bound by reducing n-1,otherwise if you use n-i-1 it reduced to n-1/2 iterations
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selection_sort(int n,int arr[]){//get the minimum and swap to i'th index
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}

void insertion_sort(int n,int arr[]){//inserting like cards 
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){//swapping if left ajdacent is greater
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   insertion_sort(n,arr);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}
