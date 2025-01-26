#include <iostream>
#include <vector>  
using namespace std;
int main(){
    int sizee;
    cout<<"enter the size of array";
    cin>>sizee;
    vector<int> arr(sizee);
    //output,input and update we can also use (at)   how let see   arr[i]== arr.at(i)
    for(int i = 0 ; i<arr.size();i++){
        // cin>>arr[i];
        cin>>arr.at(i);
    }
    // update
    arr.at(3)= 9;
    for(int i = 0 ; i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
    //⭐sorting an array  syntax  vector ka funtion hai again telling uuuu
    sort(arr.begin(),arr.end());  //it is only valid for  given sort 
    for(int i = 0 ; i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;


}