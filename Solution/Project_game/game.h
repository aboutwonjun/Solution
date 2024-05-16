
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
    int getDef();
    int get_hp_item_num();
    int get_mp_item_num();
    string getJobClass();




    void setName(string name);
    void setLevel(int level);
    void setHp(int hp);
    void setMp(int mp);
    void setDef(int def);
    void setJobClass(string jobClass);


    void set_hp_item_num(int hp_item_num);
    void set_mp_item_num(int mp_item_num);





    int manipulateCharacter(int option);
    void changeName(string newName);
    void levelUp();
    void showStatus();
    void exitGame();

    void strTraining();
    void intTraining();
    void defTraining();
    void saveRecord();

    void checkHpItem();
    void checkMpItem();
    void useHpItem();
    void useMpItem();

    int chooseJobClass(int option);


    int attack();
    void takeDamage(int damage); // 플레이어가 데미지를 입는 함수
    void monsterAttack(Character& target); // 몬스터가 공격하는 함수
    void monsterHeal();


private:
    string m_name;
    int m_level;

    int m_hp_item_num;
    int m_mp_item_num;

    //플레이어 능력치
    int m_str;
    int m_int;
    int m_hp;
    int m_mp;
    int m_def;


    //직업 저장
    string m_jobClass;

    bool m_isMonster;
};