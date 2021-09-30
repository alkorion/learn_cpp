#include <iostream>
#include <vector>
#include <string>
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

void print_all_students(const std::vector<Student>& students)
{
    for (const auto& stud : students)
    {
        std::cout << stud.name << " got a grade of " << stud.grade << '\n';
    }
}

bool compare_sudents(const Student& a, const Student& b)
{
    return a.grade > b.grade;
}

int main()
{
    std::vector<Student> user_students;

    user_students = prompt_student_info();

    std::sort(user_students.begin(), user_students.end(), compare_sudents);

    print_all_students(user_students);

    return 0;
}