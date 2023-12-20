﻿#pragma once
#include <random>
#include "BaseGenerator.h"

/**
* @brief Генератор случайного числа в заданном диапазоне
*/
class RandomGenerator : public BaseGenerator
{
private:
	std::uniform_int_distribution<int> distribution;
	std::mt19937 generator;

public:
	/**
	* @brief Инициализация объекта типа RandomGenerator
	* @param min Минимальное значение для рандома
	* @param max Максимальное значение для рандома
	*/
	RandomGenerator(int min, int max);

	/**
	* @brief Генерирует рандомное число из заданного ранее диапазона
	* @return Случайные элемент из заданного диапазона
	*/
	int generate() override;
};