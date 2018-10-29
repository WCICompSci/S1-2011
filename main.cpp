/*
	Main.CPP
	David Gurevich
	
	CCC 2011 - Senior 1 Problem - English or French?
	-------
	You would like to do some experiments in natural language processing. Natural language processing
	(NLP) involves using machines to recognize human languages.
	
	Your first idea is to write a program that can distinguish English text from French text.
	After some analysis, you have concluded that a very reasonable way of distinguishing these two
	languages is to compare the occurrences of the letters “t” and “T” to the occurrences of the letters
	“s” and “S”. Specifically:
		• if the given text has more “t” and “T” characters than “s” and “S” characters, we will say
		that it is (probably) English text;
		• if the given text has more “s” and ”S” characters than “t” and “T” characters, we will say
		that it is (probably) French text;
		• if the number of “t” and “T” characters is the same as the number of “s” and “S” characters,
		we will say that it is (probably) French text.
*/


#include <iostream>
#include <vector>

int main() {
	std::vector<char> studentAnswers(0);
	std::vector<char> correctAnswers(0);

	int N = 0;
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		char answer;
		std::cin >> answer;
		studentAnswers.push_back(answer);
	}

	for (int j = 0; j < N; j++) {
		char answer;
		std::cin >> answer;
		correctAnswers.push_back(answer);
	}

	int correctAnswerCount = 0;
	for (int n = 0; n < N; n++) {
		if (studentAnswers[n] == correctAnswers[n]) {
			correctAnswerCount++;
		}
	}

	std::cout << correctAnswerCount;

	return 0;
}