--Richard Stewing

--13.04.2016


--module RandomNumber where

import System.IO
import Unique

main = do
  s <- readFile "./randomNumbers"
  putStr $ show $ length $ unique $ f ( lines (tail s))



f::[String] -> [Integer]
f [] = []
f (s:ss) = (read s) : f ss 
