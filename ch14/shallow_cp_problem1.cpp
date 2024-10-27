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
        double get_scores(){
            return *scores;
        }
        friend void print(Student obj);
};
void print(Student obj){
    cout << "id: " << obj.id << ", scores: " << *obj.scores << endl;
}

int main(){
    Student s1(1, 90.5);
    Student s2 = s1;
    cout << "s1.get_scores(): " << s1.get_scores() << endl;
    cout << "s2.get_scores(): " << s2.get_scores() << endl;
    s1.~Student();
    cout << "s2.get_scores(): " << s2.get_scores() << endl;
}