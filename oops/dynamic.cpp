#include <iostream>
using namespace std ;
class cricketer{
    public:
    string name;
    int runs;
    float avg;
    cricketer(string name, int runs,float avg){
        this->name = name; 
        this->runs = runs;
        this->avg = avg;

    }   
}; 

int main(){
    cricketer c1("virat kohli" , 25000,45.8);
    cricketer *c2 = new cricketer("rohit" , 19000,35.8);
    // upper line ka koi name nahi hai iska address store hai bs 
    // benifits  pass by refrece sai jay ga to main change kar pau ga 
    // int *p = new int(435); // ya basically heap memory main save ho raha hai  dynamic tarika sai 
    // mana koi variable bnya hi nahi  but tech   uska space main value ja rahi hai  runtime pay memory alocate hoti hai 
    // cout<<*p;
    // now we always create pc   ointer object 
    cout<<c2->name<<" "<<(*c2).runs;
     





}