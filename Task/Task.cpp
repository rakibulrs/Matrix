#include "Task.h"

Task::Task(Matrix matrix)
 :matrix(matrix)
{
}

Matrix Task::task_1()
{
	Matrix answer{this->matrix};
	for (size_t row = 0; row < answer.get_rows_count(); row++)
	{
		for (size_t column = 0; column < answer.get_columns_count(); column++)
		{
			if (answer[row][column] % 2 == 0)
			{
				answer[row][column] = 0;
			}
		}
	}
    return answer;
}

Matrix Task::task_2()
{
	Matrix answer{};
	std::vector<int> task_row;
	for (size_t i = 0; i < matrix.get_rows_count(); i++)
	{
		task_row.push_back(i+1);
	}
	int min = this->matrix.get_min_value();
	for (size_t i = 0; i < matrix.get_rows_count(); i++)
	{
		answer.add_row(this->matrix[i]);
		if (this->matrix.element_in_row(i, min))
		{
			answer.add_row(task_row);
		}
	}
	return answer;
}
