#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        int j = i;
        while (j > 0 && arr[j] > arr[j - 1]) {
            std::swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}