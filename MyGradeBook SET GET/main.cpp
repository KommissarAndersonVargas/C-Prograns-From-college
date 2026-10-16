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
        cout << "Welcome to the grade book for \n"<< getCourseName() <<"!\n";
    }
private:
    string courseName;
};
int main()
{
    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Initial course name is: " << myGradeBook.getCourseName() <<"\n";

    cout << "\nPlease enter the course name: !" << endl;
    getline(cin, nameOfCourse);
    myGradeBook.setCourseName(nameOfCourse);

    cout<<"\n";

    myGradeBook.displayMessage();
    //cout << myGradeBook.getCourseName();

    return 0;
}
