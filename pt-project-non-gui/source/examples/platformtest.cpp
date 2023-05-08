#include "platformtest.hpp"
#include "common.hpp"
#include <iostream>

using namespace std;

PlatformTest::PlatformTest()
{

}

void PlatformTest::getPlatformInfo() const noexcept
{
#if defined(PLATFORM_MAC)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_MAC << std::endl;
#elif defined(PLATFORM_WINDOWS)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_WINDOWS << std::endl;
#elif defined(PLATFORM_LINUX)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_LINUX << std::endl;
#elif defined(PLATFORM_FREEBSD)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_FREEBSD << std::endl;
#elif defined(PLATFORM_OPENBSD)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_OPENBSD << std::endl;
#elif defined(PLATFORM_VXWORKS)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_VXWORKS << std::endl;
#elif defined(PLATFORM_MOTOROLA)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_MOTOROLA << std::endl;
#elif defined(PLATFORM_ULTRIX)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_ULTRIX << std::endl;
#elif defined(PLATFORM_DOS)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_DOS << std::endl;
#elif defined(PLATFORM_WINDOWS_PHONE)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_WINDOWS_PHONE << std::endl;
#elif defined(PLATFORM_IOS_SIMULATOR)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_IOS_SIMULATOR << std::endl;
#elif defined(PLATFORM_IOS)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_IOS << std::endl;
#elif defined(PLATFORM_APPLE_TV)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_APPLE_TV << std::endl;
#elif defined(PLATFORM_IWATCH)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_IWATCH << std::endl;
#elif defined(PLATFORM_ANDROID)
    cout << "Device: " << PLATFORM_DEVICE << std::endl;
    cout << "Type: " << PLATFORM_TYPE << std::endl;
    cout << "Platform OS: " << PLATFORM_OS << std::endl;
    cout << "Platform Architecture: " << PLATFORM_ARCH << std::endl;
    cout << "OS Name: " << PLATFORM_ANDROID << std::endl;
#endif
}
