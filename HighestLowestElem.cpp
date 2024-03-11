#include<bits/stdc++.h>
using namespace std;
int HandLelem(int arr[],int n){

    vector<bool>visited(n, false);
    int maxFreq = 0, minFreq = n;
    int maxElem = 0, minElem = 0;

    for(int i = 0; i < n; i++){

        if(visited[i] == true){
            continue;
        }

        int count = 1;
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
            // here count will be the highest element while iterating through the loop 
            //it will loop and store the highest and min element in the minELem and maxElem.
            if(count > maxFreq){
                maxElem = arr[i];
                maxFreq = count;
            }
            if(count < minFreq){
                minElem = arr[i];
                minFreq = count;
            }

        }
       
    }
     cout << "Highest Frequency element is = >" << maxElem << endl;
     cout << "Minimum Frequence element is = > " << minElem << endl;
}

int main(){
    int arr[] = {3,5,6,4,6,2,6,76,12,2};
    int n = sizeof(arr)/ sizeof(arr[0]);
    HandLelem(arr, n);

    return 0;
}