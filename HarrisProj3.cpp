//*****************************************************************
// Name: Alec Ha'rris
// Course: CS 155 - Computer Science I
// Semester: Fall 2019
// Assignment: Project 3 – “Magical” Vote Tally
// Due date: 10-14-2019
// Description: This Program takes a file that contains votes & loops
//				through it to gather winners of election positions for
//				Hogwarts potionn club.
//*****************************************************************

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	int presVote,vpVote,secVote,treasVote;
	int harryPts = 0;
	int cedricPts = 0 ;
	int vincePts = 0;
	int hermionePts = 0;
	int susanPts = 0;
	int lunaPts = 0;
	int nevPts = 0;
	int dracoPts = 0;
	double presTot,vpTot,secTot,treasTot;
	
	//Bring in File and loop for input
	ifstream inFile("votes1.txt");
	
	while(inFile>>presVote>>vpVote>>secVote>>treasVote){
	
		if (presVote == 1){
			//cout << "  Cedric" <<endl;
			cedricPts++ ;
			presTot++ ;
		}
		else if(presVote==2){
		//	cout <<"  Harry" << endl;
			harryPts++ ;
			presTot++ ;
		}
	
		if (vpVote ==3){
		//	cout << "  Hermione"<< endl;
			hermionePts++ ;
			vpTot++ ; 
		}	
	
		else if(vpVote ==4){
		//	cout <<"  Vincent"<< endl;
			vincePts++ ;
			vpTot++ ; 

		}
	
		if (secVote ==5){
		//	cout << "  Luna"<< endl;
			lunaPts++ ; 
			secTot++ ;
		}
	
		else if(secVote ==6){
		//	cout <<"  Susan"<< endl;
			susanPts++ ;
			secTot++ ;
		}
	
		if (treasVote ==7){
		//	cout << "  Draco"<< endl;
			dracoPts++ ;
			treasTot++ ;
		}
	
		else if(treasVote ==8){
		//	cout <<"  Neville"<< endl;
			nevPts++ ;
			treasTot++ ;
		}	
	}
	
	
	//President selector code
	
	cout<<"Presidential Election Winner: " << endl;
		//Harry win
	if(harryPts>cedricPts){
		cout << "Harry Potter - " << harryPts << " votes - WINNER (" << (harryPts/presTot)*100 << "%)" << endl;
		cout << "Cedric Diggory - " << cedricPts << " votes (" << (cedricPts/presTot)*100 << "%)" << endl;
	}
	
		//Tie
	else if(harryPts == cedricPts){
		cout << "Presidential tie!" <<endl;
		cout << "Harry Potter - " << harryPts << " votes (50.0%)"<< endl;
		cout << "Cedric Diggory - " << cedricPts << " votes (50.0%)" << endl;
	}
	
		//Cedric win
	else if (cedricPts > harryPts){
		cout << "Cedric Diggory - " << cedricPts  << " votes - WINNER (" << (cedricPts/presTot)*100 << "%)" << endl;
		cout << "Harry Potter - " << harryPts<< " votes (" << (harryPts/presTot)*100 << " %)" << endl;
	}
	
	
	//Vice Pres. selector code
	
	cout<<"Vice Presidental Election Winner: " << endl;
		//Vincent win
	if(vincePts > hermionePts){
		cout << "Vincent Crabbe - " << vincePts << " votes - WINNER (" << (vincePts/vpTot)*100 << "%)" << endl;
		cout << "Hemione Granger - " << hermionePts << " votes (" << (hermionePts/vpTot)*100 << "%)" << endl;
	}
	
		//tie
	else if(vincePts == hermionePts){
		cout << "Vice Presidential tie!" <<endl;
		cout << "Vincent Crabbe - " << vincePts << " votes (50.0%)"<< endl;
		cout << "Hemione Granger - " << hermionePts << " votes (50.0%)" << endl;	
	}
	
		//Hemione win
	else if (hermionePts > vincePts){
		cout << "Hemione Granger - " << hermionePts  << " votes - WINNER (" << (hermionePts/vpTot)*100 << "%)" << endl;
		cout << "Vincent Crabbe - " << vincePts<< " votes (" << (vincePts/vpTot)*100 << "%)" << endl;	
	}
	
	//Secretary Selector code
	
	cout<<"Secretary Election Winner: " << endl;
		//Susan win
	if(susanPts > lunaPts){
		cout << "Susan Bones - " << susanPts << " votes - WINNER (" << (susanPts/secTot)*100 << "%)" << endl;
		cout << "Luna Lovegood - " << lunaPts << " votes (" << (lunaPts/secTot)*100 << "%)" << endl;
	}
	
		//tie
	else if(susanPts == lunaPts){
		cout << "Secretary tie!" <<endl;
		cout << "Susan Bones - " << susanPts << " votes (50.0%)"<< endl;
		cout << "Luna Lovegood - " << lunaPts << " votes (50.0%)" << endl;
	}
	
		//Luna win
	else if (lunaPts > susanPts){
		cout << "Luna Lovegood - " << lunaPts  << " votes - WINNER (" << (lunaPts/secTot)*100 << "%)" << endl;
		cout << "Susan Bones - " << susanPts<< " votes (" << (susanPts/secTot)*100 << "%)" << endl;
	}
	
	//Treasurer Selector code
	
	cout<<"Treasurer Election Winner: " << endl;
		//Draco win
	if(dracoPts > nevPts){
		cout << "Draco Malfoy - " << dracoPts << " votes - WINNER (" << (dracoPts/treasTot)*100 << "%)" << endl;
		cout << "Neville Longbottom - " << nevPts << " votes (" << (nevPts/treasTot)*100 << "%)" << endl;
	}
	
		//tie
	else if(dracoPts == nevPts){
		cout << "Treasurer tie!" <<endl;
		cout << "Draco Malfoy - " << dracoPts << " votes (50.0%)"<< endl;
		cout << "Neville Longbottom - " << nevPts << " votes (50.0%)" << endl;	
	}
	
		//Neville win
	else if (nevPts > dracoPts){
		cout << "Neville Longbottom - " << nevPts  << " votes - WINNER (" << (nevPts/treasTot)*100 << "%)" << endl;
		cout << "Draco Malfoy - " << dracoPts<< " votes (" << (dracoPts/treasTot)*100 << "%)" << endl;	
	}
	
	
	return 0;
}
