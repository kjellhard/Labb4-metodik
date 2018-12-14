#pragma once
#include "email.h"
#include <vector>
#include <iostream>

class mailbox
{
public:
	mailbox(size_t sz = 0);
	void sort_who();
	void sort_date();
	void sort_subject();
	void add(email e);
	void read(size_t index);
	std::vector<email>::iterator begin();
	std::vector<email>::iterator end();
	size_t size();
	~mailbox();
private:
	std::vector<email> box;
};

