#include<iostream>
using namespace std;

int mountain_peak(int arr[], int n){
    int s=0 , e= n-1;
    int mid = s+ (e-s)/2;

    while(s<e){
        if (arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e= mid;
        }
        mid = s+ (e-s)/2;
    }

    return s;
}


int main(){
    
    int arr[]={1,2,5,10,9,4};
    int peak_ele= mountain_peak(arr,6);
    cout<<"the peak element is  "<< arr[peak_ele] << " and index is at "<<peak_ele;

}