//
// Created by Nonthachai Plodthong on 13/11/2022 AD.
//

#ifndef BANKAPPLICATION_BANK_H
#define BANKAPPLICATION_BANK_H

#include <iostream>
#include <string>
#include <list>

namespace personalBank {
	class Bunny {
		std::string gender;
		std::string color;
		int age;
		std::string name;
	public:
		Bunny();

		~Bunny();

		explicit Bunny(std::string &name, std::string &gender, std::string &color);
	};
}

#endif //BANKAPPLICATION_BANK_H
