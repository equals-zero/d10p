#include "d10p.h"

/* Main Function */

/* 
	reading from pipe will be added later, until then use something like:
	$ fortune > /tmp/printThis && ./d10p /tmp/printThis
*/

int main(int argc, char const *argv[])
{
	if(argv[1])
	{
		d10p textInstance (argv[1]);
		textInstance.PrintInfo();
		cout << "Chosen File: " << textInstance.GetInputDocumentPath() << endl;
	}
	else
	{
		cout << "Please add a path (./d10p /path/to/file)" << endl;
	}
	return 0;
}