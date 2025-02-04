// QUE1 takw 2 no input from user and then take 2nd in power in first       only for positive no 
// not for negative 

// #include <iostream>
// using namespace std;
// int main (){
//     int a ,b;
//     cin>>a>>b;
//     float ans = 1;
//     int x = 1;
//     bool flag = true  ; // mean value is positive if false means value is negative 
//     if (b<0){
//         flag = false; // now i knoe value of b is negative 
//         b = -b;
//     } 
//     while(x<=b){
//         ans *= a;
//         x++;
//     }
//     if (flag == true) cout<<ans;
//     else cout<<(1/ans);
// }
// que 2 PRINT TABLE OF NO WHICH IS GIVEN BY USER
// #include <iostream>
// using namespace std;
// int main(){
//     int i ;
//     int n ;
//     cin>>n;
//     // int n ;
//     // cout<<"enter a no";
//     // cin>>n;
//     // int j = n;
//     // for(i = 1; i<=10; i++){
//     //     cout<<n<<endl;
//     //     n += j ;
//     //     }
//     for(i =1 ;i <=10 ; i++){
//         cout<<n*i<<endl;
//     }
//     }
//QUE GIVEN  ap 4, 7, 10 ,13 ,16; nth =  a +(n-1)d   cd = 3   . 4+(n-1)3
// #include <iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int i ;
//     for(i = 4; i<=4+(n-1)*3; i += 3){
//         cout<<i<<endl;
//     }
// }
//Breakdown
// n--:
// if i dont know formula thel while(n--)

// This is the post-decrement operator.
// It decreases the value of n by 1 after the current value of n is evaluated.
// For example:
// If n = 3, the first iteration checks 3, then decrements n to 2.
// while(n--):

// The while loop continues as long as the expression inside it evaluates to true (non-zero).
// Since n-- evaluates to the current value of n before decrementing, the loop executes as long as n is greater than zero.
// When n becomes 0, n-- evaluates to 0 (false), and the loop terminates.
// without formula 
// que3 Display this GP - 3,12,48,.. upto ‘n’ terms.
// #include <iostream>
// using namespace std ;
// int main(){
//     int n ;
//     cout<<"enter a value";
//     cin>>n;
//     int ans = 3;
//     int a;
//     // for(a = 1;a<=n;a++){ or while bhi kar skta hu 
//     while(n--){
//         cout<<ans<<endl;
//         ans *= 4;
//     }
// }
// Q4. Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a
// while loop.
// #include <iostream>
// using namespace std ;
// int main(){
//     int i ;
//     for(i=0; i<26; i++){
//         cout<<"Asciee value of "<<char(i+'A')<<"="<<(int(i+'A'))<<endl;
//     } 
// }
//GOOD QUEQ5. WAP to print the sum of all the even digits of a given number.
// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter a no ";
//     cin>>x;
//     int n;
//     int sum_evenno = 0;
//     while(x>0){
//         n = x%10;
//         // if(n%2 == 0){
//         //     sum_evenno += n;
//         // }
//         sum_evenno += (n % 2 == 0 ? n : 0);
//         x /= 10;
//     }
//     cout<<sum_evenno;
// }
// QUE 6again good que aQ9. Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number. For example,

// 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
// Output :
// #include <iostream>
// using namespace std;
// int main(){
//     int i ;
//     int n;
//     int j;
//     int sum;
//     for(i=1; i<=500;i++){
//         n = i,sum = 0;
//         while(n>0){
//             j = n%10;
//             sum +=j*j*j;
//             n = n/10;
//         }
//         if(sum==i) cout<<i<<"is armstrom"<<endl;
//     }
// }
//The sum variable needs to be reset to zero at the beginning of each iteration of the for loop to ensure it doesn't carry over a value from the previous iteration. In your code, sum is already reset as part of the initialization:

// cpp
// Copy code
// n = i, sum = 0;
// This line reinitializes sum to 0 for every new value of i. Hence, there is no problem with the sum variable itself. However, if you find it unclear or redundant to initialize sum this way, you could explicitly initialize it in a separate line for clarity:


//GOOODDDD 7QUEEEEE 
// #include <iostream>
// using namespace std;
// int main(){
//     int m; 
//     cin>>m;
//     int i ,j,r ,p;
//     int a = m-1;
//     for(i=1;i<=m;i++){
//         for(j=1;j<=a;j++){
//             cout<<" ";
//         }
//         a--;
//         for(r=1;r<=i;r++){
//             cout<<char('A' +i-r);
//         }
//         for(p=1;p<i;p++){
//             cout<<char('A'+p);
//         }
        
    
//         cout<<endl;
//     }}
    
// //    int a = i;
// //         for(j=1;j<=i; j++){
// //             cout<<a;
// //             a--;
// //         }
//que no 8
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j,d,s,z=1,q;
//     int r=n-1;
//     for(d=1;d<=2*n-1;d++){
//         cout<<char('A'+d-1);
//     }
//     cout<<endl;
//     for(i=1;i<=r;i++){
//         int ans= 0;
//         for(j=1;j<=n-i;j++){
//             cout<<char('A'+j-1);
//             ans++;
//         }
//         for(s=1;s<=z;s++){
//             cout<<" ";
//             ans++;
//         }
//         z += 2;
//         for(q=1;q<=n-i;q++){
//             cout<<(char('A'+ ans-1+q));



//         }
//         cout<<endl;
        

//     }


// }
// que no 9 nice que
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j,k,x,z,l;
//     int a =1;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//        if(i>1){
//         for(k=1;k<=a;k++){
//             cout<<" ";
//         }
//         a += 2;
//         cout<<"*";     
//     }cout<<endl;
//     }
//     int q=a-2;
//     for(x=1;x<n;x++){
//         for(z=1;z<=x;z++){
//             cout<<" ";
//         }
//         cout<<"*";
//           q -=2;
//         for(l=1;l<=q;l++){
//             cout<<" ";
//         }
//         if(2*x+1<2*n-1){
//         cout<<"*"<<endl;
//         }
    
    
//     }   
// }
// diamond plus star inside  nice que 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j,k,x,z,l,m;
//     int a =1;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n-i;j++){
//             cout<<" ";
//         }
   
//         cout<<"*";
//        if(i>1){
//         for(k=1;k<=a;k++){
//             if(k==a/2+1||i==n){ //1/2int hai to 0 tabhi 1 
//                 cout<<"*";}
//             else cout<<" ";
            
           
//         }
//         a += 2;
//         cout<<"*";     
//     }cout<<endl;
//     }
//     int q=a-2;
//     for(x=1;x<n;x++){
//         for(z=1;z<=x;z++){
//             cout<<" ";
//         }
//         cout<<"*";
//           q -=2;
//         for(l=1;l<=q;l++){
//             if(l==q/2+1){ //1/2int hai to 0 tabhi 1 
//                 cout<<"*";}
//             else cout<<" ";
//         }
//         if(2*x+1<2*n-1){
//         cout<<"*"<<endl;
//         }
//     }  
// }
//it this que we convert array to acc to dec
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int array[n];
//     for(int i = 0 ; i<n;i++){
//         cin>>array[i];
//     }
//     for(int j = 0 ; j<n;j++){
//         if(array[0]<array[1]){
//             cout<<"array is not sorted";
//         }
//     }
// }

// #include <iostream>
// #include <climits>
// using namespace std;
// bool isPalindrome(int x) {
//         int y = x;
//         int final = 0 ;
//         while(y){
//             if(final>INT_MAX/10 ||final<INT_MIN/10) return false;//condition of 32 bits check okkk climits use  Return 0 if reversing x would cause overflow/underflow
//             final *= 10;
//             final += y%10;
//             y /= 10;
//         }
//         if(final == x) return true;
//         else return false;
//     }
// int main(){
//     int x;
//     cout<<"enter the value of";
//     cin>>x;
//     if(isPalindrome(x)){
//         cout<<"true";

//     }
//     else cout<<"false";
// }
		










    


