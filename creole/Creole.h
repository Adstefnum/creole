#pragma once
#include <string>
class Creole
{
public:
	void initialize();
	void setWindowTitle(std::string title);
	void setWindowSize(int width, int height);

private:
	int width, height;
	std::string title;
};

