#include <iostream>
using namespace std;
// malloc
// calloc
// class student
// {
// };

class animal // concerete class : object can be created from this class
{            // abstract class : object can't be created from this class
public:
    void speak()
    {
        cout << "I am an animal" << endl;
    }
};

class dog : public animal
{
public:
    void speak()
    {
        cout << "I am a dog" << endl;
    }
};
int main() // run time memeory allocation is done in heap
{          // compile time memory allocation is done in stack

    animal *a = new dog(); // pointer of parent class can point to child class object
    a->speak();
    // animal a;
    // dog d;
    // a.speak();
    // d.speak();

    // student *ptro = new student;
    /// int* ptr=(int*)malloc(sizeof(int));
    /// int* ptr=(int*)malloc(sizeof(int));
    /// int* arr=(int*)calloc(sizeof(int),1);

    return 0;
}
