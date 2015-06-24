// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from primtypes.djinni

#pragma once

#include "assorted_primitives.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeAssortedPrimitives final {
public:
    using CppType = ::AssortedPrimitives;
    using JniType = jobject;

    using Boxed = NativeAssortedPrimitives;

    ~NativeAssortedPrimitives();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeAssortedPrimitives();
    friend ::djinni::JniClass<NativeAssortedPrimitives>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/AssortedPrimitives") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(ZBSIJFDLjava/lang/Boolean;Ljava/lang/Byte;Ljava/lang/Short;Ljava/lang/Integer;Ljava/lang/Long;Ljava/lang/Float;Ljava/lang/Double;)V") };
    const jfieldID field_mB { ::djinni::jniGetFieldID(clazz.get(), "mB", "Z") };
    const jfieldID field_mEight { ::djinni::jniGetFieldID(clazz.get(), "mEight", "B") };
    const jfieldID field_mSixteen { ::djinni::jniGetFieldID(clazz.get(), "mSixteen", "S") };
    const jfieldID field_mThirtytwo { ::djinni::jniGetFieldID(clazz.get(), "mThirtytwo", "I") };
    const jfieldID field_mSixtyfour { ::djinni::jniGetFieldID(clazz.get(), "mSixtyfour", "J") };
    const jfieldID field_mFthirtytwo { ::djinni::jniGetFieldID(clazz.get(), "mFthirtytwo", "F") };
    const jfieldID field_mFsixtyfour { ::djinni::jniGetFieldID(clazz.get(), "mFsixtyfour", "D") };
    const jfieldID field_mOB { ::djinni::jniGetFieldID(clazz.get(), "mOB", "Ljava/lang/Boolean;") };
    const jfieldID field_mOEight { ::djinni::jniGetFieldID(clazz.get(), "mOEight", "Ljava/lang/Byte;") };
    const jfieldID field_mOSixteen { ::djinni::jniGetFieldID(clazz.get(), "mOSixteen", "Ljava/lang/Short;") };
    const jfieldID field_mOThirtytwo { ::djinni::jniGetFieldID(clazz.get(), "mOThirtytwo", "Ljava/lang/Integer;") };
    const jfieldID field_mOSixtyfour { ::djinni::jniGetFieldID(clazz.get(), "mOSixtyfour", "Ljava/lang/Long;") };
    const jfieldID field_mOFthirtytwo { ::djinni::jniGetFieldID(clazz.get(), "mOFthirtytwo", "Ljava/lang/Float;") };
    const jfieldID field_mOFsixtyfour { ::djinni::jniGetFieldID(clazz.get(), "mOFsixtyfour", "Ljava/lang/Double;") };
};

}  // namespace djinni_generated