#include <iostream>
using namespace std;
class temp {
public:
//function with one intger
  void printnum(int num){
    cout<<"number is integer"<<num<<endl;

  }
  //function with one double parameter
  void printnum(double num){
    cout<<"number is double"<<num<<endl;
  }
  
  void Sum(int a,int b){
    cout<<"sum:"<<a+b;
  }

};

int main() {
    temp num;
    num.printnum(34);
    num.printnum(3.14);
    num.Sum(10,9.10);
    

   
return 0;
   
}
