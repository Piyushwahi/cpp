// print solid square hint nested loop  lga ga  square r = c
// #include <iostream>
// using namespace std;
// int main(){
//     int r,c;
//     cin>>r>>c;
//     int i , j ;
//     for(i=1;i<=r;i++){
//         for(j=1;j<=c;j++){
//             cout<<"*";
            
//         }
//         cout<<endl;
//     }

// }
//QUE2  print pattern 1234
// #include <iostream>
// using namespace std;
// int main(){
//     int r,c;
//     cin>>r>>c;
//     int i , j ;
//     for(i=1;i<=r;i++){
//         for(j=1;j<=c;j++){
//             cout<<j;
            
//         }
//         cout<<endl;
//     }

// }
// OPP triangle l QUE 3
// #include <iostream>
// using namespace std;
// int main(){
//     int r,c; 
//     cin>>r>>c;
//     int i , j ;
//     for(i=0;i<r;i++){
//         for(j=1;j<=r - i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//QUE4 print tringle of odd no 
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;
//     int i,j;
//     for(i=1;i<=r;i++){
//         int a= 1;
//         for(j=1;j<=i;j++){ // easy hai loop ko chlna do new variable bna ka increment krra do 2 ka start 1 
//             cout<<a;// or stopting condiion  nth odd no 2n-1
//             a += 2;
            
//         }
//         cout<<endl;
//     }

// }
//  QUE 5print square of alphabetes
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;
//     int i , j ;
//     for(i=1;i<=r;i++){
//         for(j=65;j<i+65;j++){
//             cout<<((char)j);
//         }
//         cout<<endl;
//     }
// }  
// star plus QUE 6  odd no only 
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;
//     int i , j ;
//     int mid = r/2 + 1;
//     for(i=1;i<=r;i++){
//         for(j=1;j<=r;j++){
//             if(i==mid || j==mid) cout<<"*";
//             else cout<<" ";
//         }
//         cout<<endl;
//     }

// }
// star cross que 7 easy ppizzzi
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;
//     int i , j ;
//     for(i=1;i<=r;i++){
//         for(j=1;j<=r;j++){
//             if((i==j)||(i+j) == (r+1)) cout<<"*";
//             else cout<<" ";
//         }
//         cout<<endl;
//     }

// }
// good QUE8 print 1 /23/456/78910/  floyds triangle 
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;
//     int i , j ;
//     int a = 1;
//     for(i=1;i<=r;i++){
//         for(j=1;j<=i;j++){
//             cout<<a<<" ";
//             a++;
            
//         }
//         cout<<endl;
//     }

// }
// good que9     101 que 
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;
//     int i , j ;
//     int a = 0;
//     // for(i=1;i<=r;i++){
//     //     if( i%2 == 0) a = 0; //row is  even starting no 
//     //     else a = 1; 
//     //     for(j=1;j<=i;j++){
//     //         cout<<a;
//     //         if(a==0) a =1;
//     //         else a = 0;
            
            
//     //     }
//     //     cout<<endl;
//     // }
//     // other method
//     for(i=1;i<=r;i++){
//         for(j= 1; j<=i;j++){
//             if((i+j)%2==0) cout<<"1";
//             else cout<<"0";

//         }
//         cout<<endl;
//     }

// }
//QUE 10 good que star traingle flipped   easy hai raaah  
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;
//     int i , j ;
//     for(i=1;i<=r;i++){
//         for(j=1;j<=r;j++){
//             if((i+j)<=r) cout<<" ";
//             else cout<<"*";
//         }
//         cout<<endl;
//     }

// }

// other method nested loop goood
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;
//     int i , j,k ;
//     for(i=1;i<=r;i++){
//         for(j=1;j<=r-i;j++){
//             cout<<" ";
//         }
//         for(k=1 ; k<=i; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// little change que no 10 2 method 
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;
//     int i , j,k ;
//     for(i=1;i<=r;i++){
//         for(j=1;j<=r-i;j++){
//             cout<<" ";
//         }
//         for(k=1 ; k<=i; k++){
//             cout<<k;
//         }
//         cout<<endl;
//     }
// }
// que11 rhombus   for +for +for==  ans lol  is great man 
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;
//     int i , j,k,o ;
//     for(i=1;i<=r;i++){
//         for(j=1;j<=r-i ;j++){
//             cout<<" ";
//         }
//         for(k=1 ; k<=r; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
//STAR  pYramid que QUE12  ODD STAR TRIANGLE ALSO PRINT 
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;  
//     int i , j,k,o ;
//     for(i=1;i<=r;i++){
//         for(j=1;j<=r-i ;j++){
//             cout<<" ";
//         }
//         for(k=1 ; k<=2*i-   ; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// nst = no of stars and nsp  no of spaces method for pyramid type of que
//pheli line main n-1 space hoga according to this que  or star har bar 2 increase ho raha baiscally two new variable liya hai 

// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;  
//     int nst= 1,nsp= r-1;
//     int i,j,k;
//     for(i=1;i<=r;i++){
//         for(j =1;j<=nsp;j++){
//             cout<<" ";
//         }
//             nsp--;
//         for(k=1;k<=nst;k++){
//             cout<<"*";
//         }
//         nst = nst +2;
//         cout<<endl;
//     }
// }
// in this que we RE PLAYING WITH VARIABLE NST AND NSP 
//  for +for+for number triangle palindrome
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;  
//     int i,j,k,e;
//     for(i=1;i<=r;i++){
//         for(j =1;j<=r-i;j++){ //spaces
//             cout<<" ";
//         }
        
//         for(k=1;k<=i;k++){ // numbering
//             cout<<k ;       }
//         for(e = i-1; e>0;e--){//nxt 21 321
//             cout<<e;
//         }    

//         cout<<endl;
//     }
// }
// QUE 14 star diamond
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;
//     int i,j,k,e,o,y,a,ans=1;
//     int nsp=r-1,nst=1;    
    // long and boring method 
    // for(i=1; i<=r;i++){
    //     for(j=1;j<=nsp;j++){
    //         cout<<" ";
    //     }
    //     nsp--;
    //     for(k=1;k<=nst;k++){
    //         cout<<"*";
    //     }
    //     nst += 2;
    //     cout<<endl;
    // }
    // for(y=1;y<r;y++){
    //     for(o=1;o<=ans;o++){
    //         cout<<" ";
          
    // }
    //     ans++; 
    //     nst -= 2;
    //     for(a=1;a<nst-1;a++){
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    // }
    //22 altrnate method
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;  
//     int nsp =r-1,nst=1;
//     int i,j,k;
//     for(i=1;i<=2*r-1;i++){
//         for(j =1;j<=nsp;j++){ //spaces  
//             cout<<" ";  
//         }
//         if(r<=i) nsp++; // give condition  to check if greater then  nsp++
//         else nsp--;
//         for(k=1;k<=nst;k++){ // numbering
//             cout<<"*" ;       }
//         if(r<=i) nst -= 2;
//         else nst += 2;
//             cout<<endl;
//         }    

       
//     }
// intresting que 15 print bridge my method after giving 25 min to find this 🥲
// wrong hai bhai 🫠
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;
//     int  nst=r,nsp = 1,nstar=r;
//     int q=(nst/2)+1,p=(nstar/2);
//     int ans=0;
//     int i,j,k,e;
//     for(i = 1; i<=r;i++){
//         for(j=1;j<=q;j++){
//             cout<<"*";
//         }
//         q--;
//         for(k=1;k<nsp;k++){
//             cout<<" ";

//         }
//         nsp++;
//         for(e =1;e<=p;e++){
//             cout<<"*";
//             ans = e;
//         }
//         if(i==1);
//         else p--;
//         cout<<endl;
//     }
// }
// que no 15right way to solve this bridge que  method of this que  
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r;
//     int a=1;
//     int m= r-1;
//     int i,j,k,n,f;
//     for(f=1;f<=(r+m);f++){  //either we can take 2r-1 == r+m
//         cout<<"*";
//     }
//     cout<<endl;
//     for(i=1;i<=m;i++){
//         for(j=1;j<=(m+1-i);j++){
//             cout<<"*";
//         }
//         for(k=1;k<=a;k++){
//             cout<<" ";
//         }
//         a += 2;
//         for(n=1;n<=(m+1-i);n++){
//             cout<<"*";
//         }
//         cout<<endl;
       
//     }
// }
// que no 16number bridge; mind karab hona ka baad apna ap ans 😁
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r; 
//     int m= r-1;
//     int i,j,k,f,n,nsp=1;
//     for(f=1;f<=(m+r);f++){  //either we can take 2r-1 == r+m
//         cout<<f;
//     }
//     cout<<endl;
//     for(i=1;i<=m;i++){
//         for(j=1;j<=(m+1-i);j++){
//             cout<<j;
//         }
//         for(k=1;k<=nsp;k++){
//             cout<<" ";
//         }
//         nsp += 2;
//         for(n=(j+k-1);n<=(2*r-1);n++){
//             cout<<n;
//         }
//         cout<<endl;
       
//     }

//     }
// que no 162nd method by my dear fav raghav sir
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cin>>r; 
//     int i,j,k,n,z;
//     int s= 1;
//      for(z= 1;z<= (2*r-1);z++){
//             cout<<z;}
//             cout<<endl;
//     for(i=1;i<=r-1;i++){
//         int a=1;
//         for(j= 1;j<= r-i;j++){
//             cout<<a;
//             a++;
//         }
//         for(k=1;k<=s;k++){
//             cout<<" ";
//             a++;
//         }
//         s += 2;
//         for(n=1;n<=r-i;n++){
//             cout<<a;
//             a++;
//         }
//         cout<<endl;                           
//     }
//     }

// ultimate que❤️ que no  que no 17 spiral qnlu varlid for given que 
//  some change it will be correct 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i ,j ,k ,z;
//     int r=(2*n-1);  
//     // pseudo variables     false value ya extra variable
//     // build in function min max(i,j )
//     for(i=1;i<=r;i++){
//         for(j=1;j<=r;j++){
//             if(i==1 || j==1 ||i==r||j==r){
//                         cout<<n;}          
//             else if (i==2||j==2||i==r-1||j==r-1){
//                 cout<<(n-1);   }           
//             else if(i==4&j==4 ||i==r-3& j==r-3){
//                 cout<<(n-3);
//             }
           

//             else if(i==3||j==3||i==r-2||j==r-2){
//                 cout<<(n-2);
//             }
//             else cout<<" ";}

//         cout<<endl;
//    }}
// ultimate que 1st soln  after  solve in notebook to check this 
// #include <iostream>
// using namespace std;
// int main(){
//     int n; // kitna number tak print karna tha
//     cin>>n;
//     int i ,j ,k ,z;
//     int r=(2*n-1);  
//     // pseudo variables     false value ya extra variable
//     for(i=1;i<=r;i++){      
//         for(j=1;j<=r;j++){
//             int a =i;
//             int b = j;
//             if(a>n) a = 2*n-i;
//             if(b>n) b = 2*n-j;  
//             int x =min(a,b);
//             cout<<n-x+1;   
//         }
//            cout<<endl; 
//     }
    
//    } 



