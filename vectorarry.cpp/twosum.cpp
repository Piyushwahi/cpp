// //que 1 finding the  same element from last  print index of same  number 
// #include <iostream>
// #include <vector>
// using namespace std ;
// int main(){
    
//     vector<int> arr ;
//     arr.push_back(3);
//     arr.push_back(6);
//     arr.push_back(3);
//     arr.push_back(1);
//     arr.push_back(0);
//     arr.push_back(6); 
//     int x;
//     cout<<" enter the value of x which last element  index print ";
//     cin>>x;
//     int last_index = -1;
//     // for(int i = 0 ; i<arr.size();i++){
//     //     if(x==arr[i]) last_index = i ;
//     // }
//     // cout<<last_index;
//     // this method is timeconsuming  we starts from last last element is my that index yup 
//     for(int i = arr.size()-1 ; i>= 0;i--){
//         if(x==arr[i]) last_index = i ;
//         break;
//     }
//     cout<<last_index;
    
// }
//two sum
// #include <iostream>
// #include <vector>
// #include <cmath> pow 
// using namespace std;
// int main(){
//     vector<int> arr  ;
//     int x;
//     cout<<"size of array";
//     cin>>x;
//     for(int i = 0 ; i<x;i++){
//         int p;
//         cin>>p;
//         arr.push_back(p);
//     }
//     int target;
//     cin>>target;
//     for(int i = 0 ; i<arr.size()-1;i++){
//         for(int j = j+1 ; j<arr.size()-1;j++){
//             if((arr[i]+arr[j])==target)cout<<"["<<i<<","<<j<<"]";
//         }
//     }}

// unique elemnt chindi que
// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;
// int main(){
//     vector<int> arr  ;
//     int x;
//     cout<<"size of array";
//     cin>>x;
//     for(int i = 0 ; i<x;i++){
//         int p;
//         cin>>p;
//         arr.push_back(p);
//     }
//     for(int i = 0 ; i<arr.size();i++){
//         for(int j = i+1 ; j<arr.size();j++){
//             if(arr[i]==arr[j]){
//             int temp = arr[arr.size()-1];
//             arr[arr.size()-1] = arr[j];
//             arr[j]= temp;
//             arr.pop_back();
//             }
//         }
//     }
//     for(int i = 0 ; i<arr.size();i++){
//         cout<<arr[i]<<" ";
        
//     }
    
// }

// remove particular element from my arry 
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int size ;
//     cout<<"size of array";
//     cin>>size;
//     int arr[size];
//     for(int i = 0 ; i<size;i++){
//         cin>>arr[i];
//     }
//     int remove;
//     cout<<"which element i want to remove from array ";
//     cin>>remove;
//     for(int i =0;i<size;i++){
//         if(arr[i]==remove){
//             int temp = arr[size-1];
//             arr[size-1] = arr[i];
//             arr[i]= temp;
//         }
//     }
//     for(int i =0;i<size-1;i++){
//         cout<<arr[i]<<" ";
//         }
//     }
// ezy way to do by pop

    