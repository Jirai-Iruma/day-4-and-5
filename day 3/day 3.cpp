#include <iostream>

int if_else() {
	int age;
	std::cout << "What is your age? " << "\n";
	std::cin >> age;
	if (age > 17) {
		std::cout << "You are allow to enter" << "\n";
	}
	else {
		std::cout << "You are not allow to enter" << "\n";
	}
	std::cout << "as your age is: " << age << "\n";
	return 0;
}

int cases() {
	char aprove;
	std::cout << "Do you want ice cream? Y/N" << "\n";
	std::cin >> aprove;
	switch (aprove) {
		case 'Y':
			std::cout << "Here you go";
			break;
		case 'N':
			std::cout << "More for me then";	
			break;
	}
	return 0;
}

int one_line_logic() {
	int even_or_odd;
	std::cout << "Input a number: " << "\n";
	std::cin >> even_or_odd;
	even_or_odd % 2 ? std::cout << "odd" << "\n" : std::cout << "even" << "\n";
	return 0;
}

int one_line_logic_part_2() {
	int multiple_of_3;
	std::cout << "Write a value: " << "\n";
	std::cin >> multiple_of_3;
	multiple_of_3 % 3 ? std::cout << multiple_of_3 << " is not a multiple of 3 " : std::cout << multiple_of_3 << " is a multiple of 3";
	return 0;
}

int symbolic_or() {
	int temp;
	std:: cout << "What is the temperature" << "\n";
	std:: cin >> temp;
	if (temp < 0 || temp>35) {
		std::cout << "Bad wheather" << "\n";
	}
	else {
		std::cout << "Good wheather";
	}
	return 0;
}

int lenght_use() {

	std::string the_number;
	int x;
	std::cout << "Enter a positive number: " << "\n";
	std::cin >> the_number; 
	x = the_number.length();
	std::cout << "Your number has " << x << " digits";
	return 0;
}

int while_exaple() {
	int r;
	int t;
	int y = 0;
	std::cout << "Enter a number between 0 and 9: " << "\n";
	std::cin >> r;
	t = r;
	while (r < 10) {
		y += 1;
		r += 1;
	}
	std::cout << "It takes " << y << " units for " << t << " to become " << r;
	return 0;
}

int for_loop() {
	int r;
	int t;
	int y;
	std::cout << "Enter a number between 0 and 9: " << "\n";
	std::cin >> r;
	t = r;
	for (int every = 1; r < 10; every++) {
		r++;
		y = every;
	}
	std::cout << "It takes " << y << " units for " << t << " to become " << r;
	return 0;
}

int continue_example() {
	int r;
	int t;
	std::cout << "Type a number." << "\n";
	std::cin >> r;
	std::cout << "Type a number." << "\n";
	std::cin >> t;
	for (int every = 1; r < t; every++) {
		r++;
		if (r % 2 == 1) {
			continue;
		}
		std::cout << r << "\n";

	}
	return 0;
}

int main() {
	srand(time(NULL));
	int r;
	int number_1 = (rand() % 10) + 1;
	int number_2 = (rand() % 10) + 1;
	int number_3 = (rand() % 10) + 1;
	r = number_1 + number_2 + number_3;
	std::cout << number_1<<"\n";
	std::cout << number_2<<"\n";
	std::cout << number_3<<"\n";
	std::cout << r<<"\n";
	r > 26 ? std::cout << "High roll" <<"\n" : std::cout << "Low roll" <<"\n";
	return 0;
}


