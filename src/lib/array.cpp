#include <iostream>
#include "array.h"

Array::Array(int size, int stepSize) {
    initialSize = size;
    step = stepSize;
    arrayPtr = new int[initialSize];
    currentIndex = 0;
    arraySize = initialSize;
    elementSize = 0;
}

Array::~Array() {
    delete[] arrayPtr;
}

void Array::showElements() {
    for (int i = 0; i < elementSize; i++) {
        std::cout << arrayPtr[i] << " "  ;
    }
    std::cout << std::endl;
}

void Array::expandArray(int size) {

    int newSize = arraySize + size;
    int* newArrayPtr = new int[newSize];

    
    for (int i = 0; i < elementSize; i++) {
        newArrayPtr[i] = arrayPtr[i];
    }

    delete[] arrayPtr;
    arrayPtr = newArrayPtr;
    arraySize = newSize;
}

int Array::getSize() {
    return arraySize;
}

int Array::getElemSize() {
    return elementSize;
}

void Array::setValue(int val) {
    if (currentIndex >= arraySize) {
        expandArray(step);
    }

    arrayPtr[currentIndex] = val;
    currentIndex++;
    elementSize++;
}

void Array::setArray(int* pArr, int size) {
  
    if (pArr != nullptr && size > 0) {


        for (int i = 0; i < size;  i++)
        {
            setValue(pArr[i]);
        }
        
    }
}