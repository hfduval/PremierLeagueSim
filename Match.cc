#include "Match.h"

/**
	Default constructor
*/
Match::Match() {
	_hStrength = 0;//sets strength to 0
	_aStrength = 0;
	_matchResult = 99;//sets result to 99
	_homeTeam = nullptr;//nullptr for home/away teams
	_awayTeam = nullptr;
	_hName = " ";//blank names
	_aName = " ";
};

/**
	Constructor used in program. Initializes all private members and calls Club member fucntions
	@param home_team, away_team Team* for both the home and away team
*/
Match::Match(Team* home_team, Team* away_team) {
	_matchResult = 99;
	_homeTeam = home_team;
	_awayTeam = away_team;
	_homeTeam->resetStrength();//resets the strength of both teams
	_awayTeam->resetStrength();
	_homeTeam->setStrength(1); // strength of home team
	_hStrength = _homeTeam->getStrength();
	_awayTeam->setStrength(0); // strength of away team
	_aStrength = _awayTeam->getStrength();
}

/**
	Member function that gets the name of the home team
*/
string Match::getHomeName() {
	_hName = _homeTeam->getName();
	return _hName;
}

/**
	Member function that gets the name of the away team
*/
string Match::getAwayName() {
	_aName = _awayTeam->getName();
	return _aName;
}

/**
	Member that sets the result of the match. This is where the "simulation" occurs
*/
void Match::setResult() {
	_matchResult = 99;
	_hStrength += _homeTeam->getLuckFactor(); //add a random factor that is always
	_aStrength += _awayTeam->getLuckFactor(); //prevalent in premier league matches
	double diff = _hStrength - _aStrength;//checks the difference in team strengths
	if (diff > 2.00) {//if the difference is greater than +2.00 then the home team wins
		_homeTeam->setResult(3);//set the home team's result to 3
		_awayTeam->setResult(0);//away team to 0
		_matchResult = 1;//A result of 1 means the home team won
	}
	else if (diff < -2.00) {//if the difference is less than -2.00 then the away team wins
		_awayTeam->setResult(3);//sets away team's result to 3
		_homeTeam->setResult(0);//home team to 0
		_matchResult = 0;//Result of 0 means away team won
	}
	else {//else if it is between -2.00 and 2.00, then the result is a draw
		_homeTeam->setResult(1);//set a result of 1 for both teams
		_awayTeam->setResult(1);
		_matchResult = -1;//a result of -1 means the match was a draw
	}
}

/**
	Member function that gets the result of the match, concatenating it to a string
	and returning this string
	@return res the result as a string
*/
string Match::getResult() {
	string res;
	if (this->_matchResult == 1) {//if the home team wins, the string says so
		res = this->getHomeName() + " won. " + this->getAwayName() + " lost.";
	}
	else if (this->_matchResult == 0) {//same for the away team winning
		res = this->getAwayName() + " won. " + this->getHomeName() + " lost.";
	}
	else if (this->_matchResult == -1) {//In case of a draw
		res = this->getHomeName() + " drew " + this->getAwayName();
	}
	else {//if match result is an invalid number
		res = "Error finding match data...";
	}
	return res;
}

/**
	Member function that gets the home team's position
	@return index home team's position
*/
int Match::getHomePos() {
	int pos = _homeTeam->getPosition();
	return pos;
}

/**
	Member function that gets the away team's position
	@return index away team's position
*/
int Match::getAwayPos() {
	int pos = _awayTeam->getPosition();
	return pos;
}

/**
	Member function that gets the match info and returns it as a string
	@return info string of match info
*/
string Match::getInfo() {
	string s1 = this->getHomeName();//gets the names of both teams
	string s2 = this->getAwayName();
	string s3 = this->getResult();//calls the result string to concatenate it to the end
	string info = "Home Team: " + s1 + ". | Away Team: " + s2 + ".\n" + s3;//concatenates s1,s2,s3
	return info;
}

/**
	Destructor
*/
Match::~Match() = default;