#pragma once
#include "../Matrix/Matrix.h"


/**
* @brief The base class is "task", from which the user can inherit his task with 2 sub-tasks
*/
struct BaseTask
{
public:
	/**
	* @brief A purely virtual destructor
	*/
	virtual ~BaseTask() = 0 {};

	/**
	* @brief A purely virtual method for solving the first task
	*/
	virtual Matrix task_1() = 0;

	/**
	* @brief A purely virtual method for solving the second task
	*/
	virtual Matrix task_2() = 0;
};

