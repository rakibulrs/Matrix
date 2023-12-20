#pragma once
#include "BaseGenerator.h"
#include <iostream>

/**
* @brief Генератор для ввода значений от пользователя
*/
class IStreamGenerator : public BaseGenerator
{
private:
	std::istream& in;

public:
	/**
	* @brief Инициализация объекта типа IStreamGenerator
	* @param input Поток ввода
	*/
	IStreamGenerator(std::istream& input = std::cin);

	/**
	* @brief Запрашивает у пользователся число
	* @return Элемент от пользователя
	*/
	int generate() override;
};
