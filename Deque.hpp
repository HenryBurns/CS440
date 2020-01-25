#ifndef DEQUE_HPP
#define DEQUE_HPP
#define Deque_DEFINE(type) \
    struct Deque_ ## type ## _Iterator { \
        void inc(Deque_ ## type ## _Iterator  *iter) { \
        } \
        type &deref(Deque_ ## type ## _Iterator  *iter) { \
        } \
        void dec(Deque_ ## type ## _Iterator  *iter) { \
        } \
    }; \
    bool Deque_ ## type ## _Iterator_equal(Deque_ ## type ## _Iterator,\
                                           Deque_ ## type ## _Iterator two)\
    {\
    }\
    struct Deque_##type { \
        size_t elems;\
        const char *type_name = #type; \
        size_t size(Deque_##type *dec) { \
            return elems; \
        } \
        struct Deque_ ## type ## _Iterator begin(Deque_##type *dec) { \
        } \
        struct Deque_ ## type ## _Iterator end(Deque_##type *dec) { \
        } \
        void clear(Deque_##type *dec) { \
        } \
        void push_back(Deque_##type *dec, type data) { \
        } \
        void push_front(Deque_##type *dec, type data) { \
        } \
        void pop_back(Deque_##type *dec) { \
        } \
        void pop_front(Deque_##type *dec) { \
        } \
        type &at(Deque_##type *dec, int indx) { \
        } \
        type &back(Deque_##type *dec) { \
        } \
        type &front(Deque_##type *dec) { \
        } \
        bool empty(Deque_##type *dec) { \
        } \
        void dtor(Deque_##type *dec) { \
        } \
        void sort(Deque_##type *dec, Deque_ ## type ## _Iterator start, \
                 Deque_ ## type ## _Iterator end) { \
        } \
    };    \
                    \
        void Deque_ ## type ## _ctor(Deque_##type *dec, \
                bool (*comparator)(const type &one, const type &two)) {\
            dec->elems = 0; \
            printf("Ctor\n"); \
        } \
        bool Deque_ ## type ## _equal(Deque_##type &dec1, \
                                      Deque_##type &dec2) {\
            printf("Equal\n"); \
        }

/**
 * 1. We need a macro Deque_DEFINE(type) that takes the name of a type.
 *    and declares a Deque
 *
 *      a. The deque defined should have a function 
 *         Deque_TYPENAME_ctor(Deque_TYPENAME *, bool (*type_comp)(
 *                                  const_TYPE * one, cont_TYPE * two));
 *      b. The deque should also have a size(this) function returning
 *         size_t (C++ style).
 *
 *      c. The deque also needs an empty(this) function returning a bool.
 *
 *      d. A type_name field that is a string literal char[].
 *
 *      e. push_back(this, type data) and push_front(this, type data)
 *         functions that push to the back and front.
 *
 *      f. front(this) and back(this) functions that return the front
 *         and back elements respectively.
 *
 *      g. pop_front(this) and pop_back(this) functions that pop elements.
 *
 *      h. begin(this) and end(this) functions that return an interator.
 *
 *      i. An iterator struct Deque_TYPE_Iterator
 *         (with an inc(this) function, a dec(this)
 *          function, and a deref(this) function).
 *
 *      j. Random access support with an at(this, int indx) function.
 *
 *      k. Deque_TYPE_equal(Deque 1, Deque 2) function checking for equal
 *         length, and that all elements compare equal.
 *
 *      l. A dtor(this) member function that destroys the deque.
 *
 *      m. A sort(this, this.start(), this.end()) member function that uses
 *         qsort_r().
 */
#endif
