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
	d10p(string inputDocumentPath_)
	{
		SetInputDocumentPath(inputDocumentPath_);
	}
	~d10p(){};
	
	void SetInputDocumentPath(string inputDocumentPath_)
	{
		inputDocumentPath = inputDocumentPath_;
	}
	string GetInputDocumentPath()
	{
		return inputDocumentPath;
	}

	// Get contents from file
	string GetInputDocumentContent()
	{
		/*TODO*/
	}

	// print info
	void PrintInfo()
	{
		cout << "d10print Assistant - 2016 v0.1\nReport bugs here: http://goo.gl/5fBuxa\n\r" << endl;
	}
};