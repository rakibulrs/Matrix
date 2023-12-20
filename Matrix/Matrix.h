#pragma once
#include "../Generator/BaseGenerator.h"
#include <iostream>
#include <vector>


class Matrix
{
private:
	std::vector<std::vector<int>> rows;

public:

	/**
	* @brief Инициализирует пустой объект тип матрица
	*/
	Matrix();

	/**
	* @brief Инициализирует объект тип матрица по параметрам пользователя 
	* @param generator Генератор, которым необходимо заполнить матрицу 
	* @param rows_count Количество строк в матрице
	* @param columns_count Количество столбцов в матрице
	*/
	Matrix(BaseGenerator* generator, size_t rows_count, size_t columns_count);
	
	/**
	* @brief Инициализирует объект тип матрица по параметрам пользователя
	* @param rows_count Количество строк в матрице
	* @param columns_count Количество столбцов в матрице
	* @param matrix_values Информация о значениях матрицы
	*/
	Matrix(size_t rows_count, size_t columns_count, std::initializer_list<int> matrix_values);
	
	/**
	* @brief Перегрузка оператора вывода
	* @param os Поток вывода
	* @param matrix Матрица, данные которой будут выведены в поток
	* @return Поток вывода с информацией матрицы
	*/
	friend std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept;
	
	/**
	* @brief Перегрузка оператора квадратные скобки
	* @param item Индекс элемента в массиве
	* @return Элемент из матрцы стоящий под нужным индексом
	*/
	std::vector<int>& operator[](size_t item);

	/**
	* @brief Перегрузка оператора квадратные скобки для объекта с const
	* @param item Индекс элемента в массиве
	* @return Элемент из матрцы стоящий под нужным индексом
	*/
	const std::vector<int>& operator[](size_t item) const;
	
	/**
	* @brief Преобразование объекта матрицы в строку
	* @return Строка с информацией о матрице
	*/
	std::string to_string();
	
	/**
	* @brief Транспонирование матрицы
	*/
	void transpose();
	
	/**
	* @brief Добавляет строку в матрицу 
	* @param row Строка для добавления
	*/
	void add_row(std::vector<int> row);
	
	/**
	* @brief Получение количества строк в матрице
	* @return Количество строк в матрице
	*/
	size_t get_rows_count();
	
	/**
	* @brief Получение количества столбцов в матрице
	* @return Количество столбцов в матрице
	*/
	size_t get_columns_count();
	
	/**
	* @brief Проверка на наличие элемента в строке матрицы
	* @param index Индекс троки
	* @param item Элемент для поиска
	* @return true - если есть в сроке, false - если нет
	*/
	bool element_in_row(size_t index, int item);
	
	/**
	* @brief Получение минимального элемента
	* @return Минимальный елемент в матрице
	*/
	int get_min_value();

};


