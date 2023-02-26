#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <exception>
#include <string>

class span
{
private:
    unsigned int N_;
    unsigned int index_;
    std::vector<int> array_;

public:
    class SpanOverflowError : public std::exception
    {
    public:
        const char *what() noexcept
        {
            return "Span is full";
        }
    };
    class LimitedSpanError : public std::exception
    {
    public:
        const char *what() noexcept
        {
            return "Span has less than 2 numbers";
        }
    };
    span(unsigned int N) : N_(N)
    {
        array_.reserve(N);
        index_ = 0;
    }
    void addNumber(int i) noexcept(false)
    {
        if (index_ == N_)
        {
            throw SpanOverflowError();
        }
        array_.push_back(i);
        index_++;
    }
    template<typename iter>
    void addNumber(iter begin, iter end) noexcept(false)
    {
        for(; begin != end; begin++)
        {
            if (index_ == N_)
            {
                throw SpanOverflowError();
            }
            array_.push_back(*begin);
            index_++;
        }
    }
    int shortestSpan() noexcept(false)
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
    int longestSpan()
    {
        if (index_ <= 1)
            throw LimitedSpanError();
        std::sort(array_.begin(), array_.end());
        int longest_span = *array_.rbegin() - *array_.begin();
        return longest_span;
    }
};

#endif /* SPAN_HPP */
