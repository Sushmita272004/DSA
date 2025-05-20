#include<iostream>
using namespace std;

int pivot ( int arr[], int n){
    int s=0 , e= n-1;
    int mid= s + (e-s)/2;

    while (s<e){
        if (arr[mid]>arr[0])
            s=mid; // if want to print down pivot point s = mid+1;
        else
            e= mid-1; // e = mid
        mid = s + (e-s)/2;
    }
    return e;
}

int main(){
    int arr[]= { 5,6,7,1,2,3};
    int rotatedarr[]={5,6,7,1,2,3};
    cout << pivot(arr,6);
}