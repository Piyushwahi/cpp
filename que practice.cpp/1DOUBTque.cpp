//  I need to constrain  decimal number 
//then i #include <iomanip>
// example cout<<fixed<<setprecision(9)<<d // setprecision mean  after point 9 decimal write




//QUE1
// #include<iostream>
// using namespace std;    
// int main(){
// float  x = 2/7;  //  COMPUTER READ INT INT  2 and 7 are integer after result its come in flost 0   if i will  be give 7.0 then it willl take as integer 0.2873
// cout<<x;

// QUE 2
// #include<iostream>
// using namespace std;    
// int main(){                    
//     // indentation matters don,t forget and 
//     int x =5;
//     int y = 6;
//     cout<<x/y;}ans greatest interger ay ga 

// QUE 3 
// #include<iostream>
// using namespace std;    
// int main(){   
//     // computer read code line wise line 
//     int x = 5;
//     x++;        // post increment hai but  kuch cahnge hai  copy ...
//     cout<<x;
//     x--;
//     cout<<x;
//     ++x;    // PRE MEANS PHALA INCRE THAN PRINT SEE IN NXT EXPLE
//     cout<<x;
//     --x;
//     cout<<x;
// }
// divident = divisor*quOTIENT + remainder   then  equate r   [ remainder  properties  a%b =  (a)% (-b) =  a]
// basic artha=metic and other operation write in copy
// QUE4
// #include<iostream>
// using namespace std;    
// int main(){
//     int x = 5;
//     cout<<x++<<endl; // post increment  phala print then incriment
//     cout<<x<<endl;
//     cout<<--x;    // work  hona ssai phala in increment kar dooo }
// QUE5
// #include<iostream>
// using namespace std;    
// int main(){
//     cout<<4/5  <<"\n" ;  
//     cout<<4/5.0<< endl; 
//     cout<<4.0/5;




// }
//// ans 1 = 0  ans2 = 1 1   ans3 = 2
//QUE6
// 6wap to fin volume of cylinder is h and r take input
// again oi forget how to power take in cpp ^ not ** ** in py not in cpp in cpp ^5 
// #include <iostream>
// using namespace std;
// int main(){
//     int r, h ;
//     cout<<"enter value of radius and height ";
//     cin>>r>>h;
//     float z = 3.14*(r^2)*h;
//     cout<<"volume of cylinder is "<<z;
// } 
// #include <iostream>
// using namespace std;
// int main(){
//     char x, y;
//     cin>>x>>y;
//     cout<<x-y;
// }
//QUE7
// COUNT DIGIT IN STRING 
// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     cin>>i;
//     int count = 0;
//     int a = i;
//     while(i>0){
//         i = i/10;
//         count++;
//     }
//     if (a==0)cout<<1;
//     else cout<<count;
// }
// QUE8
// ANY NUMBER MODULUS IS WHAT IS LAST VALUE OF THAT NO OK 
// QUE CALCULATE THE SUM OF THE GIVEN NO WHICH IS TAKEN FROM USER
// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     cin>>i;
//     int sum = 0;
//     int n;
//     while(i>0){
//         n = i%10;
//         sum = sum+n;
//         i = i/10;

//     }
//     cout<<sum;
// }
// QUE 9 
//  que reverse that number okk
// #include <iostream>
// using namespace std;
// int main(){
//     int i ;
//     cin>>i;
//     int sum = 0;
//     while( i>0){
//         sum *= 10;
//         sum += i%10; 
//         i = i/10;
//     }
//     cout<<(sum);
// }
// QUE10
// que sum  (1-2)+(3-4) ....
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a value";
//     cin>>n;
//     int sum = 0 ;
//     int a = 1 ;
//     // while(a<=n){
//     //     if (a%2==0)sum -= a;
//     //     else sum += a; 
//     //     a++;
//     // }
//     if(n%2==0) sum += n/2;
//     else sum += -n/2 +n;
//     cout<<sum;
// }
// QUE 11
// FACTORIAL QUE 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value ";
//     cin>>n;
//     int ans = 1;
//     int a = 1;
//     while(a<=n){
//         ans *=a;
//         a++;
//     }
//     cout<<ans;
// }
//QUE12
// FIBONACCI SERIES
//
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a value";
//     cin>>n;
//     int a = 0;
//    // int x,y = 0 ,1 ; // this also be wrong  
//     int x = 0 , y = 1;
//     while(a < n) {
//         // x ,y = y , y+x ; // can do in cpp like okkk remember 
//         int nxt = x + y;
//         x = y;
//         y = nxt;
//         a++;
//     }
//     cout<<x;     
// }
