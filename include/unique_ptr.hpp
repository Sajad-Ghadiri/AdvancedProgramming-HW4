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
//////////////////////////// operator* ////////////////////////////////////
template<typename T>
T& UniquePtr<T>::operator*()
{
    return *_p ;
}

/////////////////////////// operator ->  //////////////////////
template<typename T>
T* UniquePtr<T>::operator->()
{
    return _p ;
}
//////////////////////////// release ///////////////////////////////////////
template<typename T>
T* UniquePtr<T>::release()
{
    T* temp = _p ;
    _p = nullptr ;
    return temp ;
}

//////////////////////////// reset ///////////////////////////////////////
template<typename T>
void UniquePtr<T>::reset()
{
    delete _p ;
    _p = nullptr ;
}

template<typename T>
T* UniquePtr<T>::reset(T* inp)
{
    delete _p ;
    _p = inp ;
    return _p ;
}
////////////////////////////bool operator ////////////////////////////////
template<typename T>
UniquePtr<T>::operator bool()
{
    if(_p == nullptr)
    {
        return false ;
    }
    else
    {
        return true ;
    }
}
//////////////////////////// make_unique //////////////////////////////////
template<typename T>
T* make_unique(T p)
{
    return new T{p} ;
}
//////////////////////////////////////////////////////////////////////