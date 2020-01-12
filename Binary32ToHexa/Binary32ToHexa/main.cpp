#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef union {
	int hexa;
	double deset;
} bin32;

void vypis(bin32 cislovypis)
{
	printf("Binary 32 v hexa: %X\n", cislovypis.hexa);
	cout << "E dekadicky:" << ((cislovypis.hexa >> 23) & 0xFF) << endl;
	cout << "e dekadicky:" << (((cislovypis.hexa >> 23) & 0xFF) - 127) << endl;
}

int main() {
	bin32 cislo;
	cout << "Zadaj realne cislo: " << endl;
	cin >> cislo.deset;
	vypis(cislo);
	return 0;
}
