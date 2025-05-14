#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    for (int i= 0; i < n ;i++){
        bool swapped = false;
        for (int j = 0 ; j < n-i-1 ; j++ ){
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }

    }

}

void printarray(int arr[], int n){
    for (int i=0 ; i < n ; i++)
        cout<< arr[i] << " ";
    cout<<endl;
    
}

int main(){
    int arr[] = {10,5,2,7,9,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<" Original Array : ";
    printarray(arr,n);

    bubble_sort(arr,n);

    cout<<" Sorted Array : ";
    printarray(arr,n);

}