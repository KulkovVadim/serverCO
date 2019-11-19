// ScoreCard.h: объявление CScoreCard

#pragma once
#include "resource.h"       // основные символы



#include "ATLComApp_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Однопотоковые COM-объекты не поддерживаются должным образом платформой Windows CE, например платформами Windows Mobile, в которых не предусмотрена полная поддержка DCOM. Определите _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA, чтобы принудить ATL поддерживать создание однопотоковых COM-объектов и разрешить использование его реализаций однопотоковых COM-объектов. Для потоковой модели в вашем rgs-файле задано значение 'Free', поскольку это единственная потоковая модель, поддерживаемая не-DCOM платформами Windows CE."
#endif

using namespace ATL;


// CScoreCard

class ATL_NO_VTABLE CScoreCard :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CScoreCard, &CLSID_ScoreCard>,
	public IDispatchImpl<IScoreCard, &IID_IScoreCard, &LIBID_ATLComAppLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CScoreCard()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CScoreCard)
	COM_INTERFACE_ENTRY(IScoreCard)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(get_Name)(BSTR* pVal);
	STDMETHOD(put_Name)(BSTR newVal);
	STDMETHOD(get_ATLMarks)(SHORT* pVal);
	STDMETHOD(put_ATLMarks)(SHORT newVal);
	STDMETHOD(get_COMMarks)(SHORT* pVal);
	STDMETHOD(put_COMMarks)(SHORT newVal);
	STDMETHOD(get_Total)(SHORT* pVal);
	STDMETHOD(put_Total)(SHORT newVal);
	STDMETHOD(Calculate)();

private:
	char m_name[100];
	short m_ATLMarks;
	short m_COMMarks;
	short m_Total;
};

OBJECT_ENTRY_AUTO(__uuidof(ScoreCard), CScoreCard)
