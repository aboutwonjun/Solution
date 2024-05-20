#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    virtual void intro() {
        cout << "사람입니다~" << endl;
    }
};

class Student : public Person {
    string name;

public:
    Student(string name) {
        this->name = name;
    }

    void intro() override {
        cout << name << "학생입니다." << endl;
    }

    void learn() {
        cout << "배웁니다." << endl;
    }
};

class Teacher : public Person {
    string name;

public:
    Teacher(string name) {
        this->name = name;
    }

    void intro() override {
        cout << name << "선생입니다." << endl;
    }

    void teach() {
        cout << "가르칩니다." << endl;
    }
};

int main() {
    Person* pList[3];
    string names[3];

    cout << "3명의 이름 입력. (선생님, 학생, 학생)" << endl;
    cin >> names[0] >> names[1] >> names[2];

    // 각 클래스의 인스턴스 생성 및 배열에 할당
    pList[0] = new Teacher(names[0]);
    pList[1] = new Student(names[1]);
    pList[2] = new Student(names[2]);

    // 각 클래스의 intro() 함수 호출
    for (auto p : pList) {
        p->intro();
    }

    // 각 클래스의 고유 함수 호출
    static_cast<Teacher*>(pList[0])->teach();
    static_cast<Student*>(pList[1])->learn();
    static_cast<Student*>(pList[2])->learn();

    // 메모리 해제
    for (auto p : pList) {
        delete p;
    }

    return 0;
}
