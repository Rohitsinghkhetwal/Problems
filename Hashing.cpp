#include <iostream>
using namespace std;

// we want a count that tells how many time it comes
int NumberTimes(int num, int arr[], int n);
int main(){
    int num = 1;
    int arr[] = {1,4,6,4,7,4,6,87,98,76,1,1,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << NumberTimes(num, arr, n);
    return 0;
    
}
int NumberTimes(int number, int arr[], int length){
    int count = 0;
    for(int i = 0; i < length; i++){
        if(number == arr[i]){
            count = count + 1;
        }
    }
    return count;
}