#pragma once
#include <random>
#include "BaseGenerator.h"

/**
* @brief Random number generator in a given range
*/
class RandomGenerator : public BaseGenerator
{
private:
	std::uniform_int_distribution<int> distribution;
	std::mt19937 generator;

public:
	/**
	* @brief Initializing an object of the RandomGenerator type
	* @param min The minimum value for random
	* @param max The maximum value for random
	*/
	RandomGenerator(int min, int max);

	/**
	* @brief Generates a random number from a previously set range
	* @return Random element from a given range
	*/
	int generate() override;
};