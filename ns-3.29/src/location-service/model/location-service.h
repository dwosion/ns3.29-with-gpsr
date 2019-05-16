/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2009 University of Washington
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef LOCATION_SERVICE_H
#define LOCATION_SERVICE_H

/* INCLUDES */
#include "ns3/node.h"
#include "ns3/node-list.h"
#include "ns3/ipv4-routing-protocol.h"
#include "ns3/ipv4-interface.h"
#include "ns3/ipv4-l3-protocol.h"
#include "ns3/timer.h"
#include "ns3/ipv4.h"
#include "ns3/location-service.h"
#include "ns3/vector.h"
#include "ns3/log.h"
#include <map>

namespace ns3 {

class LocationService : public Object{

public:
  virtual Vector GetPosition (Ipv4Address adr) = 0;
  virtual bool HasPosition (Ipv4Address adr) = 0;
  virtual bool IsInSearch (Ipv4Address adr) = 0;

  virtual void SetIpv4 (Ptr<Ipv4> ipv4) = 0;
  virtual Vector GetInvalidPosition () = 0;
  virtual Time GetEntryUpdateTime (Ipv4Address id) = 0;
  virtual void AddEntry (Ipv4Address id, Vector position) = 0;
  virtual void DeleteEntry (Ipv4Address id) = 0;
  
  virtual void Purge () = 0;
  virtual void Clear () = 0;

private:
  void Start ();
};
}
#endif

