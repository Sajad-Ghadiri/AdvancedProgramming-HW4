

//////////////////////// Constructor ///////////////////////////////
template<typename T>
SharedPtr<T>::SharedPtr(T* N) : _p{N}
{

}

///////////////////////// default constructor ///////////////////////////
template<typename T>
SharedPtr<T>::SharedPtr()
{
    _p = nullptr ;
}
/////////////////////// Destructor ///////////////////////////////
template<typename T>
SharedPtr<T>::~SharedPtr()
{
    delete _p ;
    _p = nullptr ;
}
/////////////////////// make_shared ///////////////////////////////
template<typename T>
T* make_shared(T N)
{
    return new T{N} ;
}
/////////////////////// operator* ///////////////////////////////
template<typename T>
T& SharedPtr<T>::operator*()
{
    return *_p ;
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
}
/////////////////////// reset with input////////////////////////////////
template<typename T>
T* SharedPtr<T>::reset(T* inp)
{
    delete _p ;
    _p = inp ;
    return _p ;
}
