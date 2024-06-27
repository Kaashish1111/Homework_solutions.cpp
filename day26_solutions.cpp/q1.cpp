// 1: Use Bubble Sort Algorithm to sort the array of integers in decreasing order.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the no of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "The array before sorting: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << "The array after sorting: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}