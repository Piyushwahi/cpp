// basically it is type of function but it has no return type  and automatically call hota hai 
//   agar muja 50 student ka data store karna hai to main againg c1.name = .... karu ga nooo
#include <iostream>
using namespace std ;
class student{ // what is car it is user defind data type which stores  2 string and 2 int 
    public:
    string name;
    int rollno;
    float cgpa;

    //constructor  name of constructor is same name as class
    //default  constructor
    student(){
    }
    student(string s,int r){ //parameterised constructor i can pass 2 
        name = s;
        rollno = r;
        // cgpa = g;
    }
    // 3rd constructor
    student(string s,int r, float g){ //parameterised constructor i can  pass only  2 
        name = s;
        rollno = r;
        cgpa = g;
    }
};
int main(){
    //this s1 is created by two parameterised constructor  2 parameters 
    student s1("piyush",2835); // ab s1 ka object bna ga 
    // instant of doing this we can create a constructor then put the value in ()
    // s1.name= "piyush";
    // s1.rollno =2834 ;
    s1.cgpa =  8.9; // ya overwrite kar raha hai hum 
    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.cgpa<<" "<<endl;
    // c:\Users\piyus\OneDrive\Pictures\Screenshots 1\Screenshot 2025-03-09 201313.png
    // ⭐constructor and given value to object order should be same okk   
    //this s2 created by default constructor
    student s2;
    s2.name = "ankush"; //iska matlab hai ki value da dana 
    s2.rollno = 2481;
    s2.cgpa = 9.4;
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.cgpa<<" "<<endl;
    // ⭐this  s3 created by  three parameterised constructor 
    student s3("arjun", 2870,9.0);
    cout<<s3.name<<" "<<s3.rollno<<" "<<s3.cgpa<<" "<<endl;
   //⭐ copy constructor  
   student s5 = s1;//all details of s1 store in s5 deep copy hai 
   //now check ya deep copy hai ya shallo copy hai  
   s5.name = "manish"; // ⭐deep copy hai  like  pass by refrence and pass by value    (shallo copy pass by refrence hota)   s hai 
   cout<<s5.name<<" "<<s5.rollno<<" "<<s5.cgpa<<" "<<endl;
   student s6(s2); //copy constructor  sure hai contructor ko call gaiii hai  
   s6.name = "varun"; // ⭐ deep copy  pass by value 
   cout<<s6.name<<" "<<s6.rollno<<" "<<s6.cgpa<<" "<<endl;



}





// dry run 
// lets see how its work 
//ques
//  what is this   student(string s,int r, float  g)   this is my parametris constructor  3 parameters` 
// same order main value dana  string int int float 
// ⭐if we create constructor then default constructor remove then we need to  write default constructor (){
// 
// }