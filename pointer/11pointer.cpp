// imp  1byte = 8bits     8bytes main kitna store kar skta hai  2power8= 256    and 1 kb = 1024bytes      int ocuppied 4 byte    and char = 1 bytes  
// sizeof use to check bytes
// #include <iostream> 
// using namespace std;
// int main(){
//      cout<<sizeof(char);
// }
// now mean   = address of variable 
// #include <iostream> 
// using namespace std;
// int main(){
//     int x;
//     cout<<&x; // 0x61ff0c what is this this addres of  x  store in mem   and operator to get addressof variable 

// }
// 3  a way to store address means pointer   and pointer ka inside only address hi store hoga hor kuch nahi  means value nahi    
//POINTER ==) DATA_TYPE* POINTERNAME
// 🥶now pointer introoo important  int* and int and char* this are also data types
// #include <iostream> 
// using namespace std;
// int main(){
//     // int x;
//     // int* /* or  int *p */  p = &x;  //pointer kasa bnata hai int,float... ka aga star space variable name = & variable .. p variable main x ka address store kardiya
//     // cout<<&x<<endl<<p;//same address pointer ka kud ka bhi address hoga 
//     // or
//     bool x= true;
//     bool *p = &x;
//     cout<<&x<<endl<<p;
//     // que is address ka kya karu main

// }
// 🥶DEREFRENCE operator == *STAR OPERATOR YYAAAD    good ffor acessing value 
//key line ⭐⭐kisi pointer variable ka aga star * lga hai means pointer ka inside jo address hai uska  address pey jao  uski value  cout kara do for example 
// #include <iostream>
// using namespace std;
// int main(){
//     int x =12;
//     int* p = &x;
//     cout<<*p;//read key line 
// }     
//⭐with the help of derefrence  means star operator we can  update the value 
// how 
// #include <iostream>
// using namespace std;
// int main(){
//     int x =12;
//     int* p = &x; //ya to pointer create hua hai na  tabhi star hai phala 
//     cout<<x<<endl;
//     *p =4;  //again  dak yaar  derrefrence ka matlab hai ki pointer ka phala star lga hai meansjo pointer ka inside address hai  uska pey jao uski value  update kardo now value is 4 
//     cout<<x;
//     // image =c:\Users\piyus\OneDrive\Pictures\Screenshots 1\Screenshot 2025-01-16 234411.png

// }   
//❔ que write prg to add two numbers by using pointers
// #include <iostream>
// using namespace std;
// int main(){
//     int x =12;
//     int* p = &x; //ya to pointer create hua hai na  tabhi star hai phala
//     int y = 14;
//     int* p2= &y; 
//     cout<<*p+*p2;
// } 
// ⭐key point we can also take input with the help of pointer how see   
// #include <iostream>  
// using namespace std;
// int main(){ 
//     int x ;
//     cout<<"enter the value of x";
//     int* p = &x;
//     cin>>*p; //== cin>>x;  *p == jo pointer ka inside address hai uska inside jao  uka input laaoooo
//     int y ;
//     cout<<"enter the value of y";
//     int* p2= &y; 
//     cin>>*p2; //==cin>>y;
//     cout<<*p+*p2;
// } 


//SYNTAX OF POINTER 
// int* p1,p2;   p1 is an int pointer  ans p2 is only  int  or non pointer  remember
// int  *a,b ;   a is an int  pointer hai   and b int hai  
//🫠 NEW TOPIC  PASS BY VALUE PASS BY REFRENCE

// pass by valyue main sirf value pass hoti hai 
// 🫠🫠😊 
// #include <iostream>
// using namespace std ;
// void swap(int* x,int* y ){ // two pointer ka box bna diya      abbbbb x pointer hai ab usa x only likh skta hai 
//     int  temp = *x; //  fetch the value of x  by using derefrence operator   ==n*pointer variable name 
//     *x = *y;  //x ki ja y ki valluue dall doo 
//     *y = temp;
//     return ;
// }
// int main(){
//     int a ,b;
//     cin>>a>>b;
//     swap(&a,&b);
//     cout<<a<<" "<<b; 
// }
// understand line by line   explain
//  1   int main  a ,b input  then  swap ka inside address of a and b  aga fuction ko call gai   and address x , y pointer main store hogya 
//  2 swap(pointer x, pointer y ) then temp  variable  inside derefrence =*pointer == pointer ka inside jo address hai us pay jao and uski value dall do  simple temp main a dall diya 
// *x derefrence  main *y pointer ka inside jo address hai us pay jao and uski value dall do now b x main dall diya  kis main a main smja kuch 
// *y same is main temp dal diya ok  then return kar di a and b by using swap or two no by using pointer 
// see c:\Users\piyus\OneDrive\Pictures\Screenshots 1\Screenshot 2025-01-17 220453.png
// 
// pass by refrence  means address ka sathsasta vala😊 explaination is not logical of this one 
#include <iostream>
using namespace std ;
void swap(int &x,int &y ){   //a and b ka adddress dall diya in main or pass by refrencex       
    int  temp = x;  //isma value incha vala a ki agi okkk samj looooo address sai
    x = y;   
    y = temp;
    return ;
}
int main(){
    int a ,b;
    cin>>a>>b;
    swap(a,b);  
    cout<<a<<" "<<b; 
}




 

