#include "includes.h"

struct elem
{
    int val;
    elem *next;
    elem(int _val) : val(_val), next(nullptr) {}
};

class list
{
    elem *first = nullptr;
    elem *last = nullptr;
    list() : first(nullptr), last(nullptr) {}
};