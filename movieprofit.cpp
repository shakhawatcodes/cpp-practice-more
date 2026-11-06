/* Modify the Movie Data program written for Programming Challenge 1 to include two 
additional members that hold the movie’s production costs and first-year revenues. 
Modify the function that displays the movie data to display the title, director, release 
year, running time, and first year’s profit or loss. */
#include <iostream>
using namespace std;

// User-defined data type" int m" like "MovieData movie" or "MovieData m1".
struct MovieData
{
    string title;
    string director;
    int yearReleased;
    int runningTime;
    float production_cost;
    float firstyear_reveneu;
};

// Function to display movie information
void displayMovie(MovieData movie)
{
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << endl;
    if(movie. production_cost > movie.firstyear_reveneu)
      {
         cout<<"loss!"<<endl;
         cout<<" Net Loss:"<<movie. production_cost - movie.firstyear_reveneu;


      }  
     if(movie. production_cost < movie.firstyear_reveneu) 
     {

       cout<<"Profit!"<<endl;
         cout<<" Net Profit:"<<movie.firstyear_reveneu-movie. production_cost;





     }cout<<endl;
    }
int main()
{
    // First movie
    MovieData m1;

    m1.title = "Game of Thrones";
    m1.director = "David Benioff";
    m1.yearReleased = 2011;
    m1.runningTime = 60;
    m1. production_cost=1000000;
    m1.firstyear_reveneu=100000;
    // Second movie
    MovieData m2;

    m2.title = "Avengers: Endgame";
    m2.director = "Anthony Russo and Joe Russo";
    m2.yearReleased = 2019;
    m2.runningTime = 181;
   m2. production_cost=5000000;
    m2.firstyear_reveneu=700000;
    // Pass each structure to the function
    displayMovie(m1);
    displayMovie(m2);

    return 0;
}









