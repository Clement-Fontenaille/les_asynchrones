#include <iostream>
#include <stdio.h>

#include <ainetlib16.hpp>

using namespace std;
using namespace ainet16;

static Actions actions;
static GameParameters p;

float max(float a, float b);

void play_turn(Actions & actions, GameParameters &p, Session & session);
float dist(float x1, float x2, float y1, float y2);
float cellDistance(const TurnPlayerCell & C1, const TurnPlayerCell & C2);
float radius(const TurnPlayerCell & C);

float moveDistance(const TurnPlayerCell & cell);
bool dangerEnnemyCell(const TurnPlayerCell & ennemyCell, const TurnPlayerCell & myCell);
