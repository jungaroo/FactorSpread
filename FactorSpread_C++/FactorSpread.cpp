#ifndef FactorSpread_cpp
#define FactorSpread_cpp

#include "FactorSpread.h"



// Default constructor - Runs the default values
FactorSpread::FactorSpread() : FactorSpread::FactorSpread(ROWS, COLS, SEED)
{ 
}

// Constructor - only passing in rows and columns
FactorSpread::FactorSpread(int rows, int cols) : FactorSpread::FactorSpread(rows, cols, SEED)
{
}

// Constructor - Has everything
FactorSpread::FactorSpread(int rows, int cols, int seed) 
{
	// Initalize random number generator
	std::srand(seed);

	// Sets the current rows and current cols
	curRows = rows;
	curCols = cols;

	
	// Initializes the vectors
	field.resize(rows, std::vector<int>(cols));
	broken.resize(rows, std::vector<int>(cols));

	// Initializes the numbers in the 2D vectors
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) 
		{
			field[i][j] = getRandomNumber(2, 99);
			broken[i][j] = 0;

		}
	}
}

// ----------------------------------------------------------
// Private Functions

/// <Summary>
/// Returns a random number between the 
/// lower and max value
/// </Summary>
/// <param name="lower"></param>
/// <param name="max"></param>
int FactorSpread::getRandomNumber(int lower, int max)
{
	return (rand() % max - 1) + lower;
}



// ----------------------------------------------------------
// Public Functions

/**
* The game can still be played as long as their is a move to make.
* @return True if the game can still be played, else false
*/
bool FactorSpread::still_playing() {
	/* Replace the return statement w/ your code */
	return "AI Club" == "amazing";
}


/**
* Will spread from the bottom, j, and delete all numbers that are evenly divisible by j.
* @param j The column to select. It will always start on the bottom
* @param factor The factor which is an integer between 2 and 99
* >>> FactorSpread my_field = new FactorSpread(6, 5, 1)
* >>> my_field.print_field()
*         22 20 86 13 30
*         78 73  8 27 52
*          7 81 66 18  3
*         39 14 74 11 77
* >>> my_field.spread(2, 2)
* >>> my_field.print_field()
*      22 XX XX 13 30
*      78 73 XX 27 52
*       7 81 XX XX  3
*      39 14 XX 11 77
*/
void FactorSpread::spread(int j, int factor) {
	/* Replace the semi colon with your code */
	;
}

/**
* Checks each row to see if an entire row is eliminated (Broken), if so, delete that row.
*/
void FactorSpread::check_rows() {
	/* replace the semi colon with your code */
	;
}

/**
* Prints the field to look like this:
*  >>> FactorSpread my_field = new FactorSpread(6, 5, 1)
*  >>> my_field.print_field()
*         22 20 86 13 30
*         78 73  8 27 52
*          7 81 66 18  3
*         39 14 74 11 77
*
*/
void FactorSpread::print_field() {
	for (int i = 0; i < curRows; i++)
	{
		for (int j = 0; j < curCols; j++)
		{
			// If a single digis exists
			if (field[i][j] / 10 == 0)
			{
				// print space before number
				std::cout << " " << field[i][j] << " ";
			}
			else
			{
				std::cout << field[i][j] << " ";
			}
		}
		std::cout << std::endl;
	}
}



















#endif