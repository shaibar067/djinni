// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from yaml-test.djinni

#include "ExternInterface1.h"  // my header
#include "ClientInterface.h"
#include "DBClientReturnedRecord.h"
#include "translation.h"

namespace testsuite {

ClientReturnedRecord^ ExternInterface1::Foo (ClientInterface^ I)
{
    try {
        auto cppRet = _cppRef->foo(transform<std::shared_ptr<::testsuite::ClientInterface>, ::testsuite::ClientInterface^>()(I));
        return transform<::testsuite::ClientReturnedRecord, ::testsuite::ClientReturnedRecord^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
ClientReturnedRecord^ ExternInterface1::MethTakingRecordList (Windows::Foundation::Collections::IVector<ClientReturnedRecord^>^ Lr)
{
    try {
        auto cppRet = _cppRef->meth_taking_record_list(transform<std::vector<::testsuite::ClientReturnedRecord>, Windows::Foundation::Collections::IVector<::testsuite::ClientReturnedRecord^>^>()(Lr));
        return transform<::testsuite::ClientReturnedRecord, ::testsuite::ClientReturnedRecord^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::Collections::IVector<ClientReturnedRecord^>^ ExternInterface1::MethReturningRecordList (ClientReturnedRecord^ R)
{
    try {
        auto cppRet = _cppRef->meth_returning_record_list(transform<::testsuite::ClientReturnedRecord, ::testsuite::ClientReturnedRecord^>()(R));
        return transform<std::vector<::testsuite::ClientReturnedRecord>, Windows::Foundation::Collections::IVector<::testsuite::ClientReturnedRecord^>^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}

}  // namespace testsuite
