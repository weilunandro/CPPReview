//
// Created by Andro Wei on 04/04/2018.
//

#ifndef CPPREVIEW_ARRAY_H
#define CPPREVIEW_ARRAY_H

#include <vector>

template<typename T>
class Array {

private:

    T *mData;
    int mCapacity;
    int mLength{0};

    bool resize(int newCapacity);

public:

    Array(int capacity);

    Array(const Array &) = delete;

    Array &operator=(const Array &) = delete;

    ~Array();

    int size();

    int capacity();

    bool is_empty();

    T at(int index);

    void push(T item);

    void insert(int index, T item);

    void prepend(T item);

    T pop();

    T remove_by_index(int index);

    std::vector<int> remove(T item);

    int find(T item);

};

#endif //CPPREVIEW_ARRAY_H
