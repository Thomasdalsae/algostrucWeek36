#include <algorithm>
#include <strstream>
#include "Node.h"

#include "Node.h"
int* TaskOne();
int* TaskTwoPointer();
int TaskTwoVector();
int TaskTwoLinkedList();

template <typename T>
int TaskTwoLinkedList()
{
    Node<T>* Head_{nullptr};
    Node<T>* Tail_{nullptr};
    Node<T>* CurrentNode_{nullptr};

    

    
}

int TaskTwoVector()
{
     int ArraySize = 1000000;
    std::vector<int> VectorArray(ArraySize);
    for (int i = 0; i < VectorArray.size(); ++i)
    {
        VectorArray[i] = i;
    }

     for (int j = 0; j < VectorArray.size(); ++j)
     {
         std::cout << VectorArray[j]*2 << " ";
     }
   return 0;
}
int* TaskTwoPointer()
{
     int ArraySize = 1000000;
    int **p = new int*[ArraySize];
    for (int i = 0; i < ArraySize; ++i)
    {
        p[i] = new int(i);
        
    }
    for (int i = 0; i < ArraySize;i++)
    {
        std::cout << *p[i]*2 << " ";
    }
    for (int j = 0; j < ArraySize; j++)
    {
        //delete each pointer in array.
        delete p[j];
    }
    //deleteing the whole array.
    delete[] p;
    return 0;
}
bool comparator(int* a,int* b)
{
    return (*a < *b);
}
int* TaskOne()
{
    int **p = new int* [5];

     
    p[0] = new int(5);
    p[1] = new int(2);
    p[2] = new int(4);
    p[3] = new int(3);
    p[4] = new int(1);
     
    std::sort(p,p+5,comparator);
    for (int i = 0; i < 5;i++)
    {
        std::cout << *p[i];
    }
    for (int j = 0; j < 5; j++)
    {
        //delete each pointer in array.
        delete p[j];
    }
    //deleteing the whole array.
    delete[] p;
    return 0;
}

int main(int argc, char* argv[])
{

    //TaskOne();
    //TaskTwoPointer();
    TaskTwoVector();
    return 0;
}
