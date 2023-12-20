#pragma once
#include "../Matrix/Matrix.h"


/**
* @brief Базовый класс "задание", от которого пользователь может отнаследовать свое задание с 2 подзаданиями
*/
struct BaseTask
{
public:
	/**
	* @brief Чисто виртуальный деструктор
	*/
	virtual ~BaseTask() = 0 {};

	/**
	* @brief Чисто виртуальный метод для решения первого задания
	*/
	virtual Matrix task_1() = 0;

	/**
	* @brief Чисто виртуальный метод для решения второго задания
	*/
	virtual Matrix task_2() = 0;
};

