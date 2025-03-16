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
//  #include <iostream>
// using namespace std ; 
// int main(){
//     int array[4]= {2 ,3,5,1};
//     int *ptr = array; // store first index addres of array 
//     for(int i = 0 ; i<4;i++){
//         cout<<*ptr<<" ";
//         ptr++;//  sequ main address hota hai  plus 4 int hai to remember 
//     }
// }x   
//after completing this just do  ptr = array bcoz last main ptr ka address change hogya to int * ptr koi fyda nhai hai iska fir   
//  nxt permutation pevit indx if my left element is smaller than right one   lift one samll then pevit idz=x write  pevit index left one   
//que  class of student  with charaterstic with branch  name rooll no marks input   function first input  avg marks of student 3rd grade of student  print the details updATE the name of student  choice  input  by using switch  case 
#include <iostream>
using namespace std ; 
class studentdata
{
    int n = 5 avg,sum;
    char grade;
    int arr[5]
    public:
    void getdata(int arr[n]);
    void calculate_avg();
    void calculate_grade();
    void print();
};
void studentdata::getdata(int arr[n] ){
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
}
void studentdata::calculate_avg() {
sum = 0;
for (int i = 0; i < n; i++) {
    sum += arr[i];
}
avg = sum / n;
}
void studentdata::calculate_grade(){
    if(avg>90) grade = 'A';
    else if(avg>80) grade = 'B';
    else if(avg >50) grade = 'c';
    else  grade = 'd';
    cout<<endl;
}
void studentdata::print(){
    cout<<"avg=="<<avg<<endl;
    cout<<"grade=="<<grade<<endl;
    
}

int main(){
    studentdata d;
    d.getdata(n);
    d.calculate_avg();
    d.calculate_grade();
    d.print();
}





 















