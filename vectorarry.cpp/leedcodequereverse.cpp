// #include <iostream>
// #include <vector>  
// using namespace std;
// int main(){
//     int sizee;
//     cout<<"enter the size of array";
//     cin>>sizee;
//     vector<int> arr(sizee);
//     for(int i = 0 ; i<arr.size();i++){
//         cin>>arr[i];
//     }
//     int x,y;
//     cin>>x>>y;
//     //ya tak mara ek array complete hogya hai  now create new to store reverse order 
//     vector<int> arr2(arr.size());
//     int a = arr.size()-1;
//     int i = y;
//     for(int j = 0 ;j<arr.size();j++){
//         if(x<=j && j<=y){
//         arr2[j]= arr[i];
//         a--;
//         i--;
//     }
//         else {arr2[j]= arr[j];
//         a--;
//     }
//     }
//     for(int i = 0 ; i<arr.size();i++){
//         cout<<arr2[i]<<" ";
//     }
// }
//pta nahi bus hogya .....
//que same hai particaluar value sai reverse karna hai 
//sir methos also too ezz 
// #include <iostream>
// #include <vector>  
// using namespace std;
// void reversepart( int i , int j , vector<int> array){
//     while(i<=j){
//         int temp = array[i];
//         array[i] =array[j];
//         array[j] = temp ;
//         i++;
//         j--;

//     }
//     for(int i = 0 ; i<array.size();i++){
//         cout<<array[i]<<" ";
//     }
// }
// int main(){
//     int x ;
//     cout<<"size of array";
//     cin>>x;
//     int i , j;
//     cout<<"range";
//     cin>>i>>j;
//     vector<int> arr(x);
//     for(int k = 0 ; k<arr.size();k++){
//         cin>>arr[k];
//     }
//     reversepart(i,j,arr);
//     cout<<endl;
//     for(int i = 0 ; i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }
//la dak la 
//& (Reference):

// The & indicates that the parameter is passed by reference, not by value.
// Passing by reference means:
// The function operates directly on the original vector.
//unique element 
// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;
// int main(){
//     vector<int> arr  ;
//     int x;
//     cout<<"size of array";
//     cin>>x;
//     for(int i = 0 ; i<x;i++){
//         int p;
//         cin>>p;
//         arr.push_back(p);
//     }
//     for(int i = 0 ; i<arr.size();i++){
//         for(int j = i+1 ; j<arr.size();j++){
//             if(arr[i]==arr[j]){
//             int temp = arr[arr.size()-1];
//             arr[arr.size()-1] = arr[j];
//             arr[j]= temp;
//             arr.pop_back();
//             }
//         }
//     }
//     for(int i = 0 ; i<arr.size();i++){
//         cout<<arr[i]<<" ";
        
//     }
// }
//que rotatate the given array by k given steps   basically last element go into first 
//k = 2     arr = 1 2 3 4 5   ==   4  5 1 2 3
// shifting number 
// #include <iostream>
// #include <vector>
// using namespace std ;
// void reversepart(int i , int j , vector<int>& array){ //pass by refrrence 
//     while(i<=j){
//         int temp = array[i];
//         array[i] = array[j];
//         array[j] = temp;
//         i++;
//         j--;
//     }
//     cout<<endl;
    
// }
// void printreverse(vector<int> &arr){
//     for(int i = 0 ; i<arr.size();i++){
//         cout<<arr[i];
//     }
// }


// int main(){
//     int n ;
//     cout<<"lenth of array";
//     cin>>n;
//     vector<int> arr;
//     for(int i = 0 ; i<n;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//         // cin>>arr[i];
//     }
//     int k ;
//     cout<<"range of array change ";
//     cin>>k;
//     int n = arr.size(); n = 7  // last index 6 
//     //last part  reverse
//     if(k>n)  k = k%n;// remove similiar itration from my code k%n give me ,,,, itration k= 50   n =  7   means 1 time rotate  remainder give 1 

//     reversepart(0,n-k-1;arr );
//     //intial part reverse 
//     reversepart(n-k,n-1,arr);
//     reversepart(0,n-1,arr);
//     printreverse(arr);
// }
//WhatsApp Image 2025-01-31 at 21.31.09_33ba529
#include <iostream>
using namespace std;

class studentdata {
    int n = 5, avg, sum;
    char grade;
    int marks[5];  

public:
    void getdata();
    void calculate_avg();
    void calculate_grade();
    void print();
};

void studentdata::getdata() {
    cout << "Enter " << n << " marks: ";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }
}

void studentdata::calculate_avg() {
    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }
    avg = sum / n;
}
void studentdata::calculate_grade() {
    if (avg > 90) grade = 'A';
    else if (avg > 80) grade = 'B';
    else if (avg > 50)grade = 'C';
    else  grade = 'D';
}

void studentdata::print() {
    int x ;
    cin>>x;
    switch (x)
    {
    case 1:
    cout << "Average Marks: " << avg << endl;
        break;
    case 2:
    cout << "Grade: " << grade << endl;
        break;
            
    
    default:
        break;
    }
}

int main() {
    studentdata d;
    int x;
    cin>>x;
    d.getdata();
    d.calculate_avg();
    d.calculate_grade();
    d.print();

    return 0;
}

