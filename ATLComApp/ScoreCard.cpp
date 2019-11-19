// ScoreCard.cpp: реализация CScoreCard

#include "pch.h"
#include "ScoreCard.h"
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
// CScoreCard



STDMETHODIMP CScoreCard::get_Name(BSTR* pVal)
{
	// TODO: Добавьте сюда код реализации
	CComBSTR bstr(this->m_name);
	*pVal = bstr.Detach();
	return S_OK;
}


STDMETHODIMP CScoreCard::put_Name(BSTR newVal)
{
	// TODO: Добавьте сюда код реализации
	::wcstombs(this->m_name, newVal, 99);
	return S_OK;
}


STDMETHODIMP CScoreCard::get_ATLMarks(SHORT* pVal)
{
	// TODO: Добавьте сюда код реализации
	*pVal = this->m_ATLMarks;
	return S_OK;
}


STDMETHODIMP CScoreCard::put_ATLMarks(SHORT newVal)
{
	// TODO: Добавьте сюда код реализации
	this->m_ATLMarks = newVal;
	return S_OK;
}


STDMETHODIMP CScoreCard::get_COMMarks(SHORT* pVal)
{
	// TODO: Добавьте сюда код реализации
	*pVal = this->m_COMMarks;
	return S_OK;
}


STDMETHODIMP CScoreCard::put_COMMarks(SHORT newVal)
{
	// TODO: Добавьте сюда код реализации
	this->m_COMMarks = newVal;
	return S_OK;
}


STDMETHODIMP CScoreCard::get_Total(SHORT* pVal)
{
	// TODO: Добавьте сюда код реализации
	*pVal = this->m_Total;
	return S_OK;
}


STDMETHODIMP CScoreCard::put_Total(SHORT newVal)
{
	// TODO: Добавьте сюда код реализации
	return S_OK;
}


STDMETHODIMP CScoreCard::Calculate()
{
	// TODO: Добавьте сюда код реализации
	std::cout << "Enter name..." << std::endl;
	std::cin >> this->m_name;
	
	std::cout << "Enter ATLMarks" << std::endl;
	std::cin >> this->m_ATLMarks;

	std::cout << "Enter COMMarks" << std::endl;
	std::cin >> this->m_COMMarks;

	this->m_Total = m_ATLMarks + m_COMMarks;

	return S_OK;
}
