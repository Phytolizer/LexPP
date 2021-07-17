#ifndef LEXPP_NFA_H
#define LEXPP_NFA_H

#include <concepts>

enum class Edge
{
    EMPTY = -3,
    CHARACTER_CLASS = -2,
    EPSILON = -1,
};

enum class Anchor
{
    NONE = 0,
    LINE_START = 1 << 0,
    LINE_END = 1 << 1,
    BOTH = Anchor::LINE_START | Anchor::LINE_END,
};

template <typename T> T operator|(T left, T right) requires is_enum<T> {}

#endif // LEXPP_NFA_H
