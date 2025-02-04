//if que come in coding round  good this method and time complexi is same 2nd method
// #include <iostream>
// #include <vector>
// using namespace std ;
// void  sort01( vector<int>& a){
//     int n = a.size();
//     int no0 = 0;
//     int no1= 0;
//     for(int i = 0 ; i<n;i++){
//         if(a[i]==0) no0++;
//         else no1++;
//     }
//     for(int i = 0 ; i<n;i++){
//         if(i<=no0) a[i] = 0;
//         else a[i] = 1;
//     }
// }



// int main(){
//     vector<int> arr;
//     arr.push_back(0);
//     arr.push_back(1);
//     arr.push_back(1);
//     arr.push_back(0);
//     arr.push_back(1);
//     arr.push_back(0);
//     arr.push_back(0);
//     arr.push_back(1);
//     sort01(arr);
//     for(int i = 0 ; i<arr.size();i++){
//         cout<<arr[i];
//     }


// }
// 2n is time complex  2n if que said  do by only one loop then use two pointersss
// #include <iostream>
// #include <vector>
// using namespace std ;
// void  sort01( vector<int>& a){
//     int i = 0;
//     int j = a.size()-1;
//     while(i<j){
//         if(a[i]==0) i++;
//         if(a[j]==1){ 
//             a[j]=1;
//             j--;

//     } 
//         else {
//             a[j]==0;
//            int temp = a[i];
//             a[i] = a[j];
//             a[j] = temp;
//              j--;
//         i++;
//         }
       
//     }
// }
// int main(){
//     vector<int> arr;
//     arr.push_back(1);
//     arr.push_back(1);
//     arr.push_back(0);
//     arr.push_back(1);
//     arr.push_back(0);
//     arr.push_back(1);
//     arr.push_back(1);
//     arr.push_back(0);
//     sort01(arr);
//     for(int i = 0 ; i<arr.size();i++){
//         cout<<arr[i];
//     }


// }
// #include <iostream>
// #include <vector>
// using namespace std;
// void sort(vector<int>& a){
//     for(int i = 0 ; i<a.size();i++){
//         for(int j = i+1 ; j<a.size();j++){
//             if(a[i]>a[j]){
//                 int temp = a[i];
//                 a[i]= a[j];
//                 a[j]= temp;
//             }

//         }
//     }
// }
// int main(){
//     vector<int> arr;
//     arr.push_back(9);
//     arr.push_back(-1);
//     arr.push_back(0);
//     arr.push_back(-3);
//     arr.push_back(-4);
//     arr.push_back(6);
//     arr.push_back(2);
//     arr.push_back(-9);
//     sort(arr);
//     for(int i = 0 ; i<arr.size();i++){
//         cout<<arr[i];
//     }


// }
#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int>& a){
    int n = a.size()
    int low = 0;
    int med = n/2;
    int end = 
    for(int i = 0 ; i<a.size();i++){

           
 
        }
    }
}
int main(){
    vector<int> arr;
    arr.push_back(9);
    arr.push_back(-1);
    arr.push_back(0);
    arr.push_back(-3);
    arr.push_back(-4);
    arr.push_back(6);
    arr.push_back(2);
    arr.push_back(-9);
    sort(arr);
    for(int i = 0 ; i<arr.size();i++){
        cout<<arr[i];
    }


