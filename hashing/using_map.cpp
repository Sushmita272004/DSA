#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    unordered_map<int, int> hash;
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    for ( auto it : hash){   // iterating through the map
        // it.first is the key, it.second is the value
        cout<<it.first<< "-->"<<it.second<<endl ;
    }

    int num;
    cout<<"enter the no. of queries:";
    cin>>num;
    while(num--){
        int x;
        cin>>x;
        cout<<"no. of frequency is :";
        cout<<hash[x]<<endl;
    }
}