#include<bits/stdc++.h>
using namespace std;

int largest(int n,int arr[]){
    int largestelem=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largestelem){
            largestelem=arr[i];
        }
    }
    return largestelem;
}

int slargest(int n,int arr[],int largestelem){
    int slargestelem=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>slargestelem && arr[i]!=largestelem){
            slargestelem=arr[i];
        }
    }
    cout<<slargestelem;
    return slargestelem;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int largestelem=largest(n,arr);
    slargest(n,arr,largestelem);
    return 0;
}
