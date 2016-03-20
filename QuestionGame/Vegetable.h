#include <iostream>
#include <string>

using namespace std;

void optionChoices();
int gameWinner();
int playerWinner();

void Vegetable(){
	string choice;
	// Question 2: Does it have the color green
	/*
		Question 1: It is a vegetable
	*/
	do{
		system("cls");
		cout << "------Question 2------" << endl;
		cout << "Does it have the color green?" << endl;
		optionChoices();
		cin >> choice;
	} while (choice != "1" && choice != "2");

	if (choice == "1"){
		// Question 3: Can it be used in a salad?
		/*
		Question 1: Yes it is a vegetable
		Question 2: Yes it does have the color green
		*/

		do{
			system("cls");
			cout << "------Question 3------" << endl;
			cout << "Can it be used in a salad?" << endl;
			optionChoices();
			cin >> choice;
		} while (choice != "1" && choice != "2");

		if (choice == "1"){
			// Question 4: Is it used in sandwiches?
			/*
			Question 1: Yes it is a vegetable
			Question 2: Yes it does have the color green
			Question 3: Yes it can be used in a salad
			*/

			do{
				system("cls");
				cout << "------Question 4------" << endl;
				cout << "Is it used in a sandwich?" << endl;
				optionChoices();
				cin >> choice;
			} while (choice != "1" && choice != "2");

			if (choice == "1"){
				// Question 5: Can you eat it raw?
				/*
				Question 1: Yes it is a vegetable
				Question 2: Yes it does have the color green
				Question 3: Yes it can be used in a salad
				Question 4: Yes it can used in a sandwich
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Can you eat it raw?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Does it have seeds?
					/*
					Question 1: Yes it is a vegetable
					Question 2: Yes it does have the color green
					Question 3: Yes it can be used in a salad
					Question 4: Yes it can used in a sandwich
					Question 5: Yes you can eat raw
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it have seeds?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a pickle?
						/*
						Question 1: Yes it is a vegetable
						Question 2: Yes it does have the color green
						Question 3: Yes it can be used in a salad
						Question 4: Yes it can used in a sandwich
						Question 5: Yes you can eat raw
						Question 6: Yes it does have seeds
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a pickle?" << endl;
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
						// Question 7: Is it lettuce?
						/*
						Question 1: Yes it is a vegetable
						Question 2: Yes it does have the color green
						Question 3: Yes it can be used in a salad
						Question 4: Yes it can used in a sandwich
						Question 5: Yes you can eat raw
						Question 6: No it does not have seeds
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it lettuce?" << endl;
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
					// Question 6: Is it used for cooking?
					/*
					Question 1: Yes it is a vegetable
					Question 2: Yes it does have the color green
					Question 3: Yes it can be used in a salad
					Question 4: Yes it can used in a sandwich
					Question 5: No you cannot eat it raw
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Is it used for cooking?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it kale?
						/*
						Question 1: Yes it is a vegetable
						Question 2: Yes it does have the color green
						Question 3: Yes it can be used in a salad
						Question 4: Yes it can used in a sandwich
						Question 5: No you cannot eat it raw
						Question 6: Yes it is used for cooking
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it kale?" << endl;
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
						// Question 7: Is it a mossed rock?
						/*
						Question 1: Yes it is a vegetable
						Question 2: Yes it does have the color green
						Question 3: Yes it can be used in a salad
						Question 4: Yes it can used in a sandwich
						Question 5: No you cannot eat it raw
						Question 6: No it is not used for cooking
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a mossed rock?" << endl;
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
				// Question 5: Do you cook it?
				/*
				Question 1: Yes it is a vegetable
				Question 2: Yes it does have the color green
				Question 3: Yes it can be used in a salad
				Question 4: No it cannot be used in a sandwich
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Can you cook it?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Does it resemble of a tree?
					/*
					Question 1: Yes it is a vegetable
					Question 2: Yes it does have the color green
					Question 3: Yes it can be used in a salad
					Question 4: No it cannot be used in a sandwich
					Question 5: Yes you can cook it
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it resemble of a tree?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it broccoli?
						/*
						Question 1: Yes it is a vegetable
						Question 2: Yes it does have the color green
						Question 3: Yes it can be used in a salad
						Question 4: No it cannot be used in a sandwich
						Question 5: Yes you can cook it
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it broccoli?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");


						if (choice == "1"){
							// player winner
							playerWinner();
						}
						else if (choice == "2"){
							// game winner
							gameWinner();
						}
						
					}
					else if (choice == "2"){
						// Question 7: Is it spinach?
						/*
						Question 1: Yes it is a vegetable
						Question 2: Yes it does have the color green
						Question 3: Yes it can be used in a salad
						Question 4: No it cannot be used in a sandwich
						Question 5: Yes you can cook it
						Question 6: No it does not resemble of a tree
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it spinach?" << endl;
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
					// Question 6: Does it have the color orange?
					/*
					Question 1: Yes it is a vegetable
					Question 2: Yes it does have the color green
					Question 3: Yes it can be used in a salad
					Question 4: No it cannot be used in a sandwich
					Question 5: no you cannot cook it
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it have the color orange?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a carrot?
						/*
						Question 1: Yes it is a vegetable
						Question 2: Yes it does have the color green
						Question 3: Yes it can be used in a salad
						Question 4: No it cannot be used in a sandwich
						Question 5: Yes you can cook it
						Question 6: Yes it does have the color orange
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a carrot?" << endl;
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
						// Question 7: Is it green beans?
						/*
						Question 1: Yes it is a vegetable
						Question 2: Yes it does have the color green
						Question 3: Yes it can be used in a salad
						Question 4: No it cannot be used in a sandwich
						Question 5: Yes you can cook it
						Question 6: No it does not have the color orange
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it green beans?" << endl;
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
			// Question 4: Does it have leaves?
			/*
			Question 1: Yes it is a vegetable
			Question 2: Yes it does have the color green
			Question 3: No it can be used in a salad
			*/

			do{
				system("cls");
				cout << "------Question 4------" << endl;
				cout << "Does it have leaves?" << endl;
				optionChoices();
				cin >> choice;
			} while (choice != "1" && choice != "2");

			if (choice == "1"){
				// Question 5: Does it have roots?
				/*
				Question 1: Yes it is a vegetable
				Question 2: Yes it does have the color green
				Question 3: No it can be used in a salad
				Question 4: Yes it does have leaves
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Does it have roots?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Does it have a pink color?
					/*
					Question 1: Yes it is a vegetable
					Question 2: Yes it does have the color green
					Question 3: No it can be used in a salad
					Question 4: Yes it does have leaves
					Question 5: Yes it does have roots
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it have the color pink?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it beet green?
						/*
						Question 1: Yes it is a vegetable
						Question 2: Yes it does have the color green
						Question 3: No it can be used in a salad
						Question 4: Yes it does have leaves
						Question 5: Yes it does have roots
						Question 6: Yes it does have the color pink
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it beet green?" << endl;
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
					else if (choice == "2"){
						// Question 7: Is it Dandelion Greens?
						/*
						Question 1: Yes it is a vegetable
						Question 2: Yes it does have the color green
						Question 3: No it can be used in a salad
						Question 4: Yes it does have leaves
						Question 5: Yes it does have roots
						Question 6: No it does have the color pink
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a dandelion green?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// player winner
							playerWinner();
						}
						else if (choice == "2"){
							// game winner
							gameWinner();
						}

					}					
				}
				else if (choice == "2"){
					// Question 6: Is it long?
					/*
					Question 1: Yes it is a vegetable
					Question 2: Yes it does have the color green
					Question 3: No it can be used in a salad
					Question 4: Yes it does have leaves
					Question 5: No it does not have roots
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Is it long?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a zucchini?
						/*
						Question 1: Yes it is a vegetable
						Question 2: Yes it does have the color green
						Question 3: No it can be used in a salad
						Question 4: Yes it does have leaves
						Question 5: No it does not have roots
						Question 6: Yes it is long
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a zucchini?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// gamme winner
							gameWinner();
						}
						else if (choice == "2"){
							// player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is brussel sprouts?
						/*
						Question 1: Yes it is a vegetable
						Question 2: Yes it does have the color green
						Question 3: No it can be used in a salad
						Question 4: Yes it does have leaves
						Question 5: No it does not have roots
						Question 6: No it is long
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it brussel sprouts?" << endl;
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
				// Question 6: Is it a small shape?
				/*
				Question 1: Yes it is a vegetable
				Question 2: Yes it does have the color green
				Question 3: No it can be used in a salad
				Question 4: Yes it does have leaves
				Question 5: No it does not have roots
				*/

				do{
					system("cls");
					cout << "------Question 6------" << endl;
					cout << "Is it a small shape?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");


				if (choice == "1"){
					// Question 7: Is it green beans?
					/*
					Question 1: Yes it is a vegetable
					Question 2: Yes it does have the color green
					Question 3: No it can be used in a salad
					Question 4: Yes it does have leaves
					Question 5: No it does not have roots
					Question 6: Yes it is a small shape
					*/

					do{
						system("cls");
						cout << "------Question 7------" << endl;
						cout << "Is it green beans?" << endl;
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
				else if (choice == "2"){
					// Question 7: Is it bok choy?
					/*
					Question 1: Yes it is a vegetable
					Question 2: Yes it does have the color green
					Question 3: No it can be used in a salad
					Question 4: Yes it does have leaves
					Question 5: No it does not have roots
					Question 6: No it is not a small shape
					*/

					do{
						system("cls");
						cout << "------Question 7------" << endl;
						cout << "Is it bok choy?" << endl;
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
		}
	}
	else if (choice == "2"){
		// Question 3: Is it round?
		/*
		Question 1: Yes it is a vegetable
		Question 2: No it does have the color green
		*/

		do{
			system("cls");
			cout << "------Question 3------" << endl;
			cout << "Is it round?" << endl;
			optionChoices();
			cin >> choice;
		} while (choice != "1" && choice != "2");

		if (choice == "1"){
			// Question 4: Do you use it for cooking?
			/*
			Question 1: Yes it is a vegetable
			Question 2: No it does have the color green
			Question 3: Yes it is round
			*/

			do{
				system("cls");
				cout << "------Question 4------" << endl;
				cout << "Do you use it for cooking?" << endl;
				optionChoices();
				cin >> choice;
			} while (choice != "1" && choice != "2");

			if (choice == "1"){
				// Question 5: Is it put used on a sandwich?
				/*
				Question 1: Yes it is a vegetable
				Question 2: No it does have the color green
				Question 3: Yes it is round
				Question 4: Yes you use it for cooking
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Does it have the color green?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Is it color red?
					/*
					Question 1: Yes it is a vegetable
					Question 2: No it does have the color green
					Question 3: Yes it is round
					Question 4: Yes you use it for cooking
					Question 5: Yes you can use on a sandwich
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Is it color red?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a tomato?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: Yes it is round
						Question 4: Yes you use it for cooking
						Question 5: Yes you can use on a sandwich
						Question 6: Yes it is red
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a tomato?" << endl;
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
						// Question 7: Is it an onion?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: Yes it is round
						Question 4: Yes you use it for cooking
						Question 5: Yes you can use on a sandwich
						Question 6: No it is not red
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it an onion?" << endl;
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
					// Question 6: Is it a brownish color?
					/*
					Question 1: Yes it is a vegetable
					Question 2: No it does have the color green
					Question 3: Yes it is round
					Question 4: Yes you use it for cooking
					Question 5: No you cannot use it on a sandwich
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Is it a brownish color?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it garlic?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: Yes it is round
						Question 4: Yes you use it for cooking
						Question 5: No you cannot use it on a sandwich
						Question 6: Yes it is a brownish color
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it garlic?" << endl;
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
						// Question 7: Is it red beans?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: Yes it is round
						Question 4: Yes you use it for cooking
						Question 5: No you cannot use it on a sandwich
						Question 6: No it is not a brownish color
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it red beans?" << endl;
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
				// Question 5: Is it long?
				/*
				Question 1: Yes it is a vegetable
				Question 2: No it does have the color green
				Question 3: No it is round
				Question 4: No you do not use it for cooking
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Is it long?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Is it posionous?
					/*
					Question 1: Yes it is a vegetable
					Question 2: No it does have the color green
					Question 3: No it is round
					Question 4: No you do not use it for cooking
					Question 5: Yes it is long
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Is it posionous?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a rhubarb?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: No it is round
						Question 4: No you do not use it for cooking
						Question 5: Yes it is long
						Question 6: Yes it is poisonous
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a rhubarb?" << endl;
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
						// Question 7: Is it a carrot?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: No it is round
						Question 4: No you do not use it for cooking
						Question 5: Yes it is long
						Question 6: No it is poisonous
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a carrot?" << endl;
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
					// Question 6: Is it orange?
					/*
					Question 1: Yes it is a vegetable
					Question 2: No it does have the color green
					Question 3: No it is round
					Question 4: No you do not use it for cooking
					Question 5: No it is not long
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "IS it orange?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a carrot?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: No it is round
						Question 4: No you do not use it for cooking
						Question 5: No it is not long
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a carrot?" << endl;
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
						// Question 7: Is it a fruit?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: No it is round
						Question 4: No you do not use it for cooking
						Question 5: No it is not long
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a fruit?" << endl;
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
			// Question 4: Is it short?
			/*
			Question 1: Yes it is a vegetable
			Question 2: No it does have the color green
			Question 3: No it is not round
			*/

			do{
				system("cls");
				cout << "------Question 4------" << endl;
				cout << "Is it short?" << endl;
				optionChoices();
				cin >> choice;
			} while (choice != "1" && choice != "2");

			if (choice == "1"){
				// Question 5: Is it used in a salad?
				/*
				Question 1: Yes it is a vegetable
				Question 2: No it does have the color green
				Question 3: No it is not round
				Question 4: Yes it is short
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Is it used in a salad?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Is it red?
					/*
					Question 1: Yes it is a vegetable
					Question 2: No it does have the color green
					Question 3: No it is not round
					Question 4: Yes it is short
					Question 5: Yes it can be used in a salad
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Is it red?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a sliced tomato?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: No it is not round
						Question 4: Yes it is short
						Question 5: Yes it can be used in a salad
						Question 6: Yes it is not red
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a sliced tomato?" << endl;
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
						// Question 7: Is it vegetable dressing?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: No it is not round
						Question 4: Yes it is short
						Question 5: Yes it can be used in a salad
						Question 6: No it is not red
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it vegetable dressing?" << endl;
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
					// Question 6: Is it pink?
					/*
					Question 1: Yes it is a vegetable
					Question 2: No it does have the color green
					Question 3: No it is not round
					Question 4: Yes it is short
					Question 5: No it cannot be used in a salad
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Is it pink?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a turnip?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: No it is not round
						Question 4: Yes it is short
						Question 5: No it cannot be used in a salad
						Question 6: Yes it is pink
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a turnip?" << endl;
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
						// Question 7: Is it sliced onions?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: No it is not round
						Question 4: Yes it is short
						Question 5: No it cannot be used in a salad
						Question 6: No it is not pink
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it sliced onions?" << endl;
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
				// Question 5: Do you cook it?
				/*
				Question 1: Yes it is a vegetable
				Question 2: No it does have the color green
				Question 3: No it is not round
				Question 4: No it is not short
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Do you cook it?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Is it orange?
					/*
					Question 1: Yes it is a vegetable
					Question 2: No it does have the color green
					Question 3: No it is not round
					Question 4: No it is not short
					Question 5: Yes you can cook it
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "does it have the color orange?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a carrot?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: No it is not round
						Question 4: No it is not short
						Question 5: Yes you can cook it
						Question 6: Yes it is orange
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a carrot?" << endl;
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
						// Question 7: Is it corn?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: No it is not round
						Question 4: No it is not short
						Question 5: Yes you can cook it
						Question 6: No it is not orange
						*/
						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it corn?" << endl;
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
					// Question 6: Is it orange?
					/*
					Question 1: Yes it is a vegetable
					Question 2: No it does have the color green
					Question 3: No it is not round
					Question 4: No it is not short
					Question 5: No you cannot cook it
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Is it orange?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a pumpkin?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: No it is not round
						Question 4: No it is not short
						Question 5: No you cannot cook it
						Question 6: Yes it is orange
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a pumpkin?" << endl;
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
						// Question 7: Is it a cauliflower?
						/*
						Question 1: Yes it is a vegetable
						Question 2: No it does have the color green
						Question 3: No it is not round
						Question 4: No it is not short
						Question 5: No you cannot cook it
						Question 6: No it is not orange
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it cauliflower?" << endl;
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