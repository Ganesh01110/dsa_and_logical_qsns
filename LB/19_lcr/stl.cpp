#include<iostream>
#include<array>
#include<vector>

using namespace std;

void basicArray(){
    int basic[]={1,2,3,4};
    int size=sizeof(basic)/sizeof(basic[0]);
    for(int i=0;i<size;i++ ){
        cout<<basic[i]<<" " ;
    }
    cout<<endl;
}
void Arraystl(){
    array<int , 5> a={1,2,3,4};

    int size=a.size();
    for(int i=0;i<size;i++ ){
        cout<<a[i]<<" " ;
    }
    cout<<endl;
    cout<<"element at 2nd index"<<a.at(2)<<endl;
    cout<<"empty or not->"<<a.empty()<<endl;
    cout<<"front element :"<<a.front()<<endl;
    cout<<"back element :"<<a.back()<<endl;
}
void Arrayvector(){ 
    vector<int> v;
    vector<int> a(5,1);
    // if size is known previously and want to initialize every place with a specific number (here 1);
    cout<<"inside vector a :"<<endl;
    for(int i:a){
        cout<<i<<" " ;
    }

    cout<< v.size()<<endl;
    cout<< v.capacity()<<endl;

    v.push_back(1);
    cout<<"cap->"<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"cap->"<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"cap->"<<v.capacity()<<endl;
    cout<< "size->"<<v.size()<<endl;
    
    cout<<"front element :"<<v.front()<<endl;
    cout<<"back element :"<<v.back()<<endl;

    cout<<"before pop:"<<endl;
    for(int i:v){
        cout<<i<<" " ;
    }
    cout<<endl;
    v.pop_back();
    cout<<"after pop:"<<endl;
    for(int i:v){
        cout<<i<<" " ;
    }

    // clear function makes size null not capacity
    cout<<"size before clear:"<<v.size()<<endl;
    cout<<"cap before cler->"<<v.capacity()<<endl;
    v.clear();
    
    cout<<"cap after cler->"<<v.capacity()<<endl;
    cout<<"size after clear:"<<v.size()<<endl;

}

int main(){
    basicArray();
    Arraystl();
    Arrayvector();
    return 0;
}