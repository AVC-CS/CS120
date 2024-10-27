#include <iostream>
#include <memory>
using namespace std;

class C1{
    public:
        shared_ptr<int> ptr;
};
int main() {
    C1 obj1, obj2;
    // obj1.ptr = (int *)malloc(sizeof(int));
    obj1.ptr = make_shared<int>(10);
    *obj1.ptr = 10;
    obj2 = obj1;
    cout << *obj2.ptr << endl;
    cout << *obj1.ptr << endl;
    cout << obj1.ptr.use_count() << endl;
    cout << obj2.ptr.use_count() << endl;
    *obj1.ptr = 100;
    cout << *obj1.ptr << endl;
    cout << *obj2.ptr << endl;
}