#include <iostream>
using namespace std;

class C{
    public:
        int *ptr;
};
int main() {
    C obj1, obj2;
    obj1.ptr = (int *)malloc(sizeof(int));
    *obj1.ptr = 10;
    obj2 = obj1;
    cout << *obj2.ptr << endl;
    cout << *obj1.ptr << endl;
    printf("obj1.ptr: %p\n", obj1.ptr);
    printf("obj2.ptr: %p\n", obj2.ptr);
    delete obj1.ptr;
    if (obj2.ptr != nullptr) {
        cout << *obj2.ptr << endl;
    }
    else {
        cout << "obj2.ptr is nullptr" << endl;
    }
}