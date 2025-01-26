//  CHECK store address in pointer right and wrong methodss
//int* ptr = array;// right 
// int * ptr  = &array; // this wrong 
//int * ptr = &array[0]; right 
// ⭐⭐  when we give address of array  to  pointer   which  addres addr    of first index  then pointer can access the value of full array  rata maar la bhai 
// ⭐ using pointer we can  modify the value  
// #include <iostream>
// using namespace std ; 
// int main(){
//     int array[4]= {2 ,3,5,1};
//     int *ptr = array; // store first index addres of array 
//     for(int i = 0 ; i<4;i++){
//         cout<<ptr[i]<<" ";
// or
// cout<<i[ptr]; also valid  
//     }
// }
//it can access intire array
// other way to print array 
 #include <iostream>
using namespace std ; 
int main(){
    int array[4]= {2 ,3,5,1};
    int *ptr = array; // store first index addres of array 
    for(int i = 0 ; i<4;i++){
        cout<<*ptr<<" ";
        ptr++;//  sequ main address hota hai  plus 4 int hai to remember 
    }
}
//after completing this just do  ptr = array bcoz last main ptr ka address change hogya to int * ptr koi fyda nhai hai iska fir   
