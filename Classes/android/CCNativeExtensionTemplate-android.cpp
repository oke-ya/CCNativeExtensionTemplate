#include "CCNativeExtensionTemplate-android.h"
#include "platform/android/jni/JniHelper.h"
#include "cocos2d.h"

using namespace cocos2d;

namespace oke_ya{


static const std::string helperClassName = "com/oke_ya/ccfirebase/CCNativeExtensionTemplate";

Firebase* Firebase::getInstance()
{
    if (s_sharedFirebase == nullptr)
    {
        s_sharedFirebase = new (std::nothrow) FirebaseAndroid();
        if(!s_sharedFirebase->init())
        {
            delete s_sharedFirebase;
            s_sharedFirebase = nullptr;
            CCLOG("ERROR: Could not init CCNativeExtensionTemplateAndroid");
        }
    }
    return s_sharedFirebase;
}

void FirebaseAndroid::showAds() const
{
    JniHelper::callStaticVoidMethod(helperClassName, "showAds");
}

}
