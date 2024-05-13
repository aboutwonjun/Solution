

#include <iostream>
#include <string>
using namespace std;

class Character {
public:
    Character(string name);
    string getName();
    int getLevel();
    int getHp();
    int getMp();
    int get_hp_item_num();
    int get_mp_item_num();

    void attack();
    void defend(int damage);


    void setName(string name);
    void setLevel(int level);
    void setHp(int hp);
    void setMp(int mp);
    void set_hp_item_num(int hp_item_num);
    void set_mp_item_num(int mp_item_num);





    int manipulateCharacter(int option);
    void changeName(string newName);
    void levelUp();
    void showStatus();
    void exitGame();

    void hpTraining();
    void mpTraining();
    void saveRecord();

    void checkHpItem();
    void checkMpItem();
    void useHpItem();
    void useMpItem();


private:
    string m_name;
    int m_level;

    int m_hp_item_num;
    int m_mp_item_num;
   
    
    int m_str;
    int m_int;
    int m_hp;
    int m_mp;
};

