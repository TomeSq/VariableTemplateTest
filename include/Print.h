#pragma once

#include <stdio.h>

template <typename ... Args>
void Print(char const * const format, Args const & ... args) noexcept
{
	printf_s(format, Argument(args) ...);
}

template <typename ... Args>
void Print(wchar_t const * const format, Args const & ... args) noexcept
{
	wprintf_s(format, Argument(args) ...);
}
