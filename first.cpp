#include <iostream>
using namespace std; 
int main (){
    int n=5; 
    int arr[100]={1,2,3,4,5};
    //sum of array
    int sum=0; 
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    cout << " sum of array = "<< sum << endl ; 
    //maximum of array 
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout << " max element = "<< max<< endl; 
    // minimum of array 
    int min = arr[0];
    for(int i=1; i<n; i++){
        if( arr[i]<min){
            min=arr[i]; 
        }
    }
    cout<< " minimum of array = "<< min<< endl; 
    //revers of array 
    int start=0; int end =n-1; 
    while (start<=end){
        int temp =arr[start];
        arr[start]=arr[end];
        arr[end]= temp;
        start++;
        end--;

    }
    //print of revers of arrary
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    return 0; 
}