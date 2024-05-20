#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    virtual void intro() {
        cout << "����Դϴ�~" << endl;
    }
};

class Student : public Person {
    string name;

public:
    Student(string name) {
        this->name = name;
    }

    void intro() override {
        cout << name << "�л��Դϴ�." << endl;
    }

    void learn() {
        cout << "���ϴ�." << endl;
    }
};

class Teacher : public Person {
    string name;

public:
    Teacher(string name) {
        this->name = name;
    }

    void intro() override {
        cout << name << "�����Դϴ�." << endl;
    }

    void teach() {
        cout << "����Ĩ�ϴ�." << endl;
    }
};

int main() {
    Person* pList[3];
    string names[3];

    cout << "3���� �̸� �Է�. (������, �л�, �л�)" << endl;
    cin >> names[0] >> names[1] >> names[2];

    // �� Ŭ������ �ν��Ͻ� ���� �� �迭�� �Ҵ�
    pList[0] = new Teacher(names[0]);
    pList[1] = new Student(names[1]);
    pList[2] = new Student(names[2]);

    // �� Ŭ������ intro() �Լ� ȣ��
    for (auto p : pList) {
        p->intro();
    }

    // �� Ŭ������ ���� �Լ� ȣ��
    static_cast<Teacher*>(pList[0])->teach();
    static_cast<Student*>(pList[1])->learn();
    static_cast<Student*>(pList[2])->learn();

    // �޸� ����
    for (auto p : pList) {
        delete p;
    }

    return 0;
}
