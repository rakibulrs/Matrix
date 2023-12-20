#include "Matrix.h"
#include <sstream>


Matrix::Matrix()
	:rows({})
{
}

Matrix::Matrix(BaseGenerator* generator, size_t rows_count, size_t columns_count)
{
	for (size_t i = 0; i < rows_count; i++)
	{
		std::vector<int> data{};
		for (size_t j = 0; j < columns_count; j++)
		{
			data.push_back(generator->generate());
		}
		this->rows.push_back(data);
	}
}

Matrix::Matrix(size_t rows_count, size_t columns_count, std::initializer_list<int> matrix_values)
	:rows(std::vector<std::vector<int>> {rows_count})
{
	size_t i = 0;
	size_t j = 0;
	for (int item : matrix_values)
	{
		this->rows[j].push_back(item);
		i++;
		if (i % columns_count == 0)
		{
			j++;
		}
	}
}

std::vector<int>& Matrix::operator[](size_t item)
{
	return this->rows[item];
}

const std::vector<int>& Matrix::operator[](size_t item) const
{
	return this->rows[item];
}

std::string Matrix::to_string()
{
	std::stringstream buffer;
	for (size_t row = 0; row < this->rows.size(); row++) 
	{
		for (size_t column = 0; column < this->rows[0].size(); column++)
		{
			buffer << this->rows[row][column] << "\t";
		}
		buffer << "\n";
	}
	return buffer.str();
}

void Matrix::transpose()
{ 
	std::vector<std::vector<int>> created_rows;
	for (size_t column = 0; column < this->rows[0].size(); column++) 
	{
		std::vector<int> created_row {};
		for (size_t row = 0; row < this->rows.size(); row++)
		{
			created_row.push_back(this->rows[row][column]);
		}
		created_rows.push_back(created_row);
	}
	this->rows = created_rows;
}

void Matrix::add_row(std::vector<int> row)
{
	this->rows.push_back(row);
}

size_t Matrix::get_rows_count()
{
	return this->rows.size();
}

size_t Matrix::get_columns_count()
{
	if (this->rows.size() == 0) 
	{
		return 0;
	}
	return this->rows[0].size();
}

bool Matrix::element_in_row(size_t index, int item)
{
	for (size_t i = 0; i < this->rows[index].size(); i++)
	{
		if (this->rows[index][i] == item)
		{
			return true;
		}
	}
	return false;
}

int Matrix::get_min_value()
{
	int min_value = std::numeric_limits<int>::max();
	for (size_t row = 0; row < this->rows.size(); row++)
	{
		for (size_t column = 0; column < this->rows[0].size(); column++)
		{
			if (this->rows[row][column] < min_value)
			{
				min_value = this->rows[row][column];
			}
		}
	}
	return min_value;
}

std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept
{
	return os << matrix.to_string();
}
