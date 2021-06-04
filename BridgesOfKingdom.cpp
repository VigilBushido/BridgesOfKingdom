/*
 Sergio Munguia : account ml56 
 project1.cpp
 February 27, 2014
 */

#include <iostream>
#include <fstream>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
float userHealth = 1000, beastHealth = 1000, score = 0, highscore = 0;
int menuchoice = 0, potion = 0, decision = 0, userDamage = 0, beastDamage = 0, bstatus = 0, round = 0;
string boss = "The Defiler", userName, highscoreName;
bool fight = true, battle = true;

//Declare a input file pointer
ifstream infile;
//Declare a output file pointer
ofstream outfile;
	
	cout << "\nWELCOME TO THE GAME BRIDGES OF THE KINGDOM\n";
	cout << "-----------------------------------------\n";
	cout << "    _____                     _____ " << endl;
	cout << "    |   |                     |   | " << endl;
	cout << "    |   |1                   1|   | " << endl;
	cout << "    |   | 1                 1 |   | " << endl;
	cout << "    |   |  1_______________1  |   | " << endl;
	cout << "    _______________________________ " << endl;

do{
	cout << "\n1) Play The Game\n";
	cout << "2) See The Rules\n";
	cout << "3) Highest Score\n";
	cout << "4) Exit\n";
	cout << "Enter choice here: ";
	cin >> menuchoice;
	
	if (menuchoice == 1)
	{	
		
		cout << "\nWelcome its time to see if you have what it takes to conquor the beasts that distraught the kingdom!\n";
		cout << "Enter Name Here: ";
		cin >> userName;
		do {
			do {
			cout << "\nThe Great Wizard Offers These Potions To Help\n";
			cout << "--------------------------------------------------\n";
			cout << "\nUser Potions\n";
			cout << "------------\n";
			cout << "1) Potion of Speed (2x attack)\n 2) Potion of Strength (increase of 30% attack power)\n\n";
			cout << "Throwable Potions\n";
			cout << "-----------------------\n";
			cout << "3) Potion of Stillness (critical attack)\n 4) Potion of Weakness (weakens beast health by 20%)\n";
			cout << "\n Enter in choice here: ";
			cin >> potion;
			}while (potion != 1 && potion != 2 && potion != 3 && potion != 4);
			
			cout <<"  ,;rsr                                                                     "<< endl;                  
			cout <<" ;i:r53#:                                                                   "<< endl;                  
			cout <<";r r@@@9@                                                                   "<< endl;                  
			cout <<":s 3@@@ihB,                                                                 "<< endl;                  
			cout <<" ;2iiirSA##X                                                                "<< endl;                  
			cout <<"    :5A2: .@#                                                               "<< endl;                  
			cout <<"      3;   ;@G,                                                             "<< endl;                  
			cout <<"       ;G#s;A25s         ,5A#i                                              "<< endl;                  
			cout <<"         ;9iiii9G,      rA#@&@.                                             "<< endl;                  
			cout <<"           ::2#iG@9   :@H;:AA;                                              "<< endl;                  
			cout <<"            .5@; ,5@r5@@                                                    "<< endl;                  
			cout <<"              h@.r#@@2A.                                                    "<< endl;                  
			cout <<"               .B5@@@##s                                                    "<< endl;                  
			cout <<"               :i;h##@BXB3:                                                 "<< endl;                  
			cout <<"            .S@X;:,399,,rA@.                                                "<< endl;                  
			cout <<"          :G@#:     isr .,rAr                                               "<< endl;                  
			cout <<"         ,#sA@        r#5,.,;h&,                                            "<< endl;                   
			cout <<"          SShA,         r&r,,,iAi                                           "<< endl;                   
			cout <<"                          2X:.,:XA:                                         "<< endl;                   
			cout <<"                           ;Ar...rH2                                        "<< endl;                   
			cout <<"                             X3:..,XH;                                      "<< endl;                   
			cout <<"                              :Ai...;A3.                                    "<< endl;                   
			cout <<"                                5&; .,5Mr                                   "<< endl;                   
			cout <<"                                 ,A2. .:H&,                                 "<< endl;                   
			cout <<"                                   iA;  .iMS                                "<< endl;                   
			cout <<"                                    .99.  ,GB:                              "<< endl;                   
			cout <<"                                      rHr   r#2                             "<< endl;                   
			cout <<"                                        9G,  .XM;                           "<< endl;                   
			cout <<"                                         ;Hi   ;M9                          "<< endl;                   
			cout <<"                                           9A:  .5#r                        "<< endl;                   
			cout <<"                                            :HS   :AG.                      "<< endl;                   
			cout <<"                                              2A:   s#s                     "<< endl;                   
			cout <<"                                               ,H2.  .GH,                   "<< endl;                   
		    cout <<"                                                 SH:   ;BS                  "<< endl;                   
			cout <<"                                                  .GX.   3A,                "<< endl;                   
			cout <<"                                                    sHr   :H2               "<< endl;                   
			cout <<"                                                      9&.   SH:             "<< endl;                   
			cout <<"                                                       ;As   ,AX            "<< endl;                   
			cout <<"                                                         2h,   iB,          "<< endl;                   
			cout <<"                                                          ,A5   .B;         "<< endl;                   
			cout <<"                                                            iAr   As        "<< endl;                   
		    cout <<"                                                              S9s,;3S       "<< endl;                   
			cout <<"                                                                ;52r22      "<< endl;                   
			cout <<"                                                                  .rSBh     "<< endl;                   
			cout <<"                                                                     ,G@.   "<< endl;                   
			cout <<"                                                                       ,.;  "<< endl;
			cout << "*************************************************************************\n";
			cout << "\n*              Take Up Arms! Now its time for battle!                   *\n";
			cout << "*************************************************************************\n";
			cout << "The beast |" << boss << "| emerges to protect his bridge\n";
			userHealth = 1000;
			beastHealth = 1000;
			battle = true;

			do {
				cout << "\nMake a decision\n";
				cout << "1) You pick up your sword\n";
				cout << "2) You pick up your sheild\n";
				cout << "3) Throw a Potion\n";
				cout << "Enter choice here: ";
				cin >> decision;
			
				srand(time(NULL));
				//random number for attack of user
				userDamage = rand()%125 + 75;
			
				srand(time(NULL));
				//random number for attack of beast
				beastDamage = rand()%75 + 50;
			
				srand(time(NULL));
				//random number 1-3 for beast to attack or defend or nuetral
				bstatus = rand()%3 + 1;
			
			if (decision == 1){ 
					//Attack beast & if beast is nuetral attack 50% more. 
					// beast attacks
				if (bstatus == 1){
					beastHealth -= userDamage;
					userHealth -= beastDamage;
					cout << boss << " strikes you with " << beastDamage << " force\n";
					cout << "You strike back with " << userDamage << " damage!\n";
					cout << setw(30) << userName << " Health: " << userHealth << endl;
					cout << setw(30) << boss << " Health: " << beastHealth << endl;}
					// beast defends
				else if (bstatus == 2){
					beastDamage = (beastDamage + (beastDamage * .50));
					userHealth -= beastDamage;
					cout << "You strike but your damage is deflected!\n";
					cout << boss << " strikes you with " << beastDamage << " of feirce brute power!\n";
					cout << setw(30) << userName << " Health: " << userHealth << endl;
					cout << setw(30) << boss << " Health: " << beastHealth << endl;}
					// beast neutral
				else if (bstatus == 3){
					userDamage = (userDamage + (userDamage * .75));
					beastHealth -= userDamage;
					beastDamage = (beastDamage - (beastDamage * .30));
					userHealth -= beastDamage;
					cout << "You critically strike with " << userDamage << "!!! the beast has been caught off guard\n";
					cout << boss << " stumbles from the hit but responds with a quick " << beastDamage << " strike to repel you\n";
					cout << setw(30) << userName << " Health: " << userHealth << endl;
					cout << setw(30) << boss << " Health: " << beastHealth << endl;}
			}	
			else if (decision == 2){
					//Defend attack from beast, health stays same, & user counter attacks if beast is attacking. if beast is neutral or defends nothing happens. 
					// beast attacks
				if (bstatus == 1){ 
					cout << bstatus << endl;
					beastHealth -= userDamage;
					cout << "Your Sheild Deflects its attack!, You charge in with your counter attack! " << userDamage << " is inflicted upon his health " << endl;
					cout << setw(30) << userName << " Health: " << userHealth << endl;
					cout << setw(30) << boss << " Health: " << beastHealth << endl;}
					// beast defends
				else if (bstatus == 2){
					cout << "No damage incures as your both Defending\n";
					cout << "You stand there breathing, as both you and your foe gather yourselves " << endl;
					cout << setw(30) << userName << " Health: " << userHealth << endl;
					cout << setw(30) << boss << " Health: " << beastHealth << endl;}
					// beast neutral
				else if (bstatus == 3){
					cout << bstatus << endl;
					beastDamage = (beastDamage - (beastDamage *.30));
					beastDamage = beastDamage;
					userHealth -= beastDamage;
					cout << "The beast was not moving forward to attack but instead waits for a quick strike of " << beastDamage << " as you drop your guard." << endl;
					cout << setw(30) << userName << " Health: " << userHealth << endl;
					cout << setw(30) << boss << " Health: " << beastHealth << endl;}
					
			}
					
			else if (decision == 3){
				if (potion == 1){
					userDamage *= 2;
					cout << "*Potion Casted* Your sword picks up pace as it now wisks throught the air at the speed of lightning doing two attacks at once!\n"<<userDamage << endl;
					beastHealth -= userDamage;
					potion = 0;
					cout << setw(30) << userName << " Health: " << userHealth << endl;
					cout << setw(30) << boss << " Health: " << beastHealth << endl;}
				else if (potion == 2){
					cout << "userdamage" << userDamage << endl;
					cout << "*Potion Casted* Your strength builds up & your soul roars with power!\n"<< userDamage << endl;
					userDamage = (userDamage + (userDamage * .50));
					beastHealth -= userDamage;
					cout << "You attack the beast with 50% increased damage "<< userDamage << endl;
					potion = 0;
					cout << setw(30) << userName << " Health: " << userHealth << endl;
					cout << setw(30) << boss << " Health: " << beastHealth << endl;}
				else if (potion == 3){
					userDamage = (userDamage + (userDamage * .75));
					beastHealth -= userDamage;
					cout << "*Potion Casted* You throw your potion at the beast, there he stands frozen in time as you strike critically! " << userDamage << " damage\n";
					potion = 0;
					cout << setw(30) << userName << " Health: " << userHealth << endl;
					cout << setw(30) << boss << " Health: " << beastHealth << endl;}
				else if (potion == 4){
					cout << "*Potion Casted* You throw your potion at the beast, immediately he feels weaker!\n";
					beastHealth -= beastHealth * .20;
					potion = 0;
					cout << setw(30) << userName << " Health: " << userHealth << endl;
					cout << setw(30) << boss << " Health: " << beastHealth << endl;}
					
				else { 
					cout << "You have no potion to use\n";
					}
			}
			else {
				cout << "invalid choice. decions must be (1-3)\n";}
// exit battle loop - beast dies
			if (beastHealth <= 0){
				score += userHealth;
				battle = false;}
// exit battle loop - user dies
			else if (userHealth <= 0){
				battle = false;}
			}while (battle != false);

// Display the user has lost & exit entire fight loop if player dies 
			if (userHealth <= 0){
				cout << "You have lost the battle. You cannot be King unless you can defeat all 5 Beasts!\n";
				fight = false;}
// Display the user has won & change the beast & round to next one up
			else if (beastHealth <= 0){
					round++;
					cout << "*****************************************************************\n";
					cout << "You Have Won The Battle against The Beast!! Bridge " << round << " of 5 Cleared\n";
					cout << "*****************************************************************\n";
					switch (round){
						case 1: 
							boss = "Compiler";
							break;
						case 2:
							boss = "Corrupt File";
							break;	
						case 3:
							boss = "Debugger";
							break;
						case 4:
							boss = "Infinite Loop";
							break;
						default:
							fight = false;
							cout << "************************************************************************************************\n";
							cout << "Congratulations!!! You Have Won All 5 Bridge Battles & United Your Rule Over the Kingdom!!!\n";
							cout << "************************************************************************************************\n";
							round = 0;
							boss = "The Defiler";}}
	}while (fight != false);
		infile.open("highscore.txt", ios::in);
		infile >> highscoreName >> highscore;
		infile.close();
		
		if (score > highscore) {
			outfile << fixed << setprecision(0);
			outfile.open("highscore.txt", ios:: out);
			outfile << userName << "\t" << score << "\t" << endl;
			outfile.close();}
		score = 0;
		
	}
	
	else if (menuchoice == 2)
	{
		//ADD STORYLINE HERE:
		cout << "\n\nThe Story Begins...\n";
		cout << "The day is set in the Medieval times of the 10th century.\n";
		cout << "You wish to be a ruler of your kingdom.\n";
		cout << "Only one thing is stopping you from conquering all your land!\n";
		cout << "There are growls from under the 5 bridges that unite your lands.\n";
		cout << "These fowl creatures lurk in the dark and dare you to cross.\n";
		cout << "All of your messengers & servants perish at the encounter of these bridges that seperate your lands";
		cout << "You must take up arms! and battle these creatures to the death!\n";
		cout << "One at a time you must slay all 5 beasts that lurk among the 5 bridges that united your lands\n";
		cout << "Only then! Will you Unite Your Kingdom!\n";
		cout << "\nRULES OF THE GAME\n";
		cout << "******************\n\n";
		cout << "- The Goal of the game is to conquer all 5 beasts that emerge from under the 5 bridges & United the lands of your Kingdom!\n";
		cout << "- Every 1 Battle you can choose between 4 potions, 2 user benefiting potions or 2 beast damaging potions\n";
		cout << "- Both You & The Beast have 1000 health points to begin each battle\n";
		cout << "- You get to make 1 of 3 decision choices on which battle action to take until either you or the beast is defeated\n";
		cout << "- The Score is based on the amount of Health that you sustain while defeating the beasts\n";
	}	
	else if (menuchoice == 3)
	{
		//open the file to read in data
		infile.open("highscore.txt", ios::in);
		//check for file
		if(!infile)
			cout << "File does not exist!\n";
		
		infile >> highscoreName >> highscore;
		//close file
		infile.close();
		
		//display the highest score holder
		cout << "\nHighest Score Holder\n";
		cout << "*********************\n";
		cout << "Name: " << highscoreName << endl;
		cout << "Score: " << highscore << endl;
	}
	else if (menuchoice == 4)
	{
		cout << "\nGame Over Goodbye\n\n";
	}
	else {
		cout << "Invaild Selection... You Must Choose between (1-3)\n";
	}

		
}while (menuchoice != 4);
			return 0;
}
		
	
	
	
	

