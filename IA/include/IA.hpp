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
float cellDistance(const TurnPlayerCell & C1, const TurnPlayerCell & C2);
float radius(const TurnPlayerCell & C);

float moveDistance(const TurnPlayerCell & cell);
bool dangerEnnemyCell(const TurnPlayerCell & ennemyCell, const TurnPlayerCell & myCell);
bool canEatEnnemyCell(const TurnPlayerCell & ennemyCell, const TurnPlayerCell & myCell);
vector<int> isInDangerFromAnotherCell(const TurnPlayerCell & myCell);

int getNearestDangerousCell(vector<int> dangerousCells, const TurnPlayerCell & myCell);
void goToOppositeDirectionFromDangerousCell(int ennemiIndex, const TurnPlayerCell & myCell);

//~ struct Position
//~ {
	//~ float x; //! L'abscisse, comprise dans [0,map_width[
	//~ float y; //! L'ordonnée, comprise dans [0,map_height[
//~ };
//~ 
//~ struct MoveAction
//~ {
	//~ int pcell_id;
	//~ Position position;
//~ };
//~ 
//~ struct DivideAction
//~ {
	//~ int pcell_id;
	//~ Position position;
	//~ float mass;
//~ };
//~ 
//~ struct CreateVirusAction
//~ {
	//~ int pcell_id;
	//~ Position position;
//~ };



