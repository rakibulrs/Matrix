#pragma once

/**
* @brief Базовый класс генератора
*/
class BaseGenerator
{
public:
	/**
	* @brief Чисто виртуальный деструктор
	*/
	virtual ~BaseGenerator() = 0 {};

	/**
	* @brief Чисто виртуальный метод для генерации числа в классах наследниках
	*/
	virtual int generate() = 0;
};