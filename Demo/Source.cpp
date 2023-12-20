#include <iostream>
#include "../Matrix/Matrix.h"
#include "../Generator/RandomGenerator.h"
#include "../Task/Task.h"


int main()
{
	RandomGenerator* gen =  new RandomGenerator(10,20);
	Matrix mat { gen, 3,3 };
	std::cout << mat<<std::endl;
	Task task = Task(mat);
	std::cout << task.task_1().to_string() << std::endl;
	std::cout << task.task_2().to_string() << std::endl;
	return 0;
}

