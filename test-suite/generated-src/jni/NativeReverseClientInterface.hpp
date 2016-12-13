// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from yaml-test.djinni

#pragma once

#include "djinni_support.hpp"
#include "reverse_client_interface.hpp"

namespace djinni_generated {

class NativeReverseClientInterface final : ::djinni::JniInterface<::ReverseClientInterface, NativeReverseClientInterface> {
public:
    using CppType = std::shared_ptr<::ReverseClientInterface>;
    using CppOptType = std::shared_ptr<::ReverseClientInterface>;
    using JniType = jobject;

    using Boxed = NativeReverseClientInterface;

    ~NativeReverseClientInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeReverseClientInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeReverseClientInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeReverseClientInterface();
    friend ::djinni::JniClass<NativeReverseClientInterface>;
    friend ::djinni::JniInterface<::ReverseClientInterface, NativeReverseClientInterface>;

};

}  // namespace djinni_generated
