#include <string>
#include <iostream>
#include <fstream>

using namespace std;

/* reads text input from file and formats them to look better when printed by the d10. */

class d10p
{
private:
	string inputDocumentPath;
	string inputText;
public:
	d10p();	// standard konstruktor
	d10p(string inputDocumentPath_)	// konstruktor
	{
		SetInputDocumentPath(inputDocumentPath_);
	}
	~d10p(){};	// destruktor
	
	// get/set vars
	void SetInputDocumentPath(string inputDocumentPath_)
	{
		inputDocumentPath = inputDocumentPath_;
	}
	string GetInputDocumentPath()
	{
		return inputDocumentPath;
	}

	// Get contents from file
	string FetchFileContent()
	{
		if(inputDocumentPath!="")
		{
			if(CheckIfFileExists(inputDocumentPath))
			{
				/* File has been found. */
				ifstream infile { inputDocumentPath };
				string inputText
				{
					/* C++ 17 magic */
					istreambuf_iterator<char>(infile),
					istreambuf_iterator<char>()
				};
				cout << "Content:\r\n" << inputText << endl;
			}
			else
			{
				cout << "File could not be found." << endl;
			}
		}
		else
		{
			cout << "inputDocumentPath has not been set." << endl;
		}
	}

	// print info
	void PrintInfo()
	{
		cout << "d10print Assistant - 2016 v0.1\nReport bugs here: http://goo.gl/5fBuxa\n\r" << endl;
	}

	// check if file exists
	bool CheckIfFileExists(string filePath)
	{
		ifstream ifile(filePath.c_str());
		return (bool)ifile;
	}
};