// hexdecimal no   total 16 no 0 to 9 and a to f
// 0 1 2 3 4 5 6 7 8 9 a b c d e f 
//int 4 bytes sai aga hota hai  bool /char 1 sai
// inp point 
// #include <iostream>
// using namespace std ;
// int main(){
    // int x = 5;
    // int* ptr = &x;       
    // ptr= ptr +1;
    // cout<<&x<<endl<<ptr; 
    //bool  exp
    // bool x = true;
    // bool * ptr= &x;
    // ptr = ptr +1;
    // cout<<&x<<endl<<ptr;
    //     }
//⭐jab x = x+1  karta hai to x main ek number add hota but  in case of pointer  main utna data type bits ki addition hota hai 
//jasa int ka 4 bytes  plus   means 08 hai last main 0c  8 to plus 4 kiya c aya ok hexdecimal number main 
//bool exp main data type ka 1 add hua byts
// #include <iostream>
// using namespace std ;
// int main(){
//     int x = 5;
//     int* ptr = &x;    
//     cout<<ptr<<endl;   
//     ptr= ptr +1;
//     cout<<&x<<endl<<*ptr<<endl;// what is this number  address main jo value  int hai to 4 bits ..add hu to kuch nahi hai add hona ka baad address pay kuch nahi hai   6422284 
//     //this is wrong 
//     // ya correct hai 
//     *ptr = *ptr +1; // == x = x+1 *ptr  fetch the value of x
//     //or
//     //(*ptr)++; //== x = x+1
//     cout<<x;
// } 