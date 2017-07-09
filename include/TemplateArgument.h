#pragma once

#include <string>

#ifdef _ATL_VER
#include <atlstr.h>
#endif

#ifdef _MFC_VER 
#endif

//std::wstring, std::string
template <typename T>
T const * Argument(std::basic_string<T> const & value) noexcept
{
	return value.c_str();
}

#ifdef _ATL_VER
template <typename T>
T const * Argument(ATL::CStringT< T, StrTraitATL< T, ChTraitsCRT< T > > >const & value) noexcept
{
	return static_cast<const T*>(value);
}
#endif

#ifdef _MFC_VER 
template <typename T>
T const * Argument(ATL::CStringT< T, StrTraitMFC_DLL< T > >const & value) noexcept
{
	return static_cast<const T*>(value);
}

template <typename T>
T const * Argument(ATL::CStringT< T, StrTraitMFC< T > >const & value) noexcept
{
	return static_cast<const T*>(value);
}

#endif // _MFC_VER 


//è„ãLà»äO
template <typename T>
T Argument(T value) noexcept
{
	return value;
}