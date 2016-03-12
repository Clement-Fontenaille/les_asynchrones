#include <iostream>
#include <stdio.h>
#include <set>
#include <ainetlib16.hpp>

using namespace std;
using namespace ainet16;

static Actions actions;
static GameParameters p;
static Session session;

static std_set<int> played_cells;

void play_turn(Actions & actions, GameParameters &p, Session & session);
float dist(float x1, float x2, float y1, float y2);

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



