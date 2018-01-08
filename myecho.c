#include "mystdio.h"

int main(int argc,char *argv[])
{
	if(argc<=1)
{
	myprintf("error! atleast one parameter required!");
	return -1;
}
myprintf(argv[1]);
return 0;
}


