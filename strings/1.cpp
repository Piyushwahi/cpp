// #include <iostream>
// using namespace std;
// int main(){
//     char arr[] = {'f','y','q','p','i'};
//     for(int i  = 0 ; arr[i] != '\0';i++){
//         cout<<arr[i]<<" ";
//     }
//     // ⭐ when arr == '\0' come arr stop 
//     //⭐ in char arry we have benifit we can directly print our string by writing arr name lets See
//     cout<<arr;//⭐
//     //but in arr  it gives the   addres of first index 
//     //inside double code is know as string 
     
//     // for(int i  = 0 ; i<5;i++){
//     //     cout<<arr[i]<<" ";
//     // }
// }       
//STRING AS A DATA TYPE 
// string also start from zer0th index 
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     //1 string str = "piyush wahi"; //12 is my \0
//     // cout<<str[0];
//     //2 string s; //  work only if  my string has no spaces   
//     // cin>>s;
//     // cout<<s;
//     //if space then use get line 
//     string s;
//     getline(cin,s);//vvminp
//     cout<<s;  
// }       
// que  i want to check how many vowels in my given string
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);//vvminp
//     int count = 0 ;
//     for( int i = 0 ; s[i] !='\0';i++){
//         if(s[i]== 'a' || s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u'){
//             count++;

//         }
//     }
//     cout<<count;  
// }   
// updation of single  character in string 
// in cpp the string are mutable means we can change our string  in java we can't change 
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string s ;
//     getline(cin,s);
//     s[0]= 'i';
//     cout<<s;
// }   
