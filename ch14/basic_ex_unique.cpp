#include <iostream>
#include <memory>
using namespace std;

int main() {
    int num = 99; 
    // unique_ptr<int> ptr1(&num);
    unique_ptr<int> ptr1;
    ptr1 = make_unique<int>(num);
    // unique_ptr<int> ptr1 = make_unique<int>(num); 
    // ptr1 = &num;
    cout << *ptr1 << endl;
}