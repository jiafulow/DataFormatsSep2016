// Class for muon tracks in EMTF - AWB 04.01.16
// Mostly copied from L1Trigger/L1TMuonEndCap/interface/MuonInternalTrack.h

#ifndef __l1t_EMTFTrack_h__
#define __l1t_EMTFTrack_h__

#include <vector>
#include <boost/cstdint.hpp>

#include "DataFormats/GeometryVector/interface/Pi.h"
#include "DataFormats/L1TMuon/interface/EMTFHit.h"
#include "DataFormats/L1TMuon/interface/EMTFRoad.h"
#include "DataFormats/L1TMuon/interface/EMTF/SP.h"
#include "DataFormats/L1TMuon/interface/RegionalMuonCand.h"

namespace l1t {

  struct EMTFPtLUT {
    uint64_t address;
    uint16_t mode;
    uint16_t theta;
    uint16_t eta;
    uint16_t delta_ph [6]; // index: 0=12, 1=13, 2=14, 3=23, 4=24, 5=34
    uint16_t delta_th [6]; // ^
    uint16_t sign_ph  [6]; // ^
    uint16_t sign_th  [6]; // ^
    uint16_t cpattern [4]; // index: 0=ME1, 1=ME2, 2=ME3, 3=ME4
    uint16_t fr       [4]; // ^
    uint16_t bt_vi    [5]; // index: 0=ME1sub1, 1=ME1sub2, 2=ME2, 3=ME3, 4=ME4
    uint16_t bt_hi    [5]; // ^
    uint16_t bt_ci    [5]; // ^
    uint16_t bt_si    [5]; // ^
  };


  class EMTFTrack {
  public:

    EMTFTrack() :
        endcap(-99), sector(-99), sector_idx(-99), mode(-99), mode_inv(-99),
        rank(-99), winner(-99), charge(-99), bx(-99), first_bx(-99), second_bx(-99),
        pt(-99), pt_XML(-99), zone(-99), ph_num(-99), ph_q(-99),
        theta_fp(-99), theta(-99), eta(-99), phi_fp(-99), phi_loc(-99), phi_glob(-99),
        track_num(-99), has_neighbor(-99), all_neighbor(-99), numHits(-99)
        {};

    virtual ~EMTFTrack() {};

    void ImportSP( const emtf::SP _SP, int _sector );
    // void ImportPtLUT( int _mode, unsigned long _address );

    void set_Hits(EMTFHitCollection bits)   { _Hits = bits;            numHits = _Hits.size();   }
    void push_Hit(EMTFHit bits)             { _Hits.push_back(bits);   numHits = _Hits.size();   }
    void clear_Hits()                       { _Hits.clear();           numHits = _Hits.size();   }
    void set_HitIdx(std::vector<uint> bits) { _HitIdx = bits;          }
    void push_HitIdx(uint bits)             { _HitIdx.push_back(bits); }
    void clear_HitIdx()                     { _HitIdx.clear();         }

    int NumHits              () const { return numHits; }
    EMTFHitCollection Hits   () const { return _Hits;   }
    std::vector<uint> HitIdx () const { return _HitIdx; }

    void set_Road(EMTFRoad bits) { _Road    = bits; }
    void set_RoadIdx(uint bits)  { _RoadIdx = bits; }
    EMTFRoad Road       () const { return _Road;    }
    uint RoadIdx        () const { return _RoadIdx; }

    void set_PtLUT(EMTFPtLUT bits)     { _PtLUT = bits; }
    EMTFPtLUT PtLUT           () const { return _PtLUT; }

    void set_GMT(RegionalMuonCand bits) { _GMT = bits;    }
    void set_GMTIdx(uint bits)          { _GMTIdx = bits; }
    RegionalMuonCand GMT       () const { return _GMT;    }
    uint GMTIdx                () const { return _GMTIdx; }


    void set_endcap       (int  bits) { endcap       = bits; }
    void set_sector       (int  bits) { sector       = bits; }
    void set_sector_idx   (int  bits) { sector_idx   = bits; }
    void set_mode         (int  bits) { mode         = bits; }
    void set_mode_inv     (int  bits) { mode_inv     = bits; }
    void set_rank         (int  bits) { rank         = bits; }
    void set_winner       (int  bits) { winner       = bits; }
    void set_charge       (int  bits) { charge       = bits; }
    void set_bx           (int  bits) { bx           = bits; }
    void set_first_bx     (int  bits) { first_bx     = bits; }
    void set_second_bx    (int  bits) { second_bx    = bits; }
    void set_pt           (float val) { pt           = val;  }
    void set_pt_XML       (float val) { pt_XML       = val;  }
    void set_zone         (int  bits) { zone         = bits; }
    void set_ph_num       (int  bits) { ph_num       = bits; }
    void set_ph_q         (int  bits) { ph_q         = bits; }
    void set_theta_fp     (int  bits) { theta_fp     = bits; }
    void set_theta        (float val) { theta        = val;  }
    void set_eta          (float val) { eta          = val;  }
    void set_phi_fp       (int  bits) { phi_fp       = bits; }
    void set_phi_loc      (float val) { phi_loc      = val;  }
    void set_phi_glob     (float val) { (val < 180) ? phi_glob     = val : phi_glob     = val - 360; }
    void set_track_num    (int  bits) { track_num    = bits; }
    void set_has_neighbor (int  bits) { has_neighbor = bits; }
    void set_all_neighbor (int  bits) { all_neighbor = bits; }


    int   Endcap       () const { return endcap      ; }
    int   Sector       () const { return sector      ; }
    int   Sector_idx   () const { return sector_idx  ; }
    int   Mode         () const { return mode        ; }
    int   Mode_inv     () const { return mode_inv    ; }
    int   Rank         () const { return rank        ; }
    int   Winner       () const { return winner      ; }
    int   Charge       () const { return charge      ; }
    int   BX           () const { return bx          ; }
    int   First_BX     () const { return first_bx    ; }
    int   Second_BX    () const { return second_bx   ; }
    float Pt           () const { return pt          ; }
    float Pt_XML       () const { return pt_XML      ; }
    int   Zone         () const { return zone        ; }
    int   Ph_num       () const { return ph_num      ; }
    int   Ph_q         () const { return ph_q        ; }
    int   Theta_fp     () const { return theta_fp    ; }
    float Theta        () const { return theta       ; }
    float Eta          () const { return eta         ; }
    int   Phi_fp       () const { return phi_fp      ; }
    float Phi_loc      () const { return phi_loc     ; }
    float Phi_glob     () const { return phi_glob    ; }
    int   Track_num    () const { return track_num   ; }
    int   Has_neighbor () const { return has_neighbor; }
    int   All_neighbor () const { return all_neighbor; }


  private:

    EMTFHitCollection _Hits;
    std::vector<uint>  _HitIdx;

    EMTFRoad _Road;
    uint     _RoadIdx;

    EMTFPtLUT _PtLUT;

    RegionalMuonCand _GMT;
    uint             _GMTIdx;

    int   endcap      ; //    +/-1.  For ME+ and ME-.
    int   sector      ; //  1 -  6.
    int   sector_idx  ; //  0 - 11.  0 - 5 for ME+, 6 - 11 for ME-.
    int   mode        ; //  0 - 15.
    int   mode_inv    ; // 15 -  0.
    int   rank        ; //  0 - 127  (Range? - AWB 03.03.17)
    int   winner      ; //  0 -  2.  (Range? - AWB 03.03.17)
    int   charge      ; //    +/-1.  For physical charge (reversed from GMT convention)
    int   bx          ; // -3 - +3.
    int   first_bx    ; // -3 - +3.
    int   second_bx   ; // -3 - +3.
    float pt          ; //  0 - 255
    float pt_XML      ; //  0 - 999
    int   zone        ; //  0 -  3.
    int   ph_num      ;
    int   ph_q        ;
    int   theta_fp    ; //  0 - 127
    float theta       ; //  0 - 90.
    float eta         ; //  +/-2.5.
    int   phi_fp      ; // 0 - 4920
    float phi_loc     ; // -22 - 60  (Range? - AWB 03.03.17)
    float phi_glob    ; //  +/-180.
    int   track_num   ; //  0 - ??.  (Range? - AWB 03.03.17)
    int   has_neighbor; //  0 or 1.
    int   all_neighbor; //  0 or 1.
    int   numHits     ; //  1 -  4.

  }; // End of class EMTFTrack

  // Define a vector of EMTFTrack
  typedef std::vector<EMTFTrack> EMTFTrackCollection;

} // End of namespace l1t

#endif /* define __l1t_EMTFTrack_h__ */
