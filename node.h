#ifndef NODE
#define NODE

#include "boat.h"
#include "human.h"

using namespace std;

struct NODE {
    HUMAN *left_shore;
    HUMAN *right_shore;
    BOAT *boat_state;
};

NODE *build_node(size_t n);
#endif