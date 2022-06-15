#include <iostream>
using namespace std;

void pattern1(int n){


    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            if((i+j)%2==0){

                cout<<"1";
            }
            else{cout<<"0";}

        }
        cout<<endl;
    }
}


int main(){

    int row,col;



    cin>>row>>col;

    for(int i=0;i<row;i++){

        for(int j=0;j<col;j++){

            if(i==0 ||i==row-1 ||j==0 ||j==col-1){

                cout<<"*";
            }

            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }


    pattern1(5);

}