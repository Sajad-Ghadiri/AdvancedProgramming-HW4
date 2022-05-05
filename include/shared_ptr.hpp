

//////////////////////// Constructor ///////////////////////////////
template<typename T>
SharedPtr<T>::SharedPtr(T* N) : _p{N}
{
    number = new int(1) ;
}

///////////////////////// default constructor ///////////////////////////
template<typename T>
SharedPtr<T>::SharedPtr()
{
    _p = nullptr ;
    number = new int(0)  ;
}
/////////////////////// copy constructor ///////////////////////////////
template<typename T>
SharedPtr<T>::SharedPtr(const SharedPtr& ptr)
{
    _p = ptr._p ;
    number = ptr.number  ;
    *number = *number + 1 ;
}
/////////////////////// Destructor ///////////////////////////////
template<typename T>
SharedPtr<T>::~SharedPtr()
{
    *number = *number - 1 ;

    if(*number == 0)
    {
        delete _p ;
        _p = nullptr ;
    }
}
/////////////////////// make_shared //////////////////////////////////
template<typename T>
T* make_shared(T N)
{
    return new T{N} ;
}
/////////////////////// operator* ///////////////////////////////////
template<typename T>
T& SharedPtr<T>::operator*()
{
    return *_p ;
}
/////////////////////// operator -> ///////////////////////////////
template<typename T>
T* SharedPtr<T>::operator->()
{
    return _p ;
}
/////////////////////// operator = //////////////////////////////////
template<typename T>
SharedPtr<T>& SharedPtr<T>::operator=(const SharedPtr<T>& ptr) 
{
    if( _p == ptr._p )
        return *this ;

    _p = ptr._p ;
    number = ptr.number ;
    *number = *number + 1 ;
    return *this ;
}

/////////////////////// get /////////////////////////////////////////
template<typename T>
T* SharedPtr<T>::get()
{
    return _p ;
}
/////////////////////// reset /////////////////////////////////////////
template<typename T>
void SharedPtr<T>::reset()
{
    _p = nullptr ;
    *number = 0 ;
}
/////////////////////// reset with input////////////////////////////////
template<typename T>
T* SharedPtr<T>::reset(T* inp)
{
    delete _p ;
    _p = inp ;
    *number = 1 ;
    return _p ;
}
/////////////////////// use_count /////////////////////////////////////////
template<typename T>
int SharedPtr<T>::use_count()
{
    return *number ;
}

////////////////////////////bool operator ////////////////////////////////
template<typename T>
SharedPtr<T>::operator bool()
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