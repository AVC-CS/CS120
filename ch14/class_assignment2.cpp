#include <iostream>
#include <memory>
using namespace std;

class C1{
    public:
        unique_ptr<int> ptr;

        // C1& operator=(C1 &obj) noexcept{
        //     ptr = std::move(obj.ptr);
        //     return *this;
        // }
};
int main() {
    C1 obj1, obj2;
    obj1.ptr = make_unique<int>(10);
    *obj1.ptr = 99;
    obj2 = obj1;
    cout << *obj2.ptr << endl;
    // cout << *obj1.ptr << endl;
    if (obj1.ptr) {
        cout << *obj1.ptr << endl;
    }
    else {
        cout << "obj1.ptr is nullptr" << endl;
    }
}