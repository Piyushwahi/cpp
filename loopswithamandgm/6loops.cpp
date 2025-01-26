// loop when we need  to write statement multiple times 
// #include <iostream>
// using namespace std;
// int main(){
//     // format for(ex  int  start; end; incrementex i++){  code which i write    }
//     //int i declare intial bcoz other it is only valid inside for loop not for outer 
//     int n; //  value of n = no of times iterate
//     cin>>n;
//     int i ;
//     for(i=1; i<=n;i++){
//         cout<<"u are great \n";

//     }
//     cout<<i; // last value of i is 9  if i take input 8 
// }    
// WAP TO PRINT EVEN NO 
// #include <iostream>
// using namespace std;
// int main(){
//     int n; //  value of n = no of times iterate
//     cin>>n;
//     int i ;
//     for (i= 1; i<=n; i++){
//         if (i%2==0){
//             cout<<i<<endl;
//         }
//     }
// }
// not giving condition just increiment by 2  solve done 
// WAP TO WRITE TABLE OF 19 
// #include <iostream>
// using namespace std;
// int main(){
//     int i ;
//     for (i= 1; i<=10; i++){
//        cout<<i*19<<endl;
//     }
// }
// WAP que hai ya ......  ... AP  1,3,5,7,9,.....n   nth term of ap is  a+n(n-1)d
// #include <iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout<<"enter a value ";
//     cin>>n;
//     int i;
//     for (i = 1; i <= (2*n-1); i += 2  ){
//         cout<<i<<" " ;
//     }
// }
// //  without ap we can also solve by asssig value any ap  and gp i can  print just change for loop run n times ans just assig that differencw
// wap ........ gp 1 3 9 27 ...  common ratio i know    an = a*r(n-1) pta hai baaa
// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"enter a value";
//     int x;
//     cin>>x;
//     int i;
//     int a = 1;
//     for(i = 1;i<=x;i++){
//         a = a*3;
//         cout<<a<<endl;
//     }

// }
// wap ........ ap=0,97,94,91 write  n term is not give but condition is  last digit is positive  formula  means an>0   an = a +n-1d to getn =  34  and value is 1
// #include <iostream>
// using namespace std;
// int main(){
  
//     int i ;
//     for(i= 100 ; i>=1; i= i-3){
//         cout<<i<<endl;
// }
// IF I DONT KNOW  LOGIC THEN same que 100
// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     int a =100;
//     int i;
//     // for(i=1 ;a>0 ; i++ ){  no need to give start intial 0 and increment 1 
//     for( ;a>0 ;  ){ 
//         cout<<a<<endl;
//         a = a-3;
//     }


// }
// WHILE LOOP   intializing  bhar karni hoti hai imp intializing  and  inside while loop only condition  increment decrement in body 
// use when don,t know increment decrement condition then use while ok  ajiiib si condition  both same
// #include <iostream>
// using namespace std;
// int main (){
//     // int i = 0 ;
//     // for(; i<=10; i++){
//     //     cout<<i<<endl;
//     int i = 0;
//     while(i<=10){
//         cout<<i<<endl;
//         i++;


//     }

//     }
// GARBAGE VALUE IN CPP apni taraf sai 
// #include <iostream>
// using namespace std;
// int main(){
//     int j ;
//     cout<<j;
// }
// DO-WHile loop  use less ek to code  then condition  run hoga  syntax do{code} while(condition)
// #include <iostream>
// using namespace std;
// int main(){
//     int i= 11 ;
//     do{
//         cout<<i<<endl;
//         i++;
//     }
//     while(i<=10);
// }
// print alphabet with there aciee value 
// #include <iostream>
// using namespace std;
// int main(){
//     int i= 65 ;
//     for(;i<=90;i++){
//         cout<<(char(i))<<" "<<i<<endl;
//     }
// }
//INFINITE LOOP 
// #include <iostream>
// using namespace std;
// int main(){
//     while('a'<'b'){ //  ya pay a nahi hai uski asceii value hai a = 97 < b = 98 always so infite loop 
//         cout<<" my self piyush ";
//     }
// }
// if carly bracket are not present then means uska nxt line hi block ki uska nxt vali nahi hai 
// t/=2 means t = t/2




