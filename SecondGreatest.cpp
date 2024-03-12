#include<bits/stdc++.h>
using namespace std;

int SecondGreatest(int arr[], int len){
    int Largest = arr[0];
    int secondLargest = -1;
    for(int i = 1; i < len; i++){
        if(arr[i] > Largest){
            secondLargest = Largest;
           Largest = arr[i];
        }else if(arr[i] > secondLargest && arr[i] != Largest){
            secondLargest = arr[i];
        }
    }
    
    return secondLargest;
}
int main(){

    int arr[] = {4,5,23,54,65,23,12,90,59};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << " THis is second largest among them =>" << SecondGreatest(arr, length);

    return 0;
}