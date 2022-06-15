//
// Created by User on 2/1/2022.
//

#include<iostream>
using namespace std;


void pattern2(int row,int col){

    for(int i=row;i>0;i--){

        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<"\n";
    }


}

void pattern3(int n){


    for(int i=0;i<n;i++){

        for(int j=0;j<n;i++){


            (j<n-i)?cout<<" ":cout<<"*";
        }

    }


}



void pattern4( int n){


    for(int i=n;i>0;i--){


        for(int j=1;j<=i;j++){
            cout<<j;
        }

        cout<<"\n";

    }

}

int main(){


//
//    int row,column;
//
//
//    cin>>row>>column;
//
////for loop
//    for(int i=0;i<row;i++){
//
//        for(int j=0;j<column;j++){
//            cout<<"*";
//        }
//        cout<<"\n";
//    }
//cout<<"\nWHile loop\n";
//
//
////while loop
//    int i=0;
//    while(i<row){
//        int j=0;
//        while (j<column){
//
//            cout<<"*";
//            j++;
//        }
//        cout<<"\n";
//        i++;
//
//    }
//
//
//    pattern2(row,column);
//
//    pattern3(column);
    pattern4(5);

}
