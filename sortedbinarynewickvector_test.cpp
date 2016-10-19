#include "sortedbinarynewickvector.h"


#include <algorithm>
#include <cassert>
#include <deque>
#include <iostream>
#include <functional>
#include <map>
#include <numeric>
#include <stdexcept>
#include <string>
#include <sstream>
#include <vector>

#include <boost/numeric/conversion/cast.hpp>

#include <boost/lexical_cast.hpp>

#include "BigIntegerLibrary.hh"
#include "newick.h"

#include <fstream>
#include <iostream>
#include <boost/test/unit_test.hpp>

// Boost.Test does not play well with -Weffc++
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"

using namespace ribi;

BOOST_AUTO_TEST_CASE(test_sorted_binary_newick_vector)
{
  //Check that well-formed Newicks are confirmed valid
  for(const auto& s: newick::CreateValidNewicks())
  {
    if (newick::IsBinaryNewick(newick::StringToNewick(s)))
    {
      const SortedBinaryNewickVector sbnv(s);
      const std::string t{sbnv.ToStr()};
      for (char c: "0123456789(),")
      {
        BOOST_CHECK_EQUAL(
          std::count(std::begin(s), std::end(s), c),
          std::count(std::begin(t), std::end(t), c)
        );
      }
    }
  }


}
#pragma GCC diagnostic pop
