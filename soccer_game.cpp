#include"soccer_game.h"

#define X_cells 5
#define Y_cells 9

void Player::movement(){ // change player column
    if(player_position.x_position == X_cells){
        player_position.x_position--;
        return;
    }
    else if (player_position.x_position == 0){
        player_position.x_position++;
        return;
    }
    else {
        srand(time(NULL)); 
        player_position.x_position = ((rand()%100) < 50)?(player_position.x_position+1):(player_position.x_position-1);
    }
}

void Player::pass(){

}

int main()
{
    return 0;
}
