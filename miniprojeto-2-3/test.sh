#!/usr/bin/bash

./pbuild "2x^4+0.2x^2-1x^0" polyA
./pview polyA
./pbuild "1x^4-0.1x^2+2x^0" polyB
./pview polyB
./psum polyA polyB polySum
./pview polySum
./psub polyA polyB polySub
./pview polySub
