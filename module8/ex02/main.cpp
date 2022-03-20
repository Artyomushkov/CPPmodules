#include "MutantStack.h"
#include <deque>

int main() {

	std::cout << "for mutant stack:" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl << std::endl;

	std::cout << "for deque:" << std::endl;
	std::deque<int> d;
	d.push_front(5);
	d.push_front(17);
	std::cout << d[0] << std::endl;
	d.pop_front();
	std::cout << d.size() << std::endl << std::endl;


	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	d.push_back(3);
	d.push_back(5);
	d.push_back(737);
	d.push_back(0);

	std::cout << "for mutant stack:" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl;

	std::cout << "for deque:" << std::endl;
	std::deque<int>::iterator it2 = d.begin();
	std::deque<int>::iterator ite2 = d.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	return 0;
}