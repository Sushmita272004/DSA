#include<iostream>
#include<vector>
using namespace std;

// two variables
void f(int l, vector<int>& arr, int r){
    if ( l>= r) return ;
    swap(arr[l], arr[r]);
    f(l+1, arr, r-1);
}

int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements of array: ";
    vector<int> arr(n) ;
    for (int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    f(0,arr,n-1);
    cout<<"The reversed array is: ";
    for (int i=0 ; i<n ; i++){
        cout<< arr[i] << " ";
    }

}