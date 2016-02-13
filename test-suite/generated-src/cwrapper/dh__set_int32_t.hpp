// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from set.djinni

#pragma once

#include <atomic>
#include <experimental/optional>
#include "set_record.hpp"
#ifdef __cplusplus
extern "C" {
#endif

#include "dh__set_int32_t.h"

#ifdef __cplusplus
}
#endif
struct DjinniSetInt32T {
    static djinni::Handle<DjinniObjectHandle> fromCpp(const std::unordered_set<int32_t> & dc);
    static std::unordered_set<int32_t> toCpp(djinni::Handle<DjinniObjectHandle> dh);
    static djinni::Handle<DjinniOptionalObjectHandle>fromCpp(std::experimental::optional<std::unordered_set<int32_t>> dc);
    static std::experimental::optional<std::unordered_set<int32_t>> toCpp(djinni::Handle<DjinniOptionalObjectHandle> dh);
};