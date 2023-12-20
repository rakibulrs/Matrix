#include <iostream>
#include "../Matrix/Matrix.h"


void task_1();

void task_2();

int main()
{
	task_1();
	task_2();
	return 0;
}

void task_1()
{
	miit::Matrix matrix{ 4, 4, {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,1} };
	std::cout << "Task_1: \nDefault Matrix: \n" << matrix;
	for (size_t row = 0; row < matrix.get_rows_count(); row++)
	{
		for (size_t column = 0; column < matrix.get_columns_count(); column++)
		{
			if (matrix[row][column] % 2 == 0) 
			{
				matrix[row][column] = 0;
			}
		}
	}
	std::cout << "Result Matrix: \n" << matrix;
}

void task_2()
{
	miit::Matrix matrix{ 4, 4, {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,1} };
	std::cout << "Task_2: \nDefault Matrix: \n" << matrix;
	int min_value = matrix.get_min_value();
	std::vector<int> task_row;
	for (size_t row = 0; row < matrix.get_rows_count(); row++)
	{
		task_row.push_back(row + 1);
	}
	int step = 0;
	miit::Matrix result{};
	for (size_t row = 0; row < matrix.get_rows_count(); row++)
	{
		std::vector<int> new_row;
		for (size_t column = 0; column < matrix.get_columns_count(); column++)
		{
			new_row.push_back(matrix[row][column]);
		}
		result.add_row(row + step, new_row);

		bool ok = false;
		for (size_t column = 0; column < matrix.get_columns_count(); column++)
		{
			if (matrix[row][column] == min_value) 
			{
				ok = true;
			}
		}
		if (ok)
		{
			result.add_row(row + step + 1, task_row);
			step++;
		}
	}

	std::cout << "Result Matrix: \n" << result;
}
