#include "hfduval.h"

#include "Tstructs.h"

#include "Team.h" 

#include "Club.h"

#include "Match.h"

#include "Matchdays.h"

constexpr size_t MAXSIZE = 1024;
constexpr size_t MAXSPLIT = 3;
const char COMMACHAR = ',';

const fileError f_fail("Error Opening File");//initializes fileError exception with message

/**
    Returns a vector that contains substrings of passed string, separated by comma character
    @param s reference to the string of the current file line
    @return Vector that contains each separated substring
*/
vector<string> separateStr(const string& s) {
    vector<string> ret_str;//initialize vector
    size_t start_loc = 0;//variables of starting & separator locations
    size_t sep_loc = 0;
    while (true) {//while loop that continues until string is fully separated
        sep_loc = s.find(COMMACHAR, start_loc);//uses the s.find() function to find the comma character
        ret_str.push_back(s.substr(start_loc, sep_loc - start_loc));//adds this substring to the vector
        if (sep_loc == string::npos) break;//ends loop if the separator location is at the end of the string
        start_loc = sep_loc + 1;//moves next starting location to the index after previous separator location
    }
    return ret_str;
}

/**
    Function that uses an input file stream to read the contents of the specific file. Outputs each content of the file,
    both the club name, and its manager
*/
void printTeamMsg() {
    ifstream infile;//input file stream
    try {
        infile.open("TeamsList.txt");//tries to open file, if invalid it throws an exception
        if (!infile.is_open()) {
            throw f_fail;
        }
    }
    catch (fileError& e) {//catches the exception and outputs the defined message
        cout << e.what();
    }

    char fline[MAXSIZE];//c-string that contains the current file line
    int count = 0;//count that is used to list out the number of clubs

    while (infile.good()) {//while loop that continues until file ends
        count++;//increases count each loop
        infile.getline(fline, MAXSIZE);//gets current line and puts it into fline c-string
        vector<string> vector_split = separateStr(fline);//initializes vector to the return value of function
        if (vector_split.size() < 2) continue;//if vector is invalid, continue to next loop
        userPrompt curr_line(vector_split[0], vector_split[1]);//adds contents of vector to userPromt struct
        cout << count << ". " << curr_line.club << "    | Manager: " << curr_line.manager << endl;
        //outputs the count, club name, and manager name
    }
    infile.close();//closes file
}

/**
    Returns a vector containing Team* objects to each Club object. Each object contains
    club specific data
    @return VectorTeams vector that contains a pointer to every Club object
*/
vector<Team*> initializeTeamVec() {
    vector<Team*> VectorTeams;//Vector of Team* objects

    struct Arsenal ars;//initialize every Club structure in order to access club specific data
    struct AstonVilla ast;
    struct Brentford brent;
    struct Brighton bright;
    struct Burnley burn;
    struct Chelsea chel;
    struct CrystalPalace cp;
    struct Everton eve;
    struct LeedsUnited leeds;
    struct LeicesterCity lest;
    struct Liverpool liv;
    struct ManCity manc;
    struct ManUnited manu;
    struct Newcastle newc;
    struct Norwich nor;
    struct Southampton south;
    struct Tottenham tot;
    struct Watford wat;
    struct WestHam wes;
    struct Wolves wolv;

    //push_back a Team pointer to every Club object
    VectorTeams.push_back(new Club(ars.name, ars.pos, ars.prevPos, ars.premWorldRank));
    VectorTeams.push_back(new Club(ast.name, ast.pos, ast.prevPos, ast.premWorldRank));
    VectorTeams.push_back(new Club(brent.name, brent.pos, brent.prevPos, brent.premWorldRank));
    VectorTeams.push_back(new Club(bright.name, bright.pos, bright.prevPos, bright.premWorldRank));
    VectorTeams.push_back(new Club(burn.name, burn.pos, burn.prevPos, burn.premWorldRank));
    VectorTeams.push_back(new Club(chel.name, chel.pos, chel.prevPos, chel.premWorldRank));
    VectorTeams.push_back(new Club(cp.name, cp.pos, cp.prevPos, cp.premWorldRank));
    VectorTeams.push_back(new Club(eve.name, eve.pos, eve.prevPos, eve.premWorldRank));
    VectorTeams.push_back(new Club(leeds.name, leeds.pos, leeds.prevPos, leeds.premWorldRank));
    VectorTeams.push_back(new Club(lest.name, lest.pos, lest.prevPos, lest.premWorldRank));
    VectorTeams.push_back(new Club(liv.name, liv.pos, liv.prevPos, liv.premWorldRank));
    VectorTeams.push_back(new Club(manc.name, manc.pos, manc.prevPos, manc.premWorldRank));
    VectorTeams.push_back(new Club(manu.name, manu.pos, manu.prevPos, manu.premWorldRank));
    VectorTeams.push_back(new Club(newc.name, newc.pos, newc.prevPos, newc.premWorldRank));
    VectorTeams.push_back(new Club(nor.name, nor.pos, nor.prevPos, nor.premWorldRank));
    VectorTeams.push_back(new Club(south.name, south.pos, south.prevPos, south.premWorldRank));
    VectorTeams.push_back(new Club(tot.name, tot.pos, tot.prevPos, tot.premWorldRank));
    VectorTeams.push_back(new Club(wat.name, wat.pos, wat.prevPos, wat.premWorldRank));
    VectorTeams.push_back(new Club(wes.name, wes.pos, wes.prevPos, wes.premWorldRank));
    VectorTeams.push_back(new Club(wolv.name, wolv.pos, wolv.prevPos, wolv.premWorldRank));

    return VectorTeams;
}

/**
    Function that simulates the season by using the Matchdays class to run through every
    premier league matchweek, adding the Match data to a two-dimensional vector of Matches.
    It then sets the points for every team after the simulation is over.
    @param VectorTeams, VectorData Former is the vector containing Team* to every Club object
    and the latter is a 2D vector that contains the Match data for every match of every matchweek
*/
void simulation(vector<Team*>& VectorTeams, vector<vector<Match>>& VectorData) {
    Matchdays season = Matchdays();//initializes a Matchdays object called season
    VectorData.push_back(season.matchday1(VectorTeams));//Calls every matchday memberfunction
    VectorData.push_back(season.matchday2(VectorTeams));//adding each matchday's data to the 
    VectorData.push_back(season.matchday3(VectorTeams));//VectorData vector
    VectorData.push_back(season.matchday4(VectorTeams));
    VectorData.push_back(season.matchday5(VectorTeams));
    VectorData.push_back(season.matchday6(VectorTeams));
    VectorData.push_back(season.matchday7(VectorTeams));
    VectorData.push_back(season.matchday8(VectorTeams));
    VectorData.push_back(season.matchday9(VectorTeams));
    VectorData.push_back(season.matchday10(VectorTeams));
    VectorData.push_back(season.matchday11(VectorTeams));
    VectorData.push_back(season.matchday12(VectorTeams));
    VectorData.push_back(season.matchday13(VectorTeams));
    VectorData.push_back(season.matchday14(VectorTeams));
    VectorData.push_back(season.matchday15(VectorTeams));
    VectorData.push_back(season.matchday16(VectorTeams));
    VectorData.push_back(season.matchday17(VectorTeams));
    VectorData.push_back(season.matchday18(VectorTeams));
    VectorData.push_back(season.matchday19(VectorTeams));
    VectorData.push_back(season.matchday20(VectorTeams));
    VectorData.push_back(season.matchday21(VectorTeams));
    VectorData.push_back(season.matchday22(VectorTeams));
    VectorData.push_back(season.matchday23(VectorTeams));
    VectorData.push_back(season.matchday24(VectorTeams));
    VectorData.push_back(season.matchday25(VectorTeams));
    VectorData.push_back(season.matchday26(VectorTeams));
    VectorData.push_back(season.matchday27(VectorTeams));
    VectorData.push_back(season.matchday28(VectorTeams));
    VectorData.push_back(season.matchday29(VectorTeams));
    VectorData.push_back(season.matchday30(VectorTeams));
    VectorData.push_back(season.matchday31(VectorTeams));
    VectorData.push_back(season.matchday32(VectorTeams));
    VectorData.push_back(season.matchday33(VectorTeams));
    VectorData.push_back(season.matchday34(VectorTeams));


    for (int i = 0; i < TEAMCNT; i++) {//for loop used to set the total points of every Club
        VectorTeams[i]->setPoints();
    }
}

/**
    Returns the position of the next greatest element of the VectorTeams vector
    @param VectorTeams, n Former is the vector containing Team* to every Club object,
    the latter is the current index of the vector being looked at
    @return pos the position of the next greatest element of the vector
*/
int findGreatest(vector<Team*> VectorTeams, int n) {
    Team* greatest = VectorTeams[n];//Pointer to the current greatest element
    int pos = n;//current position
    for (int i = n + 1; i < TEAMCNT; i++) {//checks if the current element is greater than the
        if (VectorTeams[i]->getPoints() > greatest->getPoints()) {//current greatest element
            greatest = VectorTeams[i];//if so it sets the current element as the greatest
            pos = i;//setting the position to this index
        }
    }
    return pos;
}

/**
    Function that uses the Selection Sort algorithm to sort the VectorTeams vector by order of
    teams with the greatest number of points
    @param VectorTeams is the vector containing Team* to every Club object
*/
void sortTeams(vector<Team*>& VectorTeams) {
    Team* temp;//initializes a temporary Team* object
    int pos;
    for (int i = 0; i < TEAMCNT; i++) {//uses a for loop to check every club in the vector
        //this is the Selection Sort algorithm that changes the current element with the next
        //greatest element
        pos = findGreatest(VectorTeams, i);//calls the findGreatest element to find the next greatest
        temp = VectorTeams[i];//sets a temp value
        VectorTeams[i] = VectorTeams[pos];//switches the current and greatest values
        VectorTeams[pos] = temp;//thanks to using a temporary object to hold the previous value
    }
}

/**
    Function that prints out the final premier league table
    @param VectorTeams is the vector containing Team* to every Club object
*/
void printLeagueTable(vector<Team*>& VectorTeams) {
    cout << setw(30) << "Final League Table" << endl;
    for (int i = 0; i < TEAMCNT; i++) {//uses public member functions to get necessary data to display
        cout << VectorTeams[i]->getName() << " games played: " << VectorTeams[i]->getGamesPlayed() 
            << " points: " << VectorTeams[i]->getPoints() << endl;
    }
}

/**
    Function that uses the Linear Search algorithm to return the specific match 
    in a user picked matchweek that contains the user's previously selected club
    @param VectorData, userClub, userMatchWeek First parameter is a 2D vector 
    that contains the Match data for every match of every matchweek, Second is
    the user's selected club, and Third is the user's selected matchweek
*/
Match findMatch(vector<vector<Match>>& VectorData, Team* userClub, int userMatchWeek) { 
    userMatchWeek -= 1;
    //linear search is most efficient algorithm, this is used instead of binary search because 
    //each matchweek is out of order
    for (int i = 0; i < MATCHCNT; i++) {
        Match m = VectorData[userMatchWeek][i];//initializes a match object for the current element
        //iteratively checks each element, comparing it to the user's club
        if ((m.getHomePos() == userClub->getPosition()) || (m.getAwayPos() == userClub->getPosition())) {
            return m;
        }
    }
    Match empty = Match();//if not found, it returns an empty match object
    return empty;
}

/**
    Function that prints out a welcome message for the user
*/
void printWelcomeMsg() {
    cout << "Welcome to the 2021/22 Premier League Season Simulator" << endl
        << "Each club has a strength level depending on various factors," 
        << "such as previous position, and UEFA world ranking" << endl
        << "Please pick a club to support\n" << endl;
}

/**
    Function that allows the user to pick a club to "support" for the season, returning
    an integer value for said club
    @return userInput the integer that is entered by the user
*/
int getUserInput() {
    cout << "Enter the number corresponding to the club of your choice: ";
    int userInput;
    bool valid = false;
    while (!valid) {//checks if the integer is valid
        cin >> userInput;
        if (cin.fail() || userInput > 20 || userInput < 1) {//if a non integer or invalid number, prompt user
            cout << "Invalid Entry, please enter a number listed" << endl;//to re-enter a value
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }
        else {
           valid = true;
        }  
    }
    return userInput;
}

/**
    Function that prints out a message congratulating the user on selecting a specific club
    @param VectorTeams, userInput Former is the vector containing Team* to every Club object
    latter is the number referring to the club selected by the user
*/
void printUserClub(vector<Team*>& VectorTeams, int userInput) {
    cout << "\nCongratulations on picking the club " 
        << VectorTeams[userInput - 1]->getName() << "\n" << endl;//outputs the index in the vector of club
}

/**
    Function that returns a Team* to the club selected by the user
    @param VectorTeams, userInput Former is the vector containing Team* to every Club object
    latter is the number referring to the club selected by the user
    @return userClub a Team* to the selected club
*/
Team* getUserClub(vector<Team*>& VectorTeams, int userInput) {
    Team* userClub = VectorTeams[userInput - 1];//index of specific club in vector
    return userClub;
}

/**
    Function that prints out the name and poinfs of the user's club
*/
void printClubStats(Team* userClub) {
    cout << "\nYour club " << userClub->getName() << " recieved " 
        << userClub->getPoints() << " points!" << endl;
}

/**
    Function that returns a specific matchweek number, selected by the user
    @return userMatchweek an integer that refers to the matchweek selected by the user
*/
int getUserMatchweek() {
    cout << "If you would like to view a specific match for your club, enter the matchweek (1-34):" << endl;
    int userMatchweek;
    bool valid = false;
    while (!valid) {//checks if the value entered is valid
        cin >> userMatchweek;
        if (cin.fail() || userMatchweek > 34 || userMatchweek < 1) {//makes sure it is an integer within the
            cout << "Invalid Entry, please enter a number in the range" << endl;//valid range
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }
        else {
            valid = true;
        }
        
    }
    return userMatchweek;
}

/**
    Function that prints out a specific matches information
    @param VectorData, club, matchweek First is a 2D vector that contains 
    the Match data for every match of every matchweek, Second is a Team*
    object to the user's club, and Third is the user's selected matchweek
*/
void printMatch(vector<vector<Match>>& VectorData, Team* club, int matchweek) {
    Match userMatch = findMatch(VectorData, club, matchweek);//initializes a match with the return value of
    cout << "\n" << userMatch.getInfo() << endl;//the findmatch() function, and prints out its data calling
                                                //the match member function getInfo()
}

/**
    Function that seeds the random number and calls one random number
    in order to avoid a pattern on some systems
*/
void initializeRand() {
    srand(time(nullptr));//seed random number to time
    rand();//use random once to avoid visual studio first random number pattern
}

/**
    Function that deletes each Team* in the VectorTeams vector to deallocate memory
    @param VectorTeams is the vector containing Team* to every Club object
*/
void deleteTeamPtrs(vector<Team*>& VectorTeams) {
    for (int i = 0; i < TEAMCNT; i++) {
        delete VectorTeams[i];//iterates through each element, deleting it
    }
}

/**
    Main function where every function is called, and important variables
    such as the VectorTeams and VectorData vectors are initialized
    @return 0 when the program is complete with no errors
*/
int main() {
    printWelcomeMsg();//welcomes the user to the program
    printTeamMsg();
    vector<Team*> VectorTeams = initializeTeamVec();//initializes VectorTeams to the return value of function

    int userInput = getUserInput();//gets the userinput from return value of function
    printUserClub(VectorTeams, userInput);//prints this info out
    Team* userClub = getUserClub(VectorTeams, userInput);//create a Team* for selected club

    vector<vector<Match>> VectorData;//initializes 2D VectorData vector
    initializeRand();//initializes necessary random number functions
    simulation(VectorTeams, VectorData);//simulates the season
    sortTeams(VectorTeams);//sorts the team vector

    printLeagueTable(VectorTeams);//prints out the league table
    printClubStats(userClub);//prints out specific user club info

    int userMatchweek = getUserMatchweek();//set usermatchweek to return value of function
    printMatch(VectorData, userClub, userMatchweek);//prints out this specific match

    deleteTeamPtrs(VectorTeams);//deletes all Team* to deallocate memory

    return 0;
}