#include<bits/stdc++.h>
using namespace std;
int selection_sort(int arr[], int n) {
    cout<<"In selection sort function"<<endl;
    for(int i=0;i<n;i++) {
        int min=i;
        for(int j=i+1;j<n;j++) {
            if(arr[min]>arr[j]) {
                min=j;
            }
        }
        // swap(arr[i],arr[min]);
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
    cout<<"After selection sort, elements are"<<endl;
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
    selection_sort(arr, n);
}