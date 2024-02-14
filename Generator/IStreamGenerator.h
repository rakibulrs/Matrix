#pragma once
#include "BaseGenerator.h"
#include <iostream>

/**
* @brief A generator for entering values from the user
*/
class IStreamGenerator : public BaseGenerator
{
private:
	std::istream& in;

public:
	/**
	* @brief Initializing an object of the IStreamGenerator type
	* @param input Input stream
	*/
	IStreamGenerator(std::istream& input = std::cin);

	/**
	* @brief Requests a number from the user
	* @return An element from the user
	*/
	int generate() override;
};
