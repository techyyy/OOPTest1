#ifndef FUNCTION_GLOBALS_H
#define FUNCTION_GLOBALS_H

#include<iostream>

template< typename T1, typename T2 >
struct is_same_type      { enum { result = false }; };

template< typename T>
struct is_same_type<T,T> { enum { result = true }; };

#endif