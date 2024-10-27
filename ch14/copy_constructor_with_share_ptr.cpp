#include <iostream>
using namespace std;

class Student{
    private:
        shared_ptr<int []> scores; 
        int size;
    public:
        Student():size(0), scores(nullptr){};
        Student(int s):size(s){
            // scores = make_shared<int []>(s);    // this works only after C++17
            scores = shared_ptr<int []>(new int[s]);
        }
        ~Student(){
            scores.reset();
        }
        void changeElement(int index, int value){
            scores[index] = value;
        }
        int use_count(){
            return scores.use_count();
        }
        void reset(){
            scores.reset();
        }
        friend void print(Student obj);
};
void print(Student obj){
    cout << "scores: ";
    for(int i=0;i<obj.size;i++)
        cout << obj.scores[i] << "\t";
            cout << endl;
}

int main(){
    Student obj1(5);
    print(obj1);
    obj1.changeElement(0, 10);
    print(obj1);
    cout << "obj1.scores.use_count(): " << obj1.use_count()<< endl;

    Student obj2 = obj1;
    print(obj2);
    cout << "obj1.scores.use_count(): " << obj1.use_count()<< endl;
    cout << "obj2.scores.use_count(): " << obj2.use_count() << endl;
    obj1.reset();
    cout << "obj1.scores.use_count(): " << obj1.use_count()<< endl;
    cout << "obj2.scores.use_count(): " << obj2.use_count() << endl;
}

