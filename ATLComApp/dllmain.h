// dllmain.h: объявление класса модуля.

class CATLComAppModule : public ATL::CAtlDllModuleT< CATLComAppModule >
{
public :
	DECLARE_LIBID(LIBID_ATLComAppLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLCOMAPP, "{66601755-7f85-4fb2-a132-d94e5a6c5744}")
};

extern class CATLComAppModule _AtlModule;
