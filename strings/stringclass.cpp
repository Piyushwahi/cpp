// example my string is my name is piyush 
// calculate the number of words

// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <sstream>
// #include <vector>
// using namespace std;
// int main(){
//     string s = " raghav sir is  my favourite teacher in cpp ";
//     stringstream ss(s);
//     string temp;  //why create to store substring in temp then print 
//     while(ss>>temp){// learn this format ss main sai input laka temp main store kara siya always remember 
//         //automatically plus 1aaa            karta raha ga 
//         cout<<temp<<endl;
//     }
// }
//que find the mot commmon  word in string and write  n and using vectorsssss
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <sstream>
// #include <vector>
// using namespace std;
// int main(){
//    string s = " raghav sir is is  my  my favourite teacher in cpp ";
//    stringstream ss(s);
//    string temp ;
//    vector<string> arr;
//    while(ss>>temp){
//     arr.push_back(temp);
//    }
// //    for(int i = 0 ;i<arr.size();i++){
// //     cout<<arr[i]<<" "<<endl;
// //    }
// sort(arr.begin(),arr.end());
// int maxcount=1;
// int count = 1 ;
// for(int i = 1 ;i<arr.size();i++){
   
//    if(arr[i]==arr[i-1]) count++;
//    else count = 1;
//    maxcount = max(maxcount,count);

// }
// count = 1;
// for(int i = 1;i<arr.size(); i++ ){
//    if(arr[i]==arr[i-1]) count++;
//    else count = 1;
//    if(maxcount==count){ 
//    cout<<arr[i]<<" "<<maxcount<<endl;
// }
// }}
