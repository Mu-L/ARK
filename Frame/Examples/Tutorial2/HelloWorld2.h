// -------------------------------------------------------------------------
//    @FileName			:    HelloWorld2.h
//    @Author           :    Ark Game Tech
//    @Date             :    2014-05-14 08:51
//    @Module           :   HelloWorld2
//
// -------------------------------------------------------------------------

#ifndef NFC_HELLO_WORLD2_H
#define NFC_HELLO_WORLD2_H

#include "SDK/Interface/NFIPlugin.h"
#include "SDK/Interface/NFIPluginManager.h"

class HelloWorld2
    : public NFIModule
{
public:
    HelloWorld2(NFIPluginManager* p)
    {
        pPluginManager = p;
    }

    virtual bool Init();
    virtual bool AfterInit();

    virtual bool Execute();

    virtual bool BeforeShut();
    virtual bool Shut();

protected:
    int OnPropertyCallBackEvent(const AFGUID& self, const std::string& strProperty, const AFDataList::TData& oldVarList, const AFDataList::TData& newVarList);



};

#endif
