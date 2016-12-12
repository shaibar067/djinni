// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#pragma once

#include "ClientReturnedRecord.h"
#include "reverse_client_interface.hpp"
#include <memory>

namespace testsuite {

public ref class ReverseClientInterface sealed : public Platform::Object
{
public:
    Platform::String^ ReturnStr ();
    Platform::String^ MethTakingInterface (ReverseClientInterface^ I);
    Platform::String^ MethTakingOptionalInterface (ReverseClientInterface^ I);
    Windows::Foundation::Collections::IVector<ClientReturnedRecord^>^ MethTakingAndReturningRecordList (Windows::Foundation::Collections::IVector<ClientReturnedRecord^>^ Rl);
    static ReverseClientInterface^ Create ();
internal:
    ReverseClientInterface(std::shared_ptr<::testsuite::ReverseClientInterface> cppRef) : _cppRef(cppRef) {}
    std::shared_ptr<::testsuite::ReverseClientInterface> cppRef() {return _cppRef;}
private:
    std::shared_ptr<::testsuite::ReverseClientInterface> _cppRef;
};

}  // namespace testsuite