#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


//function to print the array//

void PrintArray(int *arr,int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

//function to swap the numbers in the original array itself//
void swap(int *a,int *b){
  int temp = *a;
  *a=*b;
  *b =temp;
}


//bubble sort implementation//
void bubbleSort(int *arr,int n){
  //flag used for optimization//
  bool isNotSwapped = true;

  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
          swap((arr+j),(arr+j+1));
            isNotSwapped = false;
        }
    }
    //if no swapping is done in the 1st cycle ,that means the array is already sorted so break;
    if(isNotSwapped){
      break;
    }
  }

}




int main(){
  int arr[]={2,3,1,6,2,9,0,11,19,200,1,0,0,0,100};
  int n = sizeof(arr)/sizeof(*arr);
  cout<<endl<<"The array before sorting ::::"<<endl;
  PrintArray(arr,n);
  cout<<endl<<"The  array After sorting ::::"<<endl;
  bubbleSort(arr,n);
  PrintArray(arr,n);
  cout<<endl;

}