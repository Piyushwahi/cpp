#include <iostream>
using namespace std;
class  cricketer{ //parent class
public:
int runs;
float avg;
int wickets;



};
class Engineer{
    public:
    int experience;
};
class phodu : public cricketer,Engineer{   // multiple inheritance 
    public:
    int experience;
};


 
int main(){
   
}

