#include "Human.h"
#include "People.h"
#include <iostream>
using namespace std;

//Human People::humans[100];
//Return NoSuchPerson object if search can not find the matching
Human noSuchPerson("dummy", 0, "No Such Person");
People::People() {//default constructor
	 size = 0; position = 0;
}

People::People(int s, int p) {
	size=s;
	position=p;
}

void People::setSize(int s) {
	size = s;
}

void People::setPosition(int p) {
	position = p;
}

int People::getSize() {
	return size;
}

int People::getPosition() {
	return position;
}

void People::insert(Human h) {
	if (position == PEOPLE_MAX_SIZE) {
		throw std::out_of_range("ERROR"); //exception
	}
	humans[position] = h;
	position++;
}


Human People::search(string search) {
	Human result;
	for (int i = 0; i < size; i++) {
		if (humans[i].getName() == search) {
			result = humans[i];
			return result;
		}
	}
	throw std::logic_error("Not found"); //exception
	return noSuchPerson;
}

void clear() {

}

void People::setHumans(Human h[], int s) {
		for (int i = 0;i < s;i++) {
		humans[i] = h[i];
	 }
	position = s;
	size = s;
}

