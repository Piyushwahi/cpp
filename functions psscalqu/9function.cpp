// same thing doing multiple times then create  a fuction    then call 
//void or int or char or float or bool nameoffunction(arguments int x int y){inside fucnt}  void means null means ki joo function uski value store nahi karta usa katham hona ak baad null 
// right way        return_type == data type ==void or int or char   
//int main sabsa phala yai function chalta hai only one time 
// 4point  int nameoffuunction(int= x){
//  return =kuch bhi jooo bhi value hai vo intger main return hogi agar function ka phala float hota to float main hoti }
// #include <iostream>
// using namespace std;
// void greetings(){
//     cout<<"hello  good morning"<<endl;
//     cout<<"have a nice day"<<endl;
// }
// int main(){
//     greetings();//function call 
//     greetings();

// }

//QUE2  SUM 
// #include <iostream>
// using namespace std;
// int sum(int x,int y){
//     return x+y;
// }
// int main(){
//     cout<<sum(4,5);//function call  intger value hogi bcoz function interger hai and return ka baad fuunction katham
// }


//INBUILD FUNCTION  and create min function
//min(x,y,z..),max(x,y,z...)  ADD #INCLUDE <cmath>    maths ka sqrt(7) include library of math 
// #include <iostream>
// #include <cmath>
// using namespace std;
// int mini(int x,int y){
//     int a;
//     if(x>y) a=y;
//     else a=x;
//     return a;
   
// }
// int main(){
//     int x,y;
//     cin>>x>>y;
//     cout<<mini(x,y)<<endl;//function call  my function 
//     cout<<min(x,y)<<endl;//inbuild function 
//     cout<<sqrt(7);// #INCLUDE <cmath>    maths ka sqrt(7)

// }
//permutation and combination  without function crete ncr;
// #include <iostream>
// using namespace std;
// int main(){
//     int n,r;
//     cout<<"enter the value of n and r";
//     cin>>n>>r;
//     int nfact =1;
//     for(int i =2;i<=n;i++){
//         nfact *= i;
//     }
//     int rfact =1;
//     for(int i=2;i<=r;i++){
//         rfact *= i;
//     }
//     int nrfact = 1;
//     for(int i =2;i<=(n-r);i++){
//         nrfact *=i;
//     }
//     cout<<nfact/(nfact-rfact)*rfact;
// }
//NOW WE CRETE A FUNCTION to calculate combination

// #include <iostream>
// using namespace std ;
// int fact(int x){
//     int a =1;
//     for(int i =2;i<=x;i++){
//         a *=i;
//     }
//     return a;
// }
// int final_ans(int n,int r){
//     int ans = fact(n)/(fact(n-r)*fact(r));//call ka inside calll 🫠
//     cout<<ans;
// }

// int main(){
//     int n,r;
//     cout<<"enter a value of n and r";
//     cin>>n>>r;
//     final_ans(n,r); //=== combination
// }
// GOOD QUE NO 3pascal triangle;
// #include <iostream>
// using namespace std;
// int  fact(int x){
//    int  a = 1;
//    for(int i =2;i<=x;i++){
//     a *=i;
//    }
//    return a;

// }
// int combination(int n ,int r){
//     int ans = fact(n)/(fact(n-r)*fact(r));
//     return ans;

// }
// i already know binomial therorem nCr+1 = ncr+1.(n-r)/(r+1) otherr wise we can do by using 
// and by using privious  value to get the nxt binomial value its 
// int main(){
//     int x;
//     cin>>x;
//     for(int i=0;i<=x;i++){
//         for(int j=0;j<=i;j++){
//             cout<<combination(i,j);
//         }
//         cout<<endl;

//     }
// }
//gg method 
// pascal triangle optimised method  is good for computer  maths  we already know
// this bbinomial formula nCr+1=nCr*(n-r)/(r+1)  now no need to create function 
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int k =1;k<=n-i;k++){
        cout<<" ";
    }
        int prev = 1;
        for(int j=0 ;j<=i;j++){
            cout<<prev<<" ";
            int ans = prev*(i-j)/(j+1);
            prev = ans; 
    
        }
        cout<<endl;
    }
}
//other method we can  do by using only ncr without spaces 

// how to check address of  int x = something     cout<<&x;


