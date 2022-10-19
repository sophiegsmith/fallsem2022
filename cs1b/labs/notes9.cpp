//namespce notes 
//note that namespace is the one without using scope operator -> what is going on and what libray has certain things
//cout and cin from iostream, name would have no conflict
#include<iostream>

using namespace std;
namespace soph{
    int x = 5;
    int y = 10;
}
namespace bob{
    int x = 7;
    int y = 12;
}

using namespace soph;
using namespace bob;

int main()
{
    int x = 99;
    int y = 101;
    //this belongs to the std library-> no longer use x and y unless i use the library for it

    //endl and cout are from the std library -> scope of where we used it
    std::cout << "print x from std: " << x <<std::endl<<std::endl;
    //this is for if i want to call x from the soph library
    std::cout<< "Print x from soph: " << soph::x << std::endl;
    //this is for if i want to pring y from bob
    std::cout<< "Print y from bob: " << bob::y << std::endl;
    return 0;
}