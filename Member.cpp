#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Team {
private:
    vector<string> members;

public:
    void addMember(const string& memberName) {
        members.push_back(memberName);
        cout << "Member " << memberName << " added to the team." << endl;
    }

    void printMembers() {
        cout << "Team members:" << endl;
        for (const string& member : members) {
            cout << member << endl;
        }
    }
};

int main() {
    Team myTeam;
    string memberName;
    char choice;

    do {
        cout << "Enter the name of the member: ";
        cin >> memberName;
        myTeam.addMember(memberName);

        cout << "Do you want to add another member? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    myTeam.printMembers();

    return 0;
}
