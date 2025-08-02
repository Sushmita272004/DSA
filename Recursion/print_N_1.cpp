#include<iostream>
using namespace std;

void f(int i, int n){
    if (i < 1){
        return;
    }
    cout << i << " ";
    f(i-1,n);

}
// backtracking
void back_track(int j ,int n){
    if (j > n){
       return; 
    }
    back_track(j+1, n);
    cout<< j << " ";

}
int main(){
    int n , n1;
    cin >> n >> n1;
    f(n, n);
    cout<<endl;
    back_track(1,n1); 
}



