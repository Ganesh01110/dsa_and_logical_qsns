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
 
// 1 2 3
// 1 2  
// 1 
void downNumTrianglePattern(){
    cout<< "____________"<<endl;
    int num =5;
    int i = num;
    while( i>0){
        int j = 1;
        while(j<=i){
            cout<< j << " " ;
            j=j+1;
        }
         cout<< endl;
        i=i-1;
    }
}

// 1
// 2 3  
// 4 5 6
void upcountTrianglePattern(){
    cout<< "____________"<<endl;
    int num =5;
    int i = 1;
    int count =1;
    while( i<=num){
        int j = 1;
        while(j<=i){
            cout<< count << " " ;
            count++;
            j=j+1;
        }
         cout<< endl;
        i=i+1;
    }
}

// 6
// 5 4  
// 3 2 1
void downcountTrianglePattern(){
    cout<< "____________"<<endl;
    int num =5;
    int i = num;
    int count =(num*(num+1))/2;
    while( i>=0){
        int j = 1;
        while(j<=i){
            cout<< count << " " ;
            count--;
            j=j+1;
        }
         cout<< endl;
        i=i-1;
    }
}


int main() {
   rowColPattern();
   upTrianglePattern();
   downTrianglePattern();
   upNumTrianglePattern();
   downNumTrianglePattern();
   upcountTrianglePattern();
   downcountTrianglePattern();

  return 0;
}