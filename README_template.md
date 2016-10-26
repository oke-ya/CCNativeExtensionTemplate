# CCNativeExtensionTemplate

## install

```
$ cd YOUR_APP_ROOT
$ git submodule add YOUR_REPOS_URL Vendor/CCNativeExtensionTemplate
```

## Settings for ios

### PATH settings

1. choose source tree root -> TARGET YOUR_APP-mobile -> Build Settings
1. Add  'Header' into search field.
1. Add '$(SRCROOT)/../Vendor/CCNativeExtensionTemplate/Classes' into 'Heade Search Paths'.

### link settings

1. choose source tree root -> TARGET YOUR_APP-mobile -> Build Phases -> Link Binary With Libraries
1. Add 'libCCNativeExtensionTemplate.a'


## Settings for Android

### Edit `proj.android-studio/settings.gradle`

```
include ':libcocos2dx'
project(':libcocos2dx').projectDir = new File(settingsDir, '../cocos2d/cocos/platform/android/libcocos2dx')
include 'native_extension_template'
project(':native_extension_template').projectDir = new File(settingsDir, '../Vendor/CCNativeExtensionTemplate/proj.android')
```

### Edit `proj.android-studio/app/build.gradle`

```
dependencies {
    compile fileTree(dir: 'libs', include: ['*.jar'])
    compile project(':libcocos2dx')
    compile project(':native_extension_template')
}
```

### Edit `proj.android-studio/app/jni/Android.mk`

```
LOCAL_SRC_FILES := hellocpp/main.cpp
LOCAL_SRC_FILES += $(shell find $(LOCAL_PATH)/../../../Vendor/CCNativeExtensionTemplate/Classes -name *.cpp)
LOCAL_SRC_FILES += $(shell find $(LOCAL_PATH)/../../../Vendor/CCNativeExtensionTemplate/proj.android -name *.cpp)


LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../../Vendor/CCNativeExtensionTemplate/Classes
```
