#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
	public:
		Brain();
		~Brain();
		Brain &operator=(const Brain& a);
		Brain(const Brain& a);
	private:
		std::string ideas[100];
};

#endif