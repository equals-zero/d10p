#include <string>
#include <iostream>

using namespace std;

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

int main(int argc, char const *argv[])
{
	if(argv[1])
	{
		cout << "Gesetzt!" << endl;
		d10p textInstance (argv[1]);
		cout << textInstance.getInputDocumentPath() << endl;
	}
	else
	{
		cout << "Nicht gesetzt." << endl;
	}
	return 0;
}