#ifndef UNIQUE_PTR
#define UNIQUE_PTR


template<typename T>
class UniquePtr
{

public:
    UniquePtr(T* N); // constructor
    UniquePtr(); // default constructor
    UniquePtr(const UniquePtr& ptr) =  delete ; // copy constructor
    UniquePtr(UniquePtr&& ptr); // move constructor
    ~UniquePtr(); // destructor
    
    T& operator=(const UniquePtr& ptr) = delete ; // assignment operator
    T& operator*(); // * operator
    T* operator->(); //
    operator bool(); // bool operator

    T* get(); // get raw pointer stored in the class
    void reset(); // reset the pointer to nullptr
    T* reset(T* inp) ; // reset the pointer and make new pointer by input value
    T* release();


private:

T* _p ;

};


#include "unique_ptr.hpp"


#endif //UNIQUE_PTR