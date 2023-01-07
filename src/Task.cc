#include "Task.h"
#include <ctime>
#include<string>
using namespace std;

Task::Task()
{

}

Task:: Task(string taskName,string taskcontent){
    this->TaskName = taskName;
    this->Taskcontent = taskcontent;
}

Task:: setTaskName(string taskName){
    this->TaskName = taskName;
}

Task:: setTaskcontent(string taskcontent){
    this->Taskcontent = taskcontent;
}

string Task:: getTaskName(){
    return this->TaskName;
}
string Task:: getTaskContent(){
    return this->Taskcontent;
}

void Task ::  setStarTime(){
     this->StartTime=time(0);    
}

string Task:: getStartTime(){
    return ctime(&this->StartTime);

}



Task::~Task()
{

}