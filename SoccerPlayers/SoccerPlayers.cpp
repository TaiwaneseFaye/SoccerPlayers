//Chris Sun
//C++
//Soccer player program using structures

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Player {
		string playerName;		//player name
		int playerNum;			//player number
		int points;				//points scored by player
	};

int main()
{
	const int NUM_PLAYERS = 12;			//the number of players
	Player playerList[NUM_PLAYERS];		//array for a list of the players and their stats


	//get player name, number, and points
	for (int i = 0; i < NUM_PLAYERS; i++) {
		//getting player name
		cout << "Enter the name of player #" << i+1 << endl;
		cin >> playerList[i].playerName;
		cout << endl;

		//getting player number
		cout << "Enter the number of player #" << i+1 << endl;
		cin >> playerList[i].playerNum;
		cout << endl;

		//making sure a negative number is not used for player number
		while (playerList->playerNum < 0) {
			cout << "Enter a valid player number." << endl;
			cin >> playerList[i].playerNum;
			cout << endl;
		}

		//getting points scored by player
		cout << "Enter the points scored by player #" << i+1 << endl;
		cin >> playerList[i].points;
		cout << endl;

		//making sure a negative number is not used for points
		while (playerList->points < 0) {
			cout << "Enter a positive number for points." << endl;
			cin >> playerList[i].points;
			cout << endl;
		}

	}

	//displaying all the info entered
	cout << setw(15) << "Player Name" << setw(15) << "Player Number" << setw(15) 
		<< "Points Scored" << endl;
	cout << "________________________________________________________" << endl;
	for (int l = 0; l < NUM_PLAYERS; l++) {
		cout<<setw(15) << playerList[l].playerName <<setw(15) 
			<< playerList[l].playerNum <<setw(15) << playerList[l].points;
		cout << endl;
	}

	//calculating the total points scored by team
	int totalPoints = 0;
	for (int p = 0; p < NUM_PLAYERS; p++) {
		totalPoints += playerList[p].points;
	}
	
	//displaying total points
	cout << "\nTotal points scored by team: " << totalPoints << endl;

	//getting the player with the highest score
	int highest = playerList[0].points;
	int maxIndex = 0;
	for (int h = 0; h < NUM_PLAYERS; h++) {
		if (playerList[h].points > highest) {
			highest = playerList[h].points;
			maxIndex = h;
		}
		
	}
	//displaying the highest scoring player
	cout << "Highest scoring player is: " << playerList[maxIndex].playerName 
		<< " player #" << playerList[maxIndex].playerNum << endl;

	return 0;
}