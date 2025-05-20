#include<iostream>
using namespace std;
int sum_diogonal = 0;
int main(){
    const int n = 10 ;
    int matrix[n][n] ;
    for (int i=0 ; i < n ; i++){
        for (int j=0; j<n ; j++){
            cin>>matrix[i][j];
        }
    int sum_diogonal = 0;
    //printing sum of diogonal elemnts
    for(int k=0 ; k<n ; k++){
        sum_diogonal+=matrix[k][k];

    }
    }
    cout<<sum_diogonal;
}