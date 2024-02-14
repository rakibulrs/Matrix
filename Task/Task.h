#pragma once
#include "BaseTask.h"
#include "../Matrix/Matrix.h"



/**
* @brief A class assignment that includes 2 subtasks
*/
struct Task : public BaseTask
{
private:
	Matrix matrix;

public:
	/**
	* @brief Initializing an object of the Tasks type
	* @param matrix The matrix with which to complete the tasks
	*/
	Task(Matrix matrix);

	/**
	* @brief Solving the first task
	* @return The matrix with the data of the completed task
	*/
	Matrix task_1() override;

	/**
	* @brief Solving the second task
	* @return The matrix with the data of the completed task
	*/
	Matrix task_2() override;
};
