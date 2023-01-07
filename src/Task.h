#ifndef TASK_H
#define TASK_H
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

#pragma once

class Task
{
public:
    Task();
    ~Task();
    void setTaskName(string taskName);
    void setTaskcontent(string taskContent);
    string getTaskcontent();
    string TaskName();
    void setStarTime();
    /* i will return the start time as str not date*/
    string getStartTime(); 
    void setEndTime(time_t startTime);
    time_t getEndTime();
    time_t getleftTime();
    void DeleteTask();
    void EditTask();

protected:
    string TaskName ;
    string Taskcontent;
    string TaskStatus; // task status string for telling the state whether completed or not
    /* and then suppose to show datetime and rest of the time */
    time_t StartTime;
    time_t EndTime;
    time_t leftTime;
    
};

#endif