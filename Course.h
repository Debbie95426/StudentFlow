
#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "Task.h"

// Represents a course.
// Owns and manages a collection of tasks.
class Course {
private:
    std::string name;
    std::vector<Task> tasks;

public:
    Course(const std::string& name);

    void addTask(const Task& task);
    void displayTasks() const;
};

#endif
