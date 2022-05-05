#ifndef UNIQUE_PTR
#define UNIQUE_PTR


template<typename T>
class UniquePtr
{

public:
    UniquePtr(T* N); // Constructor
    UniquePtr(); // Default constructor
    UniquePtr(const UniquePtr& ptr) =  delete ; // Mopy constructor
    UniquePtr(UniquePtr&& ptr); // Move constructor
    ~UniquePtr(); // Destructor
    
    T& operator=(const UniquePtr& ptr) = delete ; // Assign operator
    T& operator*(); // * operator
    T* operator->(); //
    operator bool(); // Bool operator

    T* get(); // Get raw pointer stored in the class
    void reset(); // Reset the pointer to nullptr
    T* reset(T* inp);// Reset the pointer & make new pointer by input value
    T* release();

private:

T* _p ;

};

#include "unique_ptr.hpp"


#endif //UNIQUE_PTR