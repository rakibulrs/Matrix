#pragma once

/**
* @brief Generator base class
*/
class BaseGenerator
{
public:
	/**
	* @brief Pure virtual destructor
	*/
	virtual ~BaseGenerator() = 0 {};

	/**
	* @brief A purely virtual method for generating numbers in descendant classes
	*/
	virtual int generate() = 0;
};