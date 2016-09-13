#ifndef __L1TMuon_EMTFHitExtra_h__
#define __L1TMuon_EMTFHitExtra_h__

#include "DataFormatsSep2016/L1TMuon/interface/EMTFHit.h"


namespace L1TMuonEndCap {

  struct EMTFHitExtra : public EMTFHit {

    EMTFHitExtra() : EMTFHit() {}

  };  // class EMTFHitExtra

  // Define a vector of EMTFHitExtra
  typedef std::vector<EMTFHitExtra> EMTFHitExtraCollection;

}

#endif
