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
		setInputDocumentPath(inputDocumentPath_);
	}
	~d10p(){};
	
	void setInputDocumentPath(string inputDocumentPath_)
	{
		inputDocumentPath = inputDocumentPath_;
	}
	string getInputDocumentPath()
	{
		return inputDocumentPath;
	}

	// Get contents from file
	string getInputDocumentContent()
	{
		/*TODO*/
	}
};