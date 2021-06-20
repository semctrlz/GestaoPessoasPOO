#pragma once
#ifndef Utils_hpp

#define Utils_hpp

#include <iostream>
#include <string>
using namespace std;

class Utils {
public:
	Utils() {};
	Utils(int largura);
	void Title(string texto);	
	void PrintLine(char s);
	static float str_to_float(string& s);
private:
	int largura = 120;
};



#endif // !Utils_hpp
