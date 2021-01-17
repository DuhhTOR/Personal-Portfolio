#include <iostream>


// Uzvaretaja parbaude
bool winner (char A[10]){
	// 1., 2. un 3. linijas parbaude
	if ((A[0] == A[1]) && (A[0] == A[2])) {
		return true;
	}
		
	else if ((A[3] == A[4]) && (A[3] == A[5])) {
		return true;
	}
		
	else if ((A[6] == A[7]) && (A[6] == A[8])) {
		return true;
	}
		
	
	// 1., 2. un 3. kolonnas parbaude
	else if ((A[0] == A[3]) && (A[0] == A[6])) {
		return true;
	}

	else if ((A[1] == A[4]) && (A[1] == A[7])) {
		return true;
	}
		
	else if ((A[2] == A[5]) && (A[2] == A[8])) {
		return true;
	}
		
	
	// Diognalu parbaude
	else if ((A[0] == A[4]) && (A[0] == A[8])) {
		return true;
	}
		
	else if ((A[2] == A[4]) && (A[2] == A[6])) {
		return true;
	}
		
	else {
		return false;
	}
}



// Speles laukums
int board(int O, int X, int clear){
	system("cls");
	static char boardArray[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
	
	if (clear == 1){
		boardArray[0] = '1';
		boardArray[1] = '2';
		boardArray[2] = '3';
		boardArray[3] = '4';
		boardArray[4] = '5';
		boardArray[5] = '6';
		boardArray[6] = '7';
		boardArray[7] = '8';
		boardArray[8] = '9';
		boardArray[9] = '0';
		return 0;
	}

	else {
		boardArray[O - 1] = 'O';
		boardArray[X - 1] = 'X';
	}
	
	std::cout << "Spele 'Krustini un Nullisi'\n"
			  << "Speletajs 1 (O)   Speletajs 2 (X)"
			  << "\n\n\n"
			  << "\t " << boardArray[0] << " | " << boardArray[1] << " | " << boardArray[2] << "\n"
		  	  << "\t-----------" << "\n"
		  	  << "\t " << boardArray[3] << " | " << boardArray[4] << " | " << boardArray[5] << "\n"
			  << "\t-----------" << "\n"
			  << "\t " << boardArray[6] << " | " << boardArray[7] << " | " << boardArray[8] << "\n"
			  << "\n\n\n";
	
	if (winner(boardArray)) {
		return 1;
	}

	return 0;}



// Cilveks pret cilveku
void twoPlayers(){
	int j = 0, k = 0, n, O, X;
	int C[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	do{
		system("cls");
		cout << "Spele 'Krustini un Nullisi'\n";
		cout << "Speletajs 1 (O)   Speletajs 2 (X)";
		cout << "\n\n\n";
		cout << "\t 1 | 2 | 3 " << endl;
		cout << "\t-----------" << endl;
		cout << "\t 4 | 5 | 6 " << endl;
		cout << "\t-----------" << endl;
		cout << "\t 7 | 8 | 9 " << endl;
		cout << "\n\n\n";
		
		
		for(int i = 0; i <= 4; i++){
			do{
				cout << "1. speletajs izvelas, kur ielikt 'O': "; cin >> O;
				if(C[O - 1] == 0){
					C[O - 1] = 1;
					break;}
				else
					cout << "Nepareiza ievade! Laucins jau ir aiznemts, megini velreiz!\n";}
			while(k < 1);
				
				
			if(board(O, 10, 0)){
				cout << "1. speletajs ir uzvarejis!" << endl;
				break;}
			
			if(i == 4){
				cout << "Neizskirts!\n";
				break;}
			
			do{
				std::cout << "2. speletajs izvelas, kur ielikt 'X': ";
				std::cin >> X;
				if(C[X - 1] == 0){
					C[X - 1] = 1;
					break;
				}

				else
					cout << "Nepareiza ievade! Laucins jau ir aiznemts, megini velreiz!\n";
			}
			while(k < 1);
			
			
			if(board(10, X, 0)){
				std::cout << "2. speletajs ir uzvarejis!\n";
				break;};}
		
		
		std::cout << "Vai velaties uzspelet velreiz?\n"
			      << "[0] - ne, [1] - ja : ";
		std::cin >> n;
		switch(n){
			case 0:
				j++;
				break;
			case 1:
				board(10, 10, 1);
				C[0] = 0;
				C[1] = 0;
				C[2] = 0;
				C[3] = 0;
				C[4] = 0;
				C[5] = 0;
				C[6] = 0;
				C[7] = 0;
				C[8] = 0;
				break;
			default:
				cout << "Nepareiza ievade!\n";
				j++;
				break;}}
	while(j < 1);}



// AI Logika
//int logic(int O, int clear){
//	int X;
//	static int B[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
//	
//	if(clear == 1){
//		B[0] = 0;
//		B[1] = 0;
//		B[2] = 0;
//		B[3] = 0;
//		B[4] = 0;
//		B[5] = 0;
//		B[6] = 0;
//		B[7] = 0;
//		B[8] = 0;
//		return 0;}
//	else
//		B[O - 1] = 1;
//	
//	// Kreisais augsejais sturis
//	if(B[0] == 1 && B[1] == 0){
//		B[1] = 2;
//		return X = 2;}
//	else if(B[0] == 1 && B[3] == 0){
//		B[3] = 2;
//		return X = 4;}
//	
//	// 1. rindas videjais lauks
//	else if(B[1] == 1 && B[0] == 0){
//		B[0] = 2;
//		return X = 1;}
//	else if(B[1] == 1 && B[2] == 0){
//		B[2] = 2;
//		return X = 3;}
//	else if(B[1] == 1 && B[4] == 0){
//		B[4] = 2;
//		return X = 5;}
//	
//	// Labais augsejais sturis
//	else if(B[2] == 1 && B[1] == 0){
//		B[1] = 2;
//		return X = 2;}
//	else if(B[2] == 1 && B[5] == 0){
//		B[5] = 2;
//		return X = 6;}
//	
//	// 2. rindas kreisais lauks
//	else if(B[3] == 1 && B[4] == 0){
//		B[4] = 2;
//		return X = 5;}
//	else if(B[3] == 1 && B[0] == 0){
//		B[0] = 2;
//		return X = 1;}
//	else if(B[3] == 1 && B[6] == 0){
//		B[6] = 2;
//		return X = 7;}
//	
//	// 2. rindas vidus
//	else if(B[4] == 1 && B[3] == 0){
//		B[3] = 2;
//		return X = 4;}
//	else if(B[4] == 1 && B[5] == 0){
//		B[5] = 2;
//		return X = 6;}
//	else if(B[4] == 1 && B[1] == 0){
//		B[1] = 2;
//		return X = 2;}
//	else if(B[4] == 1 && B[7] == 0){
//		B[7] = 2;
//		return X = 8;}
//	
//	// 2. rindas labais lauks
//	else if(B[5] == 1 && B[4] == 0){
//		B[4] = 2;
//		return X = 5;}
//	else if(B[5] == 1 && B[2] == 0){
//		B[2] = 2;
//		return X = 3;}
//	else if(B[5] == 1 && B[8] == 0){
//		B[8] = 2;
//		return X = 9;}
//	
//	// Kreisais apaksejais sturis
//	else if(B[6] == 1 && B[7] == 0){
//		B[7] = 2;
//		return X = 8;}
//	else if(B[6] == 1 && B[3] == 0){
//		B[3] = 2;
//		return X = 4;}
//	
//	// 3. rindas vidus
//	else if(B[7] == 1 && B[6] == 0){
//		B[6] = 2;
//		return X = 7;}
//	else if(B[7] == 1 && B[8] == 0){
//		B[8] = 2;
//		return X = 9;}
//	else if(B[7] == 1 && B[4] == 0){
//		B[4] = 2;
//		return X = 5;}
//	
//	// Labais apaksejais sturis
//	else if(B[8] == 1 && B[7] == 0){
//		B[7] = 2;
//		return X = 8;}
//	else if(B[8] == 1 && B[5] == 0){
//		B[5] = 2;
//		return X = 6;}}



// Pret datoru
void singlePlayer(){
	int j = 0, k = 0, n, O, X;
	int C[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	do{
		system("cls");
		cout << "Spele 'Krustini un Nullisi'\n";
		cout << "Speletajs 1 (O)   Speletajs 2 (X)";
		cout << "\n\n\n";
		cout << "\t 1 | 2 | 3 " << endl;
		cout << "\t-----------" << endl;
		cout << "\t 4 | 5 | 6 " << endl;
		cout << "\t-----------" << endl;
		cout << "\t 7 | 8 | 9 " << endl;
		cout << "\n\n\n";
		
		
		for(int i = 0; i <= 4; i++){
			do{
				cout << "1. speletajs izvelas, kur ielikt 'O': "; cin >> O;
				if(C[O - 1] == 0){
					C[O - 1] = 1;
					break;}
				else
					cout << "Nepareiza ievade! Laucins jau ir aiznemts, megini velreiz!\n";}
			while(k < 1);
			
			
			if(board(O, 10, 0)){
				cout << "Cilveks ir uzvarejis!" << endl;
				break;}
			
			if(i == 4){
				cout << "Neizskirts!\n";
				break;}
			
			
			X = logic(O, 0);
			C[X - 1] = 1;
			
			if(board(10, X, 0)){
				cout << "Dators ir uzvarejis!" << endl;
				break;};}
		
		
		cout << "Vai velaties uzspelet velreiz? [0] - ne, [1] - ja : ";
		std::cin >> n;
		switch(n){
			case 0:
				j++;
				break;
			case 1:
				board(10, 10, 1);
				logic(10, 1);
				C[0] = 0;
				C[1] = 0;
				C[2] = 0;
				C[3] = 0;
				C[4] = 0;
				C[5] = 0;
				C[6] = 0;
				C[7] = 0;
				C[8] = 0;
				break;
			default:
				cout << "Nepareiza ievade!\n";
				j++;
				break;}}
	while(j < 1);}


int main () {
	std::string userInput;


	std::cout << "Spele 'Krustini un Nullisi'\n";
	std::cout << "Vai velaties spelet pret datoru vai cilveks pret cilveku?\n"
		 << "Pret datoru [0], cilveks pret cilveku [1] : ";
	while ((std::cin >> userInput) && (userInput.find_first_not_of("01") != std::string::npos) || (userInput.length() != 1)) {
		std::cout << "Nepareiza ievade! Meginiet velreiz [0] - ne, [1] - ja: ";
	}
	
	if (userInput == "0") {
		singlePlayer();
	}

	else {
		twoPlayers();
	}


	system("Pause");
	return 0;
}