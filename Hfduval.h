/**
	@file Hfduval.h
	@brief Header File including important includes, and a global class & struct
	@author Harrison Duval
	@version 1.1 8/10/21
*/

#ifndef HFDUVAL_H
#define HFDUVAL_H
#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <exception>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

constexpr int TEAMCNT = 20;
constexpr int MATCHCNT = 10;

/**
	Implementation of fileError class derived from the public Exception class.
	This class allows you to throw errors with specific messages using the what() function
	For example: 
			try(function) {
				 const fileError mistake("Error");
				 throw mistake; }
			catch(fileError& e) {
				 cout << e.what(); }
	if the try function encounters an error, the output will be a message saying "Error"
*/
class fileError : public exception {
	fileError();
	const char * msg;
public:
	/**
		Function that sets the msg to s parameter
		@param s is the error message
	*/
	fileError(const char* s) noexcept(true) : msg(s) {}
	/**
		Function that overloads the what() function to return
		the specific message
	*/
	const char* what() noexcept(true) { return msg; }
};

/**
	Structure that holds the data of a club's name and their manager.
	For example: 
				userPrompt("Team", "Bob");
				cout << userPrompt.name << " : " << userPrompt.manager << endl;
	will print out "Team : Bob"
*/	
struct userPrompt {
	string club;
	string manager;
	userPrompt(string _club, string _manager) : club(_club), manager(_manager) {}//constructor
};
#endif //HFDUVAL_H
