#ifndef __L1TMuon_EMTFTrackExtra_h__
#define __L1TMuon_EMTFTrackExtra_h__

#include "DataFormatsSep2016/L1TMuon/interface/EMTFTrack.h"

#include "DataFormatsSep2016/L1TMuon/interface/EMTFHitExtra.h"
#include "DataFormatsSep2016/L1TMuon/interface/EMTFRoadExtra.h"


namespace L1TMuonEndCap {

  struct EMTFTrackExtra : public EMTFTrack {

    EMTFTrackExtra() : EMTFTrack(),
                       num_xhits(0),
                       xroad(),
                       xhits(), xhits_ph_diff(), xhits_valid()
                       {}

    // Number of hits
    uint16_t num_xhits;

    // Road
    EMTFRoadExtra xroad;

    // Hits
    std::vector<EMTFHitExtra> xhits;
    std::vector<int>          xhits_ph_diff;
    std::vector<bool>         xhits_valid;

  };  // class EMTFTrackExtra

  // Define a vector of EMTFTrackExtra
  typedef std::vector<EMTFTrackExtra> EMTFTrackExtraCollection;

}

#endif
