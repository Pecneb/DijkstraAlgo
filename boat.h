#ifndef BOAT
#define BOAT

#include <stdlib.h>
#include <stdbool.h>

using namespace std;

enum SHORE = {LEFT, RIGHT};

struct BOAT {
  size_t size = 2;
  HUMAN cargo[2];
  SHORE shore;
};

#endif
