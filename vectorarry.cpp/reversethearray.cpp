//reverse the array
// #include <iostream>
// #include <vector>  
// using namespace std;
// int main(){
//     int sizee;
//     cout<<"enter the size of array";
//     cin>>sizee;
//     vector<int> arr(sizee);
//     for(int i = 0 ; i<arr.size();i++){
//         cin>>arr[i];
//     }
//     //ya tak mara ek array complete hogya hai  now create new to store reverse order 
//     vector<int> arr2(arr.size());
//     int a = 0;
//     for(int j = arr.size()-1;j>=0;j--){
//         arr2[a]= arr[j];
//         a++;
//     }
//     for(int i = 0 ; i<arr.size();i++){
//         cout<<arr2[i]<<" ";
//     }
// }

//without using extra array
// #include <iostream>
// #include <vector>  
// using namespace std;
// int main(){
//     int sizee;
//     cout<<"enter the size of array";
//     cin>>sizee;
//     vector<int> arr(sizee);
//     for(int i = 0 ; i<arr.size();i++){
//         cin>>arr[i];
//     }
//     // int j = arr.size()-1;     
//     // for(int i = 0 ; i<=j;i++){
//     //new   method j--
//     for(int i = 0, j = arr.size()-1;i<=j;i++,j--){ // we can give multiple  variable in my arry
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp ;
        
//     }
//     for(int i = 0 ; i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }

// 3rd method  using inbuid function  reverse(arr.begin(),arr.end())
