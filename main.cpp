#include <iostream>
#include "world.h"

void init_game(Ini_world* _ini_world, Ini_data* _ini_data) {
        _ini_world->map = new Tile*[_ini_data->map_height];
        for (int i = 0; i < _ini_data->map_height; i++) {
                _ini_world->map[i] = new Tile[_ini_data->map_len]; 
        }
        for (int i = 0; i < _ini_data->map_height; i++) {
                for (int j = 0; j < _ini_data->map_len; j++) {
                        _ini_world->map[i][j].posX = j;
                        _ini_world->map[i][j].posY = i;
                        _ini_world->map[i][j].tile_status = EMPTY_TILE;
                }
        }
}
void quit_game(Ini_world* _ini_world, Ini_data* _ini_data) {
        for (int i = 0; i < _ini_data->map_height; i++) {
                delete[] _ini_world->map[i];
        }
        delete[] _ini_world->map;
        _ini_world->map = nullptr;
}

int main() {
        Ini_data ini_data;
        ini_data.map_len = 32;
        ini_data.map_height = 24;
        ini_data.snake_birth_size = 4;

        Ini_world ini_world;
        init_game(&ini_world, &ini_data);
        while(1) {

        }
        quit_game(&ini_world, &ini_data);
}