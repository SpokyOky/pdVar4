#pragma once
#include <vector>
using namespace std;

template <class T>
class vStack
{
private:
    vector<T> v;
public:
    vStack();
    void push(T);
    T peek();
    void pop();
};

template <class T>
vStack<T>::vStack()
{
    v = vector<T>();
}

template <class T>
void vStack<T>::push(T value)
{
    v.push_back(value);
}

template <class T>
T vStack<T>::peek()
{
    return v.back();
}

template <class T>
void vStack<T>::pop()
{
    v.pop_back();
}