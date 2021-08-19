/**
	@file Matchdays.h
	@brief Header file that defines Matchdays class, used for simulation
	@author Harrison Duval
	@version 1.4 8/15/21
*/

#pragma once
#ifndef MATCHDAYS_H
#define MATCHDAYS_H

#include "Hfduval.h"

#include "Team.h" 

#include "Match.h"

class Matchdays {
public:
	explicit Matchdays();//default constructor
	vector<Match> matchday1(vector<Team*>& VectorTeams);//member functions for all 34 matchdays
	vector<Match> matchday2(vector<Team*>& VectorTeams);
	vector<Match> matchday3(vector<Team*>& VectorTeams);
	vector<Match> matchday4(vector<Team*>& VectorTeams);
	vector<Match> matchday5(vector<Team*>& VectorTeams);
	vector<Match> matchday6(vector<Team*>& VectorTeams);
	vector<Match> matchday7(vector<Team*>& VectorTeams);
	vector<Match> matchday8(vector<Team*>& VectorTeams);
	vector<Match> matchday9(vector<Team*>& VectorTeams);
	vector<Match> matchday10(vector<Team*>& VectorTeams);
	vector<Match> matchday11(vector<Team*>& VectorTeams);
	vector<Match> matchday12(vector<Team*>& VectorTeams);
	vector<Match> matchday13(vector<Team*>& VectorTeams);
	vector<Match> matchday14(vector<Team*>& VectorTeams);
	vector<Match> matchday15(vector<Team*>& VectorTeams);
	vector<Match> matchday16(vector<Team*>& VectorTeams);
	vector<Match> matchday17(vector<Team*>& VectorTeams);
	vector<Match> matchday18(vector<Team*>& VectorTeams);
	vector<Match> matchday19(vector<Team*>& VectorTeams);
	vector<Match> matchday20(vector<Team*>& VectorTeams);
	vector<Match> matchday21(vector<Team*>& VectorTeams);
	vector<Match> matchday22(vector<Team*>& VectorTeams);
	vector<Match> matchday23(vector<Team*>& VectorTeams);
	vector<Match> matchday24(vector<Team*>& VectorTeams);
	vector<Match> matchday25(vector<Team*>& VectorTeams);
	vector<Match> matchday26(vector<Team*>& VectorTeams);
	vector<Match> matchday27(vector<Team*>& VectorTeams);
	vector<Match> matchday28(vector<Team*>& VectorTeams);
	vector<Match> matchday29(vector<Team*>& VectorTeams);
	vector<Match> matchday30(vector<Team*>& VectorTeams);
	vector<Match> matchday31(vector<Team*>& VectorTeams);
	vector<Match> matchday32(vector<Team*>& VectorTeams);
	vector<Match> matchday33(vector<Team*>& VectorTeams);
	vector<Match> matchday34(vector<Team*>& VectorTeams);
};

#endif //MATCHDAYS_H
