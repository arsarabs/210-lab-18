// COMSC-210 | Lab 18| Anthony R. Sarabia
// IDE used: Visual Studio
 
#include <iostream>
#include <iomanip>
#include <cstdlib>   // For rand()
#include <string>    // For string operations
#include <limits>    // For numeric_limits
#include <cctype>    // For toupper()
using namespace std;

//Defining constants
const float minRating = 0.0;
const float maxRating = 5.0;

//Struct
struct Review {
	float rating;
	string comments;
	Review* next; //Points to the next review 
};

//Function Prototypes
void output(Review*& h, float& avg);
void addReviewHead(Review*& h, float rating, string comments);
void addReviewTail(Review*& h, float rating, string comments);
void deleteReview(Review*& h);
int getUserChoice();
float validateRating();
string getComments();
bool getOneMoreReview();


//main()
int main() {

	//add code

	return 0;
}

//Function Bodies
void output(Review*& h, float& avg) {
	//define some local variables
	int count = 1;           // Counter to number each review
	float total = 0.0;       // Variable to accumulate total ratings
	Review* current = h;    // Pointer to traverse the list
	//check to see if list empty
	(!h) {
		cout << "No reviews!" << endl;
		return;
	}
	//Now, we create a while loop to transverse the list
	while (current) {
		cout << "      > Review #" << count++ << ": " << current->rating << ": " << current->comments << endl;
		total += current->rating; // add current rating to total
		current = current->next; //move to next review
	}
	average = total / (count - 1); //calculate average
}
void addReviewHead(Review*& h, float rating, string comments) {
	//add code
}

void addReviewTail(Review*& h, float rating, string comments) {

}
void deleteReview(Review*& h) {
	//add code
}
int getUserChoice() {
	//add code
}
float validateRating() {
	//add code
}
string getComments() {
	//add code
}
bool getOneMoreReview() {
	//add code
}