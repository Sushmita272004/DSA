#include<iostream>
using namespace std;

void f(int i, int n){
    if (i>n){
        return;
    }
    cout << i << " ";
    f(i+1, n);
}

void back_track(int j ,int n){
    if (j < 1){
       return; 
    }
    back_track(j-1, n);
    cout<< j << " ";
    
}

int main(){
    int n,n1;
    cin >> n >> n1;
    f(1,n);
    cout<<endl;
    back_track(n1,n1);
}