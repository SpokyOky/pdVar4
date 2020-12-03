#pragma once

#include <vector>

using namespace std;

class Factory
{
public:
	Factory() {}
	void AddAndActObject();
	void DeleteObject();
private:
	vector<SymbString*> objs;
};