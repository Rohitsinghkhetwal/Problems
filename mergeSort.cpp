#include<bits/stdc++.h>
using namespace std;

void mergeAll(vector<int> &arr, int low, int mid, int high){
    int left = low;
    int right = mid + 1;
    vector<int>temp;

    while(left <= right && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            //this condition is for when left devided arrays are smallar then right one
            left++;
        }else{
            // it could be greater then right one so this is for right divided one
            // it will comapred those who will smaller element it will pushed first
            temp.push_back(arr[right]);
            right++;

        }
    }

    while(left <= right){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= left){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
        
    }

}

void merge_sort(vector<int> &arr, int low, int high){
    //base case
    if(low >= high) return;
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    mergeAll(arr, low, mid, high);
   

}

int main(){
     vector<int> arr = {43,5,221,67,90,3,23,112,10};
    int len = arr.size();
    cout << "length of an array !" << len << endl;
    int low = 0;
    int high = len -1; 
    merge_sort(arr, low, high);
    for(int i = 0; i < len; i++){
        cout << arr[i] << " " ;
    }

    cout << endl;

    return 0;
}