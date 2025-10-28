#include <iostream>
#include <string>
#include <algorithm> //for transform
#include <vector>
#include <stdlib.h> //for system("cls")

void main() {
	std::string language, word, translation, finishProgram;
	bool languageAccepted, wordFound;
	bool endOfProgram = false;
	std::vector <std::string> spanish, english;
	
	std::cout << "Welcome to the Spanish --- English translator." << std::endl;

	while (!endOfProgram) {
		languageAccepted = false;
		wordFound = false;

		std::cout << "From which language is your word?" << std::endl;
		std::cin >> language;

		while (!languageAccepted) {
			//I transform "language" to lower.
			std::transform(language.begin(), language.end(), language.begin(), ::tolower);

			if (language == "spanish") {
				languageAccepted = true;
			}

			else if (language == "english") {
				languageAccepted = true;
			}

			else {
				std::cout << "Sorry, this program only accept english or spanish." << std::endl;
				std::cout << "From which language is your word?" << std::endl;
				std::cin >> language;
				system("cls"); //clear the command console
			}
		}

		system("cls"); //clear the command console

		if (language == "spanish") {
			std::cout << "Write the word in Spanish to translate: " << std::endl;
			std::cin >> word;

			std::transform(word.begin(), word.end(), word.begin(), ::tolower);
			system("cls"); //clear the command console

			for (int i = 0; i < spanish.size(); i++) { //If the word is in the english dictionary.
				if (spanish[i] == word) {
					std::cout << "The translation in English is: " << english[i] << std::endl;
					wordFound = true;
					break;
				}
			}

			if (!wordFound) { //If the word isn't in the english dictionary.
				std::cout << "This word is not in my dictionary, tell me the English translation..." << std::endl;
				std::cin >> translation;

				std::transform(translation.begin(), translation.end(), translation.begin(), ::tolower);

				spanish.push_back(word); //Add to the vector.
				english.push_back(translation); //Add to the vector.
			}
		}

		else {
			std::cout << "Write the word in English to translate: " << std::endl;
			std::cin >> word;

			std::transform(word.begin(), word.end(), word.begin(), ::tolower);
			system("cls"); //clear the command console

			for (int i = 0; i < english.size(); i++) { //If the word is in the spanish dictionary.
				if (english[i] == word) {
					std::cout << "The translation in Spanish is: " << spanish[i] << std::endl;
					wordFound = true;
					break;
				}
			}

			if (!wordFound) { //If the word isn't in the spanish dictionary.
				std::cout << "This word is not in my dictionary, tell me the Spanish translation..." << std::endl;
				std::cin >> translation;

				std::transform(translation.begin(), translation.end(), translation.begin(), ::tolower);

				english.push_back(word); //Add to the vector.
				spanish.push_back(translation); //Add to the vector.
			}
		}

		std::cout << "Would you like to finish the program?" << std::endl;
		std::cin >> finishProgram;

		system("cls"); //clear the command console

		std::transform(finishProgram.begin(), finishProgram.end(), finishProgram.begin(), ::tolower);

		if (finishProgram == "yes") {
			endOfProgram = true;
		}

		system("cls"); //clear the command console
	}
}
