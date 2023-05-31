#pragma once

#include <iostream>
#include <ctime>

class Task
{
private:
	std::string _title;
	std::string _note;
	tm _creationTime;
	tm _completionTime;
	tm _expirationTime;
	bool _completed;

public:
	Task();
	Task(const std::string title, const std::string note, const tm creationTime, const tm completionTime, tm expirationTime, bool completed);
	~Task();
	const int getTitle();
	const int getNote();
	const int getCreationTime();
	const int getCompletionTime();
	const int getExpirationTime();
	const int getCompleted();

	int setTitle(const std::string title);
	int setNote(const std::string note);
	int setCreationTime(const tm creationTime);
	int setCompletionTime(const tm completionTim);
	int setExpirationTime(tm expirationTime);
	int setCompleted(bool completed);
};




