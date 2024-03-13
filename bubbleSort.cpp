#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    //outer for loop is for running the loop from n -1 to 0 that operation can be tracked  
    for(int i = n -1; i >= 0; i--){
        for(int j = i; j <= i -1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }

    }
   
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bubble_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "Hi";
    return 0;


}