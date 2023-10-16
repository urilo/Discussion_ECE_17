#include <iostream> // this directive is for the standard input/output stream
#include <string> // this directive is to use the string stream

using namespace std;

int main() {


    string name;
    string msg;

    cout << "Enter your first name. " << endl;
    cin >> name;


    msg = "Hello, " + name + ". Welcome to ECE 17 Discussion.";

    cout << msg << endl;

    size_t messageStart = msg.find("Hello");
    msg.replace(messageStart, sizeof("Hello") - sizeof('\n'), "Bye");
    cout << msg << endl;

    messageStart = msg.find("Welcome to ");
    msg.erase(messageStart, sizeof("Welcome to ") - sizeof('\n'));
    cout << msg << endl;

    messageStart = msg.find("ECE 17");
    msg.insert(messageStart, "See you at the next ");
    cout << msg << endl;


    return 0;
}