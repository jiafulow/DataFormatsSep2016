#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/RefToBase.h"

#include "DataFormatsSep2016/L1TMuon/interface/EMTFTrack.h"
#include "DataFormatsSep2016/L1TMuon/interface/EMTFHit.h"
#include "DataFormatsSep2016/L1TMuon/interface/EMTFRoad.h"
#include "DataFormatsSep2016/L1TMuon/interface/EMTFTrackExtra.h"
#include "DataFormatsSep2016/L1TMuon/interface/EMTFHitExtra.h"
#include "DataFormatsSep2016/L1TMuon/interface/EMTFRoadExtra.h"

namespace {
  struct dictionary {
    L1TMuonEndCap::EMTFTrackCollection emtfTrack;
    edm::Wrapper<L1TMuonEndCap::EMTFTrackCollection> emtfTrackWrap;

    L1TMuonEndCap::EMTFHitCollection emtfHit;
    edm::Wrapper<L1TMuonEndCap::EMTFHitCollection> emtfHitWrap;

    L1TMuonEndCap::EMTFRoadCollection emtfRoad;
    edm::Wrapper<L1TMuonEndCap::EMTFRoadCollection> emtfRoadWrap;

    L1TMuonEndCap::EMTFTrackExtraCollection emtfTrackExtra;
    edm::Wrapper<L1TMuonEndCap::EMTFTrackExtraCollection> emtfTrackExtraWrap;

    L1TMuonEndCap::EMTFHitExtraCollection emtfHitExtra;
    edm::Wrapper<L1TMuonEndCap::EMTFHitExtraCollection> emtfHitExtraWrap;

    L1TMuonEndCap::EMTFRoadExtraCollection emtfRoadExtra;
    edm::Wrapper<L1TMuonEndCap::EMTFRoadExtraCollection> emtfRoadExtraWrap;
  };
}

