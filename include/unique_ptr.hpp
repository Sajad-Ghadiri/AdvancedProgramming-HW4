#include <iostream>


template<typename T>
UniquePtr<T>::UniquePtr(T* N) : _p{N}
{

}
/////////////////////////// default constructor ///////////////////////////
template<typename T>
UniquePtr<T>::UniquePtr()
{
    _p = nullptr ;
}

/////////////////////////// move constructor /////////////////////////////
template<typename T>
UniquePtr<T>::UniquePtr(UniquePtr&& ptr)
{
    _p = ptr._p ;
    ptr._p = nullptr ; // set ptr to nullptr
}

////////////////////////// Copy constructor ///////////////////////////////
template<typename T>
UniquePtr<T>::UniquePtr(const UniquePtr& ptr)
{
    _p = new T[ptr.N] ;

}

///////////////////////// Destructor //////////////////////////////////////

template<typename T>
UniquePtr<T>::~UniquePtr()
{
    delete _p ;
    _p = nullptr ;
}



///////////////////////////// get /////////////////////////////////////////
template<typename T>
T* UniquePtr<T>::get()
{
    return _p ;
}
//////////////////////////// 