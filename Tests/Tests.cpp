#include "pch.h"
#include "CppUnitTest.h"
#include "../Matrix/Matrix.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(Tests)
	{
	public:
		
		TEST_METHOD(MatrixToString_ValidData_Success)
		{
			Matrix matrix = Matrix(3,2, {1,2,3,4,5,6});
			Assert::IsTrue(matrix.to_string() == "1\t2\t\n3\t4\t\n5\t6\t\n");
		}
		TEST_METHOD(MatrixAddRow_ValidData_Success)
		{
			Matrix matrix_1 = Matrix(2,2,{1,2,3,4});
			Matrix matrix_2 = Matrix(3,2, {1,2,3,4,5,6});
			std::vector<int> temp{5,6};
			matrix_1.add_row(temp);
			Assert::IsTrue(matrix_1.to_string() == matrix_2.to_string());
		}

		TEST_METHOD(MatrixGetMinValue_ValidData_Success)
		{
			Matrix matrix = Matrix( 2,3, {1,2,3,4,-5,6});
			int answer = -5;
			int temp = matrix.get_min_value();
			Assert::IsTrue(temp == answer);
		}

		TEST_METHOD(MatrixElementInRow_ValidData_Success)
		{
			Matrix matrix = Matrix(2, 2, {1,2,3,4});
			int temp = matrix.element_in_row(0, 2);
			bool answer = true;
			Assert::IsTrue(temp == answer);
		}

		TEST_METHOD(MatrixGetRowsCount_ValidData_Success)
		{
			Matrix matrix = Matrix(2, 2, { 1,2,3,4 });
			int temp = matrix.get_rows_count();
			int answer = 2;
			Assert::IsTrue(temp == answer);
		}

		TEST_METHOD(MatrixGetColumnsCount_ValidData_Success)
		{
			Matrix matrix = Matrix(2, 2, { 1,2,3,4 });
			int temp = matrix.get_columns_count();
			int answer = 2;
			Assert::IsTrue(temp == answer);
		}

		TEST_METHOD(MatrixTranspose_ValidData_Success)
		{
			Matrix matrix = Matrix(2, 4, { 1,2,3,4,5,6,7,8});
			matrix.transpose();
			Assert::IsTrue(matrix.to_string() == "1\t5\t\n2\t6\t\n3\t7\t\n4\t8\t\n");
		}

		TEST_METHOD(MatrixIndexOperator_ValidData_Success)
		{
			Matrix matrix = Matrix(2, 2, { 1,2,3,4 });
			int success = 3;
			Assert::IsTrue(matrix[1][0] == success);
		}
	};
}
