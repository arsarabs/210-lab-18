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

//Function Bodiesvoid output(Review*& h, float& avg);
void addReviewHead(Review*& h, float rating, string comments) {
	//add code
}

void addReviewTail(Review*& h, float rating, string comments) {
	//add code
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