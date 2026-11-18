typedef enum { EMPTY_TILE, FOOD_TILE, SNAIL_TILE} Tile_status;
typedef struct {
        int posX;
        int posY;
        Tile_status tile_status;
} Tile; 

typedef struct {
        int map_len;
        int map_height;
        int snake_birth_size;
} Ini_data;
typedef struct {
        Tile** map;

} Ini_world;