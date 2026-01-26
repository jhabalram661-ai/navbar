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
    // even and odd
    int even =0; int odd=0; 
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout << " how much even =  "<< even <<endl;
    cout << " how much odd= " << odd << endl ;  
    // print a even and odd 
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            cout << " even index= "<< i << " ";
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            cout << " odd index = "<< i << " ";
        }
    }
    
    int positive =0; int negitive =0; 
    int arr2[100]={1,-1,2,3,-5,-3};
    int n2=6; 
    for(int i=0; i<n2; i++){
        if(arr2[i]>0){
            positive++;
        }else{
            negitive++;
        }
    }
    cout << " only positive number is = "<<positive; 
    cout << " only negitive number is ="<< negitive ;

    // print a positive and negitive 
    cout <<" this is a positive number "<<endl; 
    for(int i=0; i<n2; i++){
        if(arr2[i]>0){
            cout << i; 
        }
    }
    cout <<" this is a negivtive number "<<endl; 
    for(int i=0; i<n2; i++){
        if(arr2[i]<0){
            cout << i; 
        }
    }
       
       return 0; 
}