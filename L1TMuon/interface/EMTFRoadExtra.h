#ifndef __L1TMuon_EMTFRoadExtra_h__
#define __L1TMuon_EMTFRoadExtra_h__

#include "DataFormatsSep2016/L1TMuon/interface/EMTFRoad.h"


namespace L1TMuonEndCap {

  struct EMTFRoadExtra : public EMTFRoad {

    EMTFRoadExtra() : EMTFRoad() {}

  };  // class EMTFRoadExtra

  // Define a vector of EMTFRoadExtra
  typedef std::vector<EMTFRoadExtra> EMTFRoadExtraCollection;

}

#endif
