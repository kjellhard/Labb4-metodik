#include "mailbox.h"
#include <algorithm>


mailbox::mailbox(size_t sz) : box(sz)
{
}

void mailbox::sort_who()
{
	std::sort(box.begin(), box.end(), CompWhoDateSubject());
}

void mailbox::sort_date()
{
	std::sort(box.begin(), box.end(), CompDateWhoSubject());
}

void mailbox::sort_subject()
{
	std::sort(box.begin(), box.end(), CompSubjectWhoDate());
}

void mailbox::add(email e)
{
	box.push_back(e);
}

void mailbox::read(size_t index)
{
	std::cout << box[index] << "\n";
}

std::vector<email>::iterator mailbox::begin()
{
	return box.begin();
}

std::vector<email>::iterator mailbox::end()
{
	return box.end();
}

size_t mailbox::size()
{
	return box.size();
}

mailbox::~mailbox()
{
}
