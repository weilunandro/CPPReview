//
// Created by Andro Wei on 04/04/2018.
//

#include "Array.h"

template<typename T>
Array::Array(int capacity) {
    assert(capacity > 0);

    mCapacity = capacity;
    mData = new T[mCapacity];
}

Array::~Array() {
    if (mData != nullptr) {
        delete[] mData;
        mData = nullptr;
    }
}