
#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <string>
#include <vector>
#include "Course.h"

// Manages all courses and their tasks.
// Provides course lookup and task removal.
class TaskManager {
private:
    std::vector<Course> courses;

public:
    TaskManager();

    void addCourse(const Course& course);
    Course* findCourse(const std::string& name);
    void removeTask(const std::string& courseName,
                    const std::string& taskTitle);
};

#endif
