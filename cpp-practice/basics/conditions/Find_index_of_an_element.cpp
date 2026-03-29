#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  
  for(int i =0;i<n;i++){
    cin>>arr[i];
  }
  int target;
  cin>>target;
   int index = -1;
   for(int i =0;i<n;i++){
     if(arr[i]==target){
       index = i;
       break;
     }
   }
   if(index != -1){
     cout<<index;
   }else{
     cout<<"-1";
   }
  return 0;
}