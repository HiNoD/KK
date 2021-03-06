#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <vector>

using namespace std;

const int MAX_SIZE = 3;

void TriangleTypeDefenition(vector<double> &arr)
{
	if (arr[0] == arr[1] && arr[1] == arr[2])
	{
		cout << "equality triangle" << endl;
	}
	else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2])
	{
		cout << "isosceles traingle" << endl;
	}
	else 
	{
		cout << "Ordinary triangle" << endl;
	}
}

bool DoesTheTrinagleExist(vector<double> &arr)
{
	if (arr[0] != 0 || arr[1] != 0 || arr[2] != 0)
	{
		if ((arr[0] + arr[1]) > arr[2] && (arr[1] + arr[2]) > arr[0] && (arr[0] + arr[2]) > arr[1])
		{
			return true;
		}
	}
	cout << "This is not a triangle" << endl;
	return false;
}

double CharToDouble(char *S)
{
	int i, l = strlen(S), k = 1;
	double r = 0, p = 1;
	for (i = 0; i< l; i++)
	{
		if (k < 0) 
		{ 
			p = p * 10;
		}
		if (S[i] == '.' || S[i] == ',')
		{
			k = -k;
		}
		else
		{
			r = r * 10 + (S[i] - '0');
		}
	}
	return r / p;
}

int main(int argc, char * argv[])
{
	if (argc != 4)
	{
		cout << "Error: not enough argument. Example: triangle.exe 3 3 3" << endl;
	}
	else
	{
		vector<double> arrayOfNumbers;
		bool letters = false;
		for (int i = 1; i < argc; ++i)
		{
			char *inputNumber = argv[i];
			if (isalpha(*inputNumber)) 
			{
				letters = true;
				cout << "Error: argument were letters. Example: triangle.exe 3 3 3" << endl;
				break;
			}
			else
			{
				arrayOfNumbers.push_back(CharToDouble(inputNumber));
			}
		}
		if (!letters)
		{
			if (DoesTheTrinagleExist(arrayOfNumbers))
			{
				TriangleTypeDefenition(arrayOfNumbers);
			}
		}
	}
	return 0;
}

