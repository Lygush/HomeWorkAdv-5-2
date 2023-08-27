#pragma once

template<class T>
class Array{
    int size{};
    T* arr{};
public:
    Array(){};
    
    Array(int size) : size(size){
        arr = new T[size];
    }
    ~Array() {
        delete[] arr;
    }

    const T operator[](int j) const {
        return arr[j];
    }

    T& operator[](int j) {
        return arr[j];
    }
};