
#ifndef TASK_H
#define TASK_H

#include <string>

// Represents a single task.
// Responsible for storing task information
// tracking its completion status.
class Task {
private:
    std::string title;
    std::string dueDate;
    bool completed;

public:
    Task(const std::string& title,
         const std::string& dueDate);

    void markComplete();
    void display() const;
};

#endif
