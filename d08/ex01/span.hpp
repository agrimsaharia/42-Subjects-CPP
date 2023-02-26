#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>

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
    span(unsigned int N);
    void addNumber(int) noexcept(false);
    template <typename iter>
    void addNumber(iter begin, iter end) noexcept(false)
    {
        for (; begin != end; begin++)
        {
            if (index_ == N_)
            {
                throw SpanOverflowError();
            }
            array_.push_back(*begin);
            index_++;
        }
    }
    int shortestSpan() noexcept(false);
    int longestSpan() noexcept(false);
};

#endif /* SPAN_HPP */
