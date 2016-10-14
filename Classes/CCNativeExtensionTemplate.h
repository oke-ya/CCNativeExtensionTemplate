//
//  CCNativeExtensionTemplate.h
//  
//
//  Created by Atsushi Yoshida on 2016/08/23.
//
//

#ifndef CCNativeExtensionTemplate_h
#define CCNativeExtensionTemplate_h

namespace oke_ya{

class NativeExtensionTemplate
{
public:
    static NativeExtensionTemplate* getInstance();
    static NativeExtensionTemplate* s_sharedNativeExtensionTemplate;
    virtual bool init();
    virtual void showAds() const = 0;
};

}

#endif /* CCNativeExtensionTemplate_h */
