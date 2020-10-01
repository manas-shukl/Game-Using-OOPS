// Creating a game using Concepts of OOPS
#include<iostream>
#include<stdlib.h>				// Library to use random function
#include <time.h>  				// Library to seed random function
using namespace std;

class Initiate{				// Class to initiate the game.
	public:
		Initiate(){			// Constructor to create a welcome page
		
		cout << "\t\t\t\t\t\t\t\t\t\t\t\tWELCOME TO\n" <<endl;
		cout <<	"\t\t\t\t\t\t\t\t#####                                                 ####    ## " <<endl;                   
		cout <<	"\t\t\t\t\t\t\t\t#                                                     #   #    # " <<endl;                    
		cout <<	"\t\t\t\t\t\t\t\t#                                                     #   #    # " <<endl;                    
		cout <<	"\t\t\t\t\t\t\t\t#       ####    ####    ####   # ###    ####          #   #    #     ####   # ###   " << endl; 
		cout <<	"\t\t\t\t\t\t\t\t####   #    #  #    #       #  ##   #  #    #         ####     #         #  ##   #  " << endl; 
		cout <<	"\t\t\t\t\t\t\t\t#       ##     #        #####  #    #  ######  #####  #        #     #####  #    #  " << endl; 
		cout <<	"\t\t\t\t\t\t\t\t#         ##   #       #    #  ##   #  #              #        #    #    #  #    #  " << endl; 
		cout <<	"\t\t\t\t\t\t\t\t#      #    #  #    #  #   ##  # ###   #    #         #        #    #   ##  #    #  " << endl; 
		cout <<	"\t\t\t\t\t\t\t\t#####   ####    ####    ### #  #        ####          #      #####   ### #  #    #  " << endl; 
		cout <<	"\t\t\t\t\t\t\t\t                               #                                                    " << endl; 
		cout <<	"\t\t\t\t\t\t\t\t                               #  \n\n\n" << endl; 

		}
};

class Story: public Initiate{						// Class to create story scenarios
	protected:
	char input;
	public:
	char story(){									// Story scenario one.
		cout << "\t\t\t\t\t\t\tHello Player! You are held prisoner for a crime you accidently commited.\n\t\t\t\t\t\t\tYou don't need to know the crime yet. Its night time and you are greeted by a robed figure.\n\t\t\t\t\t\t\tHe offers you the key to the prison. " << endl;
		cout << "\t\t\t\t\t\t\t\ta) You will take the key." << endl;
		cout << "\t\t\t\t\t\t\t\tb) You will not take the key." << endl;
		cout << "\n\t\t\t\t\t\t\t\t >> ";
		cin >> input;
		return input;
	}
	char story1(){									// Story scenario two.
		cout << "\t\t\t\t\t\t\tAfter you've escaped the prison, you don't remember where you're supposed to go,\n\t\t\t\t\t\t\t but you need to save yourself from the police, so you run towards..." << endl;
		cout << "\t\t\t\t\t\t\t\ta) The car on your right."<<endl;
		cout << "\t\t\t\t\t\t\t\tb) The House on your left."<<endl;
		cout << "\n\t\t\t\t\t\t\t\t >> ";
		cin >> input;
		return input;
	}
	char story2(){									// Story scenario three.
		cout << "\t\t\t\t\t\t\tYou reach the Countryside and hide there inside a house. You've running for a \n\t\t\t\t\t\t\tcouple of days now so you..." << endl;
		cout << "\t\t\t\t\t\t\ta) Go out to buy food." << endl;
		cout << "\t\t\t\t\t\t\tb) Stayed in." << endl;
		cout << "\n\t\t\t\t\t\t\t\t >> ";
		cin >> input;
		return input;
	}
	
};

class outcome: public Story{						// Class to show the outcome of user's choices
	public:
	void Win(){									
cout << "\n\n";
cout << "\t\t\t\t\t\t ###    ###   #    #   ####   ####     ##    #####   ###   #        #   #   ###   #   #        #     #   ###   #    #  " << endl;
cout << "\t\t\t\t\t\t#   #  #   #  #    #  #    #  #   #   #  #     #    #   #  #        #   #  #   #  #   #        #     #  #   #  #    #  " << endl;
cout << "\t\t\t\t\t\t#      #   #  ##   #  #       #   #  #    #    #    #      #         # #   #   #  #   #        #     #  #   #  ##   #  " << endl;
cout << "\t\t\t\t\t\t#      #   #  # #  #  #       #   #  #    #    #    #      #         # #   #   #  #   #        #     #  #   #  # #  #  " << endl;
cout << "\t\t\t\t\t\t#      #   #  #  # #  #       ####   #    #    #     ###   #          #    #   #  #   #        #     #  #   #  #  # #  " << endl;
cout << "\t\t\t\t\t\t#      #   #  #   ##  #  ###  ##     ######    #        #  #          #    #   #  #   #        #  #  #  #   #  #   ##  " << endl;
cout << "\t\t\t\t\t\t#      #   #  #    #  #    #  # #    #    #    #        #  #          #    #   #  #   #        # # # #  #   #  #    #  " << endl;
cout << "\t\t\t\t\t\t#   #  #   #  #    #  #   ##  #  #   #    #    #    #   #             #    #   #  #   #        ##   ##  #   #  #    #  " << endl;
cout << "\t\t\t\t\t\t ###    ###   #    #   ### #  #   #  #    #    #     ###   #          #     ###    ###         #     #   ###   #    #  " << endl;
	}
	
	void Lose(){								
	cout << "\n\n";
cout << "\t\t\t\t\t\t\t\t#   #   ###   #   #        #       ###    ###   #####  #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t#   #  #   #  #   #        #      #   #  #   #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t # #   #   #  #   #        #      #   #  #        #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t # #   #   #  #   #        #      #   #  #        #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #   ###     #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #      #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #      #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #  #   #    #             " << endl;
cout << "\t\t\t\t\t\t\t\t  #     ###    ###         #####   ###    ###     #    #  #  #  \n\n\n" << endl;
cout << "\t\t\t\t\t\t\t\t\tYOU WERE HANGED THE NEXT DAY." << endl;
	
	
	}
	
	void Lose1(){
	cout << "\n\n";
cout << "\t\t\t\t\t\t\t\t#   #   ###   #   #        #       ###    ###   #####  #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t#   #  #   #  #   #        #      #   #  #   #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t # #   #   #  #   #        #      #   #  #        #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t # #   #   #  #   #        #      #   #  #        #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #   ###     #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #      #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #      #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #  #   #    #             " << endl;
cout << "\t\t\t\t\t\t\t\t  #     ###    ###         #####   ###    ###     #    #  #  #  \n\n\n" << endl;
cout << "\t\t\t\t\t\t\t\t\tYOU WERE CAUGHT BY THE POLICE WHILE ESCAPING." << endl;

	}
	
		void Lose2(){
		cout << "\n\n";
cout << "\t\t\t\t\t\t\t\t#   #   ###   #   #        #       ###    ###   #####  #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t#   #  #   #  #   #        #      #   #  #   #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t # #   #   #  #   #        #      #   #  #        #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t # #   #   #  #   #        #      #   #  #        #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #   ###     #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #      #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #      #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #  #   #    #             " << endl;
cout << "\t\t\t\t\t\t\t\t  #     ###    ###         #####   ###    ###     #    #  #  #  \n\n\n" << endl;
cout << "\t\t\t\t\t\t\t\t\tTHE COPS CAUGHT YOU WHILE HOTWIRING THE CAR AND KILLED YOU." << endl;

	}
	
		void Lose3(){
		cout << "\n\n";
cout << "\t\t\t\t\t\t\t\t#   #   ###   #   #        #       ###    ###   #####  #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t#   #  #   #  #   #        #      #   #  #   #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t # #   #   #  #   #        #      #   #  #        #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t # #   #   #  #   #        #      #   #  #        #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #   ###     #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #      #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #      #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #  #   #    #             " << endl;
cout << "\t\t\t\t\t\t\t\t  #     ###    ###         #####   ###    ###     #    #  #  #  \n\n\n" << endl;
cout << "\t\t\t\t\t\t\t\t\tTHE COPS SURROUNDED THE HOUSE AND CAUGHT YOU." << endl;

	}
	
			void Lose4(){
			cout << "\n\n";
cout << "\t\t\t\t\t\t\t\t#   #   ###   #   #        #       ###    ###   #####  #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t#   #  #   #  #   #        #      #   #  #   #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t # #   #   #  #   #        #      #   #  #        #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t # #   #   #  #   #        #      #   #  #        #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #   ###     #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #      #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #      #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #  #   #    #             " << endl;
cout << "\t\t\t\t\t\t\t\t  #     ###    ###         #####   ###    ###     #    #  #  #  \n\n\n" << endl;
cout << "\t\t\t\t\t\t\tTHE COPS CAUGHT YOU BUYING BROWNIE AND KILLED YOU, THEN ATE ALL YOUR BROWNIE." << endl;

	}
	
			void Lose5(){
			cout << "\n\n";
cout << "\t\t\t\t\t\t\t\t#   #   ###   #   #        #       ###    ###   #####  #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t#   #  #   #  #   #        #      #   #  #   #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t # #   #   #  #   #        #      #   #  #        #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t # #   #   #  #   #        #      #   #  #        #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #   ###     #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #      #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #      #    #    #  #  #  " << endl;
cout << "\t\t\t\t\t\t\t\t  #    #   #  #   #        #      #   #  #   #    #             " << endl;
cout << "\t\t\t\t\t\t\t\t  #     ###    ###         #####   ###    ###     #    #  #  #  \n\n\n" << endl;
cout << "\t\t\t\t\t\t\t\t\t\tYOU DIED DUE TO STARVATION." << endl;

	}
};


int main(){
	char choice, choice1, choice2;				// Choices for each step.
	string ans;									// ans for a question in scenario 1
	outcome i;									// class object 
	choice = i.Story::story();					// calling scenario 1
	srand(time(0));
	int random = rand() % 2; 					// random for random outcomes of user's choices.
	switch(choice){								// switch case for scenario 1
		case 'a':
			cout << "\t\t\t\t\t\t\tYou were given the key and to escape you must answer this question or you'll be caught.\n";
			cout << "\t\t\t\t\t\t\tWhat has a head and a tail but no body?"<< endl;
			cout << "\n\t\t\t\t\t\t\t\t >> ";
			cin >> ans;
			if (ans == "coin" || ans == "COIN" || ans == "Coin"){
				cout << "\t\t\t\t\t\t\tYou escaped and in return the robed figure took your memory." << endl;
				choice1 = i.Story::story1();
			}
			else {
				i.Lose1();
			}
			break;
		case 'b':
				cout << "\t\t\t\t\t\t\tYou didn't take the key.\n\n\n";
				i.Lose();
				break;
	}
	
	switch(choice1){							// switch case for scenario 2
		case 'a':
			if (random == 0) {
			cout << "\t\t\t\t\t\t\tThe car was working and you were able to escape the cops." << endl;
			choice2 = i.Story::story2();
		}else if (random == 1){
			cout << "\t\t\t\t\t\t\tThe car was not working." << endl;
			i.Lose2();
		}
		break;
		case 'b':
			cout << "\t\t\t\t\t\t\tCops saw you entering the house." << endl;
			i.Lose3();
		break;
	}
	
	int random1 = rand() % 2; 
	switch(choice2){						// switch case for scenario 1
		case 'a':
			if (random1 == 0){
				cout << "\t\t\t\t\t\t\tYou bought enough food to escape. You drove far away and escaped." << endl;
				i.Win();
			}
			else if (random1 == 1){
				i.Lose4();
			}
			break;
		case 'b':
			if (random1 == 0){
				cout << "\t\t\t\t\t\t\tYou died due to starvation." << endl;
				i.Lose5();
			}	
			else if (random1 == 1){
				cout << "\t\t\t\t\t\t\tFood was in the house. You survived." << endl;
				i.Win();
			}
			break;
		}
	return 0;
}
