//
// Created by User on 1/28/2022.
//


#include "iostream"

using namespace std;



int getbit(int num,int pos){


    return (num & (1<<pos)!=0);
}
int setbit(int num ,int pos){

    return (num | (1<<pos));
}

int clearBit(int num,int pos){

    int mask=~(1<<pos);

            return (num & mask);
}


int updateBit(int num,int pos,int value){

    int mask=~(1<<pos);
    int n=num & mask;
    return (n |(value<<pos));
}

int main(){


    cout<<getbit(5,2)<<endl;
    cout<<setbit(5,1)<<endl;

   cout<<clearBit(7,2)<<endl;
    cout<<updateBit(7,2,1)<<endl;


}

