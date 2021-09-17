#ifndef SRC_PEOPLE_H_
#define SRC_PEOPLE_H_
#include "Human.h"
#define PEOPLE_MAX_SIZE 100



class People {
	private:
		int size; //size attribute
		int position; //position attribute
		Human humans[PEOPLE_MAX_SIZE]; //statically allocated array
		//If I leave this empty then it returns an error called "unknown array size in delete" in People.cpp
	public:
		People();
		People(int size, int position);
		void setHumans(Human humans[],int s);
		void setSize(int size);
		void setPosition(int position);
		Human * getHumans();
		int getSize();
		int getPosition();
		Human search(std::string search);//search method
		void insert(Human newHuman);//insert method
		void clear();
		//Human humans[100]; Apparently I have to set a number for the size of the list. I'm not allowed to have vectors.
};



#endif /* SRC_PEOPLE_H_ */


