//
//  CCNativeExtensionTemplate-android.h
//  CCNativeExtensionTemplate
//
//  Created by Atsushi Yoshida on 2016/08/23.
//
//

#ifndef CCNativeExtensionTemplate_android_h
#define CCNativeExtensionTemplate_android_h

#include <memory>
#include <string>
#include <vector>

#include "CCNativeExtensionTemplate.h"

namespace oke_ya{

class NativeExtensionTemplateAndroid : public NativeExtensionTemplate
{
    virtual void showAds() const override;
};

}

#endif /* CCNativeExtensionTemplate_android_h */
