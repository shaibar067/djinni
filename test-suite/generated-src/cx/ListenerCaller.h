// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

#pragma once

#include "FirstListener.h"
#include "SecondListener.h"
#include "listener_caller.hpp"
#include <memory>

namespace testsuite {

public ref class ListenerCaller sealed : public Platform::Object
{
public:
    static ListenerCaller^ Init (FirstListener^ firstL, SecondListener^ secondL);
    void CallFirst ();
    void CallSecond ();
internal:
    ListenerCaller(std::shared_ptr<::testsuite::ListenerCaller> cppRef) : _cppRef(cppRef) {}
    std::shared_ptr<::testsuite::ListenerCaller> cppRef() {return _cppRef;}
private:
    std::shared_ptr<::testsuite::ListenerCaller> _cppRef;
};

}  // namespace testsuite
