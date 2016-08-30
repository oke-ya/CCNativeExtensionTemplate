//
//  CCNativeExtensionTemplate-ios.h
//  CCNativeExtensionTemplate
//
//  Created by Atsushi Yoshida on 2016/08/23.
//
//

#ifndef CCNativeExtensionTemplate_ios_h
#define CCNativeExtensionTemplate_ios_h

#include <memory>
#include <string>
#include <vector>

#include "CCNativeExtensionTemplate.h"

namespace oke_ya{

class FirebaseIos : public Firebase
{
    virtual void showAds() const override;
};

}

#endif /* CCNativeExtensionTemplate_ios_h */
