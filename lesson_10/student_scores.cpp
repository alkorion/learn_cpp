#include <iostream>
#include <vector>
#include <algorithm>

struct Student
{
    std::string name{};
    int grade{};
};

std::vector<Student> prompt_student_info()
{
    std::cout << "How many students to enter? ";
    int num_students{};
    std::cin >> num_students;

    std::vector<Student> students;

    for (int i{0}; i < num_students; ++i)
    {
        Student stud;
        students.push_back(stud);

        std::cout << "Please enter student name: ";
        std::cin >> students[i].name;


        std::cout << "Please enter the grade for " << students[i].name << ": ";
        std::cin >> students[i].grade;
    }

    return students;
}

void print_all_students(const std::vector<Student>& students) // should the ref be const or not?
{
    for (Student stud : students)
    {
        std::cout << stud.name << " got a grade of " << stud.grade << '\n';
    }
}

int main()
{
    std::vector<Student> user_students;

    user_students = prompt_student_info();
    print_all_students(user_students);

    return 0;
}