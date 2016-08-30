//
//  CCNativeExtensionTemplate.cpp
//  CCNativeExtensionTemplate
//
//  Created by Atsushi Yoshida on 2016/08/23.
//
//

#include "CCNativeExtensionTemplate.h"

namespace oke_ya{

Firebase* Firebase::s_sharedFirebase = nullptr;

bool Firebase::init()
{
    return true;
}

}