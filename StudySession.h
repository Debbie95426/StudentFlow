
#ifndef STUDYSESSION_H
#define STUDYSESSION_H

#include <string>

// Represents one study session.
// Stores the course name and study duration.
class StudySession {
private:
    std::string courseName;
    int duration;

public:
    StudySession(const std::string& courseName,
                 int duration);

    void setDuration(int minutes);
    void display() const;
};

#endif
