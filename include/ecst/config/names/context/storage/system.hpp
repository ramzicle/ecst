// Copyright (c) 2015-2016 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0
// http://vittorioromeo.info | vittorio.romeo@outlook.com

#pragma once

#include <ecst/config/names/context/storage/storage.hpp>

#define ECST_IMPL_CONTEXT_STORAGE_SYSTEM_NAMESPACE \
    ECST_CONTEXT_STORAGE_NAMESPACE                 \
    {                                              \
    namespace system

#define ECST_IMPL_CONTEXT_STORAGE_SYSTEM_NAMESPACE_END \
    }                                                  \
    ECST_CONTEXT_STORAGE_NAMESPACE_END

/// @macro Opens the `ecst::context::storage::system` namespace.
#define ECST_CONTEXT_STORAGE_SYSTEM_NAMESPACE \
    ECST_IMPL_CONTEXT_STORAGE_SYSTEM_NAMESPACE

/// @macro Closes the `ecst::context::storage::system` namespace.
#define ECST_CONTEXT_STORAGE_SYSTEM_NAMESPACE_END \
    ECST_IMPL_CONTEXT_STORAGE_SYSTEM_NAMESPACE_END
