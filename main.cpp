#include <iostream>
using namespace std;

int main(){
	cout << "Hello world!";
	return 0;
}

class Number{
};

class Zero: public Number{
	private:
		int shape[4][3] = {
				{1, 1, 1} ,
				{1, 0, 1},
				{1, 0, 1},
				{1, 1, 1}};
};

class One: public Number{
	private:
		int shape[4][3] = {
				{1, 1, 0} ,
				{0, 1, 0},
				{0, 1, 0},
				{0, 1, 0}};
};

class Two: public Number{
	private:
		int shape[4][3] = {
				{0, 1, 1} ,
				{0, 1, 1},
				{1, 1, 0},
				{1, 1, 1}};
};

class Three: public Number{
	private:
		int shape[4][3] = {
				{1, 1, 1} ,
				{0, 0, 1},
				{0, 1, 1},
				{1, 1, 1}};
};

class Four: public Number{
	private:
		int shape[4][3] = {
				{0, 1, 1} ,
				{0, 1, 0},
				{1, 1, 1},
				{0, 1, 1}};
};

class Five: public Number{
	private:
		int shape[4][3] = {
				{1, 1, 1} ,
				{1, 1, 1},
				{0, 0, 1},
				{1, 1, 1}};
};

class Six: public Number{
	private:
		int shape[4][3] = {
				{1, 1, 0} ,
				{1, 0, 0},
				{1, 1, 1},
				{1, 1, 1}};
};

class Seven: public Number{
	private:
		int shape[4][3] = {
				{1, 1, 1} ,
				{0, 1, 0},
				{1, 1, 0},
				{1, 0, 0}};
};

class Eight: public Number{
	private:
		int shape[4][3] = {
				{0, 1, 1} ,
				{0, 1, 1},
				{1, 1, 0},
				{1, 1, 0}};
};

class Nine: public Number{
	private:
		int shape[4][3] = {
				{1, 1, 1} ,
				{1, 1, 1},
				{1, 1, 0},
				{1, 1, 0}};
};


