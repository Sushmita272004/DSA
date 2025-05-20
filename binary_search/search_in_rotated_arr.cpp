#include<iostream>
using namespace std ;
int binary_search(int arr[],int s , int e , int key){
    int mid = s + (e-s)/2;
    while ( s<=e){
        if (key == arr[mid])
            return mid;
        if (key > arr[mid])
            s= mid+1;
        if (key < arr[mid])
            e= mid-1;
        mid = s + (e-s)/2;
    }
    return -1;
}
int getpivot(int arr[],int n){
    int s= 0 , e= n-1;
    int mid = s +(e-s)/2 ;

    while (s<e){
        if (arr[mid]>arr[0])
            s = mid+1;
        else
            e=mid;
        mid = s +(e-s)/2 ;
    }
    return s;
}

int getposition(int arr[], int n, int target){
    int s = 0 , e= n-1;
    int mid = s +(e-s)/2;
    int pivot = getpivot(arr,n);
    if (arr[pivot]<=target && target <=arr[e])
        binary_search(arr,pivot,n-1,target);
    else
        binary_search(arr,0,pivot-1,target);
    
}
int main(){
    int arr[]= {9,10,15,1,2,5,7};
    int target = 2;
    cout<< " the target element is : "<< getposition(arr,7,target) ;
}