#include "DataFormatsSep2016/L1TMuon/interface/EMTFHit.h"

#include <cassert>
#include <type_traits>
static_assert(std::is_trivially_copyable<L1TMuonEndCap::EMTFHit>::value, "EMTFHit is not trivially copyable");

