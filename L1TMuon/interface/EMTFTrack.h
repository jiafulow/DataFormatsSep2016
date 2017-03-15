// Class for muon tracks in EMTF - AWB 04.01.16
// Mostly copied from L1Trigger/L1TMuonEndCap/interface/MuonInternalTrack.h

#ifndef __l1t_EMTFTrack_h__
#define __l1t_EMTFTrack_h__

#include <vector>
#include <boost/cstdint.hpp>
 
#include "DataFormats/GeometryVector/interface/Pi.h"
#include "DataFormats/L1TMuon/interface/EMTFHit.h"
#include "DataFormats/L1TMuon/interface/EMTF/SP.h"


namespace l1t {

  struct EMTFPtLUT {
    unsigned long address;
    uint16_t mode;
    uint16_t theta;
    uint16_t eta;
    uint16_t delta_ph  [6]; // index: 0=12, 1=13, 2=14, 3=23, 4=24, 5=34
    uint16_t delta_th  [6]; // ^
    uint16_t sign_ph   [6]; // ^
    uint16_t sign_th   [6]; // ^
    uint16_t cpattern  [4]; // index: 0=ME1, 1=ME2, 2=ME3, 3=ME4
    uint16_t fr        [4]; // ^
    uint16_t bt_vi     [5]; // index: 0=ME1sub1, 1=ME1sub2, 2=ME2, 3=ME3, 4=ME4
    uint16_t bt_hi     [5]; // ^
    uint16_t bt_ci     [5]; // ^
    uint16_t bt_si     [5]; // ^
  };

  class EMTFTrack {
  public:

    EMTFTrackExtra() : endcap(0), sector(0), bx(0), first_bx(0), second_bx(0),
                       zone(0), ph_num(0), ph_q(0),
                       rank(0), winner(0), track_num(0), mode(0), mode_inv(0),
                       phi_int(0), theta_int(0),
                       ptlut_address(0),
                       gmt_pt(0), gmt_phi(0), gmt_eta(0), gmt_quality(0), gmt_charge(0), gmt_charge_valid(0),
                       pt(0.), xmlpt(0.),
                       ptlut_data(),
                       xhits()
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

    // Phi pattern
    uint16_t ph_num;
    uint16_t ph_q;

    // Rank
    uint16_t rank;
    uint16_t winner;  // 0: first winner, 1: second winner, ...
    uint16_t track_num;  // the final position after removing invalid tracks and ghosts

    // Mode
    uint16_t mode;
    uint16_t mode_inv;

    // phi, theta
    uint16_t phi_int;
    uint16_t theta_int;

    // pT LUT address
    uint64_t ptlut_address;

    // GMT
    int32_t gmt_pt;
    int32_t gmt_phi;
    int32_t gmt_eta;
    int32_t gmt_quality;
    int32_t gmt_charge;
    int32_t gmt_charge_valid;

    // pT from XML
    float    pt;
    float    xmlpt;

    // pT LUT data
    EMTFPtLUTData ptlut_data;

    // Hits
    std::vector<EMTFHitExtra> xhits;

  }; // End of class EMTFTrack
  
  // Define a vector of EMTFTrack
  typedef std::vector<EMTFTrack> EMTFTrackCollection;
  
} // End of namespace l1t

#endif /* define __l1t_EMTFTrack_h__ */
