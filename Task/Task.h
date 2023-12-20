#pragma once
#include "BaseTask.h"
#include "../Matrix/Matrix.h"



/**
* @brief Класс задание, что включает в себя 2 подзадания
*/
struct Task : public BaseTask
{
private:
	Matrix matrix;

public:
	/**
	* @brief Инициализация объекта типа Tasks
	* @param matrix Матрица с которой надо выполнить задания
	*/
	Task(Matrix matrix);

	/**
	* @brief Решение первого задания
	* @return Матрица с данными выполенного задания
	*/
	Matrix task_1() override;

	/**
	* @brief Решение второго задания
	* @return Матрица с данными выполенного задания
	*/
	Matrix task_2() override;
};
