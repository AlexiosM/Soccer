#include<iostream>
#include<vector>
#include<string>
#include<cstdint>
#include<random>

using namespace std;

typedef struct {
    uint8_t x_position;
    uint8_t y_position;
}position_t;


class Player
{
public:
    void movement();
    void pass();
    virtual void specialMovement() = 0; // in order Player to be an abstract class

private:
    string player_name;
    uint8_t shirt_number;
    position_t player_position;
    uint8_t movement_line;
    uint8_t target_line;
};

class Team
{
private:
    vector<Player> players;
    string team_name;
    uint8_t mistakes; // ??
    uint8_t goals;
    uint16_t passings;

};

class Fullback : public Player
{
private:
   bool yellow_card;
   uint8_t steals; // shared to all objects
};

class Attacker : public Player
{

};

class Ball
{
private:
    position_t ball_position;
    Player *current_player;
    Player *ex_player;
public:
    Ball(Player *p1, Player *p2){
    current_player = p1;
    ex_player = p2;
    }
    void action();
    void assing(Player &p);
};

class Game
{
private:
    uint8_t turns;
    Ball ball;
    Team team_a;
    Team team_b;

public:
    void runTurn(); // calls action for each team with random order
};
