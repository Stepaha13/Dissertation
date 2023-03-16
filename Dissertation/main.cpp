//
//  main.cpp
//  Dissertation
//
//  Created by Степан Языков on 05.03.2023.
//

#include <iostream>
#include <math.h>
#include "scheme.hpp"
#include <fstream>

int main(int argc, const char * argv[]) {
	std::ifstream file ("/Users/yazykovstepan/C++/dissertation/Dissertation/data.txt");
	int a = 0;
		
	
	file >> a;
	
	std::cout << a << std::endl;
	
	file.close();
	
	return 0;
}
