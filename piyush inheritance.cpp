#include<iostream>
using namespace std;
class rectangle

{

public:

int length;

int breadth;

void show()

{ cout << "l="<<length<<endl;
cout << "b="<<breadth<<endl;
}

};




class cuboid: public rectangle

{

public:

int height;

void display ()

{ cout << "h="<<height<<endl;
    
}

};

int main()

{ cuboid c;

c.length =10; c.breadth = 20; c.height = 30;

c.show ();

c.display();
return 0;

}
