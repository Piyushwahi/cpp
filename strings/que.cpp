//in given string i want to change the even index number to  paticular given value from user 
// #include <iostream>
// #include <string>
// using namespace std ;
// int main(){
//     string s;
//   getline(cin,s);
//   for(int i = 0 ;s[i] !='\0';i++){
//     if(i%2 == 0){
//         s[i]= 'a';
//     }    
//   }  
//   cout<<s;
// }   
//reverse  first half of given string 
// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;
// int main(){ 
//     string s = "abcdef" ;//0 1 2 3 4 5   
//     int n = s.size()/2;       
//     cout<<s<<endl;
//     reverse(s.begin(),s.begin()+n);
//     cout<<s;
// }   
// reverse  in range 
// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;
// int main(){
//   string s;
//   getline(cin,s);    
//   int i,j;
//   cin>>i>>j;    
//   cout<<s<<endl;
//   reverse(s.begin()+i,s.begin()+j);
//   cout<<s;
// }   
//return total number of  digit  for given integer string 
// #include <iostream>
// #include <string>
// using namespace std ;
// int main(){
//     string s;
//     getline(cin,s);
    // use to_strig( ) for type caste 
// }
// que is i am tring to find how amny unique element in given string for given i mean check neighbour if diff then count++ 
// # 😒chindi que 
// #include <iostream>
// #include <string>
// using namespace std ;
// int main(){
//     string s;
//     getline(cin,s);
//     int n = s.length();
//     int count = 0 ;
//     for(int  i = 0 ; i<n;i++){
//         if(n==1) {
//             break;
//         }
//         if(n==2 && s[0] != s[1]){
//             count = 1;
//             break;
//         }
//         for(int j = 0 ;j<1;j++){
            
//             break;}
//         if(i>0||i<n){
//             if(s[i]==s[i-1] ||s[i]==s[i+1]){
//                 continue;
//             }
//             else count++;
//         }
        
//         else{
//             if( s[i]==s[i+1]){
//             continue;
//         }
//         else count++;
// }


//     }
//     cout<<count;
// }
//giving one mo re contidition
//   FOR TWO ELEMENT LIKE AB  a is diff then b same vice verse also true 
// ⭐ good que 
// given two string  s and t  return true if it is an anagram  of s  and false otherwise 
// anagram means my string   create new word form my intial string  if string diff then no other wise check by sort both same then anagram 
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);

    // Sort both strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // Compare sorted strings
    if (s == t) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
//leedcode valid anagram que 
