#include<iostream>
using namespace std;

//n length of array
//k nos of painters are available
// 1 unit of board takes 1 unit of time to paint
//min time to get the job done of painting all n boards 
//constraint : paint continuous sections

bool ispossible(int arr[], int n, int k, int mid ){
    int painterCount = 1;
    int lengthSum = 0;

    for (int i=0; i<n; i++){
        if ( lengthSum + arr[i] <= mid){
            lengthSum+=arr[i];
        }
        else{
            painterCount ++;
            if( painterCount > k || arr[i] > mid){
                return false;
            }
            lengthSum = arr[i];
        }

    }
    return true;

}

int paintersAllocate(int arr[], int n, int k){
    int s=0;
    int sum =0 ;
    for (int i=0; i<n; i++){
        sum+=arr[i];
    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e){
        if (ispossible(arr,n,k,mid)){
            ans = mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
    
}
int main(){
    int arr[]= {5,5,5,5};
    int n = 4;
    int k= 2;

    int ans = paintersAllocate(arr,n,k);
    cout<<ans;
}