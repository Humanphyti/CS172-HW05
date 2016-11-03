//
//  vector.cpp
//  EX05_03
//
//  Created by Eben Schumann on 11/1/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include <iostream>
#include <vector>
template <typename T>
class Vector{
public:
    Vector<T>(); //constructs an empty vector with the specified element type
    Vector<T>(int size); //construscts a vecotr with the initial size, filled with default values
    Vector<T>(int size, T defaultValue); // constructs a vector with the initial size, filled with specified values
    void push_back(T element); //Appends the element in this vector
    void pop_back(); // removes the last element from this vector
    unsigned const size(); //returns the number of elements in this vector
    T const at(int index); //returns the element at the specified index in this vector
    bool const empty(); //returns true if this vector is empty
    void clear(); //removes all elements from this vecotr
    void swap(Vector v2); //swaps the constent of this vecot with the specified vector
    int Size;
    T array[100];
};

template <typename T>
Vector<T>::Vector(){
    Size = 0;
}

template <typename T>
T const Vector<T>::at(int index){
    return array[index];
}

template <typename T>
Vector<T>::Vector(int size){
    Size = size;
}

template <typename T>
Vector<T>::Vector(int size, T defaultValue){
    Size = size;
    for (int i = 0; i < Size; i++)
        array[i] = defaultValue;
}

template <typename T>
void Vector<T>::push_back(T element){
    array[Size] = element;
    Size++;
}

template <typename T>
void Vector<T>::pop_back(){
    Size--;
}

template <typename T>
unsigned const Vector<T>::size(){
    return Size;
}

template <typename T>
bool const Vector<T>::empty(){
    if (Size == 0)
        return true;
    else
        return false;
}

template <typename T>
void Vector<T>::clear(){
    Size = 0;
}

template <typename T>
void Vector<T>::swap(Vector v2) {
    for (int i = 0; i < Size; i++)
        Vector<T> = v2[i];
}
