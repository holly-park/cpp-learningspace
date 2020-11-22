#include <iostream>
#include <string.h>
using namespace std;

struct Hero{
    char name[5];
    int hp;
    int skill;
    int pos[2];
};

struct Monster{
    char name[5];
    int hp;
    int skill;
    int pos[2];
};

int main(){
    int mapX = 50;
    int mapY = 10;

    struct Hero Hero;
    strcpy(Hero.name, "@");
    Hero.pos[0] = mapX*0.5;
    Hero.pos[1] = mapY*0.1;
    
    cout << Hero.name << endl;

    struct Monster Monster;
    strcpy(Monster.name,"#");
    cout << Monster.name << endl;
    cin >> Monster.name;

    return 0;
}