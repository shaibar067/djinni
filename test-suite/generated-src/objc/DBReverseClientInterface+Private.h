// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from yaml-test.djinni

#include "reverse_client_interface.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class DBReverseClientInterface;

namespace djinni_generated {

class ReverseClientInterface
{
public:
    using CppType = std::shared_ptr<::ReverseClientInterface>;
    using CppOptType = std::shared_ptr<::ReverseClientInterface>;
    using ObjcType = DBReverseClientInterface*;

    using Boxed = ReverseClientInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

