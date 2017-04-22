// This file is a part of the IncludeOS unikernel - www.includeos.org
//
// Copyright 2017 Oslo and Akershus University College of Applied Sciences
// and Alfred Bratterud
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <iostream>
#include <literal_types>

using lucky_number = int_t<class lucky_number_tag>; //< Named int to represent a lucky number

constexpr inline int
test_named_int(const lucky_number n) noexcept
{ return n; }

int
main()
{
  constexpr const auto lucky_number_for_today = test_named_int(lucky_number{7});
  std::cout << "Today's lucky number will be '" << lucky_number_for_today << "'\n";
}
