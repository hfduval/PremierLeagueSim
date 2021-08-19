#include "Club.h"

/**
	Default constructor
*/
Club::Club() {
	_name = " ";//blank name
	_points = 0;//0 points
	_position = 0;//position 0
	setStrength(0);//strength 0
	setResult(-1);//no results
}

/**
	Constructor that initializes a Club object
	@param s, pos, prevPos, worldRank First is the name, Second is the
	current position in the table based off of alphabetical order, Third
	is the previous position in the 2020/21 season, and Fourth is the
	world Ranking
*/
Club::Club(string s, int pos, int prevPos, int worldRank) {
	_name = s;
	_position = pos;
	_prevPos = prevPos;
	_premWorldRank = worldRank;
	_teamStrength = (38.0 - _prevPos - _premWorldRank);//base strength
	_points = 0;
}

/**
	Member function that sets the strength by multiplying the strength by a factor of 1.5 or 1.1
	depending on whether the Club is home or away
	@param homeAway an integer stating if the team is home or away, home is 1
	away is 0
*/
void Club::setStrength(int homeAway) {
	if (homeAway == 1) { // if team is home
		_teamStrength *= 1.5; // home team multiplier
	}
	else if (homeAway == 0) { // if team is away
		_teamStrength *= 1.1; // away team multiplier
	}
	_teamStrength = (38.0 - _prevPos - _premWorldRank);//default strengthif integer is invalid
}

/**
	Member function that sets the result by adding a result to the _VectorResult member
	@param mtchResult is an integer of 0, 1, or 3 depending on whether the team lost, drew or won
*/
void Club::setResult(int mtchResult) {
	if (mtchResult != -1) { _VectorResults.push_back(mtchResult); }//adds a valid result value to the vector
}

/**
	Member function that sets the amount of points a team has
*/
void Club::setPoints() {
	for (int i : _VectorResults) { _points += i; }//this is done by iterating and adding up 
												  //through the result vector
}

/**
	Member function that sets the current position of the club
	@param currPos position of the club
*/
void Club::setPosition(int currPos) {
	_position = currPos;
}

/**
	Member function that sets the name of the club
	@param s name string
*/
void Club::setName(string s) {
	_name = s;
}

/**
	Member function that gets the name of the club
	@return _name Returns the name
*/
string Club::getName() const {
	return _name;
}

/**
	Member function that gets the strength
	@return _teamStrength Returns the strength
*/
double Club::getStrength() const {
	return _teamStrength;
}

/**
	Member function that gets the position
	@return _position Returns the position
*/
int Club::getPosition() const {
	return _position;
}

/**
	Member function that gets the result vector
	@return _VectorResults Returns the vector of results
*/
vector<int> Club::getResult() const {
	return _VectorResults;
}

/**
	Member function that gets the amount of points a club has
	@return _points Returns the points
*/
int Club::getPoints() const {
	return _points;
}

/**
	Member function that gets the amount of games played
	@return _VectorResults.size() the size of the result vector
*/
int Club::getGamesPlayed() const {
	return _VectorResults.size();
}

/**
	Member function that resets the Club's strength
*/
void Club::resetStrength() {
	_teamStrength = (38.0 - _prevPos - _premWorldRank);
}

/**
	Member function that gets a luck factor for Club based off of
	each Clubs base strength level. Certain teams get a bit of a higher
	chance factor in order to add to more randomization, because the Premier
	League is a highly unpredictable league at times.
	@return team_luck Random factor for Club
*/
double Club::getLuckFactor() {
	if (this->getPosition() == 13) {
		int team_luck = (rand() % 17 - 8); // random number between that is added to
										   // Manchest Uniteds strength level
		return team_luck;
	}
	else if (this->getPosition() == 2) {
		int team_luck = (rand() % 20); // random number between that is added to Aston Villa's
										   // strength level
		return team_luck;
	}
	else if (this->getPosition() == 3) {
		int team_luck = (rand() % 35); // random number between that is added to Brentford's
										   // strength level
		return team_luck;
	}
	else if (this->getPosition() == 4) {
		int team_luck = (rand() % 32); // random number between that is added to Brighton's
										   // strength level
		return team_luck;
	}
	else if (this->getPosition() == 5 || this->getPosition() == 7) {
		int team_luck = (rand() % 20); // random number between that is added to Burnley's &
										   // Crystal Palace's strength level
		return team_luck;
	}
	else if (this->getPosition() == 6 || this->getPosition() == 1 || this->getPosition() == 17) {
		int team_luck = (rand() % 17 - 7); // random number between that is added to Chelsea's,
										   // Arsenal's, and Spur's strength level
		return team_luck;
	}
	else if (this->getPosition() == 8 || this->getPosition() == 19) {
		int team_luck = (rand() % 15); // random number between that is added to Everton's &
										   // West Ham's strength level
		return team_luck;
	}
	else if (this->getPosition() == 9 || this->getPosition() == 20) {
		int team_luck = (rand() % 17); // random number between that is added to Leeds United's &
										   // Wolves' strength level
		return team_luck;
	}
	else if (this->getPosition() == 10) {
		int team_luck = (rand() % 15 - 7); // random number between that is added to Leicester
										   // City's strength level
		return team_luck;
	}
	else if (this->getPosition() == 11) {
		int team_luck = (rand() % 19 - 9); // random number between that is added to Liverpool's
										   // strength level
		return team_luck;
	}
	else if (this->getPosition() == 12) {
		int team_luck = (rand() % 20 - 11); // random number between that is added to Man City's
										   // strength level
		return team_luck;
	}
	else if (this->getPosition() == 14) {
		int team_luck = (rand() % 23); // random number between that is added to
										   // Newcastle United's strength level
		return team_luck;
	}
	else if (this->getPosition() == 15 || this->getPosition() == 18) {
		int team_luck = (rand() % 33); // random number between that is added to Norwich City's
										   // & Watford's strength level
		return team_luck;
	}
	else if (this->getPosition() == 16) {
		int team_luck = (rand() % 23); // random number between that is added to
										   // Southampton's strength level
		return team_luck;
	}
}

/**
	Club destructor
*/
Club::~Club() = default;