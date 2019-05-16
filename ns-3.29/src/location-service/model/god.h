#ifndef GodLocationService_H
#define GodLocationService_H

#include "ns3/node.h"
#include "ns3/node-list.h"
#include "ns3/ipv4-routing-protocol.h"
#include "ns3/ipv4-interface.h"
#include "ns3/ipv4-l3-protocol.h"
#include "god.h"
#include "ns3/location-service.h"
#include "ns3/vector.h"
#include <map>

namespace ns3
{
/**
 * \ingroup godLS
 * 
 * \brief God Location Service
 */
class GodLocationService : public LocationService
{
public:
  
  /// c-tor
  GodLocationService (Time tableLifeTime);
  GodLocationService ();
  virtual ~GodLocationService();
  virtual void DoDispose ();
  Vector GetPosition (Ipv4Address adr);
  bool HasPosition (Ipv4Address adr);
  bool IsInSearch (Ipv4Address adr);

  void SetIpv4 (Ptr<Ipv4> ipv4);
  Vector GetInvalidPosition ();
  Time GetEntryUpdateTime (Ipv4Address id);
  void AddEntry (Ipv4Address id, Vector position);
  void DeleteEntry (Ipv4Address id);
  
  void Purge ();
  virtual void Clear ();

private:
  /// Start protocol operation
  void Start ();
};
}
#endif /* GodLocationService_H */

