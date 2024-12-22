#ifndef TASKMANAGEMENT_H
#define TASKMANAGEMENT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TaskManagement {
public:
    static int id_counter;
    int id;
    string title;
    string description;
    string deadline;
    string priority;
    string status;
    string technician;

    TaskManagement(string t, string d, string dl, string p, string st, string tech) : title(t), description(d), deadline(dl), priority(p), status(st), technician(tech) { 
        id = ++id_counter;
    }
};

void taskManagementMenu();
void addNewTask(vector<TaskManagement>& tasks);
void assignTask(vector<TaskManagement>& tasks);
void displayTasks(const vector<TaskManagement>& tasks);
void getDetailsTask(const vector<TaskManagement>& tasks);

extern std::vector<TaskManagement> tasks;

#endif
