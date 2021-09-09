//
// Created by Jeannetta Marian on 9/6/21.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

template<class T>class Array
{
public:
    Array(void);
    Array(unsigned int n);
    Array(Array &arr);
    ~Array();
    T &getValue(int n){return(this->value[n]);}
    int &getArr_size(){return(this->arr_size);}
    void printValue(){for(int n = 0; n < arr_size; n++){std::cout<< value[n] <<"\n";}}
    T & operator[](int index);
private:
    T *value;
    int arr_size;
};

template<class T>Array<T>::Array(void){
    value = NULL;
    arr_size = 0;
    //std::cout<< "Standard Constructor\n";
}

template<class T>Array<T>::Array(unsigned int n){
    arr_size = static_cast<int>(n);
    value = new T[arr_size];
    for(int i = 0; i < arr_size; i++)
    {
        value[i] = n;
    }
    //std::cout<< "Constructor\n";
}

template<class T>Array<T>::~Array(){
    if (value != NULL)
    {
        delete value;
     //   std::cout<< "Destructor\n";
    }
}

template<class T>Array<T>::Array(Array &arr)
{
 //   std::cout<< "Copy Constructor\n";
    this->arr_size = arr.arr_size;
    this->value = new T[arr_size];
    for (int i = 0; i < arr_size; i++)
        this->value[i] = arr.value[i];
}


template<class T>T & Array<T>::operator[](int index){
if (index >= arr_size)
    throw std::logic_error("size too big");
else if (index < 0)
    throw std::logic_error("size too small");
else
    return(value[index]);
}

template<typename T>
std::ostream &operator<<(std::ostream & out, Array<T> & arr){
    for (int i = 0; i < arr.getArr_size(); i++)
    {
        out<<arr.getValue(i)<<" ";
    }
    return(out);
}

#endif //EX02_ARRAY_HPP
