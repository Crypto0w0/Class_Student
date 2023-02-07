#include <iostream>
using namespace std;

class Student{
    string name;
    int* rates = new int[100];
public:
    Student(){
        name = nullptr;
        rates = nullptr;
    }
    ~Student(){
        delete[] rates;
    }
    Student(const Student& s){
        this->name = s.name;
        for (int i = 0; i < 100; i++){
            this->rates[i] = s.rates[i];
        }
    }
    int* getRates(){
        int* r = new int[100];
        for (int i = 0; i < 100; i++){
            this->rates[i] = r[i];
        }
        return r;
    }
    Student& operator=(Student& s){
        this->name = s.name;
        this->rates = s.getRates();
        delete getRates();
        return *this;
    }
};

int main() {
    Student s1;
    Student s2;
    s1 = s2;
}
