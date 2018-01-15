#include <iostream>
#include <string>
#include <queue>
#include <vector>
template <typename T>
class elem
{
	public:
		elem(int prio, T value) : _prio(prio), _value(value) {}
		~elem() {}
		int getPrio() {return _prio;}
		int getValue() {return _value;}
	private:
		int _prio;
		T _value;
};

int main()
{

	elem<int> a(1,4);
	elem<int> b(2,5);
	elem<int> c(3,4);
	elem<int> d(4,4);
	elem<int> e(5,4);

	auto cmp = [](elem<int>* a ,elem<int>* b){ return a->getPrio() > b->getPrio(); };
	std::priority_queue<elem<int>*, std::vector<elem<int>*>, decltype(cmp)> pq(cmp);

	pq.push(&a);
	pq.push(&b);
	pq.push(&c);
	pq.push(&d);
	pq.push(&e);

	while (!pq.empty())
	{
		auto a = pq.top();
		std::cout << a->getPrio() << " " <<  a->getValue() << std::endl;
		pq.pop();
	}
	return 1;
}
