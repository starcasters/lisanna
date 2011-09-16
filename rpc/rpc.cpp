/*
 *   C++ sockets on Unix and Windows
 *   Copyright (C) 2002
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <stdio.h>
#include <string.h>
#include <iostream>

#include "rpc.h"

aservice* CServices::add_service(int hash, int id) {
  aservice* service = new aservice();
  service->hash = hash;
  service->id = id;
  Items.push_back(service);
  return service;
}

void CServices::add_method(aservice* service, int id, void* proc, google::protobuf::Message* msg)
{
  amethod* method = new amethod();
  method->id = id;
  method->proc = proc;
  method->msgtype = msg;
  service->methods.push_back(method);
}

void CServices::clear()
{
  aservice* service = new aservice();
  amethod* method = new amethod();
  while (Items.size()) {
 	service = Items.back();
	Items.pop_back();
	while (service->methods.size()) {
		method = service->methods.back();
		service->methods.pop_back();
		delete method;
	}
	delete service;
  };
}

CServices::CServices()
{
}

CServices::~CServices()
{
}