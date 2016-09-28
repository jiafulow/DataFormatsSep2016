#ifndef __L1TMuon_EMTFTrackExtra_h__
#define __L1TMuon_EMTFTrackExtra_h__

#include <cstdint>
#include <vector>
#include <array>

#include "DataFormatsSep2016/L1TMuon/interface/EMTFHitExtra.h"
#include "DataFormatsSep2016/L1TMuon/interface/EMTFRoadExtra.h"
#include "DataFormatsSep2016/L1TMuon/interface/EMTFPtLUTData.h"


namespace L1TMuonEndCap {

  struct EMTFTrackExtra {

    EMTFTrackExtra() : endcap(0), sector(0), bx(0), first_bx(0), second_bx(0),
                       zone(0),
                       rank(0), winner(0), mode(0), mode_inv(0),
                       phi_int(0), theta_int(0),
                       ptlut_address(0),
                       pt(0.), pt_xml(0.),
                       gmt_pt(0), gmt_phi(0), gmt_eta(0), gmt_quality(0), gmt_charge(0), gmt_charge_valid(0),
                       ptlut_data(),
                       xroad(),
                       num_xhits(0),
                       xhits(), xhits_ph_diff()
                       {}

    // DetId
    int16_t endcap;
    int16_t sector;

    // BX
    int16_t bx;
    int16_t first_bx;
    int16_t second_bx;

    // Zone
    uint16_t zone;

    // Rank
    uint16_t rank;
    uint16_t winner;  // 0: first winner, 1: second winner, ...

    // Mode
    uint16_t mode;
    uint16_t mode_inv;

    // phi, theta
    uint16_t phi_int;
    uint16_t theta_int;

    // pT LUT address
    uint64_t ptlut_address;

    // pT LUT output
    float    pt;
    float    pt_xml;

    // GMT
    int32_t gmt_pt;
    int32_t gmt_phi;
    int32_t gmt_eta;
    int32_t gmt_quality;
    int32_t gmt_charge;
    int32_t gmt_charge_valid;

    // pT LUT data
    EMTFPtLUTData ptlut_data;

    // Road
    EMTFRoadExtra xroad;

    // Number of hits
    uint16_t num_xhits;

    // Hits
    std::vector<EMTFHitExtra> xhits;
    std::vector<uint16_t>     xhits_ph_diff;

  };  // class EMTFTrackExtra

  // Define a vector of EMTFTrackExtra
  typedef std::vector<EMTFTrackExtra> EMTFTrackExtraCollection;

}

#endif
