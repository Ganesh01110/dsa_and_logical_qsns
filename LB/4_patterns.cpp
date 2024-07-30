#include <iostream>

using namespace std;

// * * *
// * * *
// * * * row=col
void rowColPattern(){
    int num = 5;
    int i=0;
    while(i < num){
        int j=0;
        while(j<num){
            cout<< "* ";
            j=j+1;
        }
        cout<< endl;
        i=i+1;
    }
}

// * 
// * * 
// * * * 
void upTrianglePattern(){
     cout<< "____________"<<endl;
    int num =5;
    int i=0;
    while( i<num){
        int j =0;
        while(j<=i){
            cout<< "* ";
            j=j+1;
        }
         cout<< endl;
        i=i+1;
    }
}


// * * *
// * * 
// *  
void downTrianglePattern(){
    cout<< "____________"<<endl;
    int num =5;
    int i = num;
    while( i>0){
        int j = 0;
        while(j<i){
            cout<< "* ";
            j=j+1;
        }
         cout<< endl;
        i=i-1;
    }
}

// 1
// 1 2  
// 1 2 3
void upNumTrianglePattern(){
    cout<< "____________"<<endl;
    int num =5;
    int i = 1;
    while( i<=num){
        int j = 1;
        while(j<=i){
            cout<< j << " " ;
            j=j+1;
        }
         cout<< endl;
        i=i+1;
    }
}


int main() {
   rowColPattern();
   upTrianglePattern();
   downTrianglePattern();
   upNumTrianglePattern();

  return 0;
}