/*
given positons of houses and streetlights on a one dimentional axis , 
find the minimum illumision radius required so that every house is
 illuminated by atleast one streetlight.
 */
#include<iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

void min_radius(vector<int>& houses,vector<int>& lights, int n){
    sort(houses.begin(),houses.end());
    sort(lights.begin(),lights.end());
    
    for (int i=0 ; i<=n ; i++){
        std::list<int> myList;
        for (int j=0;j<=n;j++){
            
            int dist=houses[i]-lights[j];
            myList.push_back(dist);
        }
        int min_dist=std::min(myList);

    }


}

int main(){
    vector<int> houses={2,3,6,4,5,9};
    vector<int> lights={1,3,4,5,6};
    int n= sizeof(houses)/sizeof(houses[0]);

    min_radius(houses,lights,n);
}