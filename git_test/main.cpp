#include <iostream>
#include "lab_tools.h" 


int main()
{
	while (true)
	{
		system("cls");
		printf("\t\tWelcome to labyrynth!\n\n\n");
		printf("1\t- Start game\n");
		printf("0\t- Exit\n");
		rewind(stdin);
		char c = std::cin.get();
		switch (c)
		{
		case '1':
			start_game();
			break;

		case '0':
			goto end;
		}
	}
end:

	system("cls");
	printf("The end! Press any key to continue...");
	rewind(stdin);
	system("pause > NUL");
	return 0;
}