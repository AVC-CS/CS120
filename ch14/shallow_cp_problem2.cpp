#include <iostream>
using namespace std;


class Student{
    private:
        int id;
        double *scores;
    public:
        Student(int id, double sc): id(id){
            scores = new double;
            *scores = sc;
        }
        ~Student(){
            delete [] scores;
            cout << "destructor called" << endl;
        }
        friend void print(Student obj);
};
void print(Student obj){
    cout << "id: " << obj.id << ", scores: " << *obj.scores << endl;
}

int main(){
    Student s1(1, 90.5);
    print(s1);
    print(s1);
}