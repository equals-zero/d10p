#include "d10p.h"

/* Main Function */

int main(int argc, char const *argv[])
{
	if(argv[1])
	{
		d10p textInstance (argv[1]);
		cout << textInstance.getInputDocumentPath() << endl;
	}
	else
	{
		cout << "Please add a path (./d10p /path/to/file)" << endl;
	}
	return 0;
}