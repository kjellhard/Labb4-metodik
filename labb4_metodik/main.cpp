#include <iostream>
#include "mailbox.h"
#include "email.h"
#include <algorithm>

template<typename T>
void show(T &mails)
{
	std::for_each(mails.begin(), mails.end(), [](const auto &emails)
	{
		std::cout << emails << '\n';
	});
}

int main()
{
	email e1("Pelle", "2018-12-13", "tjabba");
	email e2("Zlatan", "2018-11-10", "tjena");
	email e3("Kungen", "2018-09-05", "Halla");
	email e4("Bert", "1990-12-10", "labb");
	email e5("Sune", "2018-11-09", "hej");
	mailbox mails(3);
	mails.add(e1);
	mails.add(e2);
	mails.add(e3);
	mails.add(e4);
	mails.add(e5);
	show(mails);
	mails.sort_date();
	std::cout << "sort date:\n";
	show(mails);
	mails.sort_subject();
	std::cout << "sort subject:\n";
	show(mails);
	mails.sort_who();
	std::cout << "sort vem:\n";
	show(mails);
	mails.read(1);
	
	system("pause");
	return 0;
}