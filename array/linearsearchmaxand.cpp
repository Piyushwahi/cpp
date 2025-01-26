// QUE 1Wap to check number is present in arr or not by using boolean
//linear search 
// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"enter which number i want to find";
//     int x;
//     bool flag = false ; //means number is not present in my array 
//     // flag is check mark 
//     cin>>x; // i want to check this number in my array
//     int n;
//     cout<<"number of  array take from user ";
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int j = 0 ; j<=n; j++){
//         if(arr[j]==x){
//             flag = true;
//         }
//     }
//     if(flag == true) cout<<" yes number is present in my array";
//     else cout<<"no";
// }
//QUE2 wap   to check maximum number in my array
// #include <iostream>
// using namespace std;
// int main(){
//     int x ;
//     cout<<"array len";
//     cin>>x;
//     int arr[x];
//     for(int i = 1 ;i<=x;i++){
//         cin>>arr[i];
//     }
//     int max = arr[0];
//     for(int j = 0 ;j<x;j++){
//         if(max<arr[j]) max = arr[j];
//     }
//     cout<<max;


// }
// //QUE2 wap   to check mini number in my array
// #include <iostream>
// using namespace std;
// int main(){
//     int x ;
//     cout<<"array len";
//     cin>>x;
//     int arr[x];
//     for(int i = 1 ;i<=x;i++){
//         cin>>arr[i];
//     }
//     int min = arr[0];
//     for(int j = 0 ;j<x;j++){
//         if(min>arr[j]) min = arr[j];
//     }
//     cout<<min;


// }
// QUE3 2nd largest element in aarr   to check mini number in my array
#include <iostream>
#include <climitS>
using namespace std;
int main(){
    int x ;
    cout<<"array len";  
    cin>>x;
    int arr[x];
    for(int i = 1 ;i<=x;i++){
        cin>>arr[i];
    }
    int max = INT_MIN;// iska malab hai ki int ka inside sbsa small value hai 
    for(int j = 0 ; j<=x-1;j++){
        if(max<arr[j]){
        max = arr[j];
        }
    }
     int sndmax = INT_MIN; //smallest hai cpoy pen jinda baad 
    for(int k =0;k<=x-1;k++){
        if(sndmax!=max && sndmax<arr[k]){
            sndmax = arr[k];
        }

    }
    cout<<sndmax;

    



}
