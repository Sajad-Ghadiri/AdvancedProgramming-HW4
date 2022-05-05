#ifndef SHARED_PTR
#define SHARED_PTR
#include <iostream>

template<typename T>
class SharedPtr
{

public:
    
    SharedPtr(T* N); // Constructor
    SharedPtr(); // Default constructor
    ~SharedPtr(); // Destructor 
    SharedPtr(const SharedPtr& ptr) ; // Copy constructor

    T& operator*(); // * operator
    T* operator->(); // -> operator
    SharedPtr<T>& operator=(const SharedPtr& ptr) ; // Assign operator

    T* get(); // Get raw pointer stored in the class
    void reset(); // Reset the pointer to nullptr
    T* reset(T* inp) ; // Reset the pointer and make new pointer by input value
    int use_count();   // Get the number of shared pointers
    explicit operator bool(); // Bool operator

private:
T* _p ;
int* number ;

};

#include "shared_ptr.hpp"

#endif //SHARED_PTR