#include<iostream>
using namespace std;
int firstOcc(int arr[],int size, int key){
    int start = 0;
    int end= size -1;
    int ans = -1;
    int mid = start  +  (end - start)/2;
        while(start<=end){
            if(arr[mid]==key){
                ans =  mid;
                end = mid -1;
               
            }
            else if(key>arr[mid]){
                start  = mid + 1;
            }
            else if(key>arr[mid]){
                end = mid -1;
            }

            mid = start  +  (end - start)/2;
            // mid = start +(end-start)/2;

        }
    return ans;
}
int lastOcc(int arr[], int size, int key){
    int start = 0;
    int end= size -1;
    int ans = -1;
    int mid = start  +  (end - start)/2;
        while(start<=end){
            if(arr[mid]==key){
                ans =  mid;
                start = mid + 1;
            }
            else if(key>arr[mid]){
                start  = mid + 1;
            }
            else if(key>arr[mid]){
                end = mid -1;
            }

            mid = start  +  (end - start)/2;
            // mid = start +(end-start)/2;

        }
    return ans;
}

int Total(int first , int last){
    int ans = 0;
    ans = (last - first) + 1;
    return ans;
}

int main(){

int n;
cin>> n;
int arr[n];
for(int i=0; i<n; i++){
    cin>> arr[i];
}
int key;
cin>> key;

int first = firstOcc(arr, n, key);
int last  = lastOcc(arr, n , key);

int ans = Total(first, last);
cout<< "Total Occurrence = "<< ans;




    return 0;
}