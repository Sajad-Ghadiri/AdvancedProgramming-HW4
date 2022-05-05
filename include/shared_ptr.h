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
    SharedPtr(const SharedPtr& ptr) ; // copy constructor


    T& operator*(); // * operator
    T* operator->(); // -> operator
    SharedPtr<T>& operator=(const SharedPtr& ptr) ; // assignment operator


    T* get(); // get raw pointer stored in the class
    void reset(); // reset the pointer to nullptr
    T* reset(T* inp) ; // reset the pointer and make new pointer by input value
    int use_count();   // get the number of shared pointers
    explicit operator bool(); // bool operator

private:
T* _p ;
int* number ;

};

#include "shared_ptr.hpp"

#endif //SHARED_PTR