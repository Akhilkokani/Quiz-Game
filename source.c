#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

// Prototypes
void show_record ( );
void reset_score ( );
void help ( );
void edit_score ( float , char [] );

int main ( ) {

	int countr, r, r1, count, i, n;
	float score;
	char choice, playername[20], temp_char;

	mainhome:
		system ( "clear" );
		printf ( "\t\t\tC PROGRAM QUIZ GAME\n" );
		printf ( "\n\t\t________________________________________" );

		printf ( "\n\t\t\t   WELCOME " );
		printf ( "\n\t\t\t      to " );
		printf ( "\n\t\t\t   THE GAME " );
		printf ( "\n\t\t________________________________________" );
		printf ( "\n\t\t________________________________________" );
		printf ( "\n\t\t   TEST YOUR KNOWLEDGE!   " );
		printf ( "\n\t\t________________________________________" );
		printf ( "\n\t\t________________________________________" );
		printf ( "\n\t\t > Press S to start the game" );
		printf ( "\n\t\t > Press V to view the highest score  " );
		printf ( "\n\t\t > Press R to reset score" );
		printf ( "\n\t\t > Press H for help            " );
		printf ( "\n\t\t > Press Q to quit             " );
		printf ( "\n\t\t________________________________________\n\n" );
		
		printf ( "\t\t What you want to do? " );
		choice = toupper ( getchar() );

		if ( choice == 'V' ) {

			show_record();
			getchar();
			goto mainhome;
		} else if ( choice == 'H' ) {

			help();
			getchar();
			goto mainhome;
		} else if ( choice == 'R' ) {

			reset_score();
			getchar();
			goto mainhome;
		} 
		else if ( choice == 'Q' ) exit(1);
		
		else if ( choice == 'S' ) {

			system ( "clear" );
			printf ( "\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name: " );
			scanf ( " %s", playername );
			system ( "clear" );
			printf ( "\n ------------------  Welcome %s to C Program Quiz Game --------------------------", playername );
			printf ( "\n\n Here are some tips you might wanna know before playing:" );
			printf ( "\n -------------------------------------------------------------------------" );
			printf ( "\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND" );
			printf ( "\n >> In warmup round you will be asked a total of 3 questions to test your" );
			printf ( "\n    general knowledge. You are eligible to play the game if you give atleast 2" );
			printf ( "\n    right answers, otherwise you can't proceed further to the Challenge Round." );
			printf ( "\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a" );
			printf ( "\n    total of 10 questions. Each right answer will be awarded $100,000!" );
			printf ( "\n    By this way you can win upto ONE MILLION cash prize!" );
			printf ( "\n >> You will be given 4 options and you have to press A, B ,C or D for the" );
			printf ( "\n    right option." );
			printf ( "\n >> You will be asked questions continuously, till right answers are given" );
			printf ( "\n >> No negative marking for wrong answers!" );
			printf ( "\n\n Press Y to start the game or any other key to return to main menu.\n" );
			
			printf ( "\nWhat you want to do? " );
			scanf(" %c", &temp_char);

			if ( toupper(temp_char) == 'Y' ) {
				goto home;
			} else {
				goto mainhome;
				system ( "clear" );
			}

			// Qualifying Round for Quiz
			home:
				system ( "clear" );
				count = 0;
				for ( i = 1; i <= 3; i++ ) {

					system ( "clear" );
					r1 = i;
					switch ( r1 ) {

						case 1:
							printf ( "\n\nWhich of the following is a even number and should contain odd numbers alternatively?" );
							printf ( "\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234" );
							printf ( "\n\n\tAnswer: " );
							scanf ( " %c", &temp_char );
							if ( toupper(temp_char) == 'C' ) {

								printf ( "\n\nYou got it right! Keep going. ;)" );
								count++;
								getchar();
								break;
							} else {

								printf ( "\n\nSorry, you got it wrong, right answer is C.23232" );
								getchar();
								break;
							}

						case 2:
							printf ( "\n\n\nThe country with the highest environmental performance index is..." );
							printf ( "\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland" );
							printf ( "\n\n\tAnswer: " );
							scanf ( " %c", &temp_char );
							if ( toupper(temp_char) == 'C' ) {

								printf ( "\n\nYou got it right! Keep going. ;)" );
								count++;
								getchar ( );
								break;
							} else {

								printf ( "\n\nSorry, you got it wrong, right answer is C.Switzerland" );
								getchar();
								break;
							}

						case 3:
							printf ( "\n\n\nWhich animal laughs like human being?" );
							printf ( "\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char)=='B') {

								printf ( "\n\nYou got it right! Keep going. ;)" );
								count++;
								getchar();
								break;
							} else {

								printf ( "\n\nSorry, you got it wrong, right answer is B.Hyena" );
								getchar();
								break;
							}

						case 4:
							printf ( "\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?" );
							printf ( "\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char)=='B' ) {

								printf ( "\n\nYou got it right! Keep going. ;)" );count++;
								getchar();
								break;
							} else {

								printf ( "\n\nSorry, you got it wrong, right answer is B.Lucas Podolski" );
								getchar();
								break;
							}

						case 5:
							printf ( "\n\n\nWhich is the third highest mountain in the world?" );
							printf ( "\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if (  toupper(temp_char)  == 'B' ) {

								printf ( "\n\nYou got it right! Keep going. ;)" );
								count++;
								getchar();
								break;
							} else {

								printf ( "\n\nSorry, you got it wrong, right answer is B.Mt. Kanchanjungha" );
								getchar();
								break;
							}

						case 6:
							printf ( "\n\n\nWhat is the group of frogs known as?" );
							printf ( "\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if (  toupper(temp_char) =='D' ) {

								printf ( "\n\nYou got it right! Keep going. ;)" );
								count++;
								getchar();
								break;
							} else {
								
								printf ( "\n\nSorry, you got it wrong, right answer is D.An Army" );
								getchar();
								break;
							}
					}
				}	

			// Checking if user has qualified
			if ( count >= 2 ) goto test;
			else {

				system ( "clear" );
				printf ( "\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME." );
				getchar();
				goto mainhome;
			}

			// User has qualified from the qualifying round
			// Main Quiz Game
			test:
				system ( "clear" );
				printf ( "\n\n\t*** Congratulations %s you are eligible to play the Game ***", playername );
				
				printf ( "\n\n\n\n\tPress 'P' to Start the Game: " );
				scanf ( " %c", &temp_char );

				if (  toupper(temp_char)  == 'P' ) goto game;

				game:
				countr=0;
				for ( i = 1; i <= 10; i++ ) {
					system ( "clear" );
					r=i;

					// Asking questions to user
					switch ( r ) {
						case 1:
							printf ( "\n\nWhat is the National Game of India?" );
							printf ( "\n\nA.Football\t\tB.Basketball\n\nC.Hockey\t\tD.Cricket" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if (  toupper(temp_char)  == 'C' ) {

								printf ( "\n\nYou got it right! Keep going. ;)" );
								countr++;
								getchar();
								break;getchar();
							} else {

								printf ( "\n\nSorry, you got it wrong, right answer is C.Cricket" );
								getchar();
								goto score;
								break;
							}

						case 2:
							printf ( "\n\n\nStudy of Earthquake is called... " );
							printf ( "\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if (  toupper(temp_char)  == 'A' ) {

								printf ( "\n\nYou got it right! Keep going. ;)" );
								countr++;
								getchar();
								break;
							} else {

								printf ( "\n\nSorry, you got it wrong, right answer is A.Seismology" );
								getchar();
								goto score;
								break;
							}

						case 3:
							printf ( "\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? " );
							printf ( "\n\nA.6\t\tB.7\n\nC.8\t\tD.9" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='C') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++;getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is C.8" );getchar();
								goto score;
								break;
							}

						case 4:
							printf ( "\n\n\nThe Laws of Electromagnetic Induction were given by?" );
							printf ( "\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='A') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++;getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is A.Faraday" );getchar();
								goto score;
								break;
							}

						case 5:
							printf ( "\n\n\nIn what unit is electric power measured?" );
							printf ( "\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='B') {
								printf ( "\n\nYou got it right! Keep going. ;)" );
								countr++;
								getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is B.Power" );
								getchar();
								goto score;
								break;
							}

						case 6:
							printf ( "\n\n\nWhich element is found in Vitamin B12?" );
							printf ( "\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='B' ) {

								printf ( "\n\nYou got it right! Keep going. ;)" );
								countr++;
								getchar();
								break;
							} else {

								printf ( "\n\nSorry, you got it wrong, right answer is B. Cobalt" );
								goto score;
								getchar();
								break;
							}

						case 7:
							printf ( "\n\n\nWhat is the National Name of Japan?" );
							printf ( "\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='D') {

								printf ( "\n\nYou got it right! Keep going. ;)" );
								countr++;
								getchar();
								break;
							} else {

								printf ( "\n\nSorry, you got it wrong, right answer is D.Nippon" );getchar();
								goto score;
								break;
							}

						case 8:
							printf ( "\n\n\nHow many times a piece of paper can be folded at the most?" );
							printf ( "\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='B') {

								printf ( "\n\nYou got it right! Keep going. ;)" );countr++;getchar(); break;
							} else {

								printf ( "\n\nSorry, you got it wrong, right answer is B.7" );getchar();
								goto score;
								break;
							}

						case 9:
							printf ( "\n\n\nWhat is the capital of Denmark?" );
							printf ( "\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='A') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++; getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is A.Copenhagen" );getchar();
								goto score;
								break;
							}

						case 10:
							printf ( "\n\n\nWhich is the longest River in the world?" );
							printf ( "\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='A') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++;getchar(); break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is A.Nile" );getchar();break;goto score;
							}

						case 11:
							printf ( "\n\n\nWhat is the color of the Black Box in aeroplanes?" );
							printf ( "\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='C') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++;getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is C.Orange" );getchar();
								break;goto score;
							}

						case 12:
							printf ( "\n\n\nWhich city is known at 'The City of Seven Hills'?" );
							printf ( "\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='A') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++;getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is A.Rome" );getchar();
								break;goto score;
							}

						case 13:
							printf ( "\n\n\nName the country where there no mosquitoes are found?" );
							printf ( "\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='D') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++;getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is D.France" );getchar();
								break;goto score;
							}

						case 14:
							printf ( "\n\n\nWho is the author of 'Pulpasa Cafe'?" );
							printf ( "\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='A') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++;getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is A.Narayan Wagle" );getchar();
								break;goto score;
							}

						case 15:
							printf ( "\n\n\nWhich Blood Group is known as the Universal Recipient?" );
							printf ( "\n\nA.A\t\tB.AB\n\nC.B\t\tD.O" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='B') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++;getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is B.AB" );getchar();
								goto score;
								break;
							}

						case 16:
							printf ( "\n\n\nWhat is the unit of measurement of distance between Stars?" );
							printf ( "\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='A') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++; getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is A.Light Year" );getchar();
								goto score;
								break;
							}


						case 17:
							printf ( "\n\n\nThe country famous for Samba Dance is........" );
							printf ( "\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='A') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++; getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is A.Brazil" );getchar();goto score;
								break;
							}

						case 18:
							printf ( "\n\n\nWind speed is measure by__________?" );
							printf ( "\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='D') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++; getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is D.Anemometer" );getchar();goto score;
								break;
							}

						case 19:
							printf ( "\n\n\nWhich city in the world is popularly known as The City of Temple?" );
							printf ( "\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='C') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++; getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is C.Kathmandu" );getchar();goto score;
								break;
							}

						case 20:
							printf ( "\n\n\nWhich hardware was used in the First Generation Computer?" );
							printf ( "\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='B') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++; getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is B.Valves" );getchar();goto score;
								break;
							}

						case 21:
							printf ( "\n\n\nOzone plate is being destroyed regularly because of____ ?" );
							printf ( "\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
							if ( toupper(temp_char) =='D') {
								printf ( "\n\nYou got it right! Keep going. ;)" );countr++; getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is D. C.F.C" );getchar();goto score;
								break;
							}

						case 22:
							printf ( "\n\n\nWho won the Women's Australian Open Tennis in 2007?" );
							printf ( "\n\nA.Martina Hingis\t\tB.Maria Sarapova\n\nC.Kim Clijster\t\tD.Serena Williams" );
							printf ( "\n\n\tAnswer: " );
							scanf(" %c", &temp_char);
						if ( toupper(temp_char) =='D') {
							printf ( "\n\nYou got it right! Keep going. ;)" );countr++; getchar();
							break;
						} else {
							printf ( "\n\nSorry, you got it wrong, right answer is D.Serena Williams" );getchar();goto score;
							break;
						}

						case 23:
							printf ( "\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?" );
							printf ( "\n\nA.The Secret in their Eyes\t\tB.Shutter Island\n\nC.The King's Speech\t\tD.The Reader" );
							printf ( "\n\n\tAnswer: " );
							scanf ( " %c", &temp_char );
							if ( toupper(temp_char) =='C') {printf ( "\n\nYou got it right! Keep going. ;)" );countr++; getchar();
								break;
							} else {
								printf ( "\n\nSorry, you got it wrong, right answer is C.The King's Speech" );getchar();goto score;
								break;
							}
					}
				}

			// Label used to count user's score after 
			// completing quiz
			score:
				system ( "clear" );
				score = (float) countr*100000;
				if ( score > 0.00 && score < 1000000 ) {

					printf ( "\n\n\t\t**************** CONGRATULATIONS *****************" );
					printf ( "\n\t You won $%.2f", score );
					goto go;
				} else if ( score == 1000000.00 ) {

					printf ( "\n\n\n \t\t**************** CONGRATULATIONS ****************" );
					printf ( "\n\t\t\t\t YOU ARE A GENIUS!" );
					printf ( "\n\t\t You won $%.2f.", score );
					printf ( "\t\t Thank You! :)" );
				} else {

					printf ( "\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********" );
					printf ( "\n\t\t Thanks for your participation." );
					printf ( "\n\t\t TRY AGAIN. :)" );
					goto go;
				}
			
			// Asking user if he/she wants to play another game
			// If yes, then go to mainhome label again.
			go:
				puts ( "\n\n Press Y if you want to play next game" );
				puts ( " Press any key if you want to go main menu" );
				scanf ( " %c", &temp_char );

				if ( toupper(temp_char) == 'Y' ) goto home;
				else {
					edit_score ( score, playername );
					goto mainhome;
				}
		}
}

// Function used to display highest score ever gained in quiz game.
void show_record() {

	system ( "clear" );
	char name[20];
	float scr;
	FILE *f;
	f = fopen ( "score.txt", "r" );
	fscanf ( f, "%s%f", name, &scr );
	printf ( "\n\n\t\t*************************************************************\n" );
	printf ( "\t\t %s has secured the Highest Score %0.2f\n", name, scr);
	printf ( "\t\t*************************************************************\n\n" );
	fclose(f);
	getchar();
}

// Function used to reset score
void reset_score() {

	system ( "clear" );
	float sc;
	char nm[20];
	FILE *f;
	f = fopen ( "score.txt", "w" );
	fprintf ( f, "" );
	fclose ( f );
}

// Simple function to display 
// working of our Quiz Game
void help() {

	system ( "clear" );
	printf ( "\n\n                              HELP" );
	printf ( "\n -------------------------------------------------------------------------" );
	printf ( "\n ......................... C program Quiz Game..........." );
	printf ( "\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND" );
	printf ( "\n >> In warmup round you will be asked a total of 3 questions to test your general" );
	printf ( "\n    knowledge. You will be eligible to play the game if you can give atleast 2" );
	printf ( "\n    right answers otherwise you can't play the Game..........." );
	printf ( "\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked" );
	printf ( "\n    total 10 questions each right answer will be awarded $100,000." );
	printf ( "\n    By this way you can win upto ONE MILLION cash prize in USD..............." );
	printf ( "\n >> You will be given 4 options and you have to press A, B ,C or D for the" );
	printf ( "\n    right option" );
	printf ( "\n >> You will be asked questions continuously if you keep giving the right answers." );
	printf ( "\n >> No negative marking for wrong answers" );

	printf ( "\n\n\t*********************BEST OF LUCK*********************************" );
	printf ( "\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********" );
}

// Function used to edit the highest score
// If current high score is greater than present in the file
// the new score is replaced with old score incuding the playname.
void edit_score ( float score, char plnm[20] ) {

	system ( "clear" );
	float sc;
	char nm [ 20 ];
	FILE *f;
	f = fopen ( "score.txt", "r" );
	fscanf ( f, "%s%f", nm, &sc );
	if ( score >= sc ) { 
		sc = score;
		fclose ( f );
		f = fopen ( "score.txt", "w" );
		fprintf ( f, "%s\n%.2f", plnm, sc );
		fclose ( f );
	}
}
