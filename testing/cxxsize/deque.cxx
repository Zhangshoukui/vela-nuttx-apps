//***************************************************************************
// apps/testing/cxxsize/deque.cxx
//
// Licensed to the Apache Software Foundation (ASF) under one or more
// contributor license agreements.  See the NOTICE file distributed with
// this work for additional information regarding copyright ownership.  The
// ASF licenses this file to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance with the
// License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
// License for the specific language governing permissions and limitations
// under the License.
//
//***************************************************************************

//***************************************************************************
// Included Files
//***************************************************************************

#include <deque>

//***************************************************************************
// Private Classes
//***************************************************************************

//***************************************************************************
// Private Data
//***************************************************************************

//***************************************************************************
// Public Functions
//***************************************************************************

//***************************************************************************
// Name: deque_main
//***************************************************************************/

extern "C" int main(int argc, FAR char *argv[])
{
  std::deque<int> deq;

  deq.push_back(1);
  deq.push_back(2);
  deq.pop_back();

  deq.push_front(3);
  deq.pop_front();

  deq.insert(deq.begin(), 4);
  deq.erase(deq.begin());

  deq.clear();

  return 0;
}