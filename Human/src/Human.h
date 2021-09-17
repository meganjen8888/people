#ifndef SRC_HUMAN_H_
#define SRC_HUMAN_H_
#include <string>

class Human{
private:
	std::string name;
	std::string phrase;
	int age;
public:
	Human();
	Human(std::string n, std::string p, int a);
	std::string getName() const;
	std::string getPhrase() const;
	int getAge() const;
	void setName(std::string);
	void setPhrase(std::string);
	void setAge(int);
	void increaseAge();
};

#endif /* SRC_HUMAN_H_ */



