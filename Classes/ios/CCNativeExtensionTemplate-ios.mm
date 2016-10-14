//
//  CCNativeExtensionTemplate-ios.m
//  CCNativeExtensionTemplate
//
//  Created by Atsushi Yoshida on 2016/08/23.
//
//

#import <Foundation/Foundation.h>

#include "CCNativeExtensionTemplate-ios.h"

#include "cocos2d.h"
using namespace cocos2d;

namespace oke_ya{
    
NativeExtensionTemplate* NativeExtensionTemplate::getInstance()
{
    if (s_sharedNativeExtensionTemplate == nullptr)
    {
        s_sharedNativeExtensionTemplate = new (std::nothrow) NativeExtensionTemplateIos();
        if(!s_sharedNativeExtensionTemplate->init())
        {
            delete s_sharedNativeExtensionTemplate;
            s_sharedNativeExtensionTemplate = nullptr;
            CCLOG("ERROR: Could not init CCNativeExtensionTemplateIos");
        }
    }
    return s_sharedNativeExtensionTemplate;
}

void NativeExtensionTemplateIos::showAds() const
{
    log("NativeExtensionTemplate::showAds()");
}

}
