#include <iostream>
using namespace std;

class students
{
private:
    string name;
    int age, roll_number;
    char section;

public:
    string location, phone;

    // Method to set the information of a student
    void set_information(string s_name, int s_age, int s_roll_number, char s_section)
    {
       name = s_name;
        age = s_age;
        roll_number = s_roll_number;
        section = s_section;
    }

    // Method to display the information of a student
    //we can also define these functions outside the class
    void get_information()
    {
        cout << "-------------STUDENT INFORMATION---------------\n" << endl;
        cout << "Student Name : " << name << endl;
        cout << "Student Age : " << age << endl;
        cout << "Student Roll Number : " << roll_number << endl;
        cout << "Student Section : " << section << endl;
        cout << "Student Phone : " << phone << endl;
        cout << "Student Location : " << location << endl;
    }
};

int main()
{
    // Create an instance of the 'students' class
    students ahmad;

    // Set information for the 'ahmad' student object
    
    ahmad.set_information("Ahmad Rasheed", 18, 11, 'B');

    // Set 'location' and 'phone' attributes for the 'ahmad' student object
    ahmad.location = "Pattal Basti, Muzaffargarh, Pakistan";
    ahmad.phone = "+92 337 6018055";

    // Display the information for the 'ahmad' student object
    ahmad.get_information();

    students rehman; 
    rehman.set_information("Rehman Rasheed", 12, 33, 'A');
    rehman.location = "Pattal Basti, Muzaffargarh, Pakistan";
    rehman.phone = "+92 337 6018055";
    rehman.get_information();
    return 0;
}
