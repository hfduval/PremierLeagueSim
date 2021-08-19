/**
	@file Club.h
	@brief Club header file that defines Club class derived from Team base class
	@author Harrison Duval
	@version 1.4 8/15/21
*/

#pragma once
#ifndef ClUB_H
#define ClUB_H

#include "Team.h"

/**
	Club class that is derived from the Team base class. This is the used class
	that overrides all of the Team member functions, with the same uses. The reason why
	I have implemented this derived class is in case of future implementations that require
	more inheritances of the Team base class.
	This class holds data such as a Club's strength, name, points, position, and a vector of 
	it's match results. It also allows you to access these data members through get member functions.
	It defines each Club's base strength on it's previous finish in the 2020/21 season, and it's world
	ranking in comparison to other premier league clubs.
	Finally, it allows you to reset each the strength, and get a strength amount based off of a random
	number.
*/
class Club : public Team {
public:
	explicit Club();//default constructor
	explicit Club(string s, int pos, int prevPos, int worldRank);//constructor
	void setStrength(int homeAway) override;//strength setter
	void setResult(int mtchResult) override;//result setter
	void setPoints() override;//point setter
	void setPosition(int currPos) override;//position setter
	void setName(string s) override;//name setter
	string getName() const override;//name getter
	double getStrength() const override;//strength getter
	int getPosition() const override;//position getter
	vector<int> getResult() const override;//result getter
	int getPoints() const override;//points getter
	int getGamesPlayed() const override;//games played getter
	void resetStrength() override;//strength resetter
	double getLuckFactor() override;//randomized strenght getter
	~Club();
private:
	string _name; // team name
	int _position;// team position in the league table
	int _points;  // team's total point count
	vector<int> _VectorResults; // vector of results
	int _prevPos; // team's league position in the 2020/21 season
	int _premWorldRank; // team's UEFA world ranking as of 7/1/2021
	double _teamStrength; // team's strength level
};

#endif //CLUB_H