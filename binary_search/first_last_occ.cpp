#include<iostream>
using namespace std;

int first_occ(int arr[], int n, int key){
    int s=0 , e= n-1;
    int mid = s+ (e-s)/2;
    int ans= -1;

    while(s<=e){
        if (arr[mid]==key){
            ans = mid;
            e=mid-1;
        }
        if (arr[mid]<key){
            s=mid+1;
        }
        if (arr[mid]>key){
            e=mid-1;
        }
        mid= s+ (e-s)/2;
    }
    
}
int last_occ(int arr[], int n, int key){
    int s=0 , e= n-1;
    int mid = s+ (e-s)/2;
    int ans= -1;

    while(s<=e){
        if (arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        if (arr[mid]<key){
            s=mid+1;
        }
        if (arr[mid]>key){
            e=mid-1;
        }
        mid= s+ (e-s)/2;
    }
    return ans;
    
}

int main(){
    int arr[]= { 2, 4, 6, 10, 10, 10, 13,13, 18};
    int key =13;
    int first_occurence =first_occ(arr, 8 ,key);
    int last_occurence =  last_occ(arr,8,key);
    cout<< "the first occurence of 13 is : " << first_occurence << endl;
    cout<< "the last occurence of 13 is : " << last_occurence << endl;

    //count no. of occurences
    int total_occ = ( last_occurence - first_occurence) + 1;
    cout<<"the total no. of occurence of 13 is : "<< total_occ;
}
 
