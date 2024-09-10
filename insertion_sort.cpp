#include<bits/stdc++.h>
using namespace std;
int insertion_sort(int arr[], int n) {
    cout<<"In insertion sort function"<<endl;
   int target=1;
   for(int i=0;i<n;i++) {
        for(int j=0;j<target;j++) {
            for(int k=0;k<=j;k++) {
                if(target==n+1) {
                    break;
                }
                if(arr[k]>arr[target]) {
                int temp=arr[target];
                arr[target]=arr[k];
                arr[k]=temp;
                target++;
            }
            }     
        }
   }
    cout<<"Array after insertion sort"<<endl;
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
    insertion_sort(arr, n);
}