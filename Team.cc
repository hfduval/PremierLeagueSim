#include "Team.h"

/**
	Default Team constructor
*/
Team::Team() {
	_name = " ";//blank name
	_points = 0;//0 points
	_position = 0;//0 position
	setStrength(0);//0 strength
	setResult(-1);//no result
};

/**
	Team destructor
*/
Team::~Team() = default;