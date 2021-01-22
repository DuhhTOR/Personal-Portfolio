#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
	time_t t;
	srand((unsigned) time(&t));
	const int M = 5;
	int A[M][M];
	

	// Aizpildisana
	for(int i = 0; i < M; i++) {
        for(int j = 0; j < M; j++) {
            A[i][j] = (rand() % 90) + 10;
		}
	}
    
    // Izvade
    std::cout << "Orginala matrica:\n";
    for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			std::cout << A[i][j] << " ";
		}
		std::cout << "\n";
	}
	
	// Pagriesana
	std::cout << "\nPagriezta matrica:\n";
	for(int i = 0; i < M; i++) {
    	for (int j = 0; j < M; j++) {
			std::cout << A[M - 1 - j][i] << " ";
		}
		std::cout << "\n";
	}
  
	std::cout << "\n";
	

	system("Pause");
	return 0;
}
