#include <iostream>
#include <string>

using namespace std;


int main()
{	
	string name;
	std::cout << "What is your name?: \n";
	getline(std::cin, name); //getline works well with string that have space characters when inputed in console
	std::cout << "Nice to meet you " << name << "."
			  << "\nYour name has " << name.length() << " letters\n"
			  << "Your name starts with the letter " << name[0] << "\n"
			  << "and the last letter is " << name[name.length()-1] << "\n"; 
	name.append(" the Great");
	std::cout << "Your name is now " << name << ".\n";
	return 0;
}