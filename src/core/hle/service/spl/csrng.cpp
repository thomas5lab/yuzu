// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/service/spl/csrng.h"

namespace Service {
namespace SPL {

CSRNG::CSRNG(std::shared_ptr<Module> module) : Module::Interface(std::move(module), "csrng") {
    static const FunctionInfo functions[] = {
        {0, &CSRNG::GetRandomBytes, "GetRandomBytes"},
    };
    RegisterHandlers(functions);
}

} // namespace SPL
} // namespace Service