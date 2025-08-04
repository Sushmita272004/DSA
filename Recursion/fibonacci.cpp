#include<iostream>
using namespace std;

//last two nos. sum of fibonacci series
int f(int n){
    if (n <= 1) return n;
    int last= f(n - 1);
    int slast = f(n - 2);
    return last + slast;
}

int main(){
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;
    cout << f(n);
    return 0;
}