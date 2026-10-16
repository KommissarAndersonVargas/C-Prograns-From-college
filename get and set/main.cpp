#include <iostream>
using namespace std;

class GradeBook
{
public:
    void setCourseName(string name)
    {
        courseName = name;
    }
    string getCourseName()
    {
        return courseName;
    }
    void displayMessage()
    {
        cout << "Welcome to the grade book for  "<< getCourseName() << "! \n";
    }
private:
    string courseName;

};

int main()
{
    string nameOfCourse;
    GradeBook myGradeBook; // instaciamos um novo objeto

    cout << "Digite o nome do curso: " << endl;

    getline(cin, nameOfCourse);


    myGradeBook.setCourseName(nameOfCourse);

    cout << "\n";

     myGradeBook.displayMessage();

    return 0;
}
