#include <iostream>
#include <string>

using namespace std;

void optionChoices(); 
int gameWinner();
int playerWinner();

void Animals(){
	string choice;
		// Question 2
		/*
		Question 1: It is an animal
	*/
	do{ 
		system("cls");
		cout << "------Question 2------" << endl;
		cout << "Can you see it in a zoo?" << endl;
		optionChoices();
		cin >> choice;
	} while (choice != "1" && choice != "2");

	if (choice == "1"){
		// Question 3: Does it have four legs
		/*
		Question 1: Yes it is an animal
		Question 2: Yes you can see in a zoo
		*/

		do{
			system("cls");
			cout << "------Question 3------" << endl;
			cout << "Does it have four legs?" << endl;
			optionChoices();
			cin >> choice;
		} while (choice != "1" && choice != "2");

		if (choice == "1"){
			// Question 4: Does it have claws?
			/*
			Question 1: Yes it is an animal
			Question 2: Yes you can see it in a zoo
			Question 3: Yes it has four legs
			*/

			do{
				system("cls");
				cout << "------Question 4------" << endl;
				cout << "Does it have claws?" << endl;
				optionChoices();
				cin >> choice;
			} while (choice != "1" && choice != "2");

			if (choice == "1"){
				// Question 5: Is it an endanger species?
				/*
				Question 1: Yes it is an animal
				Question 2: Yes you can see it in a zoo
				Question 3: Yes it has four legs
				Question 4: Yes it does have claws
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Is it an endanger species?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Does it have a long tail?
					/*
					Question 1: Yes it is an animal
					Question 2: Yes you can see it in a zoo
					Question 3: Yes it has four legs
					Question 4: Yes it does have claws
					Question 5: Yes it is an endanger species
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it have a long tail?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a lion?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: Yes it has four legs
						Question 4: Yes it does have claws
						Question 5: Yes it is an endanger species
						Question 6: Yes it does have a long tail
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a lion?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Game winner
							gameWinner();
						}
						else if (choice == "2"){
							// Player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a bear?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: Yes it has four legs
						Question 4: Yes it does have claws
						Question 5: Yes it is an endanger species
						Question 6: No it does have a long tail
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a bear?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Game winner
							gameWinner();
						}
						else if (choice == "2"){
							// Player winner
							playerWinner();
						}
					}
				}
				else if (choice == "2"){
					// Question 6: Does it have spots?
					/*
					Question 1: Yes it is an animal
					Question 2: Yes you can see it in a zoo
					Question 3: Yes it has four legs
					Question 4: Yes it does have claws
					Question 5: No it is an endanger species
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it have spots?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a cheetah?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: Yes it has four legs
						Question 4: Yes it does have claws
						Question 5: No it is an endanger species
						Question 6: Yes it does have spots
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a cheetah?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							//Game winner
							gameWinner();
						}
						else if (choice == "2"){
							//Player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a cat?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: Yes it has four legs
						Question 4: Yes it does have claws
						Question 5: No it is an endanger species
						Question 6: No it does not have spots
						*/
						
						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a cat?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							//Game winner
							gameWinner();
						}
						else if (choice == "2"){
							//Player winner
							playerWinner();
						}
					}
				}
			}
			else if (choice == "2"){
				// Question 5: Does it have stripes?
				/*
				Question 1: Yes it is an animal
				Question 2: Yes you can see it in a zoo
				Question 3: Yes it has four legs
				Question 4: No it does not have claws
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Does it have stripes?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Is it a herbivore?
					/*
					Question 1: Yes it is an animal
					Question 2: Yes you can see it in a zoo
					Question 3: Yes it has four legs
					Question 4: No it does not have claws
					Question 5: Yes it does have stripes
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Is it a herbivore?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a zebra?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: Yes it has four legs
						Question 4: No it does not have claws
						Question 5: Yes it does have stripes
						Question 6: Yes it is a herbivore
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a zebra?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							//Game winner
							gameWinner();
						}
						else if (choice == "2"){
							//Player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a tiger?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: Yes it has four legs
						Question 4: No it does not have claws
						Question 5: Yes it does have stripes
						Question 6: No it is a herbivore
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a tiger?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							//Game winner
							gameWinner();
						}
						else if (choice == "2"){
							//Player winner
							playerWinner();
						}
					}
				}
				else if (choice == "2"){
					// Question 6: Does it have spots?
					/*
					Question 1: Yes it is an animal
					Question 2: Yes you can see it in a zoo
					Question 3: Yes it has four legs
					Question 4: No it does not have claws
					Question 5: No it does not have stripes
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it have spots?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a cow?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: Yes it has four legs
						Question 4: No it does not have claws
						Question 5: No it does not have stripes
						Question 6: Yes it does have spots
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a cow?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							//Game winner
							gameWinner();
						}
						else if (choice == "2"){
							//Player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a horse?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: Yes it has four legs
						Question 4: No it does not have claws
						Question 5: No it does not have stripes
						Question 6: No it does not have spots
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a horse?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							//Game winner
							gameWinner();
						}
						else if (choice == "2"){
							//Player winner
							playerWinner();
						}
					}
				}
			}
		}
		else if (choice == "2"){
			// Question 4: Does it have a tail?
			/*
			Question 1: Yes it is an animal
			Question 2: Yes you can see it in a zoo
			Question 3: No it does not have four legs
			*/

			do{
				system("cls");
				cout << "------Question 4------" << endl;
				cout << "Does it have a tail?" << endl;
				optionChoices();
				cin >> choice;
			} while (choice != "1" && choice != "2");

			if (choice == "1"){
				// Question 5: Does it have two legs?
				/*
				Question 1: Yes it is an animal
				Question 2: Yes you can see it in a zoo
				Question 3: No it does not have four legs
				Question 4: Yes it does have a tail
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Does it have two legs?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Does it have a pouch?
					/*
					Question 1: Yes it is an animal
					Question 2: Yes you can see it in a zoo
					Question 3: No it does not have four legs
					Question 4: Yes it does have a tail
					Question 5: Yes it does have two legs
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it have a pouch?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a Kangaroo?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: No it does not have four legs
						Question 4: Yes it does have a tail
						Question 5: Yes it does have two legs
						Question 6: Yes it does have a pouch
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a kangaroo?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");
					}
					else if (choice == "2"){
						// Question 7: Is it an ostrich?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: No it does not have four legs
						Question 4: Yes it does have a tail
						Question 5: Yes it does have two legs
						Question 6: No it does not have a pouch
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a ostrich?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");
					}
				}
				else if (choice == "2"){
					// Question 6: Does it have fins?
					/*
					Question 1: Yes it is an animal
					Question 2: Yes you can see it in a zoo
					Question 3: No it does not have four legs
					Question 4: Yes it does have a tail
					Question 5: No it does have two legs
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it have fins?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a fish?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: No it does not have four legs
						Question 4: Yes it does have a tail
						Question 5: No it does have two legs
						Question 6: Yes it does have fins
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a fish?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							//Game winner
							gameWinner();
						}
						else if (choice == "2"){
							//Player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it an eel?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: No it does not have four legs
						Question 4: Yes it does have a tail
						Question 5: No it does have two legs
						Question 6: No it does have fins
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it an eel?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Game winner
							gameWinner();
						}
						else if (choice == "2"){
							// Player winner
							playerWinner();
						}
					}
				}
			}
			else if (choice == "2"){
				// Question 4: Does it have a tail?
				/*
				Question 1: Yes it is an animal
				Question 2: Yes you can see it in a zoo
				Question 3: No it does not have four legs
				*/

				do{
					system("cls");
					cout << "------Question 4------" << endl;
					cout << "Does it have a tail?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 5: Does it swim?
					/*
					Question 1: Yes it is an animal
					Question 2: Yes you can see it in a zoo
					Question 3: No it does not have four legs
					Question 4: Yes it does have a tail
					*/

					do{
						system("cls");
						cout << "------Question 5------" << endl;
						cout << "Does it swim?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 6: Can it walk on land?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: No it does not have four legs
						Question 4: Yes it does have a tail
						Question 5: Yes it can swim
						*/

						do{
							system("cls");
							cout << "------Question 6------" << endl;
							cout << "Can it walk on land?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Question 7: Is it a penguin?
							/*
							Question 1: Yes it is an animal
							Question 2: Yes you can see it in a zoo
							Question 3: No it does not have four legs
							Question 4: Yes it does have a tail
							Question 5: Yes it can swim
							Question 6: Yes it can walk on land
							*/

							do{
								system("cls");
								cout << "------Question 7------" << endl;
								cout << "Is it a penguin?" << endl;
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
							// Question 7: Is it a fish?
							/*
							Question 1: Yes it is an animal
							Question 2: Yes you can see it in a zoo
							Question 3: No it does not have four legs
							Question 4: Yes it does have a tail
							Question 5: Yes it can swim
							Question 6: No it can walk on land
							*/

							do{
								system("cls");
								cout << "------Question 7------" << endl;
								cout << "Is it a fish?" << endl;
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
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: No it does not have four legs
						Question 4: Yes it does have a tail
						Question 5: No it cannot swim
						*/

						do{
							system("cls");
							cout << "------Question 6------" << endl;
							cout << "Is it pink?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Question 7: Is it a Flamingo?
							/*
							Question 1: Yes it is an animal
							Question 2: Yes you can see it in a zoo
							Question 3: No it does not have four legs
							Question 4: Yes it does have a tail
							Question 5: Yes it can swim
							Question 6: Yes it pink
							*/

							do{
								system("cls");
								cout << "------Question 7------" << endl;
								cout << "Is it a flamingo?" << endl;
								optionChoices();
								cin >> choice;
							} while (choice != "1" && choice != "2");

							if (choice == "1"){
								//Game winner
								gameWinner();
							}
							else if (choice == "2"){
								//Player winner
								playerWinner();
							}
						}
						else if (choice == "2"){
							// Question 7: Is it a penguin?
							/*
							Question 1: Yes it is an animal
							Question 2: Yes you can see it in a zoo
							Question 3: No it does not have four legs
							Question 4: Yes it does have a tail
							Question 5: Yes it can swim
							Question 6: No it is not pink
							*/

							do{
								system("cls");
								cout << "------Question 7------" << endl;
								cout << "Is it a penguin?" << endl;
								optionChoices();
								cin >> choice;
							} while (choice != "1" && choice != "2");

							if (choice == "1"){
								//Game winner
								gameWinner();
							}
							else if (choice == "2"){
								//Player winner
								playerWinner();
							}
						}
					}
				}
				else if (choice == "2"){
					// Question 5: Can it fly?
					/*
					Question 1: Yes it is an animal
					Question 2: Yes you can see it in a zoo
					Question 3: No it does not have four legs
					Question 4: No it does not have a tail
					*/

					do{
						system("cls");
						cout << "------Question 5------" << endl;
						cout << "Can it fly?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 6: Can you own it?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: No it does not have four legs
						Question 4: No it does not have a tail
						Question 5: Yes it can fly
						*/

						do{
							system("cls");
							cout << "------Question 6------" << endl;
							cout << "Can you own it?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Question 7: Is it a parrot?
							/*
							Question 1: Yes it is an animal
							Question 2: Yes you can see it in a zoo
							Question 3: No it does not have four legs
							Question 4: No it does not have a tail
							Question 5: Yes it can fly
							Question 6: Yes you can own it
							*/

							do{
								system("cls");
								cout << "------Question 7------" << endl;
								cout << "Is it a parrot?" << endl;
								optionChoices();
								cin >> choice;
							} while (choice != "1" && choice != "2");

							if (choice == "1"){
								//Game winner
								gameWinner();
							}
							else if (choice == "2"){
								//Player winner
								playerWinner();
							}
						}
						else if (choice == "2"){
							// Question 7: Is it a pigeon?
							/*
							Question 1: Yes it is an animal
							Question 2: Yes you can see it in a zoo
							Question 3: No it does not have four legs
							Question 4: No it does not have a tail
							Question 5: Yes it can fly
							Question 6: No you cannot own it
							*/

							do{
								system("cls");
								cout << "------Question 7------" << endl;
								cout << "Is it a pigeon?" << endl;
								optionChoices();
								cin >> choice;
							} while (choice != "1" && choice != "2");

							if (choice == "1"){
								//Game winner
								gameWinner();
							}
							else if (choice == "2"){
								//Player winner
								playerWinner();
							}
						}
					}
					else if (choice == "2"){
						// Question 6: Does it have a pouch?
						/*
						Question 1: Yes it is an animal
						Question 2: Yes you can see it in a zoo
						Question 3: No it does not have four legs
						Question 4: No it does not have a tail
						Question 5: No it cannot fly
						*/

						do{
							system("cls");
							cout << "------Question 6------" << endl;
							cout << "Does it have a pouch?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Question 7: Is it a kangaroo?
							/*
							Question 1: Yes it is an animal
							Question 2: Yes you can see it in a zoo
							Question 3: No it does not have four legs
							Question 4: No it does not have a tail
							Question 5: No it cannot fly
							Question 6: Yes it does have a pouch
							*/

							do{
								system("cls");
								cout << "------Question 7------" << endl;
								cout << "Is it a kangaroo?" << endl;
								optionChoices();
								cin >> choice;
							} while (choice != "1" && choice != "2");

							if (choice == "1"){
								//game winner
								gameWinner();
							}
							else if (choice == "2"){
								//player winner
								playerWinner();
							}
						}
						else if (choice == "2"){
							// Question 7: Is it a man?
							/*
							Question 1: Yes it is an animal
							Question 2: Yes you can see it in a zoo
							Question 3: No it does not have four legs
							Question 4: No it does not have a tail
							Question 5: No it cannot fly
							Question 6: No it does have a pouch
							*/

							do{
								system("cls");
								cout << "------Question 7------" << endl;
								cout << "Is it a man?" << endl;
								optionChoices();
								cin >> choice;
							} while (choice != "1" && choice != "2");

							if (choice == "1"){
								//Game winner
								gameWinner();
							}
							else if (choice == "2"){
								//player winner
								playerWinner();
							}
						}
					}
				}
			}
		}
	}
	else if (choice == "2"){
		// Question 3: Can you own it?
		/*
		Question 1: Yes it is an animal
		Question 2: No, you can not see it in a zoo
		*/

		do{
			system("cls");
			cout << "------Question 3------" << endl;
			cout << "Can you own it?" << endl;
			optionChoices();
			cin >> choice;
		} while (choice != "1" && choice != "2");

		if (choice == "1"){
			// Question 4: Does it have four legs?
			/*
			Question 1: Yes it is an animal
			Question 2: No, you can not see it in a zoo
			Question 3: Yes you can own it
			*/

			do{
				system("cls");
				cout << "------Question 4------" << endl;
				cout << "Does it have four legs?" << endl;
				optionChoices();
				cin >> choice;
			} while (choice != "1" && choice != "2");

			if (choice == "1"){
				// Question 5: Does it have a tail?
				/*
				Question 1: Yes it is an animal
				Question 2: No, you can not see it in a zoo
				Question 3: Yes you can own it
				Question 4: Yes it does have four legs
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Does it have a tail?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Does it do tricks?
					/*
					Question 1: Yes it is an animal
					Question 2: No, you can not see it in a zoo
					Question 3: Yes you can own it
					Question 4: Yes it does have four legs
					Question 5: Yes it does have a tail
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it do tricks?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a dog?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: Yes you can own it
						Question 4: Yes it does have four legs
						Question 5: Yes it does have a tail
						Question 6: Yes it does do tricks
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a dog?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Game winner
						}
						else if (choice == "2"){
							// Player winner
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a cat?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: Yes you can own it
						Question 4: Yes it does have four legs
						Question 5: Yes it does have a tail
						Question 6: No it does do tricks
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a cat?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Game winner
						}
						else if (choice == "2"){
							// Player winner
						}
					}
				}
				else if (choice == "2"){
					// Question 6: Is it smaller than a microwave?
					/*
					Question 1: Yes it is an animal
					Question 2: No, you can not see it in a zoo
					Question 3: Yes you can own it
					Question 4: Yes it does have four legs
					Question 5: No it does not have a tail
					*/

					do{
						system("cls");
						cout << "------Question 7------" << endl;
						cout << "Is it smaller than a microwave?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it an Guinea pig?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: Yes you can own it
						Question 4: Yes it does have four legs
						Question 5: No it does not have a tail
						Question 6: Yes it is smaller than a microwave
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a guinea pig?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Game winner
							gameWinner();
						}
						else if (choice == "2"){
							// Player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a Capybaras?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: Yes you can own it
						Question 4: Yes it does have four legs
						Question 5: No it does not have a tail
						Question 6: No it is smaller than a microwave
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a capybaras?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Game winner
							gameWinner();
						}
						else if (choice == "2"){
							// Player winner
							playerWinner();
						}
					}
				}
			}
			else if (choice == "2"){
				// Question 5: Does it walk on land?
				/*
				Question 1: Yes it is an animal
				Question 2: No, you can not see it in a zoo
				Question 3: Yes you can own it
				Question 4: No it does not have four legs
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Does it walk on land?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Is it colorful?
					/*
					Question 1: Yes it is an animal
					Question 2: No, you can not see it in a zoo
					Question 3: Yes you can own it
					Question 4: No it does not have four legs
					Question 5: Yes it can walk on land
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Is it colorful?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a duck?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: Yes you can own it
						Question 4: No it does not have four legs
						Question 5: Yes it can walk on land
						Question 6: Yes it is colorful
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a duck?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Game winner
							gameWinner();
						}
						else if (choice == "2"){
							// Player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a man?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: Yes you can own it
						Question 4: No it does not have four legs
						Question 5: Yes it can walk on land
						Question 6: No it is not colorful
						*/
						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a man?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Game winner
							gameWinner();
						}
						else if (choice == "2"){
							// Player winner
							playerWinner();
						}
					}
				}
				else if (choice == "2"){
					// Question 6: Does it have scales?
					/*
					Question 1: Yes it is an animal
					Question 2: No, you can not see it in a zoo
					Question 3: Yes you can own it
					Question 4: No it does not have four legs
					Question 5: No it cannot walk on land
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it have scales?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it an eel?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: Yes you can own it
						Question 4: No it does not have four legs
						Question 5: No it cannot walk on land
						Question 6: Yes it does have scales
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it an eel?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Game winner
							gameWinner();
						}
						else if (choice == "2"){
							// Player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a shark?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: Yes you can own it
						Question 4: No it does not have four legs
						Question 5: No it cannot walk on land
						Question 6: No it does not have scales
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a shark?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Game winner
							gameWinner();
						}
						else if (choice == "2"){
							// Player winner
							playerWinner();
						}

					}
				}
			}
		}
		else if (choice == "2"){
			// Question 4: Does it swim?
			/*
			Question 1: Yes it is an animal
			Question 2: No, you can not see it in a zoo
			Question 3: No you cannot own it
			*/

			do{
				system("cls");
				cout << "------Question 4------" << endl;
				cout << "Does it swim?" << endl;
				optionChoices();
				cin >> choice;
			} while (choice != "1" && choice != "2");

			if (choice == "1"){
				// Question 5: Is it dangerous?
				/*
				Question 1: Yes it is an animal
				Question 2: No, you can not see it in a zoo
				Question 3: No you cannot own it
				Question 4: Yes it can swim
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Is it dangerous?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Can it walk on land?
					/*
					Question 1: Yes it is an animal
					Question 2: No, you can not see it in a zoo
					Question 3: No you cannot own it
					Question 4: Yes it can swim
					Question 5: Yes it is dangerous
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Can it walk on land?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it an Alligator snapping turtle?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: No you cannot own it
						Question 4: Yes it can swim
						Question 5: Yes you can own it
						Question 6: Yes it can walk on land
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it an Alligator snapping turtle?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							//game winner
							gameWinner();
						}
						else if (choice == "2"){
							//player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a Stonefish?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: No you cannot own it
						Question 4: Yes it can swim
						Question 5: Yes it is dangerous
						Question 6: No you cannot walk on land
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a Stonefish?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							//game winner
							gameWinner();
						}
						else if (choice == "2"){
							//player winner
							playerWinner();
						}
					}
				}
				else if (choice == "2"){
					// Question 6: does it have scales?
					/*
					Question 1: Yes it is an animal
					Question 2: No, you can not see it in a zoo
					Question 3: No you cannot own it
					Question 4: Yes it can swim
					Question 5: No it is not dangerous
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it have scales?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 6: Is it a fish?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: No you cannot own it
						Question 4: Yes it can swim
						Question 5: No it is not dangerous
						Question 6: Yes it does have scales
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a fish?" << endl;
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
						// Question 7: Is it a man?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: No you cannot own it
						Question 4: Yes it can swim
						Question 5: No it is not dangerous
						Question 6: No it does not have scales
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a man?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							//game winner
							gameWinner();
						}
						else if (choice == "2"){
							playerWinner();
						}
					}
				}
			}
			else if (choice == "2"){
				// Question 5: Does it have four legs?
				/*
				Question 1: Yes it is an animal
				Question 2: No, you can not see it in a zoo
				Question 3: No you cannot own it
				Question 4: No it cannot swim
				*/

				do{
					system("cls");
					cout << "------Question 5------" << endl;
					cout << "Does it have four legs?" << endl;
					optionChoices();
					cin >> choice;
				} while (choice != "1" && choice != "2");

				if (choice == "1"){
					// Question 6: Can it do tricks?
					/*
					Question 1: Yes it is an animal
					Question 2: No, you can not see it in a zoo
					Question 3: No you cannot own it
					Question 4: No it cannot swim
					Question 5: Yes it does have four legs
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Can it do tricks?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a dog?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: No you cannot own it
						Question 4: No it cannot swim
						Question 5: Yes it does have four legs
						Question 6: Yes it can do tricks
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a dog?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Game winner
							gameWinner();
						}
						else if (choice == "2"){
							// Player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a cat?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: No you cannot own it
						Question 4: No it cannot swim
						Question 5: Yes it does have four legs
						Question 6: No it does not do tricks
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a cat?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							// Game winner
							gameWinner();
						}
						else if (choice == "2"){
							// Player winner
							playerWinner();
						}
					}
				}
				else if (choice == "2"){
					// Question 6: Does it live in the wild?
					/*
					Question 1: Yes it is an animal
					Question 2: No, you can not see it in a zoo
					Question 3: No you cannot own it
					Question 4: No it cannot swim
					Question 5: No it does not have four legs
					*/

					do{
						system("cls");
						cout << "------Question 6------" << endl;
						cout << "Does it live in the wild?" << endl;
						optionChoices();
						cin >> choice;
					} while (choice != "1" && choice != "2");

					if (choice == "1"){
						// Question 7: Is it a Gorilla?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: No you cannot own it
						Question 4: No it cannot swim
						Question 5: No it does not have four legs
						Question 6: Yes it lives in the wild
						*/

						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a gorilla?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							//game winner
							gameWinner();
						}
						else if (choice == "2"){
							//player winner
							playerWinner();
						}
					}
					else if (choice == "2"){
						// Question 7: Is it a man?
						/*
						Question 1: Yes it is an animal
						Question 2: No, you can not see it in a zoo
						Question 3: No you cannot own it
						Question 4: No it cannot swim
						Question 5: No it does not have four legs
						Question 6: No it lives in the wild
						*/
						do{
							system("cls");
							cout << "------Question 7------" << endl;
							cout << "Is it a man?" << endl;
							optionChoices();
							cin >> choice;
						} while (choice != "1" && choice != "2");

						if (choice == "1"){
							//game winner
							gameWinner();
						}
						else if (choice == "2"){
							//player winner
							playerWinner();
						}
					}
				}
			}
		}
	}
}