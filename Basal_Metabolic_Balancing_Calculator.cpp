#include <iostream>
#include <string>

//declare functions
double basalMetabolicRate(int weight);
//Calculates the basal metabolic rate of caloric consumption per day for someone of parameter weight in pounds
double exerciseRate(int weight, int intensity, int minutes);
//Calculates the rate of caloric consumption given the person's weight in pounds, the intensity of the exercise, and the length in minutes of the exercise
double servingsPerDay(double caloriesReq, double caloriesPerServing);
//Calculates how many servings of a particular food a person must eat per day to maintain caloric balance, given their required calories for the day and the calories per serving of the food.

//main
int main()
{
	//initialize variables
	char prompt;
	int weight, caloriesPerServing, intensity, exerciseLength;
	//greet user
	cout << "This program will determine how many servings per day you can eat of your favorite food, given various inputs!\n";
	//begin program loop
	do
	{
		//receive input
		cout << "Please enter your weight, in pounds: ";
		cin >> weight;
		cout << "Please enter the calories per serving of your favorite food: ";
		cin >> caloriesPerServing;
		cout << "Please enter the intensity of your exercise - use the following chart to determine where your exercise intensity lies:\n"
			<< "Running 10 mph: 17 intensity\n" << "Running 6 mph: 10 intensity\n" << "Basketball: 8 intensity\n" << "Walking 1 mph: 1 intensity\n";
		cin >> intensity;
		cout << "Please enter the planned length of the exercise, in minutes: ";
		cin >> exerciseLength;
		//calculate calories per day, then output servings per day
		double caloriesPerDay = basalMetabolicRate(weight) + exerciseRate(weight, intensity, exerciseLength);
		cout << "You should eat " << servingsPerDay(caloriesPerDay, caloriesPerServing) << " servings per day of your favorite food\n"
			<< "To nourish your body's requirement of " << caloriesPerDay << " calories per day.\n";
		//prompt to continue
		cout << "Woould you like to continue? Y to continue, N to end\n";
		cin >> prompt;
	} while (prompt == 'Y' || prompt == 'y');
	cout << "Goodbye!\n";
	return 0;
}

//define functions
double basalMetabolicRate(int weight)
{
	return 70 * pow((weight / 2.2), 0.756);
}

double exerciseRate(int weight, int intensity, int minutes)
{
	return 0.0385 * intensity * weight * minutes;
}

double servingsPerDay(double caloriesReq, double caloriesPerServing)
{
	return caloriesReq / (caloriesPerServing * 0.9);
}
