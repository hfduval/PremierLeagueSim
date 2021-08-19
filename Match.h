/**
	@file Matchdays.h
	@brief Header file that defines the Match class used to simulate matches
	@author Harrison Duval
	@version 1.4 8/15/21
*/

#pragma once
#ifndef MATCH_H
#define MATCH_H
#include "hfduval.h"
#include "Team.h" 
#include "Club.h"

/**
	Match class that takes two Clubs and simulates a match between the two, setting a result as
	a Win, Draw or Loss for the home and away team.
	For example:
			    Match match1(team1, team2);
				match1.setResult();
				cout << match1.getInfo() << endl;
	will simulate a match between team1 and team2, setting a result, and then using getInfo() to
	print out information regarding the match.
*/
class Match {
	double _hStrength;//home team strength
	double _aStrength;//away team strength
	int _matchResult;//match result 0, 1, or 3 (loss, draw, win)
	Team* _homeTeam;//Team* to passed home team
	Team* _awayTeam;//Team* to passed away team
	string _hName;//home team name
	string _aName;//away team name
public:
	Match();//Default constructor
	Match(Team* home_team, Team* away_team);//constructor
	void setResult();//result setter
	string getHomeName();//home team name getter
	string getAwayName();//away team name getter
	string getResult();//result getter
	int getHomePos();//home team position getter
	int getAwayPos();//away team position getter
	string getInfo();//match info getter
	~Match();//destructor
};

#endif //MATCH_H