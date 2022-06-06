#include<iostream>
using namespace std;

int peak_index(int arr[], int size){
    int s = 0;
    int e = size -1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
      mid = s + (e-s)/2;

    }
      return s;

}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
  cout<< peak_index(arr, n);


    return 0;
}