#include "span.hpp"

#include <algorithm>
#include <string>

span::span(unsigned int N) : N_(N)
{
    array_.reserve(N);
    index_ = 0;
}
void span::addNumber(int i) noexcept(false)
{
    if (index_ == N_)
    {
        throw SpanOverflowError();
    }
    array_.push_back(i);
    index_++;
}
int span::shortestSpan() noexcept(false)
{
    if (index_ <= 1)
        throw LimitedSpanError();
    std::sort(array_.begin(), array_.end());
    int shortest_span = INT32_MAX;
    auto iter = array_.begin();
    int prev = *iter++;
    for (; iter != array_.end(); iter++)
    {
        shortest_span = std::min(shortest_span, *iter - prev);
    }
    return shortest_span;
}
int span::longestSpan() noexcept(false)
{
    if (index_ <= 1)
        throw LimitedSpanError();
    std::sort(array_.begin(), array_.end());
    int longest_span = *array_.rbegin() - *array_.begin();
    return longest_span;
}