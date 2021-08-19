/**
	@file Team.h
	@brief Header file that defines Team base class
	@author Harrison Duval
	@version 1.4 8/15/21
*/

#pragma once
#ifndef TEAM_H
#define TEAM_H
#include "hfduval.h"

/**
	Team base class that holds data such as a Team's strength, name, points, position, and a vector of 
	it's match results. It also allows you to access these data members through get member functions. 
	This class is mostly used as a pointer for its derived classes, and its member functions are all virtual.
	This is a base class in case of future implementations that define more inheritances.
*/
class Team {
public:
	explicit Team();//default constructor
	virtual void setStrength(int homeAway) { _teamStrength = 0; }//strength setter, below is result setter
	virtual void setResult(int mtchResult) { if (mtchResult != -1) { _VectorResults.push_back(mtchResult); } }
	virtual void setPoints() { for (int i : _VectorResults) { _points += i; } }//point setter
	virtual void setPosition(int currPos) { _position = currPos; }//position setter
	virtual void setName(string s) { _name = s; }//name setter
	virtual string getName() const { return _name; }//name getter
	virtual double getStrength() const { return _teamStrength; }//strength getter
	virtual int getPosition() const { return _position; }//position getter
	virtual vector<int> getResult() const { return _VectorResults; }//result getter
	virtual int getPoints() const { return _points; }//points getter
	virtual int getGamesPlayed() const { return _VectorResults.size(); }//games played getter
	virtual void resetStrength() { _teamStrength = 0; }//strength resetter
	virtual double getLuckFactor() { return 0.0; }//strength randomizer
	~Team();
private:
	string _name;//team name
	int _position;//team position
	double _teamStrength;//team strength
	vector<int> _VectorResults;//vector of team's match results
	int _points;//team points
};

#endif //TEAM_H