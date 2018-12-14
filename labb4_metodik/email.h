#pragma once
#include <string>
class email
{
public:
	email(std::string w = nullptr, std::string d = nullptr, std::string s = nullptr);

	~email();
	friend std::ostream & operator<<(std::ostream &out, const email &print);
	friend struct CompWhoDateSubject;
	friend struct CompDateWhoSubject;
	friend struct CompSubjectWhoDate;
private:
	std::string who, date, subject;
};

struct CompWhoDateSubject
{
	bool operator()(const email &lhs, const email &rhs)
	{
		if (lhs.who < rhs.who)
			return true;
		else if (lhs.who == rhs.who)
		{
			if (lhs.date < rhs.date)
				return true;
			else if (lhs.date == rhs.date)
			{
				if (lhs.subject < rhs.subject)
					return true;
			}
		}
			return false;
	}
};

struct CompDateWhoSubject
{
	bool operator()(const email &lhs, const email &rhs)
	{
		if (lhs.date < rhs.date)
			return true;
		else if (lhs.date == rhs.date)
		{
			if (lhs.who < rhs.who)
				return true;
			else if (lhs.who == rhs.who)
			{
				if (lhs.subject < rhs.subject)
					return true;
			}
		}
		return false;
	}
};

struct CompSubjectWhoDate
{
	bool operator()(const email &lhs, const email &rhs)
	{
		if (lhs.subject < rhs.subject)
			return true;
		else if (lhs.subject == rhs.subject)
		{
			if (lhs.who < rhs.who)
				return true;
			else if (lhs.who == rhs.who)
			{
				if (lhs.date < rhs.date)
					return true;
			}
		}
		return false;
	}
};