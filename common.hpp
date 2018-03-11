#ifndef __COMMON_H__
#define __COMMON_H__
#include <vector>

enum Side { 
    WHITE, BLACK
};

class Move {
   
public:
    int x, y;
    std::vector<Move*> children;

    Move(int x, int y) {
        this->x = x;
        this->y = y;        
    }
    ~Move() {}

    int getX() { return x; }
    int getY() { return y; }

    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
};

#endif
