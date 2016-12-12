// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#pragma once

#include "RecordWithDerivings.h"
#include "record_with_nested_derivings.hpp"

namespace testsuite {

public ref class RecordWithNestedDerivings sealed : public Platform::Object {
public:
    property int32 Key;
    property RecordWithDerivings^ Rec;

    RecordWithNestedDerivings(int32 Key,
                              RecordWithDerivings^ Rec) {
        this->Key = Key;
        this->Rec = Rec;
    }
    RecordWithNestedDerivings() {}
internal:
    ::testsuite::RecordWithNestedDerivings toCpp();
    static RecordWithNestedDerivings^ fromCpp(const ::testsuite::RecordWithNestedDerivings& value);

    bool Equals(RecordWithNestedDerivings^ rhs);

    int32 CompareTo(RecordWithNestedDerivings^ rhs);
};

}  // namespace testsuite