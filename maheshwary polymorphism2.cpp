#include <iostream>
using namespace std;
class temp {
public:
//function with one intger
  void printnum(int num){
    cout<<"number is integer"<<endl;

  }
  //function with one double parameter
  void printnum(double num){
    cout<<"number is double"<<endl;
  }
  
  void Sum(int a,int b){
    cout<<"sum:"<<a+b;
  }
  //operator overloading
   temp operator+(temp n){
    temp result;
    result.Sum(10,20);
    return result;
   }
 };


int main(){ 
    temp num;
    //call the operator overloading for addition
    temp result=num+num;



return 0;
}
