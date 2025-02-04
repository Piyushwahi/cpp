// for given array 
// #include <iostream>
// #include <vector>  
// #include <algorithm> // Include this header for sort

// using namespace std;
// int main(){
//     vector<int> arr ;
//     arr.push_back(4);
//     arr.push_back(5);
//     arr.push_back(1);
//     arr.push_back(8);
//     arr.at(3)= 7;
//     for(int i = 0 ; i<arr.size();i++){
//         cout<<arr.at(i)<<" ";
//     }

//     cout<<endl;
//     //⭐sorting an array  syntax  vector ka funtion hai again telling uuuu vector arrray main hi use hoga only 
//     sort(arr.begin(),arr.end());  //it is only valid for  given array exam  arr[4]= {3,4,5,2}
//     for(int i = 0 ; i<arr.size();i++){
//         cout<<arr.at(i)<<" ";
//     }

//     cout<<endl;


// }   
         
// #include <iostream>
// #include <vector>

// using namespace std;

// void merge(vector<int>& arr, vector<int>& arr2, vector<int>& arr3) {
//     int i = 0, j = 0, k = 0;

//     // Merge the two sorted arrays
//     while (i < arr.size() && j < arr2.size()) {
//         if (arr[i] < arr2[j]) {
//             arr3[k++] = arr[i++];
//         } else {
//             arr3[k++] = arr2[j++];
//         }
//     }

//     // Copy remaining elements from arr
//     while (i < arr.size()) {
//         arr3[k++] = arr[i++];
//     }

//     // Copy remaining elements from arr2
//     while (j < arr2.size()) {
//         arr3[k++] = arr2[j++];
//     }
// }

// int main() {
//     vector<int> arr = {2, 4, 5, 8};
//     vector<int> arr2 = {1, 1, 1, 2, 3, 4, 7, 9};
//     vector<int> arr3(arr.size() + arr2.size()); // Allocate correct size

//     merge(arr, arr2, arr3);
//      for(int i = 0 ; i<arr3.size();i++){
//         cout<<arr3.at(i)<<" ";
//     }

   

//     return 0;
// }
// same que doing by    large element change  first 
#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, vector<int>& arr2, vector<int>& arr3) {
    int i = arr.size()-1, j = arr2.size()-1, k = arr3.size()-1;
    // Merge the two sorted arrays
    while (i>=0 && j >=0) { //ether by doing smallest element change 
        if (arr[i] > arr2[j]) {
            arr3[k--] = arr[i--];
        } else {
            arr3[k--] = arr2[j--];
        }
    }

    // Copy remaining elements from arr
    while (i>=0) {
        arr3[k--] = arr[i--];
    }

    // Copy remaining elements from arr2
    while (j >=0) {
        arr3[k--] = arr2[j--];
    }
}

int main() {
    vector<int> arr = {2, 4, 5, 8};
    vector<int> arr2 = {1, 1, 1, 2, 3, 4, 7, 9};
    vector<int> arr3(arr.size() + arr2.size()); // Allocate correct size

    merge(arr, arr2, arr3);
     for(int i = 0 ; i<arr3.size();i++){
        cout<<arr3.at(i)<<" ";
    }

   

    return 0;
}

//leedcode que number 88 