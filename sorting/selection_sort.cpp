#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i = 0 ; i < n-1 ; i++){
        int min_index = i;

        for (int j = i+1 ; j < n ; j++){
            if (arr[j] < arr[min_index])
                min_index=j;   
        }
        swap(arr[i],arr[min_index]);
    }

}

void printarray(int arr[], int n){
    for(int i=0 ; i < n ; i++)
        cout << arr[i] << " ";
    cout<<endl;

}

int main(){
    int arr[]={1,4,7,2,9,10};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<"ORIGINAL ARRAY : ";
    printarray(arr,n);

    selection_sort(arr,n);

    cout<<"SORTED ARRAY : ";
    printarray(arr,n);
}