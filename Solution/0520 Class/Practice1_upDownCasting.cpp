#include <iostream>
#include <string>
using namespace std;

class Snack {
protected:
    int m_price;
    string m_productName;
    string m_company;

public:
    Snack(const string& companyName) : m_company(companyName) {}

    int getPrice() const {
        return m_price;
    }
    void setPrice(int price) {
        m_price = price;
    }

    string getProductName() const {
        return m_productName;
    }
    void setProductName(const string& productName) {
        m_productName = productName;
    }

    string getCompany() const {
        return m_company;
    }
};

class Candy : public Snack {
private:
    string m_taste;

public:
    Candy(const string& companyName) : Snack(companyName) {}

    void setTaste(const string& taste) {
        m_taste = taste;
    }

    void printCompany() const {
        cout << "Candy ������: " << getCompany() << endl;
    }
};

class Chocolate : public Snack {
private:
    string m_shape;

public:
    Chocolate(const string& companyName) : Snack(companyName) {}

    void setShape(const string& shape) {
        m_shape = shape;
    }

    void printCompany() const {
        cout << "Chocolate ������: " << getCompany() << endl;
    }
};

int main() {
    // ��ü ���� �� �ʱ�ȭ
    Candy candy1("A");
    candy1.setPrice(1000);
    candy1.setProductName("HI");
    candy1.setTaste("sweet");

    Candy candy2("B");
    candy2.setPrice(1200);
    candy2.setProductName("Hello");
    candy2.setTaste("sour");

    Chocolate choco1("C");
    choco1.setPrice(1200);
    choco1.setProductName("Love");
    choco1.setShape("HeartShape");

    Chocolate choco2("D");
    choco2.setPrice(1200);
    choco2.setProductName("StaryNight");
    choco2.setShape("StarShape");

    // ������ �迭 ���� �� �ʱ�ȭ
    //GPT ���� 
    Snack* snackBasket[4];
    snackBasket[0] = &candy1;
    snackBasket[1] = &candy2;
    snackBasket[2] = &choco1;
    snackBasket[3] = &choco2;

    // �ٿ�ĳ������ ���� ������ ���
    for (int i = 0; i < 4; ++i) {
        if (i < 2) {
            Candy* candy = (Candy*)snackBasket[i];
            candy->printCompany();
        }
        else {
            Chocolate* chocolate = (Chocolate*)snackBasket[i];
            chocolate->printCompany();
        }
    }

    return 0;
}
