// build in function in strings 
//1 lenth of given string calculate 
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string s = " hwllo  how are u bro "; 
//     // final size will not contain = \0 
//     cout<<s.size();
    // when i    solve  leed code que first step find  n = len-1
// }   
//2 push back             
// #include <iostream>
// #include <string>
// using namespace std;
// //we can  add only char  not string  always remember 
// //push_back('')
// int main(){
//     string s = "abcdef";
//     s.push_back('e');
//     s.push_back('p') ;
//     cout<<endl; 
//     s.pop_back();
//     cout<<s;
// }   
// 3  +   operator 
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string s = "abcdef" ;
//     string t = "abdi";
//     cout<<s+t<<endl;
//     //or we can also use like append in py 
//     s = s+"2004";
//     cout<<s;
// }   
// 4th reverse  char   first step include the  header file#include <algorithm>
// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;
// int main(){
//     string s = "abcdef" ;//0 1 2 3 4 5          
//     cout<<s<<endl;
//     reverse(s.begin()+3,s.end());
//     cout<<s;
// }  
// 5th little  edit now i can reverse inside 
//give ending idx     plus 1  
// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;
// int main(){
//     string s = "abcdef" ;//0 1 2 3 4 5          
//     cout<<s<<endl;
//     reverse(s.begin()+2,s.begin()+3);
//     cout<<s;
// }   
//  6th substr() in sub string(start)
// #include <iostream>
// #include <string>
// using namespace std ;
// int main(){
//     string s = "piyush wahi ";
//     // getline(cin,s);
//     // s.substr(idx,end); if end not write then all string from indx
//     cout<<s.substr(2,4);
//     //in string  how we calculate length  
//     int n = s.length();
//     cout<<n;
// }
//  7th inbuild string to-string() its convert integer too string 
//basically typecasting kar raha hu 
// #include <iostream>
// #include <string>
// using namespace std ;
// int main(){
//     int x = 1234567;
//     string s = to_string(x);
//     cout<<s.length();
// }

// #include <iostream>
// using namespace std;

// int main() {
//     float num = 5;

//     switch(num) {
//         case 1:
//             cout << "Case 1 executed\n";
//             break;
//         case 3:
//             cout << "Case 3 executed\n";
//             break;
//         case 5:
//             cout << "Case 5 executed\n";
//             break;
//         default:
//             cout << "Default case executed\n";
//     }
    
//     return 0;
// }
// 8th inbuild function  
// to_string use for convert integer to string 
// stoi use for  convert string to int 
// stall use with  long long   i
#include <iostream>
#include <typeinfo>
using namespace std ;
int main (){
    string  s="1233455688324724"; //when i print this number its show me an error of out of range  then use long long to store this 
    // int x = stoi(s);
    long long x = stoll(s);//string to long long 
    cout << "Type of x: " << typeid(x).name() << endl;
    cout<<x;      
 



} 
i have a string and i want to update my last ondex with plau one by uaing str.back()  i can  do  why str.back() further of push.back  bcoz when we write str.back i will give me the refrencw of that character 









// try to solve this que by vector for easy 
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int findHighestScore(int scores[], int size) { 
//     int max = scores[0];
//     for (int i = 1; i < size; i++) {
//         if (scores[i] > max) {
//             max = scores[i];
//         }
//     }
//     return max;
// }

// double findAverage(int scores[], int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += scores[i];
//     }
//     return static_cast<double>(sum) / size;  // Ensure floating-point division
// }

// int main(){
//     int n ;  //number of playerssss
//     cin>>n;
//     int size; // matches scores
//     cin>>size;
   
//     for(int i = 1 ; i<=n;i++){
//         int scores[size];
//         for(int  j = 0 ; j<size;j++){
//             cin>>scores[i];
//         }
//         cout<<"player :"<<i<<"  "<<"Highestscores = "<<findHighestScor(scores,size)<<"  and "<<" average ="<<findAverage(scores,size)<<endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int findHighestScore(int* scores, int size) { 
//     int max = scores[0];
//     for (int i = 1; i < size; i++) {
//         if (scores[i] > max) {
//             max = scores[i];
//         }
//     }
//     return max;
// }

// void findAverage(int* scores, int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += scores[i];
//     }

//     double avg = (double)sum / size;  


//     if (avg == (int)avg) {
//         cout << (int)avg;  
//     } else {
//         cout << avg;
//     }
// }

// int main() {
//     int n;  // Noo of players
//     cout << "Enter number of players: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         int size;  
//         cout << " played matches  " << i << ": ";
//         cin >> size;

//         int* scores = new int[size];

//         cout << "Enter " << size << " scores: ";
//         for (int j = 0; j < size; j++) {
//             cin >> scores[j];  
//         }

//         cout << "Player " << i << " | Highest Score = " << findHighestScore(scores, size)
//              << " | Average Score = ";
//         findAverage(scores, size);
//         cout << endl;

//         delete[] scores;  //remove freeeeee space 
//     }

//     return 0;
// }
