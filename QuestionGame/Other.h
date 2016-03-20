#include <iostream>
#include <string>

using namespace std;

void optionChoices();
int gameWinner();
int playerWinner();

void Other(){
	string choice;
	// Question 2: Do you use it everyday?
	/*
	Question 1: Yes it is an other
	*/
	do{
		system("cls");
		cout << "------Question 2------" << endl;
		cout << "Do you use it everyday?" << endl;
		optionChoices();
		cin >> choice;
	} while (choice != "1" && choice != "2");

	if (choice == "1"){
		// Question 3: Can you put it in your pocket?
		/*
		Question 1: Yes it is an other
		Question 2: Yes you use it everyday
		*/

		do{
			system("cls");
			cout << "------Question 3------" << endl;
			cout << "Can you put it in your pocket?" << endl;
			optionChoices();
			cin >> choice;
		} while (choice != "1" && choice != "2");

		if (choice == "1"){
			// Question 4: Can you play games on it?
			/*
			Question 1: Yes it is an other
			Question 2: Yes you use it everyday
			Question 3: Yes you can put it in your pocket
			*/

			do{
				system("cls");
				cout << "------Question 4------" << endl;
				cout << "Can you play games on it?" << endl;
				optionChoices();
				cin >> choice;
			} while (choice != "1" && choice != "2");

			if (choice == "1"){
				// Question 5: Is it an electronic device?
				/*
				Question 1: Yes it is an other
				Question 2: Yes you use it everyday
				Question 3: Yes you can put it in your pocket
				Question 4: Yes you can play games on it
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Is it an electronic device?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Can you make a phone call with it?
					/*
					Question 1: Yes it is an other
					Question 2: Yes you use it everyday
					Question 3: Yes you can put it in your pocket
					Question 4: Yes you can play games on it
					Question 5: Yes it is an electronic device
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Can you make a phone call with it?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a smart phone?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: Yes you can put it in your pocket
						Question 4: Yes you can play games on it
						Question 5: Yes it is an electronic device
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a smart phone?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a handhelding gaming device?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: Yes you can put it in your pocket
						Question 4: Yes you can play games on it
						Question 5: Yes it is an electronic device
						Question 6: No you cannot make a phone call
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a handhelding gaming device?" << endl;
							optionChoices();
							cin >> choice;

						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
				}
				else if (choice == "2"){
					// Question 6: Can you play multiple games with it?
					/*
					Question 1: Yes it is an other
					Question 2: Yes you use it everyday
					Question 3: Yes you can put it in your pocket
					Question 4: Yes you can play games on it
					Question 5: No it is not an electronic device
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Can you play multiple games with it?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a card game?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: Yes you can put it in your pocket
						Question 4: Yes you can play games on it
						Question 5: No it is not an electronic device
						Question 6: Yes you can play multiple games with it
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a card game?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}

					}
					else if (choice == "2"){
						// Question 7: Is it the card game UNO? 
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: Yes you can put it in your pocket
						Question 4: Yes you can play games on it
						Question 5: No it is not an electronic device
						Question 6: No you cannot play multiple games with it
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it the card game UNO?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}

					}
				}
			}
			else if (choice == "2"){
				// Question 5: Do you hold your valuables in it?
				/*
				Question 1: Yes it is an other
				Question 2: Yes you use it everyday
				Question 3: Yes you can put it in your pocket
				Question 4: No you cannot play games on it
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Do you hold your valuables in it?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Do you put money in it?
					/*
					Question 1: Yes it is an other
					Question 2: Yes you use it everyday
					Question 3: Yes you can put it in your pocket
					Question 4: No you cannot play games on it
					Question 5: Yes you can hold your valuables in it
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Do you put money in it?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a wallet?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: Yes you can put it in your pocket
						Question 4: No you cannot play games on it
						Question 5: Yes you can hold your valuables in it
						Question 6: Yes you can put moeny into it
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a wallet?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a small jewelry box?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: Yes you can put it in your pocket
						Question 4: No you cannot play games on it
						Question 5: Yes you can hold your valuables in it
						Question 6: No you cannot put moeny into it
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a small jewelry box?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
				}
				else if (choice == "2"){
					// Question 6: Do you make phone calls with it?
					/*
					Question 1: Yes it is an other
					Question 2: Yes you use it everyday
					Question 3: Yes you can put it in your pocket
					Question 4: No you cannot play games on it
					Question 5: No you cannot hold your valuables in it
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Do you make phone calls with it?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a cellphone?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: Yes you can put it in your pocket
						Question 4: No you cannot play games on it
						Question 5: No you cannot hold your valuables in it
						Question 6: Yes you can make phone calls
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a cellphone?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it your keys?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: Yes you can put it in your pocket
						Question 4: No you cannot play games on it
						Question 5: No you cannot hold your valuables in it
						Question 6: No you cannot make phone calls with it
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it your keys?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
				}
			}
		}
		else if (choice == "2"){
			// Question 4: Do you use it at home?
			/*
			Question 1: Yes it is an other
			Question 2: Yes you use it everyday
			Question 3: No you cannot put it in your pocket
			*/

			do{
				system("cls");
				cout << "------Question 4------" << endl;
				cout << "Do you use it at home?" << endl;
				optionChoices();
				cin >> choice;
			} while (choice != "1" && choice != "2");

			if (choice == "1"){
				// Question 5: Do you use it for cooking?
				/*
				Question 1: Yes it is an other
				Question 2: Yes you use it everyday
				Question 3: No you cannot put it in your pocket
				Question 4: Yes you can use it at home
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Do you use it for cooking?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Does it belong in the kitchen?
					/*
					Question 1: Yes it is an other
					Question 2: Yes you use it everyday
					Question 3: No you cannot put it in your pocket
					Question 4: Yes you can use it at home
					Question 5: Yes you use it for cooking
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it belong in the kitchen?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a microwave?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: No you cannot put it in your pocket
						Question 4: Yes you can use it at home
						Question 5: Yes you use it for cooking
						QUestion 6: Yes it belongs in the kitchen
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a microwave?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a blender?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: No you cannot put it in your pocket
						Question 4: Yes you can use it at home
						Question 5: Yes you use it for cooking
						QUestion 6: No it does not belongs in the kitchen
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a blender?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							playerWinner();
						}
					}
				}
				else if (choice == "2"){
					// Question 6: Is it in the living room?
					/*
					Question 1: Yes it is an other
					Question 2: Yes you use it everyday
					Question 3: No you cannot put it in your pocket
					Question 4: Yes you can use it at home
					Question 5: No you do not use it for cooking
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Is it in the living room?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a television?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: No you cannot put it in your pocket
						Question 4: Yes you can use it at home
						Question 5: No you do not use it for cooking
						Question 6: Yes it is in the living room
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Do you use it everyday?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}

					}
					else if (choice == "2"){
						// Question 7: Is it a computer?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: No you cannot put it in your pocket
						Question 4: Yes you can use it at home
						Question 5: No you do not use it for cooking
						Question 6: No it is not in the living room
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a computer?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
						}
						else if (choice == "2"){
							// player winner
						}
					}
				}

			}
			else if (choice == "2"){
				// Question 5: Is it larger than a microwave?
				/*
				Question 1: Yes it is an other
				Question 2: Yes you use it everyday
				Question 3: No you cannot put it in your pocket
				Question 4: No you cannot use it at home
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Is it larger than a microwave?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Can you ride it?
					/*
					Question 1: Yes it is an other
					Question 2: Yes you use it everyday
					Question 3: No you cannot put it in your pocket
					Question 4: No you cannot use it at home
					Question 5: Yes it is larger than a microwave
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Do you use it everyday?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a car?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: No you cannot put it in your pocket
						Question 4: No you cannot use it at home
						Question 5: Yes it is larger than a microwave
						Question 6: Yes you can ride it
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a car?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it the arcade?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: No you cannot put it in your pocket
						Question 4: No you cannot use it at home
						Question 5: Yes it is larger than a microwave
						Question 6: No you cannot ride it
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it the arcade?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
				}
				else if (choice == "2"){
					// Question 6: Do you store information in it?
					/*
					Question 1: Yes it is an other
					Question 2: Yes you use it everyday
					Question 3: No you cannot put it in your pocket
					Question 4: No you cannot use it at home
					Question 5: No it is not larger than a microwave
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Do you store information in it?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a Hard drive?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: No you cannot put it in your pocket
						Question 4: No you cannot use it at home
						Question 5: No it is not larger than a microwave
						Question 6: Yes you do store information
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a hard drive?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a DVD player?
						/*
						Question 1: Yes it is an other
						Question 2: Yes you use it everyday
						Question 3: No you cannot put it in your pocket
						Question 4: No you cannot use it at home
						Question 5: No it is not larger than a microwave
						Question 6: No you cannot store information
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a DVD player?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
				}
			}
		}

	}
	else if (choice == "2"){
		// Question 3: Is it an electronic device?
		/*
		Question 1: Yes it is an other
		Question 2: No you don't use it everyday
		*/

		do{
			system("cls");
			cout << "------Question 3------" << endl;
			cout << "Is it an electronic device?" << endl;
			optionChoices();
			cin >> choice;
		} while (choice != "1" && choice != "2");

		if (choice == "1"){
			// Question 4: Can you write on it?
			/*
			Question 1: Yes it is an other
			Question 2: No you don't use it everyday
			Question 3: Yes it is an electronic device
			*/

			do{
				system("cls");
				cout << "------Question 4------" << endl;
				cout << "Can you write on it?" << endl;
				optionChoices();
				cin >> choice;
			} while (choice != "1" && choice != "2");

			if (choice == "1"){
				// Question 5: Can you play games on it?
				/*
				Question 1: Yes it is an other
				Question 2: No you don't use it everyday
				Question 3: Yes it is an electronic device
				Question 4: Yes you can write on it
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Can you play games on it?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Can you carry it easily?
					/*
					Question 1: Yes it is an other
					Question 2: No you don't use it everyday
					Question 3: Yes it is an electronic device
					Question 4: Yes you can write on it
					Question 5: Yes you can play games on it
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Can you carry it easily?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a tablet?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: Yes it is an electronic device
						Question 4: Yes you can write on it
						Question 5: Yes you can play games on it
						Question 6: Yes you can carry it easily
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a tablet?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a white board?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: Yes it is an electronic device
						Question 4: Yes you can write on it
						Question 5: Yes you can play games on it
						Question 6: No you cannot carry it easily
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a white board?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
				}
				else if (choice == "2"){
					// Question 6: Do you use it to animate drawing?
					/*
					Question 1: Yes it is an other
					Question 2: No you don't use it everyday
					Question 3: Yes it is an electronic device
					Question 4: Yes you can write on it
					Question 5: No you cannot play games on it
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Do you use it to animate drawing?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a drawing pad?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: Yes it is an electronic device
						Question 4: Yes you can write on it
						Question 5: No you cannot play games on it
						Question 6: Yes you use it to animate drawing
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a drawing pad?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a ipod touch?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: Yes it is an electronic device
						Question 4: Yes you can write on it
						Question 5: No you cannot play games on it
						Question 6: No you cannot use it to animate drawing
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it an ipod touch?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
				}
			}
			else if (choice == "2"){
				// Question 5: Do you listen to music on it?
				/*
				Question 1: Yes it is an other
				Question 2: No you don't use it everyday
				Question 3: Yes it is an electronic device
				Question 4: No you cannot write on it
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Do you listen to music on it?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Can it fit in your pocket?
					/*
					Question 1: Yes it is an other
					Question 2: No you don't use it everyday
					Question 3: Yes it is an electronic device
					Question 4: No you cannot write on it
					Question 5: Yes you can listen to music on it
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Can it fit in your pocket?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a music player?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: Yes it is an electronic device
						Question 4: No you cannot write on it
						Question 5: Yes you can listen to music on it
						Question 6: Yes it can fit in your pocket
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a music player?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a computer?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: Yes it is an electronic device
						Question 4: No you cannot write on it
						Question 5: Yes you can listen to music on it
						Question 6: No it cannot fit in your pocket
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a computer?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
				}
				else if (choice == "2"){
					// Question 6: Does it print?
					/*
					Question 1: Yes it is an other
					Question 2: No you don't use it everyday
					Question 3: Yes it is an electronic device
					Question 4: No you cannot write on it
					Question 5: No you cannot listen to music on it
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it print?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a printer?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: Yes it is an electronic device
						Question 4: No you cannot write on it
						Question 5: No you cannot listen to music on it
						Question 6: Yes it does print
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a printer?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a scanner?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: Yes it is an electronic device
						Question 4: No you cannot write on it
						Question 5: No you cannot listen to music on it
						Question 6: No it does not print
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a scanner?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
				}
			}
		}
		else if (choice == "2"){
			// Question 4: Do you wear it?
			/*
			Question 1: Yes it is an other
			Question 2: No you don't use it everyday
			Question 3: No it is not an electronic device
			*/

			do{
				system("cls");
				cout << "------Question 4------" << endl;
				cout << "Do you wear it?" << endl;
				optionChoices();
				cin >> choice;
			} while (choice != "1" && choice != "2");

			if (choice == "1"){
				// Question 5: Is it a T-shirt?
				/*
				Question 1: Yes it is an other
				Question 2: No you don't use it everyday
				Question 3: No it is not an electronic device
				Question 4: Yes you do wear it
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Is it a T-shirt?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Does it have any designs on it?
					/*
					Question 1: Yes it is an other
					Question 2: No you don't use it everyday
					Question 3: No it is not an electronic device
					Question 4: Yes you wear it
					Question 5: Yes it is a T-Shirt
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it have any design on it?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a graphic design T-shirt?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: No it is not an electronic device
						Question 4: Yes you wear it
						Question 5: Yes it is a T-Shirt
						Question 6: Yes it does have designs
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a graphic design T-shirt?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a basic T-shirt?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: No it is not an electronic device
						Question 4: Yes you wear it
						Question 5: Yes it is a T-Shirt
						Question 6: No it does not have designs
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a basic T-shirt?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
				}
				else if (choice == "2"){
					// Question 6: Is it a pair of pants?
					/*
					Question 1: Yes it is an other
					Question 2: No you don't use it everyday
					Question 3: No it is not an electronic device
					Question 4: Yes you can wear it
					Question 5: No it is not a T-Shirt
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Is it a pair of pants?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a pair of jeans?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: No it is not an electronic device
						Question 4: Yes you can wear it
						Question 5: No it is not a T-Shirt
						Question 6: Yes it is a pair of pants
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a pair of jeans?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a pair of shorts?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: No it is not an electronic device
						Question 4: Yes you can wear it
						Question 5: No it is not a T-Shirt
						Question 6: No it is not a pair of pants
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "is it a pair of shorts?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
				}
			}
			else if (choice == "2"){
				// Question 5: Do you carry it?
				/*
				Question 1: Yes it is an other
				Question 2: No you don't use it everyday
				Question 3: No it is not an electronic device
				Question 4: No you cannot wear it
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Do you carry it?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Does it carry stuff for you?
					/*
					Question 1: Yes it is an other
					Question 2: No you don't use it everyday
					Question 3: No it is not an electronic device
					Question 4: No you cannot wear it
					Question 5: Yes you can carry it
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it carry stuff for you?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a backpack?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: No it is not an electronic device
						Question 4: No you cannot wear it
						Question 5: Yes you can carry it
						Question 6: Yes it carries stuff for you
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a backpack?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it person?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: No it is not an electronic device
						Question 4: No you cannot wear it
						Question 5: Yes you can carry it
						Question 6: No it does not carry anything for you
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a person?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
				}
				else if (choice == "2"){
					// Question 6: Do you use it?
					/*
					Question 1: Yes it is an other
					Question 2: No you don't use it everyday
					Question 3: No it is not an electronic device
					Question 4: No you cannot wear it
					Question 5: No you can carry it
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Do you use it" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it heavy weight?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: No it is not an electronic device
						Question 4: No you cannot wear it
						Question 5: No you cannot carry it
						Question 6: Yes you can use it
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it heavy weight?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it something?
						/*
						Question 1: Yes it is an other
						Question 2: No you don't use it everyday
						Question 3: No it is not an electronic device
						Question 4: No you cannot wear it
						Question 5: No you cannot carry it
						Question 6: Yes you can use it
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it something?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// game winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
				}
			}
		}
	}
}