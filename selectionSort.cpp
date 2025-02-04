#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
     int minIndex;
    for(int i=0; i<n-1; i++) {
       minIndex = i;
        for(int j=i+1; j<n; j++) {
             if(arr[minIndex]>arr[j]) {
                minIndex = j;
             }
        }
        swap(arr[minIndex],arr[i]);
    }
}


int main() {
    
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    // before sorting
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
     
     
    selectionSort(arr, n);
    
    cout << endl;
  
  // after sorting
  for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}