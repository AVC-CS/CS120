#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> ptr = make_shared<int>(10);
    cout << "ptr: " << *ptr << endl;
    cout << "ptr.use_count(): " << ptr.use_count() << endl;

    shared_ptr<int> ptr2;
    ptr2 = ptr;
    *ptr2 = 99;
    cout << "ptr2: " << *ptr2 << endl;
    cout << "ptr.use_count(): " << ptr.use_count() << endl;

    // ptr.reset();
    ptr = make_shared<int>(20);
    cout << "ptr0.use_count(): " << ptr.use_count() << endl;
    cout << "ptr2.use_count(): " << ptr2.use_count() << endl;
    cout << "ptr: " << *ptr << endl;
    cout << "ptr2: " << *ptr2 << endl;

}