#!/bin/bash

cd ..

if [ ! -d BinaryNewickVector ]; then
  git clone https://github.com/richelbilderbeek/BinaryNewickVector
fi

if [ ! -d Newick ]; then
  git clone https://github.com/richelbilderbeek/Newick
fi

if [ ! -d NewickVector ]; then
  git clone https://github.com/richelbilderbeek/NewickVector
fi

if [ ! -d RibiClasses ]; then
 git clone https://github.com/richelbilderbeek/RibiClasses
fi

if [ ! -d RibiLibraries ]; then
 git clone https://github.com/richelbilderbeek/RibiLibraries
fi
