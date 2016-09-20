#include "DataFormatsSep2016/L1TMuon/interface/EMTFPtLUTData.h"

#include <cassert>
#include <type_traits>
static_assert(std::is_trivial<L1TMuonEndCap::EMTFPtLUTData>::value, "EMTFPtLUTData is not trivial");  // no default constructor

