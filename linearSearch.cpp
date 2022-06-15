//
// Created by User on 1/15/2022.
//


#include "bits/stdc++.h"
using namespace std;

int containDuplicate(int arr[]){
  int flag=false;
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++) {
            if (arr[i] == arr[j]) {
                flag=true;
                cout << "yes";}
        }

    }

    if(!flag){cout<<"NO";}
}



int main(){


    int arr[]={2,3,5,2};
    int key=3;

    containDuplicate(arr);

}
