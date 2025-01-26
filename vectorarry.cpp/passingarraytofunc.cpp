//⭐ in function array pass by value sai nahi pass by refrence sai jata hai means addres sai 
//⭐when  we give array  in function we are not giving array what we give addres
//modify the values
//int a[] is equivalent to int* a (i.e., it receives the address of the first element of the array).         
#include <iostream>
using namespace std ;
void display(int a[] , int size){ // int* a[] arlly int a  arr[5] vala hi array hai  dusra name hai bs refrence  sai ja raya 
    //  int sizer = sizeof(a)/sizeof(a[0]);  nxt line read
    for(int i = 0 ; i<=size-1; i++){//⭐first element ki basic paaay sabhi value acsess or update kar paa raha hai  int* pointer haii
        cout<<a[i]<<" ";
    }
    return;
}

void change(int arr2[]){ //int * arr2[]
    arr2[0] = 19;
}
int main(){
    int  arr[5]={ 1,3,4,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);//addres of first element of array ja raha hai iska matlab 
    change(arr);
    cout<<endl;
    display(arr,size);   
}
//size given hoga

