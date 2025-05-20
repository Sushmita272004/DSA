#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key){
    
    int s = 0 , e = n-1;
    int mid = s + (e-s)/2;

    while ( s <= e){
        if (arr[mid]==key){
            return mid;
        }
        if ( key>arr[mid]){
            s=mid+1;
        }
        if ( key < arr[mid]){
            e=mid-1;
        }
        mid= s + (e-s)/2 ;
    }
    return -1;

}


int main(){
    int even[6] = {1,2,3,5,6,8};
    int odd[5]= {1,3,6,8,9};

    int even_search = binarysearch(even , 6 , 5) ;
    cout<< " the index of 5 is : " << even_search << endl ;

    int odd_search = binarysearch(odd , 6 , 9) ;
    cout<< " the index of 9 is : " << odd_search ;

}