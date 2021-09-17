#include "Human.h"

Human::Human(){
	name = "None";
	phrase = "None";
	age = 0;
}

Human::Human(std::string n, std::string p, int a){
	name = n;
	phrase =p;
	age = a;
}

std::string Human::getName() const {
	return name;
}

std::string Human::getPhrase() const {
	return phrase;
}

int Human::getAge() const {
	return age;
}

void Human::setName(std::string n){
	name = n;
}

void Human::setPhrase(std::string p){
	phrase = p;
}

void Human::setAge(int a){
	age = a;
}
void Human::increaseAge() {
	age=getAge()+1;
}



