#include <iostream>
#include <stdio.h>

#include <ainetlib16.hpp>

using namespace std;
using namespace ainet16;

static Actions actions;
static GameParameters p;

void play_turn(Actions & actions, GameParameters &p, Session & session);
float dist(float x1, float x2, float y1, float y2);


