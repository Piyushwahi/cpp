//⭐ vector are passed by value and each time  u pass new vector created 
//⭐can we pass vector as pass by refrence yesssss how  by using & = ampercant oprator
// after write <int>&  its change value to refrence ok    


#include <iostream>
#include <vector>
using namespace std ;
void display(vector<int> a ){ // now intial vector 1,3,4,6,8, hai ya pa bhi vector hi bnana para ga na  vector ko vector hi accept kara ga naa
    for(int i = 0 ; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
    
    }
void change(vector <int> &c){ // pass by refrence hai 
    c[0] = 19;
    for(int i = 0 ; i<c.size(); i++){//⭐first element ki basic paaay sabhi value acsess or update kar paa raha hai  int* pointer haii
        cout<<c[i]<<" ";
    }
}
int main(){
    cout<<endl;
    vector<int> arr ={ 1,3,4,6,8};
    // int size = sizeof(arr)/sizeof(arr[0]); no neeed bcoz we have some function in vector like sort or array.size()
    display(arr);//addres of first element of array ja raha hai iska matlab 
    change(arr);
    cout<<endl;
    display(arr);   //final 
}
//size given hoga