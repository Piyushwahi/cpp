// compile time error   ex syntax error ( and run time  divide by zero  index out of bound 
// 1 function overloading and constructor  overloading 
// constructor overloading means same  class name sai  multiple constructor  bs parameter diff
// basically it is type of function but it has no return type  and automatically call hota hai 
//   agar muja 50 student ka data store karna hai to main againg c1.name = .... karu ga nooo
// #include <iostream>
// using namespace std ;
// class student{ // what is car it is user defind data type which stores  2 string and 2 int 
//     public:
//     string name;
//     int rollno;
//     float cgpa;

//     student(){
//     }
//     student(int a){
//     }
//     student(string s,int r){ 
//         name = s;
//         rollno = r;
//         // cgpa = g;
//     }

//     student(string s,int r, float g){
//         name = s;
//         rollno = r;
//         cgpa = g;
//     }
// };
// int main(){
//     student s2(4); 

//     student s1("piyush",2835); // ab s1 ka object bna ga 




// }
// function overloading  parmeter diff
#include <iostream>
using namespace std ;
class student{ // what is car it is user defind data type which stores  2 string and 2 int 
    public:
    void sum(string a , string b){
        cout<<a+b;
    }
    void sum(int a,int b){
        cout<<a+b;
    }

    void sum(int a ,int b ,int c)
};
int main(){
     





}

