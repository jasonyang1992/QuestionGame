#include <iostream>
#include <string>
#include "Animal.h"
#include "Vegetable.h"
#include "Other.h"

using namespace std;

void startGame();
void optionChoices();
int gameWinner();
int playerWinner();
void instructions();

int main(){
	string choice;
	// Starting game with menu

	system("cls");
	system("title Question Game");
	cout << "I am going to guess what you are thinking!!!" << endl;
	cout << "                Try me                   " << endl;
	system("pause");
	system("cls");

	cout << "----Main Menu----" << endl;
	cout << "Enter a choice number" << endl;
	cout << "   1. New Game   " << endl;
	cout << "   2. How to play" << endl;
	cout << "   3. Exit       " << endl;
	cin >> choice;

	if (choice == "1"){
		system("cls");
		startGame();
		cin >> choice;

		if (choice == "1"){
			// animals
			Animals();
		}
		else if (choice == "2"){
			// vegetable
			Vegetable();
		}
		else if (choice == "3"){
			// other
			Other();
		}
		else{
			system("cls");
			cout << "You have enter an invalid input, please try again" << endl;
			system("pause");
			main();
		}
	}
	else if (choice == "2"){
		instructions();
	}
	else{
		return 0;
	}
	return 0;

}

void startGame(){
	cout << "------Question 1------" << endl;
	cout << "Is it an: " << endl;
	cout << "1. Animal" << endl;
	cout << "2. Vegetable" << endl;
	cout << "3. Other" << endl;
}

void instructions(){
	system("cls");
	cout << "How to play" << endl;
	cout << "I am going to ask you six questions" << endl;
	cout << "On the seventh question, I will ask what you are thinking" << endl;
	cout << "If I am correct, I win" << endl;
	cout << "If I am wrong, you win" << endl;
	cout << "Good luck" << endl;
	system("pause");
	system("cls");
	main();
}

void optionChoices(){
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
}

int gameWinner(){
	string choice;
	system("cls");
	cout << "I win!!!" << endl;
	cout << "Better luck next time!!!" << endl;
	system("pause");
	do{
		system("cls");
		cout << "Try again?" << endl;
		optionChoices();
		cin >> choice;

		if (choice == "1"){
			main();
		}
		else if (choice == "2"){
			return 0;
		}
	} while (choice != "1" && choice != "2");
}

int playerWinner(){
	string choice;
	system("cls");
	cout << "You win!!!" << endl;
	cout << "You beat me this time!!!" << endl;
	system("pause");
	do{
		system("cls");
		cout << "Try again?" << endl;
		optionChoices();
		cin >> choice;

		if (choice == "1"){
			main();
		}
		else if (choice == "2"){
			return 0;
		}
	} while (choice != "1" && choice != "2");
}