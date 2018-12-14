#include "email.h"

email::email(std::string w, std::string d, std::string s) : who(w), date(d), subject(s)
{

}

email::~email()
{
}

std::ostream & operator<<(std::ostream &out, const email &print)
{
	out << print.who << ", " << print.date << ", " << print.subject;
	return out;
}
