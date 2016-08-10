#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Team
{
vector<Player> players;
string team_name;
<wtf> mistakes;
unsigned short goals;
unsigned short passings;



};


class Player
{

public:
    movement();
    pass();
    virtual specialMovement() = 0; // in order Player to be an abstract class


private:
    string player_name;
    unsigned short shirt_number;
    unsigned short x_position, y_position;
    unsigned short movement_line;
    unsigned short target_line;

};

class Fullback : public PLayer
{
public:
    unsigned short steals; // shared to all objects

private:
   bool yellow_card;


};

class Attacker : public PLayer
{

};

class Ball
{
public:
    unsigned short x_position,y_position;
    action();
    assing(Player p);

private:
    Player current_player;
    Player ex_player;
};

class Game
{
private:
    unsigned int turns;
    Ball ball;
    Team team_a;
    Team team_b;

public:
    runTurn(); // calls action for each team with random order
};
