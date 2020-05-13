#include <iostream>

int main(){
	const int gross = 5;
	int array[gross], h2, h = 0;
	std::cout << "Geben Sie 5 ganze Zahlen ein: ";
	for(int i = 0; i < gross; i++)
		std::cin >> array[i];
	for(int i = 0; i < gross; i++){
		h = h + array[i];
		h2 = h / (i + 1);
		std::cout << "Schritt " << i << " - Inhalt des Arrays " << array[i] << " | Summe: " << h << " Mittelwert: " << h2 << std::endl;
	}
	system("Pause");
	return 0;
}
