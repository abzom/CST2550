#include <iostream>

#include <string>

#include <vector>

#include <limits>

#include <iomanip>

 

using namespace std;

 

class Movie {

public:

    string title;

    vector<string> showtimes;

 

    Movie(string title, initializer_list<string> times) : title(title), showtimes(times) {}

 

    void displayShowtimes() const {

        cout << "\nShowtimes for " << title << ":\n";

        for (size_t i = 0; i < showtimes.size(); ++i) {

            cout << i + 1 << ". " << showtimes[i] << endl;

        }

    }

};

 

class Ticket {

private:

    string name;

    string contactNumber;

    string movieTitle;

    string showTime;

    bool hasCard;

    int ticketCount;

    double originalTotalPrice;

    double discountedTotalPrice;

 

public:

    Ticket() : hasCard(false), ticketCount(0), originalTotalPrice(0.0), discountedTotalPrice(0.0) {}

 

    void selectMovieAndTime(const vector<Movie>& movies) {

        cout << "\nAvailable Movies:\n";

        for (size_t i = 0; i < movies.size(); ++i) {

            cout << i + 1 << ". " << movies[i].title << endl;

        }

        cout << "\nEnter the number of the movie you'd like to watch: ";

        int movieChoice;

        cin >> movieChoice;

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

 

        if (movieChoice < 1 || movieChoice > movies.size()) {

            cout << "Invalid choice. Please try again.\n";

            return;

        }

 

        movies[movieChoice - 1].displayShowtimes();

        cout << "\nEnter the number of the showtime: ";

        int timeChoice;

        cin >> timeChoice;

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

 

        if (timeChoice < 1 || timeChoice > movies[movieChoice - 1].showtimes.size()) {

            cout << "Invalid choice. Please try again.\n";

            return;

        }

 

        movieTitle = movies[movieChoice - 1].title;

        showTime = movies[movieChoice - 1].showtimes[timeChoice - 1];

    }

 

    void inputCustomerInfo() {

        cout << "\nEnter your name: ";

        getline(cin, name);

        cout << "Enter your contact number (10 digits): ";

        getline(cin, contactNumber);

        while (contactNumber.length() != 10) {

            cout << "Please enter a valid 10-digit mobile number: ";

            getline(cin, contactNumber);

        }

 

        cout << "Are you a cardholder? (y/n): ";

        char cardResponse;

        cin >> cardResponse;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        hasCard = (cardResponse == 'y' || cardResponse == 'Y');

 

        cout << "Enter the number of tickets: ";

        cin >> ticketCount;

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

    }

 

    void calculatePrices() {

        const double pricePerTicket = 10.0; // Example base price

        originalTotalPrice = pricePerTicket * ticketCount;

 

        discountedTotalPrice = originalTotalPrice;

        if (hasCard) {

            discountedTotalPrice *= 0.9; // 10% discount for cardholders

        }

 

        if (!showTime.empty() && stoi(showTime.substr(0, 2)) < 12) {

            discountedTotalPrice *= 0.95; // Additional 5% discount for morning shows

        }

    }

 

    void displayTicketInfo() const {

        cout << "\nTicket Information:"

             << "\nName: " << name

             << "\nContact Number: " << contactNumber

             << "\nMovie: " << movieTitle

             << "\nShow Time: " << showTime

             << "\nNumber of Tickets: " << ticketCount

             << "\nOriginal Total Price (before discounts): $" << fixed << setprecision(2) << originalTotalPrice

             << "\nTotal Price After Discounts: $" << fixed << setprecision(2) << discountedTotalPrice << endl;

    }

 

    void completeTicketProcess(const vector<Movie>& movies) {

        selectMovieAndTime(movies);

        inputCustomerInfo();

        calculatePrices();

        displayTicketInfo();

    }

};

 

int main() {

    vector<Movie> movies = {

        Movie("Hunter Killer", {"08:00", "13:00", "14:50", "18:00", "21:00"}),

        Movie("A Star Is Born", {"09:00", "11:00", "12:50", "15:00", "20:00"}),

        Movie("Helicopter Eela", {"08:00", "13:00", "14:50", "18:00", "21:00"}),

        Movie("Sui Dhaaga", {"08:00", "13:00", "14:50", "18:00", "21:00"}),

        Movie("The Nutcracker and the Four Realms", {"08:00", "13:00", "14:50", "18:00", "21:00"})

    };

 

    Ticket ticket;

    ticket.completeTicketProcess(movies);

 

    return 0;

}
