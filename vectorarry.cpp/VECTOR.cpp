// //vector   ==array ki replacement ka liya bnaya gya tha      dynamically array
// // ⭐ in array   one problem  array  size of array id fixed  int arr[5]  we add element in int arr[5] to int arry[6]
// // that why we use vector in aaray
// //syntax  vector<int> arr     <> angular brackets  insertion or exterstion  in vector we can add value inside 
// // basically vector ek new array bnata hai  or double capacity ka means 6 box intially after double 12 boxes
// //time consuming and  space  vector 
// // also include header file name #include <vector>
// //when size of vector full then vector  double his  size 
// #include <iostream>
// #include <vector>   //size zero hai abhi 
// using namespace std;
// int main(){
//     vector<int> arr; // no need to mention size of arr;
//     // inserting // input do not use square brakets when size is not given
//     arr.push_back(3);
//     cout<<arr.size()<<endl;
// // picha sai insert kardo array main nxt   first line arr.push_back(3) ka 1 capacity 2nd 2 box 3rd 3 size 
//     arr.push_back(5);
//     cout<<arr.size()<<endl;
//     cout<<"capacity  "<<arr.capacity()<<endl;
//     arr.push_back(9);
//     cout<<arr.size()<<endl;
//     arr.push_back(1);
//     cout<<arr.size()<<endl;
//     cout<<"capacity "<<arr.capacity()<<endl;
//     //use of capacity  its tell push_back sai   first  size insert  then 2nd  then double mean 4 space the 8  asa work karta hai  agar space hai to  vahi value chal jaya ki then not double 
//     //cout<<arr.capacity()<<endl;


//     // push back  check karta hai ki size zero hai to usa 1 bna data hai  2nd line  1 capacity ka array hai vo full hai  then us  double kardo
// // push back  currect box fill hai array ka  capacity double kardo now size is 4  push_back sai 3 size main value enter 
// //⭐if u want to update or access
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
// }
// // in  vector   give us  funtionality  of size to check the size of array 
// // syntax  cout<<arr.size()<<endl;


// //segmentation fault while doing this  array[6]ok  
// how to remove particular element in  vector array by using pop_back() if blank then last element pop

#include <iostream>
#include <vector>   //size zero hai abhi 
using namespace std;
int main(){
    vector<int> arr; // no need to mention size of arr;
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(1);
    arr.push_back(23);

    arr.pop_back();
//    size  also update  buttt capac        ity not changing  means i write  arr[3 ] it can print t
   for(int i =0;i<arr.size();i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"size is  "<<arr.size()<<endl;
   cout<<"capacity is "<<arr.capacity();

}