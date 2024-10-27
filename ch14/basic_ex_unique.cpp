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


    // This is 10 unique_ptr<int>, but rarely used. no need to use 10 unique_ptr for 10 int objects
    unique_ptr<int> *ptr2 = new unique_ptr<int>[10];
    ptr2[0] = make_unique<int>(0); 
    ptr2[1] = make_unique<int>(10); 
    ptr2[2] = make_unique<int>(90); 
    for(int i=0;i<3;i++){
        cout << "ptr2[" << i << "]: " << *ptr2[i] << endl;
    }
    

    // if you want to make a pointer to an array of ints, use this
    // one unique_ptr can point to an array of ints

    unique_ptr<int[]> ptr3 = make_unique<int[]>(10);
    // unique_ptr<int []> ptr3 = unique_ptr<int []>(new int[10]);   // this is also correct
    for(int i=0;i<10;i++){
        cout << "ptr3[" << i << "]: " << ptr3[i] << endl;
    }

}