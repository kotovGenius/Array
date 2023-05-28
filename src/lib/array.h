#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int initialSize;
    int step;
    int* arrayPtr;
    int currentIndex;
    int arraySize;
    int elementSize;

public:
    Array(int size = 10, int stepSize = 5);
    ~Array();

    void showElements();
    void expandArray(int size);
    int getSize();
    int getElemSize();
    void setValue(int val);
    void setArray(int* pArr, int size);
};

#endif