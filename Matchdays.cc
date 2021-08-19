#include "Matchdays.h"

/**
	Default constructor
*/
Matchdays::Matchdays() {};

/**
	Member function that initializes the 10 matches of matchday 1, setting each matches
	result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday1(vector<Team*>& VectorTeams) {
	vector<Match> matchday1;//matchday1 vector
	Match matchdayOne1(VectorTeams[2], VectorTeams[0]);//This is the real schedule for the
	Match matchdayOne2(VectorTeams[12], VectorTeams[8]);//premier league season, starting with
	Match matchdayOne3(VectorTeams[4], VectorTeams[3]);//matchday 1
	Match matchdayOne4(VectorTeams[5], VectorTeams[6]);
	Match matchdayOne5(VectorTeams[7], VectorTeams[15]);
	Match matchdayOne6(VectorTeams[9], VectorTeams[19]);
	Match matchdayOne7(VectorTeams[17], VectorTeams[1]);
	Match matchdayOne8(VectorTeams[14], VectorTeams[10]);
	Match matchdayOne9(VectorTeams[13], VectorTeams[18]);
	Match matchdayOne10(VectorTeams[16], VectorTeams[11]);

	matchdayOne1.setResult();//sets result for every match
	matchdayOne2.setResult();
	matchdayOne3.setResult();
	matchdayOne4.setResult();
	matchdayOne5.setResult();
	matchdayOne6.setResult();
	matchdayOne7.setResult();
	matchdayOne8.setResult();
	matchdayOne9.setResult();
	matchdayOne10.setResult();

	matchday1.push_back(matchdayOne1);//push_back all these matches onto
	matchday1.push_back(matchdayOne2);//the matchday vector
	matchday1.push_back(matchdayOne3);
	matchday1.push_back(matchdayOne4);
	matchday1.push_back(matchdayOne5);
	matchday1.push_back(matchdayOne6);
	matchday1.push_back(matchdayOne7);
	matchday1.push_back(matchdayOne8);
	matchday1.push_back(matchdayOne9);
	matchday1.push_back(matchdayOne10);

	return matchday1;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday, 
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday2(vector<Team*>& VectorTeams) {
	vector<Match> matchday2;

	Match matchdayTwo1(VectorTeams[10], VectorTeams[4]);
	Match matchdayTwo2(VectorTeams[8], VectorTeams[7]);
	Match matchdayTwo3(VectorTeams[1], VectorTeams[13]);
	Match matchdayTwo4(VectorTeams[6], VectorTeams[2]);
	Match matchdayTwo5(VectorTeams[11], VectorTeams[14]);
	Match matchdayTwo6(VectorTeams[3], VectorTeams[17]);
	Match matchdayTwo7(VectorTeams[15], VectorTeams[12]);
	Match matchdayTwo8(VectorTeams[19], VectorTeams[16]);
	Match matchdayTwo9(VectorTeams[0], VectorTeams[5]);
	Match matchdayTwo10(VectorTeams[18], VectorTeams[9]);

	matchdayTwo1.setResult();
	matchdayTwo2.setResult();
	matchdayTwo3.setResult();
	matchdayTwo4.setResult();
	matchdayTwo5.setResult();
	matchdayTwo6.setResult();
	matchdayTwo7.setResult();
	matchdayTwo8.setResult();
	matchdayTwo9.setResult();
	matchdayTwo10.setResult();

	matchday2.push_back(matchdayTwo1);
	matchday2.push_back(matchdayTwo2);
	matchday2.push_back(matchdayTwo3);
	matchday2.push_back(matchdayTwo4);
	matchday2.push_back(matchdayTwo5);
	matchday2.push_back(matchdayTwo6);
	matchday2.push_back(matchdayTwo7);
	matchday2.push_back(matchdayTwo8);
	matchday2.push_back(matchdayTwo9);
	matchday2.push_back(matchdayTwo10);

	return matchday2;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday3(vector<Team*>& VectorTeams) {
	vector<Match> matchday3;

	Match matchdayThree1(VectorTeams[11], VectorTeams[0]);
	Match matchdayThree2(VectorTeams[3], VectorTeams[7]);
	Match matchdayThree3(VectorTeams[1], VectorTeams[2]);
	Match matchdayThree4(VectorTeams[13], VectorTeams[15]);
	Match matchdayThree5(VectorTeams[18], VectorTeams[6]);
	Match matchdayThree6(VectorTeams[14], VectorTeams[9]);
	Match matchdayThree7(VectorTeams[10], VectorTeams[5]);
	Match matchdayThree8(VectorTeams[4], VectorTeams[8]);
	Match matchdayThree9(VectorTeams[16], VectorTeams[17]);
	Match matchdayThree10(VectorTeams[19], VectorTeams[12]);

	matchdayThree1.setResult();
	matchdayThree2.setResult();
	matchdayThree3.setResult();
	matchdayThree4.setResult();
	matchdayThree5.setResult();
	matchdayThree6.setResult();
	matchdayThree7.setResult();
	matchdayThree8.setResult();
	matchdayThree9.setResult();
	matchdayThree10.setResult();

	matchday3.push_back(matchdayThree1);
	matchday3.push_back(matchdayThree2);
	matchday3.push_back(matchdayThree3);
	matchday3.push_back(matchdayThree4);
	matchday3.push_back(matchdayThree5);
	matchday3.push_back(matchdayThree6);
	matchday3.push_back(matchdayThree7);
	matchday3.push_back(matchdayThree8);
	matchday3.push_back(matchdayThree9);
	matchday3.push_back(matchdayThree10);

	return matchday3;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday4(vector<Team*>& VectorTeams) {
	vector<Match> matchday4;

	Match matchdayFour1(VectorTeams[6], VectorTeams[16]);
	Match matchdayFour2(VectorTeams[9], VectorTeams[11]);
	Match matchdayFour3(VectorTeams[2], VectorTeams[3]);
	Match matchdayFour4(VectorTeams[17], VectorTeams[19]);
	Match matchdayFour5(VectorTeams[12], VectorTeams[13]);
	Match matchdayFour6(VectorTeams[0], VectorTeams[14]);
	Match matchdayFour7(VectorTeams[15], VectorTeams[18]);
	Match matchdayFour8(VectorTeams[5], VectorTeams[1]);
	Match matchdayFour9(VectorTeams[8], VectorTeams[10]);
	Match matchdayFour10(VectorTeams[7], VectorTeams[4]);

	matchdayFour1.setResult();
	matchdayFour2.setResult();
	matchdayFour3.setResult();
	matchdayFour4.setResult();
	matchdayFour5.setResult();
	matchdayFour6.setResult();
	matchdayFour7.setResult();
	matchdayFour8.setResult();
	matchdayFour9.setResult();
	matchdayFour10.setResult();

	matchday4.push_back(matchdayFour1);
	matchday4.push_back(matchdayFour2);
	matchday4.push_back(matchdayFour3);
	matchday4.push_back(matchdayFour4);
	matchday4.push_back(matchdayFour5);
	matchday4.push_back(matchdayFour6);
	matchday4.push_back(matchdayFour7);
	matchday4.push_back(matchdayFour8);
	matchday4.push_back(matchdayFour9);
	matchday4.push_back(matchdayFour10);

	return matchday4;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday5(vector<Team*>& VectorTeams) {
	vector<Match> matchday5;

	Match matchdayFive1(VectorTeams[13], VectorTeams[8]);
	Match matchdayFive2(VectorTeams[19], VectorTeams[2]);
	Match matchdayFive3(VectorTeams[10], VectorTeams[6]);
	Match matchdayFive4(VectorTeams[11], VectorTeams[15]);
	Match matchdayFive5(VectorTeams[14], VectorTeams[17]);
	Match matchdayFive6(VectorTeams[4], VectorTeams[0]);
	Match matchdayFive7(VectorTeams[1], VectorTeams[7]);
	Match matchdayFive8(VectorTeams[18], VectorTeams[12]);
	Match matchdayFive9(VectorTeams[3], VectorTeams[9]);
	Match matchdayFive10(VectorTeams[16], VectorTeams[5]);

	matchdayFive1.setResult();
	matchdayFive2.setResult();
	matchdayFive3.setResult();
	matchdayFive4.setResult();
	matchdayFive5.setResult();
	matchdayFive6.setResult();
	matchdayFive7.setResult();
	matchdayFive8.setResult();
	matchdayFive9.setResult();
	matchdayFive10.setResult();

	matchday5.push_back(matchdayFive1);
	matchday5.push_back(matchdayFive2);
	matchday5.push_back(matchdayFive3);
	matchday5.push_back(matchdayFive4);
	matchday5.push_back(matchdayFive5);
	matchday5.push_back(matchdayFive6);
	matchday5.push_back(matchdayFive7);
	matchday5.push_back(matchdayFive8);
	matchday5.push_back(matchdayFive9);
	matchday5.push_back(matchdayFive10);

	return matchday5;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday6(vector<Team*>& VectorTeams) {
	vector<Match> matchday6;

	Match matchdaySix1(VectorTeams[5], VectorTeams[11]);
	Match matchdaySix2(VectorTeams[7], VectorTeams[14]);
	Match matchdaySix3(VectorTeams[8], VectorTeams[18]);
	Match matchdaySix4(VectorTeams[9], VectorTeams[4]);
	Match matchdaySix5(VectorTeams[12], VectorTeams[1]);
	Match matchdaySix6(VectorTeams[17], VectorTeams[13]);
	Match matchdaySix7(VectorTeams[2], VectorTeams[10]);
	Match matchdaySix8(VectorTeams[15], VectorTeams[19]);
	Match matchdaySix9(VectorTeams[0], VectorTeams[16]);
	Match matchdaySix10(VectorTeams[6], VectorTeams[3]);

	matchdaySix1.setResult();
	matchdaySix2.setResult();
	matchdaySix3.setResult();
	matchdaySix4.setResult();
	matchdaySix5.setResult();
	matchdaySix6.setResult();
	matchdaySix7.setResult();
	matchdaySix8.setResult();
	matchdaySix9.setResult();
	matchdaySix10.setResult();

	matchday6.push_back(matchdaySix1);
	matchday6.push_back(matchdaySix2);
	matchday6.push_back(matchdaySix3);
	matchday6.push_back(matchdaySix4);
	matchday6.push_back(matchdaySix5);
	matchday6.push_back(matchdaySix6);
	matchday6.push_back(matchdaySix7);
	matchday6.push_back(matchdaySix8);
	matchday6.push_back(matchdaySix9);
	matchday6.push_back(matchdaySix10);

	return matchday6;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday7(vector<Team*>& VectorTeams) {
	vector<Match> matchday7;

	Match matchdaySeven1(VectorTeams[12], VectorTeams[7]);
	Match matchdaySeven2(VectorTeams[4], VectorTeams[14]);
	Match matchdaySeven3(VectorTeams[5], VectorTeams[15]);
	Match matchdaySeven4(VectorTeams[8], VectorTeams[17]);
	Match matchdaySeven5(VectorTeams[16], VectorTeams[1]);
	Match matchdaySeven6(VectorTeams[19], VectorTeams[13]);
	Match matchdaySeven7(VectorTeams[3], VectorTeams[0]);
	Match matchdaySeven8(VectorTeams[6], VectorTeams[9]);
	Match matchdaySeven9(VectorTeams[18], VectorTeams[2]);
	Match matchdaySeven10(VectorTeams[10], VectorTeams[11]);

	matchdaySeven1.setResult();
	matchdaySeven2.setResult();
	matchdaySeven3.setResult();
	matchdaySeven4.setResult();
	matchdaySeven5.setResult();
	matchdaySeven6.setResult();
	matchdaySeven7.setResult();
	matchdaySeven8.setResult();
	matchdaySeven9.setResult();
	matchdaySeven10.setResult();

	matchday7.push_back(matchdaySeven1);
	matchday7.push_back(matchdaySeven2);
	matchday7.push_back(matchdaySeven3);
	matchday7.push_back(matchdaySeven4);
	matchday7.push_back(matchdaySeven5);
	matchday7.push_back(matchdaySeven6);
	matchday7.push_back(matchdaySeven7);
	matchday7.push_back(matchdaySeven8);
	matchday7.push_back(matchdaySeven9);
	matchday7.push_back(matchdaySeven10);

	return matchday7;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday8(vector<Team*>& VectorTeams) {
	vector<Match> matchday8;

	Match matchdayEight1(VectorTeams[17], VectorTeams[10]);
	Match matchdayEight2(VectorTeams[1], VectorTeams[19]);
	Match matchdayEight3(VectorTeams[9], VectorTeams[12]);
	Match matchdayEight4(VectorTeams[11], VectorTeams[4]);
	Match matchdayEight5(VectorTeams[14], VectorTeams[3]);
	Match matchdayEight6(VectorTeams[15], VectorTeams[8]);
	Match matchdayEight7(VectorTeams[2], VectorTeams[5]);
	Match matchdayEight8(VectorTeams[7], VectorTeams[18]);
	Match matchdayEight9(VectorTeams[13], VectorTeams[16]);
	Match matchdayEight10(VectorTeams[0], VectorTeams[6]);

	matchdayEight1.setResult();
	matchdayEight2.setResult();
	matchdayEight3.setResult();
	matchdayEight4.setResult();
	matchdayEight5.setResult();
	matchdayEight6.setResult();
	matchdayEight7.setResult();
	matchdayEight8.setResult();
	matchdayEight9.setResult();
	matchdayEight10.setResult();

	matchday8.push_back(matchdayEight1);
	matchday8.push_back(matchdayEight2);
	matchday8.push_back(matchdayEight3);
	matchday8.push_back(matchdayEight4);
	matchday8.push_back(matchdayEight5);
	matchday8.push_back(matchdayEight6);
	matchday8.push_back(matchdayEight7);
	matchday8.push_back(matchdayEight8);
	matchday8.push_back(matchdayEight9);
	matchday8.push_back(matchdayEight10);

	return matchday8;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday9(vector<Team*>& VectorTeams) {
	vector<Match> matchday9;

	Match matchdayNine1(VectorTeams[0], VectorTeams[1]);
	Match matchdayNine2(VectorTeams[5], VectorTeams[14]);
	Match matchdayNine3(VectorTeams[6], VectorTeams[13]);
	Match matchdayNine4(VectorTeams[7], VectorTeams[17]);
	Match matchdayNine5(VectorTeams[8], VectorTeams[19]);
	Match matchdayNine6(VectorTeams[15], VectorTeams[4]);
	Match matchdayNine7(VectorTeams[3], VectorTeams[11]);
	Match matchdayNine8(VectorTeams[2], VectorTeams[9]);
	Match matchdayNine9(VectorTeams[18], VectorTeams[16]);
	Match matchdayNine10(VectorTeams[12], VectorTeams[10]);

	matchdayNine1.setResult();
	matchdayNine2.setResult();
	matchdayNine3.setResult();
	matchdayNine4.setResult();
	matchdayNine5.setResult();
	matchdayNine6.setResult();
	matchdayNine7.setResult();
	matchdayNine8.setResult();
	matchdayNine9.setResult();
	matchdayNine10.setResult();

	matchday9.push_back(matchdayNine1);
	matchday9.push_back(matchdayNine2);
	matchday9.push_back(matchdayNine3);
	matchday9.push_back(matchdayNine4);
	matchday9.push_back(matchdayNine5);
	matchday9.push_back(matchdayNine6);
	matchday9.push_back(matchdayNine7);
	matchday9.push_back(matchdayNine8);
	matchday9.push_back(matchdayNine9);
	matchday9.push_back(matchdayNine10);

	return matchday9;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday10(vector<Team*>& VectorTeams) {
	vector<Match> matchday10;

	Match matchdayTen1(VectorTeams[9], VectorTeams[0]);
	Match matchdayTen2(VectorTeams[4], VectorTeams[2]);
	Match matchdayTen3(VectorTeams[10], VectorTeams[3]);
	Match matchdayTen4(VectorTeams[11], VectorTeams[6]);
	Match matchdayTen5(VectorTeams[13], VectorTeams[5]);
	Match matchdayTen6(VectorTeams[17], VectorTeams[15]);
	Match matchdayTen7(VectorTeams[16], VectorTeams[12]);
	Match matchdayTen8(VectorTeams[14], VectorTeams[8]);
	Match matchdayTen9(VectorTeams[1], VectorTeams[18]);
	Match matchdayTen10(VectorTeams[19], VectorTeams[7]);

	matchdayTen1.setResult();
	matchdayTen2.setResult();
	matchdayTen3.setResult();
	matchdayTen4.setResult();
	matchdayTen5.setResult();
	matchdayTen6.setResult();
	matchdayTen7.setResult();
	matchdayTen8.setResult();
	matchdayTen9.setResult();
	matchdayTen10.setResult();

	matchday10.push_back(matchdayTen1);
	matchday10.push_back(matchdayTen2);
	matchday10.push_back(matchdayTen3);
	matchday10.push_back(matchdayTen4);
	matchday10.push_back(matchdayTen5);
	matchday10.push_back(matchdayTen6);
	matchday10.push_back(matchdayTen7);
	matchday10.push_back(matchdayTen8);
	matchday10.push_back(matchdayTen9);
	matchday10.push_back(matchdayTen10);

	return matchday10;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday11(vector<Team*>& VectorTeams) {
	vector<Match> matchday11;

	Match matchdayEleven1(VectorTeams[0], VectorTeams[17]);
	Match matchdayEleven2(VectorTeams[2], VectorTeams[14]);
	Match matchdayEleven3(VectorTeams[3], VectorTeams[13]);
	Match matchdayEleven4(VectorTeams[5], VectorTeams[4]);
	Match matchdayEleven5(VectorTeams[6], VectorTeams[19]);
	Match matchdayEleven6(VectorTeams[7], VectorTeams[16]);
	Match matchdayEleven7(VectorTeams[8], VectorTeams[9]);
	Match matchdayEleven8(VectorTeams[12], VectorTeams[11]);
	Match matchdayEleven9(VectorTeams[15], VectorTeams[1]);
	Match matchdayEleven10(VectorTeams[18], VectorTeams[10]);

	matchdayEleven1.setResult();
	matchdayEleven2.setResult();
	matchdayEleven3.setResult();
	matchdayEleven4.setResult();
	matchdayEleven5.setResult();
	matchdayEleven6.setResult();
	matchdayEleven7.setResult();
	matchdayEleven8.setResult();
	matchdayEleven9.setResult();
	matchdayEleven10.setResult();

	matchday11.push_back(matchdayEleven1);
	matchday11.push_back(matchdayEleven2);
	matchday11.push_back(matchdayEleven3);
	matchday11.push_back(matchdayEleven4);
	matchday11.push_back(matchdayEleven5);
	matchday11.push_back(matchdayEleven6);
	matchday11.push_back(matchdayEleven7);
	matchday11.push_back(matchdayEleven8);
	matchday11.push_back(matchdayEleven9);
	matchday11.push_back(matchdayEleven10);

	return matchday11;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday12(vector<Team*>& VectorTeams) {
	vector<Match> matchday12;

	Match matchdayTwelve1(VectorTeams[1], VectorTeams[3]);
	Match matchdayTwelve2(VectorTeams[4], VectorTeams[6]);
	Match matchdayTwelve3(VectorTeams[9], VectorTeams[5]);
	Match matchdayTwelve4(VectorTeams[10], VectorTeams[0]);
	Match matchdayTwelve5(VectorTeams[11], VectorTeams[7]);
	Match matchdayTwelve6(VectorTeams[13], VectorTeams[2]);
	Match matchdayTwelve7(VectorTeams[14], VectorTeams[15]);
	Match matchdayTwelve8(VectorTeams[16], VectorTeams[8]);
	Match matchdayTwelve9(VectorTeams[17], VectorTeams[12]);
	Match matchdayTwelve10(VectorTeams[19], VectorTeams[18]);

	matchdayTwelve1.setResult();
	matchdayTwelve2.setResult();
	matchdayTwelve3.setResult();
	matchdayTwelve4.setResult();
	matchdayTwelve5.setResult();
	matchdayTwelve6.setResult();
	matchdayTwelve7.setResult();
	matchdayTwelve8.setResult();
	matchdayTwelve9.setResult();
	matchdayTwelve10.setResult();

	matchday12.push_back(matchdayTwelve1);
	matchday12.push_back(matchdayTwelve2);
	matchday12.push_back(matchdayTwelve3);
	matchday12.push_back(matchdayTwelve4);
	matchday12.push_back(matchdayTwelve5);
	matchday12.push_back(matchdayTwelve6);
	matchday12.push_back(matchdayTwelve7);
	matchday12.push_back(matchdayTwelve8);
	matchday12.push_back(matchdayTwelve9);
	matchday12.push_back(matchdayTwelve10);

	return matchday12;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday13(vector<Team*>& VectorTeams) {
	vector<Match> matchday13;

	Match matchdayThirteen1(VectorTeams[0], VectorTeams[13]);
	Match matchdayThirteen2(VectorTeams[2], VectorTeams[7]);
	Match matchdayThirteen3(VectorTeams[3], VectorTeams[8]);
	Match matchdayThirteen4(VectorTeams[4], VectorTeams[16]);
	Match matchdayThirteen5(VectorTeams[5], VectorTeams[12]);
	Match matchdayThirteen6(VectorTeams[6], VectorTeams[1]);
	Match matchdayThirteen7(VectorTeams[9], VectorTeams[17]);
	Match matchdayThirteen8(VectorTeams[10], VectorTeams[15]);
	Match matchdayThirteen9(VectorTeams[11], VectorTeams[18]);
	Match matchdayThirteen10(VectorTeams[14], VectorTeams[19]);

	matchdayThirteen1.setResult();
	matchdayThirteen2.setResult();
	matchdayThirteen3.setResult();
	matchdayThirteen4.setResult();
	matchdayThirteen5.setResult();
	matchdayThirteen6.setResult();
	matchdayThirteen7.setResult();
	matchdayThirteen8.setResult();
	matchdayThirteen9.setResult();
	matchdayThirteen10.setResult();

	matchday13.push_back(matchdayThirteen1);
	matchday13.push_back(matchdayThirteen2);
	matchday13.push_back(matchdayThirteen3);
	matchday13.push_back(matchdayThirteen4);
	matchday13.push_back(matchdayThirteen5);
	matchday13.push_back(matchdayThirteen6);
	matchday13.push_back(matchdayThirteen7);
	matchday13.push_back(matchdayThirteen8);
	matchday13.push_back(matchdayThirteen9);
	matchday13.push_back(matchdayThirteen10);

	return matchday13;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday14(vector<Team*>& VectorTeams) {
	vector<Match> matchday14;

	Match matchdayFourteen1(VectorTeams[1], VectorTeams[11]);
	Match matchdayFourteen2(VectorTeams[7], VectorTeams[10]);
	Match matchdayFourteen3(VectorTeams[8], VectorTeams[6]);
	Match matchdayFourteen4(VectorTeams[17], VectorTeams[5]);
	Match matchdayFourteen5(VectorTeams[18], VectorTeams[3]);
	Match matchdayFourteen6(VectorTeams[19], VectorTeams[4]);
	Match matchdayFourteen7(VectorTeams[12], VectorTeams[0]);
	Match matchdayFourteen8(VectorTeams[13], VectorTeams[14]);
	Match matchdayFourteen9(VectorTeams[15], VectorTeams[9]);
	Match matchdayFourteen10(VectorTeams[16], VectorTeams[2]);

	matchdayFourteen1.setResult();
	matchdayFourteen2.setResult();
	matchdayFourteen3.setResult();
	matchdayFourteen4.setResult();
	matchdayFourteen5.setResult();
	matchdayFourteen6.setResult();
	matchdayFourteen7.setResult();
	matchdayFourteen8.setResult();
	matchdayFourteen9.setResult();
	matchdayFourteen10.setResult();

	matchday14.push_back(matchdayFourteen1);
	matchday14.push_back(matchdayFourteen2);
	matchday14.push_back(matchdayFourteen3);
	matchday14.push_back(matchdayFourteen4);
	matchday14.push_back(matchdayFourteen5);
	matchday14.push_back(matchdayFourteen6);
	matchday14.push_back(matchdayFourteen7);
	matchday14.push_back(matchdayFourteen8);
	matchday14.push_back(matchdayFourteen9);
	matchday14.push_back(matchdayFourteen10);

	return matchday14;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday15(vector<Team*>& VectorTeams) {
	vector<Match> matchday15;

	Match matchdayFifteen1(VectorTeams[1], VectorTeams[9]);
	Match matchdayFifteen2(VectorTeams[7], VectorTeams[0]);
	Match matchdayFifteen3(VectorTeams[8], VectorTeams[2]);
	Match matchdayFifteen4(VectorTeams[12], VectorTeams[6]);
	Match matchdayFifteen5(VectorTeams[13], VectorTeams[4]);
	Match matchdayFifteen6(VectorTeams[15], VectorTeams[3]);
	Match matchdayFifteen7(VectorTeams[16], VectorTeams[14]);
	Match matchdayFifteen8(VectorTeams[17], VectorTeams[11]);
	Match matchdayFifteen9(VectorTeams[18], VectorTeams[5]);
	Match matchdayFifteen10(VectorTeams[19], VectorTeams[10]);

	matchdayFifteen1.setResult();
	matchdayFifteen2.setResult();
	matchdayFifteen3.setResult();
	matchdayFifteen4.setResult();
	matchdayFifteen5.setResult();
	matchdayFifteen6.setResult();
	matchdayFifteen7.setResult();
	matchdayFifteen8.setResult();
	matchdayFifteen9.setResult();
	matchdayFifteen10.setResult();

	matchday15.push_back(matchdayFifteen1);
	matchday15.push_back(matchdayFifteen2);
	matchday15.push_back(matchdayFifteen3);
	matchday15.push_back(matchdayFifteen4);
	matchday15.push_back(matchdayFifteen5);
	matchday15.push_back(matchdayFifteen6);
	matchday15.push_back(matchdayFifteen7);
	matchday15.push_back(matchdayFifteen8);
	matchday15.push_back(matchdayFifteen9);
	matchday15.push_back(matchdayFifteen10);

	return matchday15;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday16(vector<Team*>& VectorTeams) {
	vector<Match> matchday16;

	Match matchdaySixteen1(VectorTeams[0], VectorTeams[15]);
	Match matchdaySixteen2(VectorTeams[2], VectorTeams[17]);
	Match matchdaySixteen3(VectorTeams[3], VectorTeams[16]);
	Match matchdaySixteen4(VectorTeams[4], VectorTeams[18]);
	Match matchdaySixteen5(VectorTeams[5], VectorTeams[8]);
	Match matchdaySixteen6(VectorTeams[6], VectorTeams[7]);
	Match matchdaySixteen7(VectorTeams[9], VectorTeams[13]);
	Match matchdaySixteen8(VectorTeams[10], VectorTeams[1]);
	Match matchdaySixteen9(VectorTeams[11], VectorTeams[19]);
	Match matchdaySixteen10(VectorTeams[14], VectorTeams[12]);

	matchdaySixteen1.setResult();
	matchdaySixteen2.setResult();
	matchdaySixteen3.setResult();
	matchdaySixteen4.setResult();
	matchdaySixteen5.setResult();
	matchdaySixteen6.setResult();
	matchdaySixteen7.setResult();
	matchdaySixteen8.setResult();
	matchdaySixteen9.setResult();
	matchdaySixteen10.setResult();

	matchday16.push_back(matchdaySixteen1);
	matchday16.push_back(matchdaySixteen2);
	matchday16.push_back(matchdaySixteen3);
	matchday16.push_back(matchdaySixteen4);
	matchday16.push_back(matchdaySixteen5);
	matchday16.push_back(matchdaySixteen6);
	matchday16.push_back(matchdaySixteen7);
	matchday16.push_back(matchdaySixteen8);
	matchday16.push_back(matchdaySixteen9);
	matchday16.push_back(matchdaySixteen10);

	return matchday16;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday17(vector<Team*>& VectorTeams) {
	vector<Match> matchday17;

	Match matchdaySeventeen1(VectorTeams[0], VectorTeams[18]);
	Match matchdaySeventeen2(VectorTeams[2], VectorTeams[12]);
	Match matchdaySeventeen3(VectorTeams[3], VectorTeams[19]);
	Match matchdaySeventeen4(VectorTeams[4], VectorTeams[17]);
	Match matchdaySeventeen5(VectorTeams[9], VectorTeams[16]);
	Match matchdaySeventeen6(VectorTeams[14], VectorTeams[1]);
	Match matchdaySeventeen7(VectorTeams[6], VectorTeams[15]);
	Match matchdaySeventeen8(VectorTeams[5], VectorTeams[7]);
	Match matchdaySeventeen9(VectorTeams[10], VectorTeams[13]);
	Match matchdaySeventeen10(VectorTeams[11], VectorTeams[8]);

	matchdaySeventeen1.setResult();
	matchdaySeventeen2.setResult();
	matchdaySeventeen3.setResult();
	matchdaySeventeen4.setResult();
	matchdaySeventeen5.setResult();
	matchdaySeventeen6.setResult();
	matchdaySeventeen7.setResult();
	matchdaySeventeen8.setResult();
	matchdaySeventeen9.setResult();
	matchdaySeventeen10.setResult();

	matchday17.push_back(matchdaySeventeen1);
	matchday17.push_back(matchdaySeventeen2);
	matchday17.push_back(matchdaySeventeen3);
	matchday17.push_back(matchdaySeventeen4);
	matchday17.push_back(matchdaySeventeen5);
	matchday17.push_back(matchdaySeventeen6);
	matchday17.push_back(matchdaySeventeen7);
	matchday17.push_back(matchdaySeventeen8);
	matchday17.push_back(matchdaySeventeen9);
	matchday17.push_back(matchdaySeventeen10);

	return matchday17;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday18(vector<Team*>& VectorTeams) {
	vector<Match> matchday18;

	Match matchdayEighteen1(VectorTeams[1], VectorTeams[4]);
	Match matchdayEighteen2(VectorTeams[7], VectorTeams[9]);
	Match matchdayEighteen3(VectorTeams[8], VectorTeams[0]);
	Match matchdayEighteen4(VectorTeams[12], VectorTeams[3]);
	Match matchdayEighteen5(VectorTeams[13], VectorTeams[11]);
	Match matchdayEighteen6(VectorTeams[15], VectorTeams[2]);
	Match matchdayEighteen7(VectorTeams[16], VectorTeams[10]);
	Match matchdayEighteen8(VectorTeams[17], VectorTeams[6]);
	Match matchdayEighteen9(VectorTeams[18], VectorTeams[14]);
	Match matchdayEighteen10(VectorTeams[19], VectorTeams[5]);

	matchdayEighteen1.setResult();
	matchdayEighteen2.setResult();
	matchdayEighteen3.setResult();
	matchdayEighteen4.setResult();
	matchdayEighteen5.setResult();
	matchdayEighteen6.setResult();
	matchdayEighteen7.setResult();
	matchdayEighteen8.setResult();
	matchdayEighteen9.setResult();
	matchdayEighteen10.setResult();

	matchday18.push_back(matchdayEighteen1);
	matchday18.push_back(matchdayEighteen2);
	matchday18.push_back(matchdayEighteen3);
	matchday18.push_back(matchdayEighteen4);
	matchday18.push_back(matchdayEighteen5);
	matchday18.push_back(matchdayEighteen6);
	matchday18.push_back(matchdayEighteen7);
	matchday18.push_back(matchdayEighteen8);
	matchday18.push_back(matchdayEighteen9);
	matchday18.push_back(matchdayEighteen10);

	return matchday18;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday19(vector<Team*>& VectorTeams) {
	vector<Match> matchday19;

	Match matchdayNineteen1(VectorTeams[1], VectorTeams[5]);
	Match matchdayNineteen2(VectorTeams[3], VectorTeams[2]);
	Match matchdayNineteen3(VectorTeams[4], VectorTeams[7]);
	Match matchdayNineteen4(VectorTeams[10], VectorTeams[8]);
	Match matchdayNineteen5(VectorTeams[11], VectorTeams[9]);
	Match matchdayNineteen6(VectorTeams[13], VectorTeams[12]);
	Match matchdayNineteen7(VectorTeams[14], VectorTeams[0]);
	Match matchdayNineteen8(VectorTeams[16], VectorTeams[6]);
	Match matchdayNineteen9(VectorTeams[18], VectorTeams[15]);
	Match matchdayNineteen10(VectorTeams[19], VectorTeams[17]);

	matchdayNineteen1.setResult();
	matchdayNineteen2.setResult();
	matchdayNineteen3.setResult();
	matchdayNineteen4.setResult();
	matchdayNineteen5.setResult();
	matchdayNineteen6.setResult();
	matchdayNineteen7.setResult();
	matchdayNineteen8.setResult();
	matchdayNineteen9.setResult();
	matchdayNineteen10.setResult();

	matchday19.push_back(matchdayNineteen1);
	matchday19.push_back(matchdayNineteen2);
	matchday19.push_back(matchdayNineteen3);
	matchday19.push_back(matchdayNineteen4);
	matchday19.push_back(matchdayNineteen5);
	matchday19.push_back(matchdayNineteen6);
	matchday19.push_back(matchdayNineteen7);
	matchday19.push_back(matchdayNineteen8);
	matchday19.push_back(matchdayNineteen9);
	matchday19.push_back(matchdayNineteen10);

	return matchday19;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday20(vector<Team*>& VectorTeams) {
	vector<Match> matchday20;

	Match matchdayTwenty1(VectorTeams[0], VectorTeams[19]);
	Match matchdayTwenty2(VectorTeams[2], VectorTeams[11]);
	Match matchdayTwenty3(VectorTeams[5], VectorTeams[3]);
	Match matchdayTwenty4(VectorTeams[6], VectorTeams[14]);
	Match matchdayTwenty5(VectorTeams[7], VectorTeams[13]);
	Match matchdayTwenty6(VectorTeams[8], VectorTeams[1]);
	Match matchdayTwenty7(VectorTeams[9], VectorTeams[10]);
	Match matchdayTwenty8(VectorTeams[12], VectorTeams[4]);
	Match matchdayTwenty9(VectorTeams[15], VectorTeams[16]);
	Match matchdayTwenty10(VectorTeams[17], VectorTeams[18]);

	matchdayTwenty1.setResult();
	matchdayTwenty2.setResult();
	matchdayTwenty3.setResult();
	matchdayTwenty4.setResult();
	matchdayTwenty5.setResult();
	matchdayTwenty6.setResult();
	matchdayTwenty7.setResult();
	matchdayTwenty8.setResult();
	matchdayTwenty9.setResult();
	matchdayTwenty10.setResult();

	matchday20.push_back(matchdayTwenty1);
	matchday20.push_back(matchdayTwenty2);
	matchday20.push_back(matchdayTwenty3);
	matchday20.push_back(matchdayTwenty4);
	matchday20.push_back(matchdayTwenty5);
	matchday20.push_back(matchdayTwenty6);
	matchday20.push_back(matchdayTwenty7);
	matchday20.push_back(matchdayTwenty8);
	matchday20.push_back(matchdayTwenty9);
	matchday20.push_back(matchdayTwenty10);

	return matchday20;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday21(vector<Team*>& VectorTeams) {
	vector<Match> matchday21;

	Match matchdayTwentyOne1(VectorTeams[0], VectorTeams[11]);
	Match matchdayTwentyOne2(VectorTeams[2], VectorTeams[1]);
	Match matchdayTwentyOne3(VectorTeams[5], VectorTeams[10]);
	Match matchdayTwentyOne4(VectorTeams[6], VectorTeams[18]);
	Match matchdayTwentyOne5(VectorTeams[7], VectorTeams[3]);
	Match matchdayTwentyOne6(VectorTeams[8], VectorTeams[4]);
	Match matchdayTwentyOne7(VectorTeams[9], VectorTeams[14]);
	Match matchdayTwentyOne8(VectorTeams[12], VectorTeams[19]);
	Match matchdayTwentyOne9(VectorTeams[15], VectorTeams[13]);
	Match matchdayTwentyOne10(VectorTeams[17], VectorTeams[16]);

	matchdayTwentyOne1.setResult();
	matchdayTwentyOne2.setResult();
	matchdayTwentyOne3.setResult();
	matchdayTwentyOne4.setResult();
	matchdayTwentyOne5.setResult();
	matchdayTwentyOne6.setResult();
	matchdayTwentyOne7.setResult();
	matchdayTwentyOne8.setResult();
	matchdayTwentyOne9.setResult();
	matchdayTwentyOne10.setResult();

	matchday21.push_back(matchdayTwentyOne1);
	matchday21.push_back(matchdayTwentyOne2);
	matchday21.push_back(matchdayTwentyOne3);
	matchday21.push_back(matchdayTwentyOne4);
	matchday21.push_back(matchdayTwentyOne5);
	matchday21.push_back(matchdayTwentyOne6);
	matchday21.push_back(matchdayTwentyOne7);
	matchday21.push_back(matchdayTwentyOne8);
	matchday21.push_back(matchdayTwentyOne9);
	matchday21.push_back(matchdayTwentyOne10);

	return matchday21;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday22(vector<Team*>& VectorTeams) {
	vector<Match> matchday22;

	Match matchdayTwentyTwo1(VectorTeams[1], VectorTeams[12]);
	Match matchdayTwentyTwo2(VectorTeams[3], VectorTeams[6]);
	Match matchdayTwentyTwo3(VectorTeams[4], VectorTeams[9]);
	Match matchdayTwentyTwo4(VectorTeams[10], VectorTeams[2]);
	Match matchdayTwentyTwo5(VectorTeams[11], VectorTeams[5]);
	Match matchdayTwentyTwo6(VectorTeams[13], VectorTeams[17]);
	Match matchdayTwentyTwo7(VectorTeams[14], VectorTeams[7]);
	Match matchdayTwentyTwo8(VectorTeams[16], VectorTeams[0]);
	Match matchdayTwentyTwo9(VectorTeams[18], VectorTeams[8]);
	Match matchdayTwentyTwo10(VectorTeams[19], VectorTeams[15]);

	matchdayTwentyTwo1.setResult();
	matchdayTwentyTwo2.setResult();
	matchdayTwentyTwo3.setResult();
	matchdayTwentyTwo4.setResult();
	matchdayTwentyTwo5.setResult();
	matchdayTwentyTwo6.setResult();
	matchdayTwentyTwo7.setResult();
	matchdayTwentyTwo8.setResult();
	matchdayTwentyTwo9.setResult();
	matchdayTwentyTwo10.setResult();

	matchday22.push_back(matchdayTwentyTwo1);
	matchday22.push_back(matchdayTwentyTwo2);
	matchday22.push_back(matchdayTwentyTwo3);
	matchday22.push_back(matchdayTwentyTwo4);
	matchday22.push_back(matchdayTwentyTwo5);
	matchday22.push_back(matchdayTwentyTwo6);
	matchday22.push_back(matchdayTwentyTwo7);
	matchday22.push_back(matchdayTwentyTwo8);
	matchday22.push_back(matchdayTwentyTwo9);
	matchday22.push_back(matchdayTwentyTwo10);

	return matchday22;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday23(vector<Team*>& VectorTeams) {
	vector<Match> matchday23;

	Match matchdayTwentyThree1(VectorTeams[0], VectorTeams[4]);
	Match matchdayTwentyThree2(VectorTeams[2], VectorTeams[19]);
	Match matchdayTwentyThree3(VectorTeams[5], VectorTeams[16]);
	Match matchdayTwentyThree4(VectorTeams[6], VectorTeams[10]);
	Match matchdayTwentyThree5(VectorTeams[7], VectorTeams[1]);
	Match matchdayTwentyThree6(VectorTeams[8], VectorTeams[13]);
	Match matchdayTwentyThree7(VectorTeams[9], VectorTeams[3]);
	Match matchdayTwentyThree8(VectorTeams[12], VectorTeams[18]);
	Match matchdayTwentyThree9(VectorTeams[15], VectorTeams[11]);
	Match matchdayTwentyThree10(VectorTeams[17], VectorTeams[14]);

	matchdayTwentyThree1.setResult();
	matchdayTwentyThree2.setResult();
	matchdayTwentyThree3.setResult();
	matchdayTwentyThree4.setResult();
	matchdayTwentyThree5.setResult();
	matchdayTwentyThree6.setResult();
	matchdayTwentyThree7.setResult();
	matchdayTwentyThree8.setResult();
	matchdayTwentyThree9.setResult();
	matchdayTwentyThree10.setResult();

	matchday23.push_back(matchdayTwentyThree1);
	matchday23.push_back(matchdayTwentyThree2);
	matchday23.push_back(matchdayTwentyThree3);
	matchday23.push_back(matchdayTwentyThree4);
	matchday23.push_back(matchdayTwentyThree5);
	matchday23.push_back(matchdayTwentyThree6);
	matchday23.push_back(matchdayTwentyThree7);
	matchday23.push_back(matchdayTwentyThree8);
	matchday23.push_back(matchdayTwentyThree9);
	matchday23.push_back(matchdayTwentyThree10);

	return matchday23;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday24(vector<Team*>& VectorTeams) {
	vector<Match> matchday24;

	Match matchdayTwentyFour1(VectorTeams[1], VectorTeams[8]);
	Match matchdayTwentyFour2(VectorTeams[3], VectorTeams[5]);
	Match matchdayTwentyFour3(VectorTeams[4], VectorTeams[12]);
	Match matchdayTwentyFour4(VectorTeams[14], VectorTeams[6]);
	Match matchdayTwentyFour5(VectorTeams[18], VectorTeams[17]);
	Match matchdayTwentyFour6(VectorTeams[19], VectorTeams[0]);
	Match matchdayTwentyFour7(VectorTeams[13], VectorTeams[7]);
	Match matchdayTwentyFour8(VectorTeams[16], VectorTeams[15]);
	Match matchdayTwentyFour9(VectorTeams[10], VectorTeams[9]);
	Match matchdayTwentyFour10(VectorTeams[11], VectorTeams[2]);

	matchdayTwentyFour1.setResult();
	matchdayTwentyFour2.setResult();
	matchdayTwentyFour3.setResult();
	matchdayTwentyFour4.setResult();
	matchdayTwentyFour5.setResult();
	matchdayTwentyFour6.setResult();
	matchdayTwentyFour7.setResult();
	matchdayTwentyFour8.setResult();
	matchdayTwentyFour9.setResult();
	matchdayTwentyFour10.setResult();

	matchday24.push_back(matchdayTwentyFour1);
	matchday24.push_back(matchdayTwentyFour2);
	matchday24.push_back(matchdayTwentyFour3);
	matchday24.push_back(matchdayTwentyFour4);
	matchday24.push_back(matchdayTwentyFour5);
	matchday24.push_back(matchdayTwentyFour6);
	matchday24.push_back(matchdayTwentyFour7);
	matchday24.push_back(matchdayTwentyFour8);
	matchday24.push_back(matchdayTwentyFour9);
	matchday24.push_back(matchdayTwentyFour10);

	return matchday24;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday25(vector<Team*>& VectorTeams) {
	vector<Match> matchday25;

	Match matchdayTwentyFive1(VectorTeams[2], VectorTeams[6]);
	Match matchdayTwentyFive2(VectorTeams[4], VectorTeams[10]);
	Match matchdayTwentyFive3(VectorTeams[5], VectorTeams[0]);
	Match matchdayTwentyFive4(VectorTeams[7], VectorTeams[8]);
	Match matchdayTwentyFive5(VectorTeams[9], VectorTeams[18]);
	Match matchdayTwentyFive6(VectorTeams[12], VectorTeams[15]);
	Match matchdayTwentyFive7(VectorTeams[13], VectorTeams[1]);
	Match matchdayTwentyFive8(VectorTeams[14], VectorTeams[11]);
	Match matchdayTwentyFive9(VectorTeams[16], VectorTeams[19]);
	Match matchdayTwentyFive10(VectorTeams[17], VectorTeams[3]);

	matchdayTwentyFive1.setResult();
	matchdayTwentyFive2.setResult();
	matchdayTwentyFive3.setResult();
	matchdayTwentyFive4.setResult();
	matchdayTwentyFive5.setResult();
	matchdayTwentyFive6.setResult();
	matchdayTwentyFive7.setResult();
	matchdayTwentyFive8.setResult();
	matchdayTwentyFive9.setResult();
	matchdayTwentyFive10.setResult();

	matchday25.push_back(matchdayTwentyFive1);
	matchday25.push_back(matchdayTwentyFive2);
	matchday25.push_back(matchdayTwentyFive3);
	matchday25.push_back(matchdayTwentyFive4);
	matchday25.push_back(matchdayTwentyFive5);
	matchday25.push_back(matchdayTwentyFive6);
	matchday25.push_back(matchdayTwentyFive7);
	matchday25.push_back(matchdayTwentyFive8);
	matchday25.push_back(matchdayTwentyFive9);
	matchday25.push_back(matchdayTwentyFive10);

	return matchday25;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday26(vector<Team*>& VectorTeams) {
	vector<Match> matchday26;

	Match matchdayTwentySix1(VectorTeams[0], VectorTeams[2]);
	Match matchdayTwentySix2(VectorTeams[1], VectorTeams[17]);
	Match matchdayTwentySix3(VectorTeams[3], VectorTeams[4]);
	Match matchdayTwentySix4(VectorTeams[6], VectorTeams[5]);
	Match matchdayTwentySix5(VectorTeams[8], VectorTeams[12]);
	Match matchdayTwentySix6(VectorTeams[10], VectorTeams[14]);
	Match matchdayTwentySix7(VectorTeams[11], VectorTeams[16]);
	Match matchdayTwentySix8(VectorTeams[15], VectorTeams[7]);
	Match matchdayTwentySix9(VectorTeams[18], VectorTeams[13]);
	Match matchdayTwentySix10(VectorTeams[19], VectorTeams[9]);

	matchdayTwentySix1.setResult();
	matchdayTwentySix2.setResult();
	matchdayTwentySix3.setResult();
	matchdayTwentySix4.setResult();
	matchdayTwentySix5.setResult();
	matchdayTwentySix6.setResult();
	matchdayTwentySix7.setResult();
	matchdayTwentySix8.setResult();
	matchdayTwentySix9.setResult();
	matchdayTwentySix10.setResult();

	matchday26.push_back(matchdayTwentySix1);
	matchday26.push_back(matchdayTwentySix2);
	matchday26.push_back(matchdayTwentySix3);
	matchday26.push_back(matchdayTwentySix4);
	matchday26.push_back(matchdayTwentySix5);
	matchday26.push_back(matchdayTwentySix6);
	matchday26.push_back(matchdayTwentySix7);
	matchday26.push_back(matchdayTwentySix8);
	matchday26.push_back(matchdayTwentySix9);
	matchday26.push_back(matchdayTwentySix10);

	return matchday26;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday27(vector<Team*>& VectorTeams) {
	vector<Match> matchday27;

	Match matchdayTwentySeven1(VectorTeams[0], VectorTeams[10]);
	Match matchdayTwentySeven2(VectorTeams[2], VectorTeams[13]);
	Match matchdayTwentySeven3(VectorTeams[3], VectorTeams[1]);
	Match matchdayTwentySeven4(VectorTeams[5], VectorTeams[9]);
	Match matchdayTwentySeven5(VectorTeams[6], VectorTeams[4]);
	Match matchdayTwentySeven6(VectorTeams[7], VectorTeams[11]);
	Match matchdayTwentySeven7(VectorTeams[8], VectorTeams[16]);
	Match matchdayTwentySeven8(VectorTeams[12], VectorTeams[17]);
	Match matchdayTwentySeven9(VectorTeams[15], VectorTeams[14]);
	Match matchdayTwentySeven10(VectorTeams[18], VectorTeams[19]);

	matchdayTwentySeven1.setResult();
	matchdayTwentySeven2.setResult();
	matchdayTwentySeven3.setResult();
	matchdayTwentySeven4.setResult();
	matchdayTwentySeven5.setResult();
	matchdayTwentySeven6.setResult();
	matchdayTwentySeven7.setResult();
	matchdayTwentySeven8.setResult();
	matchdayTwentySeven9.setResult();
	matchdayTwentySeven10.setResult();

	matchday27.push_back(matchdayTwentySeven1);
	matchday27.push_back(matchdayTwentySeven2);
	matchday27.push_back(matchdayTwentySeven3);
	matchday27.push_back(matchdayTwentySeven4);
	matchday27.push_back(matchdayTwentySeven5);
	matchday27.push_back(matchdayTwentySeven6);
	matchday27.push_back(matchdayTwentySeven7);
	matchday27.push_back(matchdayTwentySeven8);
	matchday27.push_back(matchdayTwentySeven9);
	matchday27.push_back(matchdayTwentySeven10);

	return matchday27;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday28(vector<Team*>& VectorTeams) {
	vector<Match> matchday28;

	Match matchdayTwentyEight1(VectorTeams[1], VectorTeams[15]);
	Match matchdayTwentyEight2(VectorTeams[4], VectorTeams[5]);
	Match matchdayTwentyEight3(VectorTeams[9], VectorTeams[8]);
	Match matchdayTwentyEight4(VectorTeams[10], VectorTeams[18]);
	Match matchdayTwentyEight5(VectorTeams[11], VectorTeams[12]);
	Match matchdayTwentyEight6(VectorTeams[13], VectorTeams[3]);
	Match matchdayTwentyEight7(VectorTeams[14], VectorTeams[2]);
	Match matchdayTwentyEight8(VectorTeams[16], VectorTeams[7]);
	Match matchdayTwentyEight9(VectorTeams[17], VectorTeams[0]);
	Match matchdayTwentyEight10(VectorTeams[19], VectorTeams[6]);

	matchdayTwentyEight1.setResult();
	matchdayTwentyEight2.setResult();
	matchdayTwentyEight3.setResult();
	matchdayTwentyEight4.setResult();
	matchdayTwentyEight5.setResult();
	matchdayTwentyEight6.setResult();
	matchdayTwentyEight7.setResult();
	matchdayTwentyEight8.setResult();
	matchdayTwentyEight9.setResult();
	matchdayTwentyEight10.setResult();

	matchday28.push_back(matchdayTwentyEight1);
	matchday28.push_back(matchdayTwentyEight2);
	matchday28.push_back(matchdayTwentyEight3);
	matchday28.push_back(matchdayTwentyEight4);
	matchday28.push_back(matchdayTwentyEight5);
	matchday28.push_back(matchdayTwentyEight6);
	matchday28.push_back(matchdayTwentyEight7);
	matchday28.push_back(matchdayTwentyEight8);
	matchday28.push_back(matchdayTwentyEight9);
	matchday28.push_back(matchdayTwentyEight10);

	return matchday28;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday29(vector<Team*>& VectorTeams) {
	vector<Match> matchday29;

	Match matchdayTwentyNine1(VectorTeams[0], VectorTeams[9]);
	Match matchdayTwentyNine2(VectorTeams[2], VectorTeams[4]);
	Match matchdayTwentyNine3(VectorTeams[3], VectorTeams[10]);
	Match matchdayTwentyNine4(VectorTeams[5], VectorTeams[13]);
	Match matchdayTwentyNine5(VectorTeams[6], VectorTeams[11]);
	Match matchdayTwentyNine6(VectorTeams[7], VectorTeams[19]);
	Match matchdayTwentyNine7(VectorTeams[8], VectorTeams[14]);
	Match matchdayTwentyNine8(VectorTeams[12], VectorTeams[16]);
	Match matchdayTwentyNine9(VectorTeams[15], VectorTeams[17]);
	Match matchdayTwentyNine10(VectorTeams[18], VectorTeams[1]);

	matchdayTwentyNine1.setResult();
	matchdayTwentyNine2.setResult();
	matchdayTwentyNine3.setResult();
	matchdayTwentyNine4.setResult();
	matchdayTwentyNine5.setResult();
	matchdayTwentyNine6.setResult();
	matchdayTwentyNine7.setResult();
	matchdayTwentyNine8.setResult();
	matchdayTwentyNine9.setResult();
	matchdayTwentyNine10.setResult();

	matchday29.push_back(matchdayTwentyNine1);
	matchday29.push_back(matchdayTwentyNine2);
	matchday29.push_back(matchdayTwentyNine3);
	matchday29.push_back(matchdayTwentyNine4);
	matchday29.push_back(matchdayTwentyNine5);
	matchday29.push_back(matchdayTwentyNine6);
	matchday29.push_back(matchdayTwentyNine7);
	matchday29.push_back(matchdayTwentyNine8);
	matchday29.push_back(matchdayTwentyNine9);
	matchday29.push_back(matchdayTwentyNine10);

	return matchday29;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday30(vector<Team*>& VectorTeams) {
	vector<Match> matchday30;

	Match matchdayThirty1(VectorTeams[1], VectorTeams[0]);
	Match matchdayThirty2(VectorTeams[4], VectorTeams[15]);
	Match matchdayThirty3(VectorTeams[9], VectorTeams[2]);
	Match matchdayThirty4(VectorTeams[10], VectorTeams[12]);
	Match matchdayThirty5(VectorTeams[11], VectorTeams[3]);
	Match matchdayThirty6(VectorTeams[13], VectorTeams[6]);
	Match matchdayThirty7(VectorTeams[14], VectorTeams[5]);
	Match matchdayThirty8(VectorTeams[16], VectorTeams[18]);
	Match matchdayThirty9(VectorTeams[17], VectorTeams[7]);
	Match matchdayThirty10(VectorTeams[19], VectorTeams[8]);

	matchdayThirty1.setResult();
	matchdayThirty2.setResult();
	matchdayThirty3.setResult();
	matchdayThirty4.setResult();
	matchdayThirty5.setResult();
	matchdayThirty6.setResult();
	matchdayThirty7.setResult();
	matchdayThirty8.setResult();
	matchdayThirty9.setResult();
	matchdayThirty10.setResult();

	matchday30.push_back(matchdayThirty1);
	matchday30.push_back(matchdayThirty2);
	matchday30.push_back(matchdayThirty3);
	matchday30.push_back(matchdayThirty4);
	matchday30.push_back(matchdayThirty5);
	matchday30.push_back(matchdayThirty6);
	matchday30.push_back(matchdayThirty7);
	matchday30.push_back(matchdayThirty8);
	matchday30.push_back(matchdayThirty9);
	matchday30.push_back(matchdayThirty10);

	return matchday30;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday31(vector<Team*>& VectorTeams) {
	vector<Match> matchday31;

	Match matchdayThirtyOne1(VectorTeams[3], VectorTeams[14]);
	Match matchdayThirtyOne2(VectorTeams[4], VectorTeams[11]);
	Match matchdayThirtyOne3(VectorTeams[5], VectorTeams[2]);
	Match matchdayThirtyOne4(VectorTeams[6], VectorTeams[0]);
	Match matchdayThirtyOne5(VectorTeams[8], VectorTeams[15]);
	Match matchdayThirtyOne6(VectorTeams[10], VectorTeams[17]);
	Match matchdayThirtyOne7(VectorTeams[12], VectorTeams[9]);
	Match matchdayThirtyOne8(VectorTeams[16], VectorTeams[13]);
	Match matchdayThirtyOne9(VectorTeams[18], VectorTeams[7]);
	Match matchdayThirtyOne10(VectorTeams[19], VectorTeams[1]);

	matchdayThirtyOne1.setResult();
	matchdayThirtyOne2.setResult();
	matchdayThirtyOne3.setResult();
	matchdayThirtyOne4.setResult();
	matchdayThirtyOne5.setResult();
	matchdayThirtyOne6.setResult();
	matchdayThirtyOne7.setResult();
	matchdayThirtyOne8.setResult();
	matchdayThirtyOne9.setResult();
	matchdayThirtyOne10.setResult();

	matchday31.push_back(matchdayThirtyOne1);
	matchday31.push_back(matchdayThirtyOne2);
	matchday31.push_back(matchdayThirtyOne3);
	matchday31.push_back(matchdayThirtyOne4);
	matchday31.push_back(matchdayThirtyOne5);
	matchday31.push_back(matchdayThirtyOne6);
	matchday31.push_back(matchdayThirtyOne7);
	matchday31.push_back(matchdayThirtyOne8);
	matchday31.push_back(matchdayThirtyOne9);
	matchday31.push_back(matchdayThirtyOne10);

	return matchday31;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday32(vector<Team*>& VectorTeams) {
	vector<Match> matchday32;

	Match matchdayThirtyTwo1(VectorTeams[0], VectorTeams[3]);
	Match matchdayThirtyTwo2(VectorTeams[1], VectorTeams[16]);
	Match matchdayThirtyTwo3(VectorTeams[2], VectorTeams[18]);
	Match matchdayThirtyTwo4(VectorTeams[7], VectorTeams[12]);
	Match matchdayThirtyTwo5(VectorTeams[9], VectorTeams[6]);
	Match matchdayThirtyTwo6(VectorTeams[11], VectorTeams[10]);
	Match matchdayThirtyTwo7(VectorTeams[13], VectorTeams[19]);
	Match matchdayThirtyTwo8(VectorTeams[14], VectorTeams[4]);
	Match matchdayThirtyTwo9(VectorTeams[15], VectorTeams[5]);
	Match matchdayThirtyTwo10(VectorTeams[17], VectorTeams[8]);

	matchdayThirtyTwo1.setResult();
	matchdayThirtyTwo2.setResult();
	matchdayThirtyTwo3.setResult();
	matchdayThirtyTwo4.setResult();
	matchdayThirtyTwo5.setResult();
	matchdayThirtyTwo6.setResult();
	matchdayThirtyTwo7.setResult();
	matchdayThirtyTwo8.setResult();
	matchdayThirtyTwo9.setResult();
	matchdayThirtyTwo10.setResult();

	matchday32.push_back(matchdayThirtyTwo1);
	matchday32.push_back(matchdayThirtyTwo2);
	matchday32.push_back(matchdayThirtyTwo3);
	matchday32.push_back(matchdayThirtyTwo4);
	matchday32.push_back(matchdayThirtyTwo5);
	matchday32.push_back(matchdayThirtyTwo6);
	matchday32.push_back(matchdayThirtyTwo7);
	matchday32.push_back(matchdayThirtyTwo8);
	matchday32.push_back(matchdayThirtyTwo9);
	matchday32.push_back(matchdayThirtyTwo10);

	return matchday32;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday33(vector<Team*>& VectorTeams) {
	vector<Match> matchday33;

	Match matchdayThirtyThree1(VectorTeams[1], VectorTeams[10]);
	Match matchdayThirtyThree2(VectorTeams[7], VectorTeams[6]);
	Match matchdayThirtyThree3(VectorTeams[8], VectorTeams[5]);
	Match matchdayThirtyThree4(VectorTeams[12], VectorTeams[14]);
	Match matchdayThirtyThree5(VectorTeams[13], VectorTeams[9]);
	Match matchdayThirtyThree6(VectorTeams[15], VectorTeams[0]);
	Match matchdayThirtyThree7(VectorTeams[16], VectorTeams[3]);
	Match matchdayThirtyThree8(VectorTeams[17], VectorTeams[2]);
	Match matchdayThirtyThree9(VectorTeams[18], VectorTeams[4]);
	Match matchdayThirtyThree10(VectorTeams[19], VectorTeams[11]);

	matchdayThirtyThree1.setResult();
	matchdayThirtyThree2.setResult();
	matchdayThirtyThree3.setResult();
	matchdayThirtyThree4.setResult();
	matchdayThirtyThree5.setResult();
	matchdayThirtyThree6.setResult();
	matchdayThirtyThree7.setResult();
	matchdayThirtyThree8.setResult();
	matchdayThirtyThree9.setResult();
	matchdayThirtyThree10.setResult();

	matchday33.push_back(matchdayThirtyThree1);
	matchday33.push_back(matchdayThirtyThree2);
	matchday33.push_back(matchdayThirtyThree3);
	matchday33.push_back(matchdayThirtyThree4);
	matchday33.push_back(matchdayThirtyThree5);
	matchday33.push_back(matchdayThirtyThree6);
	matchday33.push_back(matchdayThirtyThree7);
	matchday33.push_back(matchdayThirtyThree8);
	matchday33.push_back(matchdayThirtyThree9);
	matchday33.push_back(matchdayThirtyThree10);

	return matchday33;
}

/**
	Member function that initializes the actual schedule of 10 matches of the matchday,
	setting each matches result, and adding it to a matchday vector to return
	@param VectorTeams is the vector that contains Team* for every club
*/
vector<Match> Matchdays::matchday34(vector<Team*>& VectorTeams) {
	vector<Match> matchday34;

	Match matchdayThirtyFour1(VectorTeams[0], VectorTeams[12]);
	Match matchdayThirtyFour2(VectorTeams[2], VectorTeams[16]);
	Match matchdayThirtyFour3(VectorTeams[3], VectorTeams[15]);
	Match matchdayThirtyFour4(VectorTeams[4], VectorTeams[19]);
	Match matchdayThirtyFour5(VectorTeams[5], VectorTeams[18]);
	Match matchdayThirtyFour6(VectorTeams[6], VectorTeams[8]);
	Match matchdayThirtyFour7(VectorTeams[9], VectorTeams[1]);
	Match matchdayThirtyFour8(VectorTeams[10], VectorTeams[7]);
	Match matchdayThirtyFour9(VectorTeams[11], VectorTeams[17]);
	Match matchdayThirtyFour10(VectorTeams[14], VectorTeams[13]);

	matchdayThirtyFour1.setResult();
	matchdayThirtyFour2.setResult();
	matchdayThirtyFour3.setResult();
	matchdayThirtyFour4.setResult();
	matchdayThirtyFour5.setResult();
	matchdayThirtyFour6.setResult();
	matchdayThirtyFour7.setResult();
	matchdayThirtyFour8.setResult();
	matchdayThirtyFour9.setResult();
	matchdayThirtyFour10.setResult();

	matchday34.push_back(matchdayThirtyFour1);
	matchday34.push_back(matchdayThirtyFour2);
	matchday34.push_back(matchdayThirtyFour3);
	matchday34.push_back(matchdayThirtyFour4);
	matchday34.push_back(matchdayThirtyFour5);
	matchday34.push_back(matchdayThirtyFour6);
	matchday34.push_back(matchdayThirtyFour7);
	matchday34.push_back(matchdayThirtyFour8);
	matchday34.push_back(matchdayThirtyFour9);
	matchday34.push_back(matchdayThirtyFour10);

	return matchday34;
}