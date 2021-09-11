// Generated by gencpp from file ublox_msgs/CfgNAV5.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_CFGNAV5_H
#define UBLOX_MSGS_MESSAGE_CFGNAV5_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ublox_msgs
{
template <class ContainerAllocator>
struct CfgNAV5_
{
  typedef CfgNAV5_<ContainerAllocator> Type;

  CfgNAV5_()
    : mask(0)
    , dynModel(0)
    , fixMode(0)
    , fixedAlt(0)
    , fixedAltVar(0)
    , minElev(0)
    , drLimit(0)
    , pDop(0)
    , tDop(0)
    , pAcc(0)
    , tAcc(0)
    , staticHoldThresh(0)
    , dgnssTimeOut(0)
    , cnoThreshNumSvs(0)
    , cnoThresh(0)
    , reserved1()
    , staticHoldMaxDist(0)
    , utcStandard(0)
    , reserved2()  {
      reserved1.assign(0);

      reserved2.assign(0);
  }
  CfgNAV5_(const ContainerAllocator& _alloc)
    : mask(0)
    , dynModel(0)
    , fixMode(0)
    , fixedAlt(0)
    , fixedAltVar(0)
    , minElev(0)
    , drLimit(0)
    , pDop(0)
    , tDop(0)
    , pAcc(0)
    , tAcc(0)
    , staticHoldThresh(0)
    , dgnssTimeOut(0)
    , cnoThreshNumSvs(0)
    , cnoThresh(0)
    , reserved1()
    , staticHoldMaxDist(0)
    , utcStandard(0)
    , reserved2()  {
  (void)_alloc;
      reserved1.assign(0);

      reserved2.assign(0);
  }



   typedef uint16_t _mask_type;
  _mask_type mask;

   typedef uint8_t _dynModel_type;
  _dynModel_type dynModel;

   typedef uint8_t _fixMode_type;
  _fixMode_type fixMode;

   typedef int32_t _fixedAlt_type;
  _fixedAlt_type fixedAlt;

   typedef uint32_t _fixedAltVar_type;
  _fixedAltVar_type fixedAltVar;

   typedef int8_t _minElev_type;
  _minElev_type minElev;

   typedef uint8_t _drLimit_type;
  _drLimit_type drLimit;

   typedef uint16_t _pDop_type;
  _pDop_type pDop;

   typedef uint16_t _tDop_type;
  _tDop_type tDop;

   typedef uint16_t _pAcc_type;
  _pAcc_type pAcc;

   typedef uint16_t _tAcc_type;
  _tAcc_type tAcc;

   typedef uint8_t _staticHoldThresh_type;
  _staticHoldThresh_type staticHoldThresh;

   typedef uint8_t _dgnssTimeOut_type;
  _dgnssTimeOut_type dgnssTimeOut;

   typedef uint8_t _cnoThreshNumSvs_type;
  _cnoThreshNumSvs_type cnoThreshNumSvs;

   typedef uint8_t _cnoThresh_type;
  _cnoThresh_type cnoThresh;

   typedef boost::array<uint8_t, 2>  _reserved1_type;
  _reserved1_type reserved1;

   typedef uint16_t _staticHoldMaxDist_type;
  _staticHoldMaxDist_type staticHoldMaxDist;

   typedef uint8_t _utcStandard_type;
  _utcStandard_type utcStandard;

   typedef boost::array<uint8_t, 5>  _reserved2_type;
  _reserved2_type reserved2;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CLASS_ID)
  #undef CLASS_ID
#endif
#if defined(_WIN32) && defined(MESSAGE_ID)
  #undef MESSAGE_ID
#endif
#if defined(_WIN32) && defined(MASK_DYN)
  #undef MASK_DYN
#endif
#if defined(_WIN32) && defined(MASK_MIN_EL)
  #undef MASK_MIN_EL
#endif
#if defined(_WIN32) && defined(MASK_FIX_MODE)
  #undef MASK_FIX_MODE
#endif
#if defined(_WIN32) && defined(MASK_DR_LIM)
  #undef MASK_DR_LIM
#endif
#if defined(_WIN32) && defined(MASK_POS_MASK)
  #undef MASK_POS_MASK
#endif
#if defined(_WIN32) && defined(MASK_TIME_MASK)
  #undef MASK_TIME_MASK
#endif
#if defined(_WIN32) && defined(MASK_STATIC_HOLD_MASK)
  #undef MASK_STATIC_HOLD_MASK
#endif
#if defined(_WIN32) && defined(MASK_DGPS_MASK)
  #undef MASK_DGPS_MASK
#endif
#if defined(_WIN32) && defined(MASK_CNO)
  #undef MASK_CNO
#endif
#if defined(_WIN32) && defined(MASK_UTC)
  #undef MASK_UTC
#endif
#if defined(_WIN32) && defined(DYN_MODEL_PORTABLE)
  #undef DYN_MODEL_PORTABLE
#endif
#if defined(_WIN32) && defined(DYN_MODEL_STATIONARY)
  #undef DYN_MODEL_STATIONARY
#endif
#if defined(_WIN32) && defined(DYN_MODEL_PEDESTRIAN)
  #undef DYN_MODEL_PEDESTRIAN
#endif
#if defined(_WIN32) && defined(DYN_MODEL_AUTOMOTIVE)
  #undef DYN_MODEL_AUTOMOTIVE
#endif
#if defined(_WIN32) && defined(DYN_MODEL_SEA)
  #undef DYN_MODEL_SEA
#endif
#if defined(_WIN32) && defined(DYN_MODEL_AIRBORNE_1G)
  #undef DYN_MODEL_AIRBORNE_1G
#endif
#if defined(_WIN32) && defined(DYN_MODEL_AIRBORNE_2G)
  #undef DYN_MODEL_AIRBORNE_2G
#endif
#if defined(_WIN32) && defined(DYN_MODEL_AIRBORNE_4G)
  #undef DYN_MODEL_AIRBORNE_4G
#endif
#if defined(_WIN32) && defined(DYN_MODEL_WRIST_WATCH)
  #undef DYN_MODEL_WRIST_WATCH
#endif
#if defined(_WIN32) && defined(FIX_MODE_2D_ONLY)
  #undef FIX_MODE_2D_ONLY
#endif
#if defined(_WIN32) && defined(FIX_MODE_3D_ONLY)
  #undef FIX_MODE_3D_ONLY
#endif
#if defined(_WIN32) && defined(FIX_MODE_AUTO)
  #undef FIX_MODE_AUTO
#endif
#if defined(_WIN32) && defined(UTC_STANDARD_AUTOMATIC)
  #undef UTC_STANDARD_AUTOMATIC
#endif
#if defined(_WIN32) && defined(UTC_STANDARD_GPS)
  #undef UTC_STANDARD_GPS
#endif
#if defined(_WIN32) && defined(UTC_STANDARD_GLONASS)
  #undef UTC_STANDARD_GLONASS
#endif
#if defined(_WIN32) && defined(UTC_STANDARD_BEIDOU)
  #undef UTC_STANDARD_BEIDOU
#endif

  enum {
    CLASS_ID = 6u,
    MESSAGE_ID = 36u,
    MASK_DYN = 1u,
    MASK_MIN_EL = 2u,
    MASK_FIX_MODE = 4u,
    MASK_DR_LIM = 8u,
    MASK_POS_MASK = 16u,
    MASK_TIME_MASK = 32u,
    MASK_STATIC_HOLD_MASK = 64u,
    MASK_DGPS_MASK = 128u,
    MASK_CNO = 256u,
    MASK_UTC = 1024u,
    DYN_MODEL_PORTABLE = 0u,
    DYN_MODEL_STATIONARY = 2u,
    DYN_MODEL_PEDESTRIAN = 3u,
    DYN_MODEL_AUTOMOTIVE = 4u,
    DYN_MODEL_SEA = 5u,
    DYN_MODEL_AIRBORNE_1G = 6u,
    DYN_MODEL_AIRBORNE_2G = 7u,
    DYN_MODEL_AIRBORNE_4G = 8u,
    DYN_MODEL_WRIST_WATCH = 9u,
    FIX_MODE_2D_ONLY = 1u,
    FIX_MODE_3D_ONLY = 2u,
    FIX_MODE_AUTO = 3u,
    UTC_STANDARD_AUTOMATIC = 0u,
    UTC_STANDARD_GPS = 3u,
    UTC_STANDARD_GLONASS = 6u,
    UTC_STANDARD_BEIDOU = 7u,
  };


  typedef boost::shared_ptr< ::ublox_msgs::CfgNAV5_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::CfgNAV5_<ContainerAllocator> const> ConstPtr;

}; // struct CfgNAV5_

typedef ::ublox_msgs::CfgNAV5_<std::allocator<void> > CfgNAV5;

typedef boost::shared_ptr< ::ublox_msgs::CfgNAV5 > CfgNAV5Ptr;
typedef boost::shared_ptr< ::ublox_msgs::CfgNAV5 const> CfgNAV5ConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::CfgNAV5_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::CfgNAV5_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ublox_msgs::CfgNAV5_<ContainerAllocator1> & lhs, const ::ublox_msgs::CfgNAV5_<ContainerAllocator2> & rhs)
{
  return lhs.mask == rhs.mask &&
    lhs.dynModel == rhs.dynModel &&
    lhs.fixMode == rhs.fixMode &&
    lhs.fixedAlt == rhs.fixedAlt &&
    lhs.fixedAltVar == rhs.fixedAltVar &&
    lhs.minElev == rhs.minElev &&
    lhs.drLimit == rhs.drLimit &&
    lhs.pDop == rhs.pDop &&
    lhs.tDop == rhs.tDop &&
    lhs.pAcc == rhs.pAcc &&
    lhs.tAcc == rhs.tAcc &&
    lhs.staticHoldThresh == rhs.staticHoldThresh &&
    lhs.dgnssTimeOut == rhs.dgnssTimeOut &&
    lhs.cnoThreshNumSvs == rhs.cnoThreshNumSvs &&
    lhs.cnoThresh == rhs.cnoThresh &&
    lhs.reserved1 == rhs.reserved1 &&
    lhs.staticHoldMaxDist == rhs.staticHoldMaxDist &&
    lhs.utcStandard == rhs.utcStandard &&
    lhs.reserved2 == rhs.reserved2;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ublox_msgs::CfgNAV5_<ContainerAllocator1> & lhs, const ::ublox_msgs::CfgNAV5_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgNAV5_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgNAV5_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgNAV5_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgNAV5_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgNAV5_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgNAV5_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::CfgNAV5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "30ca0eca946e4bd96bf9f8a145f7b72c";
  }

  static const char* value(const ::ublox_msgs::CfgNAV5_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x30ca0eca946e4bd9ULL;
  static const uint64_t static_value2 = 0x6bf9f8a145f7b72cULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::CfgNAV5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/CfgNAV5";
  }

  static const char* value(const ::ublox_msgs::CfgNAV5_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::CfgNAV5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CFG-NAV5 (0x06 0x24)\n"
"# Navigation Engine Settings\n"
"\n"
"uint8 CLASS_ID = 6\n"
"uint8 MESSAGE_ID = 36\n"
"\n"
"uint16 mask             # Parameters Bitmask. Only the masked\n"
"                        # parameters will be applied.\n"
"uint16 MASK_DYN = 1                 # Apply dynamic model settings\n"
"uint16 MASK_MIN_EL = 2              # Apply minimum elevation settings\n"
"uint16 MASK_FIX_MODE = 4            # Apply fix mode settings\n"
"uint16 MASK_DR_LIM = 8              # Apply DR limit settings\n"
"uint16 MASK_POS_MASK = 16           # Apply position mask settings\n"
"uint16 MASK_TIME_MASK = 32          # Apply time mask settings\n"
"uint16 MASK_STATIC_HOLD_MASK = 64   # Apply static hold settings\n"
"uint16 MASK_DGPS_MASK = 128         # Apply DGPS settings, firmware >= 7 only\n"
"uint16 MASK_CNO = 256               # Apply CNO threshold settings\n"
"uint16 MASK_UTC = 1024              # Apply UTC settings, protocol >= 16 only\n"
"\n"
"uint8 dynModel          # Dynamic Platform model:\n"
"uint8 DYN_MODEL_PORTABLE = 0        # Portable\n"
"uint8 DYN_MODEL_STATIONARY = 2      # Stationary\n"
"uint8 DYN_MODEL_PEDESTRIAN = 3      # Pedestrian\n"
"uint8 DYN_MODEL_AUTOMOTIVE = 4      # Automotive\n"
"uint8 DYN_MODEL_SEA = 5             # Sea\n"
"uint8 DYN_MODEL_AIRBORNE_1G = 6     # Airborne with <1g Acceleration\n"
"uint8 DYN_MODEL_AIRBORNE_2G = 7     # Airborne with <2g Acceleration\n"
"uint8 DYN_MODEL_AIRBORNE_4G = 8     # Airborne with <4g Acceleration\n"
"uint8 DYN_MODEL_WRIST_WATCH = 9     # Wrist watch, protocol >= 18\n"
"\n"
"uint8 fixMode           # Position Fixing Mode.\n"
"uint8 FIX_MODE_2D_ONLY = 1          # 2D only\n"
"uint8 FIX_MODE_3D_ONLY = 2          # 3D only\n"
"uint8 FIX_MODE_AUTO = 3             # Auto 2D/3D\n"
"\n"
"int32 fixedAlt          # Fixed altitude (mean sea level) for 2D fix mode. \n"
"                        # [m / 0.01]\n"
"uint32 fixedAltVar      # Fixed altitude variance for 2D mode. [m^2 / 0.0001]\n"
"int8 minElev            # Minimum Elevation for a GNSS satellite to be used in \n"
"                        # NAV [deg]\n"
"uint8 drLimit           # Maximum time to perform dead reckoning [s]\n"
"                        # (linear extrapolation) in case of GPS signal loss\n"
"uint16 pDop             # Position DOP Mask to use [1 / 0.1]\n"
"uint16 tDop             # Time DOP Mask to use [1 / 0.1]\n"
"uint16 pAcc             # Position Accuracy Mask [m]\n"
"uint16 tAcc             # Time Accuracy Mask [m]\n"
"uint8 staticHoldThresh  # Static hold threshold [cm/s]\n"
"uint8 dgnssTimeOut      # DGNSS timeout, firmware 7 and newer only [s]\n"
"\n"
"uint8 cnoThreshNumSvs   # Number of satellites required to have C/N0 above \n"
"                        # cnoThresh for a fix to be attempted\n"
"uint8 cnoThresh         # C/N0 threshold for deciding whether to attempt a fix\n"
"                        # [dBHz]\n"
"uint8[2] reserved1      # Reserved\n"
"\n"
"uint16 staticHoldMaxDist  # Static hold distance threshold (before quitting \n"
"                          # static hold) [m]\n"
"uint8 utcStandard       # UTC standard to be used:\n"
"uint8 UTC_STANDARD_AUTOMATIC = 0 # receiver selects based on GNSS configuration\n"
"uint8 UTC_STANDARD_GPS = 3       # UTC as operated by the U.S. Naval Observatory \n"
"                                 # (USNO); derived from GPS time\n"
"uint8 UTC_STANDARD_GLONASS = 6   # UTC as operated by the former Soviet Union;\n"
"                                 # derived from GLONASS time\n"
"uint8 UTC_STANDARD_BEIDOU = 7    # UTC as operated by the National Time Service\n"
"                                 # Center, China; derived from BeiDou time\n"
"uint8[5] reserved2      # Reserved\n"
;
  }

  static const char* value(const ::ublox_msgs::CfgNAV5_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::CfgNAV5_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mask);
      stream.next(m.dynModel);
      stream.next(m.fixMode);
      stream.next(m.fixedAlt);
      stream.next(m.fixedAltVar);
      stream.next(m.minElev);
      stream.next(m.drLimit);
      stream.next(m.pDop);
      stream.next(m.tDop);
      stream.next(m.pAcc);
      stream.next(m.tAcc);
      stream.next(m.staticHoldThresh);
      stream.next(m.dgnssTimeOut);
      stream.next(m.cnoThreshNumSvs);
      stream.next(m.cnoThresh);
      stream.next(m.reserved1);
      stream.next(m.staticHoldMaxDist);
      stream.next(m.utcStandard);
      stream.next(m.reserved2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CfgNAV5_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::CfgNAV5_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::CfgNAV5_<ContainerAllocator>& v)
  {
    s << indent << "mask: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.mask);
    s << indent << "dynModel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dynModel);
    s << indent << "fixMode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fixMode);
    s << indent << "fixedAlt: ";
    Printer<int32_t>::stream(s, indent + "  ", v.fixedAlt);
    s << indent << "fixedAltVar: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.fixedAltVar);
    s << indent << "minElev: ";
    Printer<int8_t>::stream(s, indent + "  ", v.minElev);
    s << indent << "drLimit: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.drLimit);
    s << indent << "pDop: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.pDop);
    s << indent << "tDop: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.tDop);
    s << indent << "pAcc: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.pAcc);
    s << indent << "tAcc: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.tAcc);
    s << indent << "staticHoldThresh: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.staticHoldThresh);
    s << indent << "dgnssTimeOut: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dgnssTimeOut);
    s << indent << "cnoThreshNumSvs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cnoThreshNumSvs);
    s << indent << "cnoThresh: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cnoThresh);
    s << indent << "reserved1[]" << std::endl;
    for (size_t i = 0; i < v.reserved1.size(); ++i)
    {
      s << indent << "  reserved1[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.reserved1[i]);
    }
    s << indent << "staticHoldMaxDist: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.staticHoldMaxDist);
    s << indent << "utcStandard: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.utcStandard);
    s << indent << "reserved2[]" << std::endl;
    for (size_t i = 0; i < v.reserved2.size(); ++i)
    {
      s << indent << "  reserved2[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.reserved2[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_CFGNAV5_H
