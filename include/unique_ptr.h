#ifndef UNIQUE_PTR
#define UNIQUE_PTR


template<typename T>
class UniquePtr
{

public:
    UniquePtr(T* N); // constructor
    UniquePtr(); // default constructor
    UniquePtr(const UniquePtr& ptr); // copy constructor
    UniquePtr(UniquePtr&& ptr); // move constructor
    ~UniquePtr(); // destructor


    T* get(); // get raw pointer stored in the class
    



private:

T* _p ;

};


#include "unique_ptr.hpp"


#endif //UNIQUE_PTR