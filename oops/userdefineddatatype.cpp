#include <iostream>
using namespace std;
class vector{
    public:
    // int size = 0 ; //we cannot do this 
    int size ;  
    int capacity ;
    int* arr ;
    vector(){//default constructor 
        size = 0;
        capacity= 1;
        arr = new int[1];
    }
    int add(int a){
        if(size == capacity){
            capacity *= 2;
            int * arr2 =  new int[capacity];
            for(int i = 0 ; i<size;i++){
                arr2[i] = arr[i];
            }
        arr = arr2;
        }
        arr[size++] = a;
    }
    void print(){
        for(int i = 0 ; i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
    void  get(int idx){
        if(idx>=size || idx==0 || idx<=0){
            cout<<"index out of range ";
            // return -1;
        }
        cout<<arr[idx];
        cout<<endl;
        
    }
    void  remove(){
        size--;
    } 
   
};
int main(){
    vector v;
    v.add(10);
    v.print();
    v.add(9);
    v.print();
    v.add(7);
    v.print();
    v.get(2);
    v.remove();
    v.print();


    

    




}