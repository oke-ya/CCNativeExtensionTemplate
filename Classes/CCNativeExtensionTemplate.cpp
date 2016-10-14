//
//  CCNativeExtensionTemplate.cpp
//  CCNativeExtensionTemplate
//
//  Created by Atsushi Yoshida on 2016/08/23.
//
//

#include "CCNativeExtensionTemplate.h"

namespace oke_ya{

NativeExtensionTemplate* NativeExtensionTemplate::s_sharedNativeExtensionTemplate = nullptr;

bool NativeExtensionTemplate::init()
{
    return true;
}

}