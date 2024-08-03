#include<iostream>
using namespace std;

void printingIntarray(int arr[] , int size){
    
    for(int i=0 ;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"printing done of int array"<<endl;
}

void swapalt(int arr[],int size){
    cout<<"inside function"<<endl;
    printingIntarray(arr,size);
   
   for(int i=0; i<size; i+=2){
    if(i+1 < size) {
     swap(arr[i],arr[i+1]);
    }
   }

   cout<<"after swap function"<<endl;
   printingIntarray(arr,size);
}

int main(){
    int arr[]={1,2,5,8,9,70,43};
    int size= sizeof(arr)/sizeof(arr[0]);
    swapalt(arr,size);

    int arr2[]={4,5,7,8,9,99};
    int size2= sizeof(arr2)/sizeof(arr2[0]);
    swapalt(arr2,size2);

    return 0;
}