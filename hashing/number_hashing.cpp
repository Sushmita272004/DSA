#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int hash[15] = {0};
    for (int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    int  num;
    cout<<"Enter the number of queries: ";
    cin>>num;

    while(num--){
        int x;
        cout<<"Enter the number to check its frequency: ";
        cin>>x;
        cout<< hash[x] << " " <<endl;
    }

}