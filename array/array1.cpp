// first day of dsa 
// array === list or == collection of similiar data type 
// syntax  and declaration
// int x[7]; // mem main 7 box bn ga aa int type ka ya declaration 0 1 2 3 4 5 6
//  index number in  start from 0 
// dont confuse this int x[7]; this is declaration  means  inside number is size
//x[3]= 5; this is initalizing the value of x at 2nd index number  or indexing  
// in array we can update the value also  x[3]= 7
// how we access the eleement in array  variablenameofarrya[num]
//code
//basic que 1 
// #include <iostream>
// using namespace std;
// int main(){
// //    ⭐ int arr[7];//declaration means create 7 box in mem arr can be any variable name  0 12 3 4 5 6 
// //    ⭐  arr[0]=4;  //index zero pay 4 value
// //    ⭐  arr[1]= 4;
//     // ....... time waste  we create a for loop or we can doo this 
//    int arr[7]= {1,2,3,4,5,6,7};// ⭐ int arr[x]= carly barackets other way 
//     cout<<arr[2];
// }
//PRINTING OUTPUT AND TAKING INPUT 
// #include <iostream>
// using namespace std;
// int main(){
//     int n; // how many input take from user 
//     cin>>n;
//     // int arr[7] = {5,6,2,4,6,7,9};  this fix lst
//     int arr[n]; //memory main  n boxes create hoga 
//     for(int i = 0 ;i<=n;i++){//n input done 
//         cin>>arr[i];
//     }

//     for(int i = 0 ;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// again repeat 
// int num[5]; = this size of  num  array 
// num[5]= 22;   index number  5 pay value 
// ⭐ if index number  out of range of arrays then error came from compiler
