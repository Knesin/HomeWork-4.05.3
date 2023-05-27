#include "my_functor.h"
#include <iostream>
my_functor::my_functor() {
	sum_ = 0;
	count_ = 0;
}
int my_functor::get_sum() {
	return sum_;
}
int my_functor::get_count()
{
	return count_;
}
void my_functor::operator() (int i) {
	if (i % 3 == 0) {
		sum_ += i;
		count_++;
	}
}