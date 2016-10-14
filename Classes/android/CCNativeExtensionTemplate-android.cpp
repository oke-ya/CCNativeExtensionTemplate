#include "CCNativeExtensionTemplate-android.h"
#include "platform/android/jni/JniHelper.h"
#include "cocos2d.h"

using namespace cocos2d;

namespace oke_ya{


static const std::string helperClassName = "com/oke_ya/ccnatie_extension_template/CCNativeExtensionTemplate";

NativeExtensionTemplate* NativeExtensionTemplate::getInstance()
{
    if (s_sharedNativeExtensionTemplate == nullptr)
    {
        s_sharedNativeExtensionTemplate = new (std::nothrow) NativeExtensionTemplateAndroid();
        if(!s_sharedNativeExtensionTemplate->init())
        {
            delete s_sharedNativeExtensionTemplate;
            s_sharedNativeExtensionTemplate = nullptr;
            CCLOG("ERROR: Could not init CCNativeExtensionTemplateAndroid");
        }
    }
    return s_sharedNativeExtensionTemplate;
}

void NativeExtensionTemplateAndroid::showAds() const
{
    JniHelper::callStaticVoidMethod(helperClassName, "showAds");
}

}
