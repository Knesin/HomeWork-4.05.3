#pragma once
class my_functor
{
public:
	my_functor();
	int get_sum();
	int get_count();
	void operator() (int i);
private:
	int sum_;
	int count_;
};