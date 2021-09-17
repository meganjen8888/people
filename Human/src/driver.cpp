#include "Human.h"
#include <iostream>
#include <string>
#include <ctype.h>
#include "People.h"

using namespace std;

void printHuman(Human h){
	cout << "Human Info \nName: " <<
			h.getName() << endl <<
			"This human says: " <<
			h.getPhrase() << endl <<
			h.getAge() << " years old. "
			<< endl;
}

int main() {
	char choice;
	cout << "CHOOSE FROM MENU" << endl;
	cout << "A. Make a list" << endl;
	cout << "B. Search your list" << endl;
	cout << "C. Insert a person" << endl;
	cout << "D. Interact with a person" << endl;
	cout << "X. Exit" << endl;
	int sizeOfArray=-1;
	//int arrayPosition;
//	People p(sizeOfArray, arrayPosition);
	People p;
	//Human h;
	std::string input;
	std::string nameInput;
	int ageInput;
	std::string phraseInput;
	//int numberOfHumans;
	cin >> choice;
	while (std::toupper(choice) == 'A' || std::toupper(choice) == 'B' ||
		     std::toupper(choice) == 'C' || std::toupper(choice) == 'D' ||
		     std::toupper(choice) == 'X') {
		switch(std::toupper(choice)) {
		case 'A':
		{
			while (sizeOfArray == -1 || sizeOfArray > PEOPLE_MAX_SIZE)
			{
				if (sizeOfArray == -1)
					cout << "Enter number of humans: ";
				else
					printf("Exceed max size of people array %d, enter smaller number: ", PEOPLE_MAX_SIZE);
				cin >> sizeOfArray;

			}

			//sizeOfArray = p.getSize();
			Human* humanList = new Human[sizeOfArray];
			p.setSize(sizeOfArray);
			cout << p.getSize() << endl;
			//cout << "you printed " << p.getSize();
			for (int i = 0; i < p.getSize(); i++) {
				cout << "Enter name: ";
				cin >> nameInput;
				humanList[i].setName(nameInput);
				//humanList[i].getName() = nameInput;
				cout << "Enter age: ";
				cin >> ageInput;
				humanList[i].setAge(ageInput);
				//humanList[i].getAge() == ageInput;
				cout << "Enter phrase: ";
				//		cin >> phraseInput;
				getline(std::cin, phraseInput);
				getline(std::cin, phraseInput);
				humanList[i].setPhrase(phraseInput); //i'm guessing we have to add 1 to arrayPosition to make it the next free position
				//humanList[i].getPhrase() = phraseInput;
			}
		p.setHumans(humanList, sizeOfArray);
		nameInput = "";
		ageInput = 0;
		phraseInput = "";
		cout << sizeof(humanList[0]) << endl;;
		//Human* ptr = p.getHumans();
		//cout << "size is: " << p.getSize() << endl;
		//why is this here? cout << "Select name from list: " << endl;

		/**for (int i = 0; i < p.getSize(); i++) {
			cout << "Name:" << ptr[i].getName() << " Age: " << ptr[i].getAge() << " Phrase: " << ptr[i].getPhrase() << endl;
		}**/
		cout << "CHOOSE FROM MENU" << endl;
		cin >> choice;
	}
		break;
		case 'B':
		{
			cout << "enter name to search: \n";
			cin >> nameInput;
			cout << p.search(nameInput).getPhrase() << endl;
//			return 0;
		}
		cout << "CHOOSE FROM MENU" << endl;
		cin >> choice;
		break;
		case 'C':
		{
			cout << "Now insert a human to People: " << endl;

			cout << "Enter name: ";
			cin >> nameInput;
			//humanList[i].getName() = nameInput;
			cout << "Enter age: ";
			cin >> ageInput;
			//humanList[i].getAge() == ageInput;
			cout << "Enter phrase: ";
			//		cin >> phraseInput;
			getline(std::cin, phraseInput);
			getline(std::cin, phraseInput);
			if (p.getSize() == PEOPLE_MAX_SIZE) {
				throw std::out_of_range("List is full");
			}
			else
			{
				Human h(nameInput, phraseInput, ageInput);
				p.setSize(p.getSize()+1);
				p.insert(h);
			}
			nameInput = "";
			ageInput = 0;
			phraseInput = "";
		}
		cout << "CHOOSE FROM MENU" << endl;
		cin >> choice;
			break;
		case 'D':
		{
			cout << "Enter a name: ";
			cin >> nameInput;
			Human h = p.search(nameInput);
			printHuman(h);

			while (input != "stop") { //when user says "stop" then the program exits
				cout << "Input a string or stop to end " << endl;
				cin >> input;
				cout << "Phrase: " << h.getPhrase() << endl; //person says their phrase
				h.increaseAge(); //their age increment by one
				cout << "Age: " << h.getAge() << endl;
				cin >> input;
				h.increaseAge(); //their age increment by one
				cout << "Age: " << h.getAge() << endl;
			}
			cout << "CHOOSE FROM MENU" << endl;
			cin >> choice;
		}
		break;
		case 'X':
		{
			return 0;
		}
		break;
		default:
		{
			cout << "Invalid choice." << endl;
			return 0;
		}

	}
	}


}
//it turns out to be working :)





