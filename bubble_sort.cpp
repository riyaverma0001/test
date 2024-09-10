#include<bits/stdc++.h>
using namespace std;
int bubble(int arr[], int n) {
    cout<<"In bubble sort function"<<endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
        }
        }
    }
    cout<<"Array after bubble sort"<<endl;
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
    }
}

int main() {
    int n;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    bubble(arr, n);
}