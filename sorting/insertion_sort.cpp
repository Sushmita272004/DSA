#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=1 ; i<n ; i++){
        int temp = arr[i];
        int j=i-1;
        for ( ; j>=0 ; j--){
            if (arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

void printarray(int arr[],int n){
    for (int i =0 ; i<n ; i++)
        cout<< arr[i] << " ";
   cout<<endl;
}

int main(){
    int arr[]={1,7,8,4,3,10,11};
    int n =sizeof(arr)/sizeof(arr[0]);

    cout<<"ORIGINAL ARRAY :";
    printarray(arr,n);

    insertion_sort(arr,n);

    cout<<"SORTED ARRAY :";
    printarray(arr,n);


}