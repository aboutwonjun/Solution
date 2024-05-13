#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
using namespace std;

class Character {
public:
    Character(string name);
    string getName();
    int getLevel();
    int getItemNum();
    void setName(string name);
    void setLevel(int level);
    void setItemNum(int item_num);
    int manipulateCharacter(int option);
    void changeName(string newName);
    void levelUp();
    void pickUpItem();
    void useItem();
    void showStatus();
    void exitGame();

private:
    string m_name;
    int m_level;
    int m_item_num;
};

#endif // CHARACTER_H
