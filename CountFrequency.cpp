#include<bits/stdc++.h>
using namespace std;
// Current Frequency of an array...
int FrequencyArr(int arr[], int len){
    //it will point false to all elemets in arr
    vector<bool>visited(len, false);
    

    for(int i = 0; i < len; i++){

        if(visited[i] == true){
            continue;
        }
        int count = 1;
        for(int j = i + 1; j < len; j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count ++;
            }

        }
        cout << arr[i] << "    =>   " << count << endl;
    }
}

int main(){
    //here we can take input from users but we took array as now .
    int arr[] = {3,5,7,5,3,8,12,67,1,34,3,7,89};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << FrequencyArr(arr, n);
    return 0;
}