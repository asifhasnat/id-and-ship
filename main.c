#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
char n;
scanf("%d\n",&t);
while(t--)
{
    scanf("%c\n",&n);
    switch(n)
    {
        case 'B':printf("BattleShip\n");
        break;
        case 'C':printf("Cruiser\n");
        break;
        case 'D':printf("Destroyer\n");
        break;
        case 'F':printf("Frigate\n");
        break;
        case 'b':printf("BattleShip\n");
        break;
        case 'c':printf("Cruiser\n");
        break;
        case 'd':printf("Destroyer\n");
        break;
        case 'f':printf("Frigate\n");
        break;
        }
}
	return 0;
}

