#ifndef SHARED_PTR
#define SHARED_PTR
#include <iostream>

template<typename T>
class SharedPtr
{
public:

    SharedPtr(T* N); // constructor
    SharedPtr(); // default constructor
    ~SharedPtr(); // destructor 

    
    T& operator*(); // * operator


    T* get(); // get raw pointer stored in the class
    void reset(); // reset the pointer to nullptr
    T* reset(T* inp) ; // reset the pointer and make new pointer by input value


private:
T* _p ;

};

#include "shared_ptr.hpp"

#endif //SHARED_PTR