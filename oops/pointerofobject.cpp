 #include <iostream>
using namespace std ;
class cricketer{
    public:
    string name;
    int runs;
    float avg;
    //same variable name   karna ka liya this keyword use karta hai 
    //this use to indentify ki kona name ki baat kar raha ho 
    cricketer(string name, int runs,float avg){
        this->name = name; 
        this->runs = runs;
        this->avg = avg;
        //remember this-> not dot direct object name 
    }   
}; 
void change( cricketer * c){
    // (*c).name = "piyush"; //other method 
    c->name = "piyush"; //(*c).name = "piyush";
}
int main(){
    cricketer c1("virat kohli" , 25000,45.8);
    // further of doing this  (*c).name now i will  do only  c->name = "rohit "
    // change(&c1);
    // cout<<c1.name;
    //similiar to intger jasa work kar raha tha
    // cricketer c2("rohit sharma",18000,59.6);
    //understant this
    // a->b  a must be a pointer means  (*a).b
    cricketer * p1 = &c1;
    // cout<<(*p1).name<<endl; ab ya bhi kar sakta hu 
    cout<<p1->name<<endl;
    p1->name = "piyush";
    cout<<p1->name<<endl;




}