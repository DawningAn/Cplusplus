#include <iostream>

using namespace std;

typedef int DataType;
class Stack
{
public:

    void Init()
    {
        _array = (DataType *)malloc(sizeof(DataType) * 3);
        if (NULL == _array)
        {
            perror("malloc申请空间失败!!!");
            return;
        }
        _capacity = 3;
        _size = 0;
    }
    void Push(DataType data)
    {
        CheckCapacity();
        _array[_size] = data;
        _size++;
    }
    void Pop()
    {
        if (Empty())
            return;
        _size--;
    }
    DataType Top() { return _array[_size - 1]; }
    int Empty() { return 0 == _size; }
    int Size() { return _size; }
    void Destroy()
    {
        if (_array)
        {
            free(_array);
            _array = NULL;
            _capacity = 0;
            _size = 0;
        }
    }

private:
    void CheckCapacity()
    {
        if (_size == _capacity)
        {
            int newcapacity = _capacity * 2;
            DataType *temp = (DataType *)realloc(_array, newcapacity *
                                                             sizeof(DataType));
            if (temp == NULL)
            {
                perror("realloc申请空间失败!!!");
                return;
            }
            _array = temp;
            _capacity = newcapacity;
        }
    }

private:
    DataType *_array;
    int _capacity;
    int _size;
};


/*
 C++中通过类可以将数据 以及 操作数据的方法进行完美结合，通过访问权限可以控制那些方法在类外可以被调用，即封装
 在使用时就像使用自己的成员一样，更符合人类对一件事物的认知。
而且每个方法不需要传递Stack*的参数了，编译器编译之后该参数会自动还原，即C++中 Stack *  
参数是编译器维护的，C语言中需用用户自己维护*/
int main()
{
    Stack s;
    s.Init();

    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.Push(4);
    printf("%d\n", s.Top());
    printf("%d\n", s.Size());
    s.Pop();
    s.Pop();
    printf("%d\n", s.Top());
    printf("%d\n", s.Size());
    s.Destroy();
    return 0;
}