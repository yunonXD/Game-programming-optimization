#pragma once
#include <vector>
#include <iostream>

class googlebenchmark
{
public:


private:

};

template <typename T>
class vector {
    T* data;
    int capacity;
    int length;

public:
    // ������
    vector(int n = 1) : data(new T[n]), capacity(n), length(0) {}

    // �� �ڿ� ���ο� ���Ҹ� �߰��Ѵ�.
    void push_back(T s) {
        if (capacity <= length) {
            T* temp = new T[capacity * 2];
            for (int i = 0; i < length; i++) {
                temp[i] = data[i];
            }
            delete[] data;
            data = temp;
            capacity *= 2;
        }

        data[length] = s;
        length++;
    }

    // ������ ��ġ�� ���ҿ� �����Ѵ�.
    T operator[](int i) { return data[i]; }

    // x ��° ��ġ�� ���Ҹ� �����Ѵ�.
    void remove(int x) {
        for (int i = x + 1; i < length; i++) {
            data[i - 1] = data[i];
        }
        length--;
    }

    // ���� ������ ũ�⸦ ���Ѵ�.
    int size() { return length; }

    ~vector() {
        if (data) {
            delete[] data;
        }
    }
};



