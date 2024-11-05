#include <stdio.h>

int main(int argc,char* argv[])
{
	int distance = 100;
	float power = 2.34f;
	double super_power = 5678.4532;
	char initial = 'A';
	char first_name[] = "Panji";
	char last_name[] = "Abdillah";

	printf("you are %d miles away.\n",distance);
	printf("You have %f levels of power.\n",power);
	printf("you have %f awesome super powers.\n",super_power);
	printf("i have an initial %c.\n",initial);
	printf("I Have a first name %s.\n",first_name);
	printf("I have a last name %s.\n",last_name);
	printf("My whole name is %s %c %s.\n",
		first_name,initial,last_name);

	int bugs = 100;
	double bug_rate = 1.2;

	printf("you have %d bugs at the imaginary rate of %f.\n"
		,bugs,bug_rate);

	long universe_of_defect = 1L * 1024L * 1024L * 1024L;
	printf("The entire universe has %ld bugs.\n"
		,universe_of_defect);
	
	double expected_bugs = bugs * bug_rate;
	printf("you are expecting to have %f bugs.\n"
		,expected_bugs);

	double part_of_universe = expected_bugs / universe_of_defect;

	printf("That is only a %e portion of the universe.\n"
		,part_of_universe);

	//this make no sense, just a demo of something weird
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("which means you should care %d%%.\n"
		,care_percentage);

}
