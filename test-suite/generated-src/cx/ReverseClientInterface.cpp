// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#include "ReverseClientInterface.h"  // my header
#include "ClientReturnedRecord.h"
#include "translation.h"

namespace testsuite {

Platform::String^ ReverseClientInterface::ReturnStr ()
{
    try {
        auto cppRet = _cppRef->return_str();
        return transform<std::string, Platform::String^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Platform::String^ ReverseClientInterface::MethTakingInterface (ReverseClientInterface^ I)
{
    try {
        auto cppRet = _cppRef->meth_taking_interface(transform<std::shared_ptr<::testsuite::ReverseClientInterface>, ::testsuite::ReverseClientInterface^>()(I));
        return transform<std::string, Platform::String^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Platform::String^ ReverseClientInterface::MethTakingOptionalInterface (ReverseClientInterface^ I)
{
    try {
        auto cppRet = _cppRef->meth_taking_optional_interface(transform<std::shared_ptr<::testsuite::ReverseClientInterface>, ::testsuite::ReverseClientInterface^>()(I));
        return transform<std::string, Platform::String^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::Collections::IVector<ClientReturnedRecord^>^ ReverseClientInterface::MethTakingAndReturningRecordList (Windows::Foundation::Collections::IVector<ClientReturnedRecord^>^ Rl)
{
    try {
        auto cppRet = _cppRef->meth_taking_and_returning_record_list(transform<std::vector<::testsuite::ClientReturnedRecord>, Windows::Foundation::Collections::IVector<::testsuite::ClientReturnedRecord^>^>()(Rl));
        return transform<std::vector<::testsuite::ClientReturnedRecord>, Windows::Foundation::Collections::IVector<::testsuite::ClientReturnedRecord^>^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
ReverseClientInterface^ ReverseClientInterface::Create ()
{
    try {
        auto cppRet = ::testsuite::ReverseClientInterface::create();
        return transform<std::shared_ptr<::testsuite::ReverseClientInterface>, ::testsuite::ReverseClientInterface^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}

}  // namespace testsuite