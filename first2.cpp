#include <iostream>
using namespace std; 
int main (){
    int arr[100]={1,2,3,4,5};
    int n=5; 
    int key=3; 
    int index=-1;
    bool found=false;
    for(int i=0;i<n; i++){
        if(arr[i]==key){
            index=i;
            found=true; 
            break; 
        }
    }
    if (found){
        cout << " element is present";
    }else{
        cout<<" element is not present ";

    }
    if(index==-1){
        cout <<" elment is not a present ";
    }else{
        cout << " element is present and index value is = "<< index; 
    }

    // first occurrence (liner)
    int arr2[100]={1,2,3,3,3,3,4,5};
    int n2=8; 
    int key1=3; 
    int index1=-1; 
    for(int i=0; i<n2; i++){
        if(arr2[i]==key){
            index1=i;
            break; 
        }
    }
    cout << " indexfirst = "<< index1; 
    //last occurrence ( liner)
    int last=0;

    for (int i=0; i<n2; i++){
        if(arr2[i]==key){
            last=i;
        }
    }
    cout<<" last ="<<last; 
    // count occurrence 
    int count=0; 
    for(int i=0; i<n2; i++){
        if(arr2[i]==key){
            count++;
           
        }
    }
    cout <<" count="<<count; 
return 0; 
    }