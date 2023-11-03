#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{

	char moveSpot = '.';

	switch (moveSpot) {
		case '.':
			printf("You can move!\n");
			break;
		case '#':
			printf("Your can not move!\n");
			break;
		case 'S':
			printf("Battle Time!\n");
			break;

	}


	system("PAUSE");
	return 0;
}