#include <cassert>
#include <iostream>
#include <stdio.h>
#include <set>
#include <algorithm>
#include <cmath>
#include <ainetlib16.hpp>

using namespace std;
using namespace ainet16;

extern string address;
extern string port_str;
extern int port;
extern string name;
extern Actions * actions;
extern GameParameters * p;
extern Session * session;
extern Welcome * welcome;
extern set<int> played_cells;

void play_turn();

float dist(float x1, float x2, float y1, float y2);
float dist(const TurnPlayerCell & C1, const TurnPlayerCell & C2);
float dist(const Position & p1,const Position & p2);
float radius(const TurnPlayerCell & C);
float radius(const NeutralCell & C);
float radius(const TurnVirus & C);
float moveDistance(const TurnPlayerCell & cell);
bool dangerEnnemyCell(const TurnPlayerCell & ennemyCell, const TurnPlayerCell & myCell);
bool canEatEnnemyCell(const TurnPlayerCell & ennemyCell, const TurnPlayerCell & myCell);
bool canEatNeutralCell(const TurnPlayerCell & ennemyCell, const NeutralCell & target);
vector<int> isInDangerFromAnotherCell(const TurnPlayerCell & myCell);
int getNearestDangerousCell(vector<int> dangerousCells, const TurnPlayerCell & myCell);
vector<NeutralCell> get_edible_neutrals_in_range(const TurnPlayerCell & myCell);
void goToOppositeDirectionFromDangerousCell(int ennemiIndex, const TurnPlayerCell & myCell);
Position select_safe_move(const TurnPlayerCell arg, const Position & target);
