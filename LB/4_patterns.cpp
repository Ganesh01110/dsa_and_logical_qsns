#include <streamio.h>

using namespace std;

// * * *
// * * *
// * * * row=col
void RowColPattern{
    int num =5;
    int i=0;
    while( i<num){
        int j=0;
        while(j<num){
            cout<< "* "<< endl;
            j=j+1;
        }
        i=i+1;
    }
}

// * 
// * * 
// * * * 
void upTrianglePattern{
    int num =5;
    int i=0;
    while( i<num){
        int j =0;
        while(j<=i){
            cout<< "* "<< endl;
            j=j+1;
        }
        i=i+1;
    }
}


int main{
  RowColPattern();
  upTrianglePattern();
}