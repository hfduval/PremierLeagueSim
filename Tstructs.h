/**
	@file Tstructs.h
	@brief Header file of structs that contain specific data for each current Premier League club
	@author Harrison Duval
	@version 1.4 8/15/21
*/

#pragma once
#ifndef TSTRUCTS_H
#define TSTRUCTS_H
#include "hfduval.h"

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other 
	premier league clubs
*/
struct Arsenal {
	string name;//name
	int pos;//position
	int prevPos;//previous position
	int premWorldRank;//world ranking
	/**
		Default constructor that initializes every data member
	*/
	Arsenal() {
		name = "Arsenal";
		pos = 1;
		prevPos = 8;
		premWorldRank = 4;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct AstonVilla {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	AstonVilla() {
		name = "Aston Villa";
		pos = 2;
		prevPos = 11;
		premWorldRank = 13;
	}
	
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct Brentford {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	Brentford() {
		name = "Brentford";
		pos = 3;
		prevPos = 23;
		premWorldRank = 13;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct Brighton {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	Brighton() {
		name = "Brighton";
		pos = 4;
		prevPos = 16;
		premWorldRank = 13;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct Burnley {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	Burnley() {
		name = "Burnley";
		pos = 5;
		prevPos = 17;
		premWorldRank = 9;
	}
	
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct Chelsea {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	Chelsea() {
		name = "Chelsea";
		pos = 6;
		prevPos = 4;
		premWorldRank = 5;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct CrystalPalace {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	CrystalPalace() {
		name = "Crystal Palace";
		pos = 7;
		prevPos = 14;
		premWorldRank = 13;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct Everton {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	Everton() {
		name = "Everton";
		pos = 8;
		prevPos = 10;
		premWorldRank = 10;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct LeedsUnited {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	LeedsUnited() {
		name = "Leeds United";
		pos = 9;
		prevPos = 9;
		premWorldRank = 13;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct LeicesterCity {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	LeicesterCity() {
		name = "Leicester City";
		pos = 10;
		prevPos = 5;
		premWorldRank = 7;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct Liverpool {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	Liverpool() {
		name = "Liverpool";
		pos = 11;
		prevPos = 3;
		premWorldRank = 3;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct ManCity {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	ManCity() {
		name = "Manchester City";
		pos = 12;
		prevPos = 1;
		premWorldRank = 1;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct ManUnited {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	ManUnited() {
		name = "Manchester United";
		pos = 13;
		prevPos = 2;
		premWorldRank = 2;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct Newcastle {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	Newcastle() {
		name = "Newcastle United";
		pos = 14;
		prevPos = 12;
		premWorldRank = 13;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct Norwich {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	Norwich() {
		name = "Norwich City";
		pos = 15;
		prevPos = 21;
		premWorldRank = 13;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct Southampton {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	Southampton() {
		name = "Southampton";
		pos = 16;
		prevPos = 16;
		premWorldRank = 11;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct Tottenham {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	Tottenham() {
		name = "Tottenham Hotspur";
		pos = 17;
		prevPos = 7;
		premWorldRank = 6;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct Watford {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	Watford() {
		name = "Watford";
		pos = 18;
		prevPos = 22;
		premWorldRank = 13;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct WestHam {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	WestHam() {
		name = "West Ham United";
		pos = 19;
		prevPos = 6;
		premWorldRank = 12;
	}
};

/**
	Struct that contains the specific data for this club, including
	its name, position based off of alphabetical order, previous position
	in the 2020/21 season, and it's world ranking in comparison to other
	premier league clubs
*/
struct Wolves {
	string name;
	int pos;
	int prevPos;
	int premWorldRank;
	/**
		Default constructor that initializes every data member
	*/
	Wolves() {
		name = "Wolves";
		pos = 20;
		prevPos = 13;
		premWorldRank = 8;
	}
};
#endif // TSTRUCTS_H