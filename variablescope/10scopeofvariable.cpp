//function ka outside variable chl jata hai  voo but vo globe variable hona chiya 
// when int declare inside then    uska scope uska inside ka {{ tak hai }}
//if declare the function value inside the fucntion   that  called default argumewnt  if we dont  write in function() then it alwys take its default value  if write then it update the default valyue and change 
//only one argument only first change  fun(4)  default value 2    3 float hai to vo bhi first vala ko jaya ga 
//default value dani hai to sab ko doo varna na doo kisi ko  rule   
// 1CREATE A FUNCTION  TO COMPUTE GREATEST COMMON DIVISIOR  in recurion more  optimise
//😒hcf max value dona ka min hoga  not best method but get ans 
// local variable priority>globle variable
// #include <iostream>
// using namespace std ;
// int gcd(int a , int b){
//     int c = 1 ;
//     // optimised for computer
//     // for(int i = min(a,b); i>=1;i--){ //hcf highest  value 
//     //     if( a%i==0 && b%i==0){
//     //         c= i; 
//     //         break;
//     //     } 
        
//     // }
//     // return c;
//     // not eefficiant 
//     for(int i = 1; i<=min(a,b);i++){
//         if( a%i==0 & b%i==0){
//             c=i;
//         } 
        
//     }
//     return c;
// }

// int main(){
//     int a ;                                                         
//     cout<<"enter the value of a";
//     cin>>a;
//     int b;
//     cout<<"enter the value of b";
//     cin>>b;
//     cout<<gcd(a,b);
// }
// QUE 2print factorial of nth no  not optimise 
// #include <iostream>
// using namespace std ;
// // int fact(int x){
// //     int a = 1;
// //     for(int i = 2;i<=x;i++){
// //         a *=i;
// //     }
// //     return a;
// // }
// // int main(){
// //     int n;
// //     cout<<"enter   value";
// //     cin>>n;
// //     for(int i = 1; i<=n;i++){
// //          cout<<fact(i)<<endl;

// //     }
// // }
// //😒 efficiant method
// int main(){
//     int n;
//     cout<<"enter   value";
//     cin>>n;
//     int ans = 1;
//     for(int i = 1;i<=n;i++){
//         ans *=i;
//         cout<<ans<<endl;

//     }
// }
//  que 3  swap 2 numbers take extra variable 1method
// #include <iostream>
// using namespace std ;
// int main(){
//     int a ,b;
//     cin>>a>>b;   
//     int temp = a;
//     a = b;
//     b = temp;
//     cout<<a<<" "<<b; 
// }
// NOW  DO WITH NO EXTRA VARIABLE 
//same que 
// #include <iostream>
// using namespace std ;
// int main(){
//     int a ,b;
//     cin>>a>>b;
//     //remember this formula ; 
//     a =  a+b;
//     b = a-b;
//     a= a-b;
//     cout<<a<<" "<<b; 
// }
//other method to do this createa function then take vew2
// #include <iostream>
// using namespace std;
// void swap(int a,int b){
//     int temp = a;
//     a = b;
//     b = temp;
//     cout<<a<<" "<<b;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     swap(a,b);
// }

            
