// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#include "ConflictUser.h"  // my header
#include "Conflict.h"
#include "translation.h"

namespace testsuite {

Conflict^ ConflictUser::Conflict ()
{
    try {
        auto cppRet = _cppRef->Conflict();
        return transform<std::shared_ptr<::testsuite::Conflict>, ::testsuite::Conflict^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
bool ConflictUser::ConflictArg (Windows::Foundation::Collections::IIterable<Conflict^>^ cs)
{
    try {
        auto cppRet = _cppRef->conflict_arg(transform<std::unordered_set<std::shared_ptr<::testsuite::Conflict>>, Windows::Foundation::Collections::IIterable<::testsuite::Conflict^>^>()(cs));
        return cppRet;
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}

}  // namespace testsuite
