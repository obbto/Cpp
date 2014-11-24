#pragma once
class Dog
{
private:
	int age,weight;
public:
	Dog(void);
	~Dog(void);
	Dog(int a, int w);
	int readAge();
	int readWeight();
};

