
#include "course.h"
#include "student.h"
#include <stdexcept>

using namespace std;

Course::Course() {
    // Initialize member variables.
    // By default, course will hold a max of 25 students.
    // ========= ONLY MODIFY BETWEEN THE LINES  ===========
    max_students = 25;
    professor_cwid = -1;
    class_num = -1;
    num_students = 0;
    students = new Student[25];


    // ====================================================
}

Course::Course(size_t max) {
    // Very similar to default constructor, but parameter specifies max
    // number of students.
    // ========= ONLY MODIFY BETWEEN THE LINES  ===========
    professor_cwid = -1;
    class_num = -1;
    num_students = 0;
    max_students = max;
    students = new Student[max];

    // ====================================================
}

Course::~Course() {
    // Utilized to free allocated memory.
    // ========= ONLY MODIFY BETWEEN THE LINES  ===========
    delete [] students;


    // ====================================================
}

Student Course::get_student(size_t index) const {
    // Fetch student at specified index.
    // Utilize stdexcept to handle edge cases.
    // ========= ONLY MODIFY BETWEEN THE LINES  ===========
    if (index < 0 || index > max_students )
      throw range_error("You're out of bounds. BOI!!!! Pick between 0-" + max_students);
    return students[index];


    // ====================================================
}

void Course::enroll_student(const Student &student) {
    // Insert a new student
    // Utilize stdexcept to handle endge cases.
    // ========= ONLY MODIFY BETWEEN THE LINES  ===========
    if( num_students >= max_students)
      throw range_error("Number of students exceeds max student capacity.");
    students[num_students] = student;
    num_students++;



    // ====================================================
}


void Course::set_class_number(int num) {
    class_num = num;
}

void Course::set_professor_cwid(int id) {
    professor_cwid = id;
}

int Course::get_class_number() const {
    return class_num;
}

size_t Course::get_max_students() const {
    return max_students;
}

size_t Course::get_num_students() const {
    return num_students;
}

int Course::get_professor_cwid() const {
    return professor_cwid;
}
