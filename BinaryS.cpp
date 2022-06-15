#include <bits/stdc++.h>
#include <utility>
using namespace std;

// int binarSearch(int arr[],int n,int key){


// int start=0;
// int end=n-1;
// int mid=start+(end-start)/2 ;

// while(start<=end){

//   if(arr[mid]==key){
//       return mid;
//   }

//  else if(arr[mid]>key){
//     end=mid-1;
//  }
// else{
//     start=mid+1;
// }


// mid =start+(end-start)/2;

// }


// }

int firstOcuucrance(vector<int>&arr,int key){

int start=0;
int end=arr.size()-1;
int mid=start+(end-start)/2 ;
int ans=0;
while(start<=end){

  if(arr[mid]==key){
      ans=mid;
      end=mid-1;
  }

 else if(arr[mid]>key){
    end=mid-1;
 }
else{
    start=mid+1;
}


mid =start+(end-start)/2;

}
return ans;



}



int lastOcuucrance(vector <int>&arr,int key){

int start=0;
int end=arr.size()-1;
int mid=start+(end-start)/2 ;
int ans=0;
while(start<=end){

  if(arr[mid]==key){
      ans=mid;
      start=mid+1;
  }

 else if(arr[mid]>key){
    end=mid-1;
 }
else{
    start=mid+1;
}


mid =start+(end-start)/2;

}
return ans;



}
    
    
pair<int,int> searchRange(vector<int>& nums, int target) {
    
    pair<int,int> p;
    
    p.first= firstOcuucrance(nums,target);
    p.second=lastOcuucrance(nums,target);
     
    return p;
        
}

int main(){
 
 vector <int> odd;
 odd={1,2,3,3,3,4,5,7};

cout<<searchRange(odd,3);



}