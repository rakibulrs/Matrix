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
	* @brief Initializes an empty object of the matrix type
	*/
	Matrix();

	/**
	* @brief Initializes the matrix type object according to user parameters
	* @param generator The generator that needs to be filled in the matrix 
	* @param rows_count The number of rows in the matrix
	* @param columns_count The number of columns in the matrix
	*/
	Matrix(BaseGenerator* generator, size_t rows_count, size_t columns_count);
	
	/**
	* @brief Initializes the matrix type object according to user parameters
	* @param rows_count The number of rows in the matrix
	* @param columns_count The number of columns in the matrix
	* @param matrix_values Information about the values of the matrix
	*/
	Matrix(size_t rows_count, size_t columns_count, std::initializer_list<int> matrix_values);
	
	/**
	* @brief Overloading the output operator
	* @param os Output Stream
	* @param matrix The matrix whose data will be output to the stream
	* @return Output stream with matrix information
	*/
	friend std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept;
	
	/**
	* @brief Overloading the square brackets operator
	* @param item The index of the element in the array
	* @return The element from the matrix that stands under the desired index
	*/
	std::vector<int>& operator[](size_t item);

	/**
	* @brief Overloading the square brackets operator for an const object
	* @param item The index of the element in the array
	* @return The element from the matrix that stands under the desired index
	*/
	const std::vector<int>& operator[](size_t item) const;
	
	/**
	* @brief Converting a matrix object to a string
	* @return A row with information about the matrix
	*/
	std::string to_string();
	
	/**
	* @brief Matrix transposition
	*/
	void transpose();
	
	/**
	* @brief Adds a row to the matrix
	* @param row The line to add
	*/
	void add_row(std::vector<int> row);
	
	/**
	* @brief Getting the number of rows in the matrix
	* @return The number of rows in the matrix
	*/
	size_t get_rows_count();
	
	/**
	* @brief Getting the number of columns in the matrix
	* @return The number of columns in the matrix
	*/
	size_t get_columns_count();
	
	/**
	* @brief Checking for the presence of an element in the matrix row
	* @param index Row index
	* @param item The element to search for
	* @return true - if it is in the row, false - if not
	*/
	bool element_in_row(size_t index, int item);
	
	/**
	* @brief Getting the minimum element
	* @return The minimum element in the matrix
	*/
	int get_min_value();

};


