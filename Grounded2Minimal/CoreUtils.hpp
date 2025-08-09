#ifndef _GROUNDED2_MINIMAL_CORE_UTILS_HPP
#define _GROUNDED2_MINIMAL_CORE_UTILS_HPP

#include <string>

namespace CoreUtils {
    std::string HexConvert(
        const uint64_t uValue
    );

    bool StringContainsCaseInsensitive(
        const std::string& szHaystack,
        const std::string& szNeedle
    );

    bool WideStringToUtf8(
        const std::wstring& szWideString,
        std::string &szUtf8String
    );

    bool Utf8ToWideString(
        const std::string& szUtf8String,
        std::wstring &szWideString
    );

    bool GetVersionFromResource(
        VersionInfo& versionInfo
    );
} // namespace CoreUtils

#endif // _GROUNDED_MINIMAL_CORE_UTILS_HPP