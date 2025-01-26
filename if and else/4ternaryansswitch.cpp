// ternary operator  if i need to write less lines s then  syntax expression 1 ? expression 2:  expression 3
//  condition ? true: false
// que 1 
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     n%2== 0 ? cout<<"yes": cout<<"no";     


//     }

// #include <iostream>
// using namespace std;
// int main (){
//     int x;
//     cin>>x;
//     // condition ? true : false 
//     x >33  ? cout<<"pass":cout<<"fail";
//    }
// #include <iostream>
// using namespace std;
// int main (){
//     char x; 
//     int a = 2;
//     // condition ? true : false  format  to write ternory statements in cpp 
//     x = (a>0) ? 'a' : 'S';
//     cout<<" value of x :"<<x<<endl;
//     cout<<"value of a:" <<  a;
//     return 0 ;
// }
// good que on terenary operator  find output in my notebook ok 
// #include <iostream>
// using namespace std;
// int main (){
//     int x;
//     x = (5>8) ? 10:1 != (2<5)  ? 20:30;   // it is call as nested ternary operator 
//     cout<<"value of x  is "<<x ;
//    return 0         
// }


// QUE WRITE DAY NAME WHEN INPUT IS 1 MONDAY AND 2 TUESDAY ETC BY USING SWITCH STATEMENT
// switch(integer expression value which case i want to dooo )
#include <iostream>
using namespace std;
int main (){
    int x; 
    cout<<"enter value of x";
    cin>>x;
    switch(x )  {
        case 1 :
           cout<<"monday";
           break;
        //    if break not write  where first x meet that statement print and all down statement also print  use break for only one statement 
        case 2 :
           cout<<"tuesday";
           break;   
        case 3 :
           cout<<"wednesday";   
           break;
        case 4:
           cout<<"thursday";
           break;
        case 5 :
           cout<<"friday";
           break;
        case 6 :
           cout<<"saturday" ;  
           break;
        case 7 :
           cout<<"sunday"; 
           break;
        default :
           cout<<"invalid number "  ;

    }


}
