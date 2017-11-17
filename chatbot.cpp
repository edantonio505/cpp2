#include <iostream>
#include <string>

using namespace std;


int main()
{
	string name;
	string age;
	string favorite_food;
	string pets;

	cout << "What is your name?\n";
	getline(cin, name);
	cout << "Nice to meet you " << name << "!\n";


	cout << "How old are you?\n";
	getline(cin, age);
	cout << "Cool, I am  " << age << " too!\n";


	cout << "What is your favorite food?\n";
	getline(cin, favorite_food);
	cout << "Gross, I cannot stand " << favorite_food << "!\n";


	cout << "I have 2 cats. How about you? Do you have pets?\n";
	getline(cin, pets);
	cout << "awesome, I have to go!\n";

	return 0;
}