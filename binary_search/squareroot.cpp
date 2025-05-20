#include<iostream>
using namespace std ;

long long int squareroot(int n){

    int s= 0, e = n;
    long long int mid = s+ (e-s)/2;
    long long int ans=-1 ;

    while(s <= e){
        long long int square =mid*mid;

        if (square == n)
            return mid;
        if ( square > n)
            e = mid-1;
        else{
            ans = mid; 
            s = mid+1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}

double moreprecision(int n, int precision,  int tempsol){
    double factor =1;
    double ans = tempsol;
    for (int i=0 ; i < precision ; i++){
        factor = factor/10;
    }
    for (double j= ans; j*j < n ; j=j+factor){
        ans =j;
    }
    return ans;
}

int main(){
    int square;
    cout<< "enter the square no. : ";
    cin>>square ;
 
    int temp_sol = squareroot(square) ;

    double ans1= moreprecision(square, 3 , temp_sol);

    cout<<"squareroot of square no. " << square <<" is : "<< ans1;

    return 0;
}