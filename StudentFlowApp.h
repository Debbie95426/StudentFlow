
#ifndef STUDENTFLOWAPP_H
#define STUDENTFLOWAPP_H

#include <vector>
#include "TaskManager.h"
#include "StudySession.h"

// Controls the StudentFlow application.
// Handles the main menu, study sessions,
// and progress display.
class StudentFlowApp {
private:
    TaskManager manager;
    std::vector<StudySession> sessions;

public:
    StudentFlowApp();

    void run();
    void showMenu() const;
    void showProgress() const;
};

#endif
