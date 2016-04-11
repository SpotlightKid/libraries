//AtmOscillatorProgmem.h  Progmem for Atmegatron Oscillator class
//Copyright (C) 2015  Paul Soulsby info@soulsbysynths.com
//
//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef ATEOSCOSCILLATORPROGMEM_H_
#define ATEOSCOSCILLATORPROGMEM_H_

#include <avr/pgmspace.h>
#define OSC_WAVELEN 256

const signed char OSC_WAVETABLE[2][16][OSC_WAVELEN] PROGMEM = {
	{
		{127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127}, //square
		{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,-128,-127,-126,-125,-124,-123,-122,-121,-120,-119,-118,-117,-116,-115,-114,-113,-112,-111,-110,-109,-108,-107,-106,-105,-104,-103,-102,-101,-100,-99,-98,-97,-96,-95,-94,-93,-92,-91,-90,-89,-88,-87,-86,-85,-84,-83,-82,-81,-80,-79,-78,-77,-76,-75,-74,-73,-72,-71,-70,-69,-68,-67,-66,-65,-64,-63,-62,-61,-60,-59,-58,-57,-56,-55,-54,-53,-52,-51,-50,-49,-48,-47,-46,-45,-44,-43,-42,-41,-40,-39,-38,-37,-36,-35,-34,-33,-32,-31,-30,-29,-28,-27,-26,-25,-24,-23,-22,-21,-20,-19,-18,-17,-16,-15,-14,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1},  //saw
		{0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,110,112,114,116,118,120,122,124,126,127,126,124,122,120,118,116,114,112,110,108,106,104,102,100,98,96,94,92,90,88,86,84,82,80,78,76,74,72,70,68,66,64,62,60,58,56,54,52,50,48,46,44,42,40,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,-2,-4,-6,-8,-10,-12,-14,-16,-18,-20,-22,-24,-26,-28,-30,-32,-34,-36,-38,-40,-42,-44,-46,-48,-50,-52,-54,-56,-58,-60,-62,-64,-66,-68,-70,-72,-74,-76,-78,-80,-82,-84,-86,-88,-90,-92,-94,-96,-98,-100,-102,-104,-106,-108,-110,-112,-114,-116,-118,-120,-122,-124,-126,-128,-126,-124,-122,-120,-118,-116,-114,-112,-110,-108,-106,-104,-102,-100,-98,-96,-94,-92,-90,-88,-86,-84,-82,-80,-78,-76,-74,-72,-70,-68,-66,-64,-62,-60,-58,-56,-54,-52,-50,-48,-46,-44,-42,-40,-38,-36,-34,-32,-30,-28,-26,-24,-22,-20,-18,-16,-14,-12,-10,-8,-6,-4,-2},  //triangle
		{0,3,6,9,12,16,19,22,25,28,31,34,37,40,43,46,49,51,54,57,60,63,65,68,71,73,76,78,81,83,85,88,90,92,94,96,98,100,102,104,106,107,109,111,112,113,115,116,117,118,120,121,122,122,123,124,125,125,126,126,126,127,127,127,127,127,127,127,126,126,126,125,125,124,123,122,122,121,120,118,117,116,115,113,112,111,109,107,106,104,102,100,98,96,94,92,90,88,85,83,81,78,76,73,71,68,65,63,60,57,54,51,49,46,43,40,37,34,31,28,25,22,19,16,12,9,6,3,0,-3,-6,-9,-12,-16,-19,-22,-25,-28,-31,-34,-37,-40,-43,-46,-49,-51,-54,-57,-60,-63,-65,-68,-71,-73,-76,-78,-81,-83,-85,-88,-90,-92,-94,-96,-98,-100,-102,-104,-106,-107,-109,-111,-112,-113,-115,-116,-117,-118,-120,-121,-122,-122,-123,-124,-125,-125,-126,-126,-126,-127,-127,-127,-127,-127,-127,-127,-126,-126,-126,-125,-125,-124,-123,-122,-122,-121,-120,-118,-117,-116,-115,-113,-112,-111,-109,-107,-106,-104,-102,-100,-98,-96,-94,-92,-90,-88,-85,-83,-81,-78,-76,-73,-71,-68,-65,-63,-60,-57,-54,-51,-49,-46,-43,-40,-37,-34,-31,-28,-25,-22,-19,-16,-12,-9,-6,-3},  //sine
		{0,4,16,23,31,54,66,70,69,56,82,82,79,78,76,76,69,77,86,87,84,82,73,68,62,60,69,69,-2,3,10,34,42,40,37,33,27,12,11,8,21,26,30,35,43,46,46,72,70,34,28,30,42,49,46,48,48,50,53,53,53,52,53,50,46,51,64,66,72,75,76,72,64,65,70,66,68,66,71,71,73,77,82,82,64,59,63,74,84,100,107,113,118,115,118,127,127,127,127,127,126,123,114,111,115,114,110,90,78,75,36,32,34,38,37,36,37,31,30,25,24,25,20,19,12,4,1,-17,-28,-19,-23,-30,-41,-54,-64,-67,-73,-72,-79,-81,-81,-78,-83,-78,-62,-58,-50,-39,-34,-29,-8,-2,1,-2,-8,-4,23,22,16,2,-7,-13,-30,-33,-35,-30,-34,-39,-61,-70,-73,-80,-84,-86,-93,-100,-104,-91,-84,-77,-79,-76,-69,-72,-74,-61,-62,-58,-60,-60,-61,-64,-55,-63,-49,-50,-49,-58,-61,-63,-68,-68,-66,-63,-74,-66,-63,-54,-48,-47,-46,-41,-41,-45,-46,-53,-57,-64,-61,-62,-61,-59,-62,-81,-87,-97,-114,-115,-120,-125,-106,-100,-104,-108,-107,-103,-101,-97,-83,-86,-88,-90,-85,-90,-87,-81,-72,-56,-53,-60,-52,-41,-29,-13,-6,-1},  //bright
		{0,2,8,14,19,26,30,35,42,46,50,57,61,65,71,75,80,84,88,93,92,84,71,61,52,37,29,27,24,23,21,20,19,19,16,12,12,12,12,13,14,15,16,17,18,18,18,17,17,15,13,9,10,17,28,35,41,52,56,55,54,53,52,50,50,49,51,54,57,60,63,65,70,73,76,83,87,91,98,103,110,115,119,125,126,119,109,102,101,99,94,94,93,93,92,91,91,90,86,81,78,73,70,67,62,59,56,51,48,45,41,-14,-44,-65,-75,-89,-94,-91,-86,-82,-76,-67,-62,-63,-63,-63,-63,-62,-61,-60,-56,-51,-47,-41,-38,-34,-28,-25,-21,-16,-13,-9,-4,-1,2,5,8,12,11,2,-12,-21,-32,-48,-56,-59,-63,-65,-67,-69,-71,-71,-75,-79,-80,-81,-81,-81,-80,-80,-79,-79,-79,-79,-79,-80,-81,-84,-86,-90,-89,-82,-72,-66,-60,-49,-45,-46,-48,-49,-50,-52,-53,-54,-52,-49,-47,-44,-41,-39,-35,-32,-28,-22,-18,-13,-7,-2,4,8,13,19,19,13,3,-3,-5,-7,-12,-12,-13,-13,-14,-14,-15,-16,-20,-24,-28,-33,-36,-39,-43,-47,-50,-54,-57,-59,-63,-66,-68,-72,-74,-77,-75,-67,-54,-45,-36,-21,-14,-12,-9,-7,-5,-1},  //all sorts of harms
		{0,2,4,5,6,7,7,8,9,10,10,12,13,15,17,19,23,25,27,32,35,38,43,46,50,56,60,63,69,73,77,82,85,88,92,94,96,98,100,101,102,103,103,104,105,106,107,108,109,111,112,113,114,115,116,116,117,117,118,118,118,119,119,120,120,121,122,123,124,124,125,125,125,125,125,125,125,125,124,124,124,124,125,125,125,125,124,124,123,121,119,117,114,111,108,103,100,96,91,88,84,79,76,73,68,66,63,60,58,56,53,51,50,48,47,46,45,44,44,43,42,41,39,38,35,32,30,26,23,19,14,10,6,0,-5,-9,-17,-21,-26,-33,-37,-41,-46,-50,-54,-57,-59,-62,-63,-64,-66,-67,-67,-68,-69,-70,-71,-72,-73,-75,-76,-78,-80,-82,-83,-86,-87,-89,-92,-93,-95,-98,-100,-103,-106,-108,-111,-114,-116,-119,-120,-121,-123,-123,-124,-124,-125,-125,-125,-125,-125,-125,-126,-126,-127,-127,-127,-127,-127,-127,-126,-125,-124,-122,-120,-119,-116,-114,-111,-109,-108,-105,-104,-102,-101,-99,-98,-97,-96,-95,-93,-92,-92,-91,-90,-90,-89,-89,-89,-89,-88,-88,-87,-86,-84,-82,-80,-77,-73,-70,-67,-61,-57,-51,-46,-42,-36,-31,-27,-21,-18,-14,-10,-7,-4,-1},  //sub with harms
		{1,17,26,16,5,21,71,120,110,77,61,65,70,75,81,78,68,69,75,83,84,83,82,81,82,85,86,87,86,86,87,88,77,62,53,62,73,81,70,45,35,50,66,74,72,70,64,64,67,71,69,65,63,63,63,63,63,53,39,31,34,34,31,31,44,60,68,60,50,42,31,35,51,47,33,20,22,46,52,55,55,52,51,52,54,53,52,50,50,49,49,49,49,48,47,47,35,18,9,17,27,33,22,-3,-14,0,15,22,9,-4,-10,-6,-2,-2,-7,-16,-20,-20,-18,-18,-20,-15,-4,0,-4,-4,-4,-8,0,13,19,8,-4,-37,-24,18,34,10,-10,-22,-28,-33,-29,-29,-40,-46,-47,-45,-45,-46,-49,-52,-54,-56,-56,-57,-59,-60,-61,-62,-74,-91,-100,-93,-83,-76,-87,-114,-125,-109,-94,-86,-87,-90,-95,-95,-92,-87,-87,-90,-91,-91,-88,-87,-86,-94,-107,-112,-107,-105,-107,-104,-90,-72,-62,-68,-76,-82,-91,-86,-67,-69,-82,-93,-90,-65,-56,-53,-51,-52,-52,-49,-47,-46,-47,-47,-47,-46,-45,-44,-44,-44,-44,-43,-55,-71,-79,-70,-60,-52,-63,-89,-99,-83,-67,-60,-50,-41,-46,-51,-49,-40,-37,-36,-36,-36,-36,-35,-33,-24,-11,-5,-9,-9,-7,-8}, //nice harmonics
		{2,19,17,22,28,55,91,104,110,114,117,119,119,120,120,121,121,121,121,120,120,120,120,120,120,120,120,120,120,120,120,121,121,121,121,120,111,10,57,71,39,-13,-69,-122,-119,-119,-120,-115,-109,-104,-103,-101,-99,-99,-104,-109,-113,-118,-120,-121,-115,-100,-55,-11,-1,19,36,77,108,113,116,118,118,118,117,115,113,108,95,75,25,22,22,14,15,18,11,7,11,18,16,15,21,26,34,88,106,111,117,119,120,121,121,121,120,120,120,120,121,121,121,121,120,118,117,112,107,101,87,74,51,22,27,29,27,27,42,82,91,98,108,112,115,118,119,120,121,121,121,121,121,121,121,121,121,121,121,121,120,120,118,117,116,113,112,110,108,107,107,107,108,109,112,113,89,-77,-24,4,-37,-101,-127,-116,-114,-111,-96,-79,-64,-57,-58,-65,-75,-79,-63,-57,-62,-77,-87,-97,-109,-115,-119,-121,-120,-116,-100,-72,-30,-22,-20,-16,-15,-15,-17,-21,-25,-28,-54,-91,-106,-111,-115,-118,-119,-120,-120,-120,-120,-119,-119,-117,-113,-108,-99,-63,-26,-20,-16,-13,3,18,16,20,25,26,27,27,26,24,21,18,15,16,12,-17,-18,-14,-18,-20,-21,-22,-22,-21,-18,-16,-15,-14},  //nice haromnics2
		{127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-65,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-64,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63,-63}, //square harmonics 2
		{9,44,89,106,116,122,124,125,126,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,120,44,-35,-65,-85,-102,-109,-114,-119,-121,-122,-124,-125,-126,-126,-126,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-44},  //rounded square
		{68,96,111,116,119,122,123,124,125,125,126,126,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,126,126,126,126,125,125,125,124,124,123,123,122,122,121,120,119,119,117,116,115,114,112,110,109,107,105,103,101,97,95,92,87,84,80,75,71,66,59,54,48,40,34,28,19,12,6,-3,-9,-15,-25,-30,-39,-44,-49,-57,-61,-65,-71,-75,-78,-83,-86,-89,-92,-95,-97,-100,-101,-103,-105,-107,-108,-110,-111,-112,-113,-114,-115,-116,-117,-117,-118,-119,-119,-120,-121,-121,-122,-122,-122,-123,-123,-123,-124,-124,-124,-124,-125,-125,-125,-125,-126,-126,-126,-126,-126,-126,-126,-126,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-126,-126,-126,-126,-126,-126,-126,-126,-125,-125,-125,-125,-125,-124,-124,-124,-124,-123,-123,-123,-122,-122,-122,-121,-121,-121,-120,-120,-119,-119,-118,-118,-117,-116,-116,-115,-114,-113,-113,-112,-110,-110,-109,-107,-106,-105,-103,-102,-101,-98,-97,-95,-93,-91,-89,-86,-84,-81,-78,-75,-72,-68,-65,-60,-57,-53,-48,-44,-40,-34,-30,-25,-19,-14,-10,-3},  //very shaped sine
		{2,7,15,20,25,33,38,43,51,56,61,69,74,79,87,92,99,104,110,117,122,32,39,44,49,57,62,67,75,80,85,93,2,7,15,20,25,33,38,43,51,56,61,-26,-21,-16,-8,-3,1,8,14,21,26,32,39,44,49,57,62,67,75,80,85,93,-93,-88,-80,-75,-70,-62,-57,-52,-44,-39,-34,-26,-21,-16,-8,-3,3,8,14,21,26,32,39,44,49,57,62,67,75,80,85,93,2,7,15,20,25,33,38,43,51,56,61,-26,-21,-16,-8,-3,1,8,14,21,26,32,39,44,49,57,62,67,75,80,85,93,-93,-88,-80,-75,-70,-62,-57,-52,-44,-39,-34,-26,-21,-16,-8,-3,3,8,14,21,26,-64,-56,-51,-46,-38,-33,-28,-20,-15,-10,-2,-93,-88,-80,-75,-70,-62,-57,-52,-44,-39,-34,-26,-21,-16,-8,-3,1,8,14,21,26,32,39,44,49,57,62,67,75,80,85,93,-93,-88,-80,-75,-70,-62,-57,-52,-44,-39,-34,-26,-21,-16,-8,-3,3,8,14,21,26,-64,-56,-51,-46,-38,-33,-28,-20,-15,-10,-2,-93,-88,-80,-75,-70,-62,-57,-52,-44,-39,-34,-122,-117,-112,-104,-99,-94,-87,-81,-74,-69,-64,-56,-51,-46,-38,-33,-28,-20,-15,-10,-2}, //saw chord
		{126,117,104,96,87,76,68,61,50,44,37,28,22,17,9,5,-1,-5,-8,-13,-16,-19,-22,-24,-25,-27,-28,-29,-29,-29,-29,-28,-28,-27,-25,-23,-21,-18,-16,-14,-10,-7,-4,0,3,6,11,15,19,24,28,33,37,41,47,51,54,60,64,68,73,76,80,85,-127,-118,-105,-97,-88,-77,-69,-62,-51,-45,-38,-29,-23,-18,-10,-6,0,4,7,12,15,18,21,23,25,27,28,28,29,29,29,28,27,26,24,23,21,18,16,13,9,7,4,0,-3,-6,-11,-15,-18,-24,-28,-33,-37,-41,-46,-50,-54,-60,-63,-67,-72,-76,-79,-84,127,119,106,97,89,77,70,62,52,45,39,30,24,19,11,7,0,-3,-6,-11,-14,-17,-20,-22,-24,-26,-26,-27,-28,-28,-27,-27,-26,-25,-23,-21,-20,-17,-14,-12,-8,-5,-2,1,4,8,13,16,20,25,29,35,39,42,48,52,56,61,65,69,74,78,81,-126,-117,-108,-96,-87,-79,-68,-60,-53,-43,-37,-30,-22,-16,-11,-4,0,6,10,13,18,21,23,26,28,29,31,32,32,32,32,32,31,30,29,27,25,23,20,17,15,11,8,5,0,-2,-6,-11,-15,-18,-24,-28,-34,-37,-41,-47,-51,-55,-61,-64,-68,-74,-77,-81,-86},  //warped sines
		{18,55,100,120,127,108,71,20,14,28,-123,103,78,15,-22,-17,96,105,-14,-102,-95,-64,-10,8,22,19,16,-51,-120,-55,35,101,101,92,52,23,6,-14,-22,-22,-17,-15,52,127,98,36,-63,-96,-102,-96,-84,-48,-25,-10,6,17,22,21,18,16,-13,-95,-127,-97,-46,13,82,100,102,97,89,73,40,22,9,-4,-13,-20,-23,-21,-17,-15,-10,-16,-18,-20,-23,-22,-16,-4,4,13,34,53,72,92,98,101,101,91,66,1,-47,-89,-125,-123,-91,2,15,16,19,21,23,21,15,4,-3,-11,-29,-45,-62,-85,-94,-98,-102,-102,-94,-59,-17,8,75,106,125,116,78,16,-15,-16,-18,-21,-23,-23,-18,-12,-2,5,12,28,43,60,81,91,97,101,102,100,81,54,17,-44,-81,-109,-127,-117,-83,-1,15,16,18,20,22,23,21,17,8,1,-5,-17,-27,-49,-64,-78,-92,-97,-100,-102,-100,-92,-60,-27,11,69,99,120,126,105,63,-9,-15,-16,-18,-20,-22,-23,-21,-17,-8,-2,7,15,24,44,59,73,89,95,99,102,102,98,77,51,17,-40,-75,-103,-126,-125,-103,-32,9,15,17,18,20,22,23,22,16,10,3,-5,-12,-26,-38,-53,-74,-85,-93,-99,-101,-102,-98,-87,-67,-19},  //middy2
		{1,11,26,36,45,58,66,74,85,91,97,105,109,113,118,120,122,123,123,121,118,115,109,105,99,91,85,78,69,62,56,47,41,35,27,22,18,11,7,3,-1,-3,-5,-6,-6,-4,-1,2,6,13,17,25,29,34,40,44,47,50,52,53,52,51,50,46,43,40,34,29,23,13,6,-1,-14,-23,-32,-45,-54,-62,-74,-81,-91,-97,-102,-109,-113,-117,-121,-124,-125,-127,-127,-127,-126,-124,-121,-114,-109,-103,-92,-85,-77,-65,-57,-48,-36,-28,-20,-9,-3,2,9,13,16,20,22,24,25,25,24,24,22,20,18,16,13,11,9,7,5,4,2,1,0,0,0,1,2,3,5,8,10,13,17,21,26,31,36,43,48,54,62,68,73,81,85,90,96,99,103,107,109,110,111,112,111,109,107,105,100,96,92,85,80,74,65,59,53,44,38,29,23,17,8,2,-3,-12,-18,-24,-32,-38,-43,-50,-55,-60,-66,-69,-72,-75,-76,-77,-77,-76,-75,-73,-71,-69,-66,-64,-60,-57,-55,-51,-49,-47,-44,-42,-40,-38,-37,-36,-35,-34,-35,-36,-37,-38,-41,-44,-46,-50,-52,-55,-58,-61,-63,-67,-69,-72,-75,-77,-78,-80,-81,-81,-80,-79,-76,-73,-69,-61,-55,-49,-38,-30,-21,-7}  //sine chime
	},
	{
		{0,6,17,24,30,33,32,31,30,32,35,41,44,47,48,47,43,38,34,30,33,40,61,78,94,115,123,125,118,108,96,77,65,56,45,37,29,14,4,-3,-6,0,12,36,52,66,79,83,83,76,66,48,36,24,9,0,-9,-26,-38,-50,-67,-77,-84,-91,-92,-91,-86,-82,-78,-73,-69,-65,-59,-53,-45,-27,-11,5,29,42,54,56,54,47,42,39,37,37,39,44,48,52,59,68,78,93,99,101,96,89,78,59,47,37,28,25,24,26,31,36,43,46,48,48,45,37,31,25,16,11,6,0,-3,-6,-10,-12,-12,-8,-6,-5,-5,-6,-8,-15,-24,-37,-58,-70,-78,-81,-79,-74,-68,-65,-62,-59,-56,-54,-54,-56,-61,-65,-68,-65,-56,-43,-19,-5,6,17,21,24,23,20,13,-2,-15,-29,-44,-49,-48,-40,-32,-21,-3,11,26,49,63,77,80,78,66,57,51,46,46,48,51,54,56,63,69,76,83,84,80,70,61,51,35,24,13,-2,-11,-19,-25,-28,-31,-35,-39,-51,-61,-72,-87,-95,-101,-109,-115,-120,-126,-127,-125,-112,-98,-81,-55,-41,-31,-26,-29,-37,-55,-68,-81,-95,-100,-101,-99,-96,-94,-91,-89,-84,-79,-72,-59,-49,-39,-24,-16,-12,-12,-14,-13,-6},  //piano 1
		{0,2,6,8,11,13,15,17,18,20,20,22,22,23,23,23,23,23,23,22,21,20,19,17,16,14,13,12,10,9,8,6,5,5,3,2,2,0,0,0,-1,-1,-1,-1,0,0,1,2,4,7,9,13,16,18,23,25,28,32,35,38,41,44,46,48,50,51,53,54,54,54,54,54,54,53,52,51,50,49,48,48,47,47,47,47,48,48,49,50,51,52,53,54,55,56,57,59,60,60,61,62,63,63,64,64,65,65,65,66,66,66,65,65,65,65,64,64,63,63,62,62,61,61,60,60,59,59,58,57,56,55,53,52,50,47,45,43,40,38,36,33,31,30,28,27,25,24,24,22,22,21,19,17,16,14,12,10,8,6,4,2,1,0,0,-1,-2,-2,-3,-3,-4,-4,-5,-5,-6,-7,-8,-9,-10,-12,-13,-15,-17,-18,-20,-22,-23,-25,-27,-29,-31,-33,-35,-39,-41,-44,-48,-51,-55,-60,-64,-68,-73,-77,-81,-87,-91,-95,-100,-104,-109,-112,-115,-119,-121,-123,-125,-126,-127,-127,-127,-127,-126,-124,-123,-121,-119,-117,-114,-112,-109,-106,-103,-101,-97,-94,-91,-86,-83,-80,-74,-70,-66,-61,-57,-51,-47,-43,-37,-33,-30,-24,-20,-17,-12,-8,-5,-1},  //piano 29
		{0,1,3,4,5,6,6,6,6,6,5,4,4,3,3,3,3,3,4,7,8,11,15,19,22,29,33,38,45,50,55,62,67,72,79,84,88,94,98,102,107,110,113,117,120,122,125,126,127,127,127,127,126,125,122,120,118,115,112,110,106,103,101,97,95,93,90,88,86,83,81,78,75,72,69,65,61,58,52,48,42,38,33,27,23,19,13,9,5,0,-2,-5,-9,-12,-14,-17,-19,-20,-23,-24,-25,-27,-28,-29,-30,-31,-32,-34,-35,-36,-38,-39,-40,-42,-44,-45,-46,-47,-48,-48,-48,-48,-47,-47,-46,-45,-44,-43,-42,-41,-40,-40,-40,-40,-40,-40,-41,-42,-42,-43,-44,-45,-46,-46,-47,-47,-48,-49,-49,-50,-51,-51,-52,-53,-54,-55,-57,-58,-59,-61,-62,-63,-64,-65,-65,-65,-65,-65,-65,-64,-63,-62,-61,-60,-58,-57,-56,-54,-52,-51,-49,-48,-46,-45,-44,-43,-43,-42,-42,-41,-41,-41,-41,-41,-41,-40,-40,-39,-38,-37,-35,-33,-31,-28,-26,-24,-21,-19,-16,-14,-12,-9,-7,-6,-3,-2,0,1,2,4,6,7,8,9,10,10,10,10,9,7,6,4,1,-1,-3,-7,-10,-12,-16,-18,-20,-22,-23,-24,-24,-23,-22,-21,-19,-17,-14,-12,-9,-6,-4,-1}, //ac gtr 4
		{0,1,2,2,1,1,0,1,3,5,8,12,16,19,23,26,29,31,32,34,34,34,34,33,33,32,31,29,28,26,25,22,20,19,16,15,13,11,9,8,6,5,4,3,3,3,3,4,4,6,6,8,9,10,12,14,15,18,20,22,25,27,29,33,36,39,43,46,49,53,56,59,64,67,70,75,78,81,86,89,93,96,99,103,106,108,112,114,116,119,120,122,123,124,125,126,127,127,127,127,127,127,126,126,125,124,124,123,122,121,119,118,117,114,113,110,108,106,102,100,97,93,90,88,83,80,77,72,69,66,61,58,55,50,46,43,38,35,32,27,23,20,15,12,7,4,1,-3,-6,-9,-14,-17,-20,-24,-27,-30,-34,-37,-40,-44,-46,-49,-53,-56,-59,-63,-65,-68,-72,-75,-77,-81,-84,-86,-90,-92,-94,-97,-99,-101,-102,-104,-105,-107,-108,-109,-110,-111,-112,-112,-113,-113,-114,-114,-114,-114,-114,-113,-113,-113,-112,-112,-112,-111,-111,-111,-111,-111,-110,-110,-110,-109,-109,-109,-108,-107,-107,-106,-106,-105,-104,-104,-103,-102,-101,-101,-99,-98,-97,-95,-94,-92,-90,-88,-86,-82,-80,-77,-73,-70,-67,-63,-60,-54,-51,-47,-41,-37,-32,-25,-21,-16,-10,-7,-4,0},  //theremin 5
		{4,83,127,127,127,126,125,126,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,126,126,127,127,127,124,15,-56,-127,-127,-127,-127,-125,-126,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-126,-127,-127,-127,-127,-90,-74,-110,-60},  //vgame 2
		{1,9,21,29,37,49,56,64,74,81,88,98,104,109,116,120,124,126,127,127,127,126,123,120,117,112,108,104,96,91,85,76,70,63,53,46,38,26,18,10,-1,-9,-17,-29,-36,-43,-52,-57,-61,-66,-68,-70,-71,-71,-70,-69,-68,-66,-64,-63,-61,-60,-59,-58,-57,-56,-54,-53,-51,-49,-46,-44,-40,-37,-34,-29,-26,-23,-19,-17,-13,-12,-10,-9,-9,-9,-9,-10,-10,-11,-12,-12,-13,-13,-13,-12,-11,-10,-7,-5,-3,0,1,3,6,8,9,11,12,13,15,15,15,16,16,17,18,18,19,20,20,21,21,21,20,20,18,16,14,12,8,5,2,-2,-5,-8,-14,-17,-21,-26,-29,-33,-38,-41,-46,-49,-52,-56,-58,-60,-63,-64,-65,-66,-66,-66,-65,-64,-63,-61,-59,-57,-54,-51,-49,-44,-41,-37,-32,-28,-23,-17,-12,-8,-3,0,3,7,10,14,16,19,23,26,29,34,38,41,47,51,55,60,63,66,69,70,71,71,70,69,67,64,62,59,57,55,52,51,49,48,47,45,44,42,39,36,32,26,21,16,8,2,-3,-12,-18,-24,-31,-36,-40,-46,-49,-52,-56,-58,-60,-63,-65,-67,-70,-72,-74,-75,-76,-76,-75,-73,-70,-66,-62,-55,-49,-43,-33,-25,-18,-6},  //human voice 8
		{0,1,3,6,8,10,12,14,17,20,22,24,27,29,32,32,29,26,22,15,9,7,12,16,20,25,28,29,29,28,25,22,19,16,15,13,12,13,15,19,26,32,40,55,62,69,80,88,95,102,104,104,101,100,91,84,76,61,54,48,40,36,36,33,38,47,48,52,56,58,58,48,28,10,-2,-27,-44,-65,-100,-109,-111,-114,-121,-127,-124,-116,-100,-95,-92,-83,-69,-50,-23,-9,1,24,40,51,67,70,71,69,67,67,61,57,51,45,42,41,43,45,48,50,54,60,63,65,62,60,55,46,41,34,22,13,2,-11,-22,-34,-55,-68,-81,-98,-106,-112,-115,-113,-109,-98,-88,-77,-60,-49,-35,-27,-18,-8,-2,2,7,10,13,17,20,22,25,28,31,35,38,41,44,46,49,53,56,60,64,68,71,74,73,69,60,52,42,25,12,-7,-19,-31,-46,-54,-61,-69,-73,-75,-76,-75,-73,-68,-64,-60,-53,-48,-42,-35,-30,-25,-18,-14,-10,-5,-2,0,-1,-3,-3,-1,0,2,5,10,21,30,38,46,49,53,59,60,58,52,48,44,37,27,11,-9,-20,-34,-56,-73,-89,-100,-105,-109,-114,-116,-113,-102,-97,-90,-83,-76,-60,-48,-39,-28,-23,-16,-8,-3,-1,0},  //human voice 14
		{6,24,75,102,108,118,94,67,29,-3,-21,-44,-54,-61,-75,-89,-105,-119,-127,-117,-109,-78,-32,1,41,67,83,86,72,66,54,45,43,41,33,26,10,-15,-31,-51,-53,-52,-43,-10,3,24,39,39,39,21,12,0,-5,-6,-8,-15,-22,-39,-56,-65,-80,-77,-64,-44,-16,4,33,49,53,58,55,51,50,51,50,49,42,28,8,-13,-36,-50,-60,-53,-49,-37,-18,-10,-1,1,1,2,2,4,10,13,15,15,2,-5,-17,-34,-37,-42,-33,-23,-14,6,14,21,28,29,30,33,35,39,41,38,32,19,4,-15,-32,-40,-50,-50,-45,-37,-28,-21,-14,-10,-8,-4,2,10,20,28,30,29,24,13,1,-9,-17,-18,-18,-9,-5,0,6,7,7,10,11,14,22,24,28,27,21,16,-1,-11,-20,-34,-35,-36,-32,-26,-22,-16,-12,-10,-5,0,6,18,25,32,35,31,26,18,8,0,-5,-7,-7,-7,-5,-5,-6,-7,-7,-7,-3,1,7,13,16,17,15,5,0,-8,-16,-19,-20,-17,-16,-12,-11,-10,-10,-8,-5,2,10,16,27,29,29,27,21,17,9,5,3,0,0,0,-2,-4,-6,-9,-8,-6,-1,5,9,16,19,16,14,9,0,-1,-3,-5,-5,-9,-22,-25,-29,-20},  //human voice 49
		{6,24,46,55,60,59,54,48,39,32,26,17,14,14,21,29,43,53,62,77,86,96,107,111,112,112,111,107,98,91,83,70,60,51,42,38,33,25,20,15,9,3,-2,-13,-19,-26,-36,-41,-47,-54,-57,-63,-69,-78,-86,-87,-86,-87,-88,-88,-83,-77,-73,-66,-60,-55,-54,-54,-54,-50,-47,-42,-32,-25,-23,-25,-26,-23,-8,5,16,11,3,-1,9,27,44,43,36,30,34,40,43,40,33,21,15,15,29,41,47,34,15,-3,-12,-2,15,37,37,25,1,-9,-10,1,11,15,6,-6,-18,-16,-9,2,6,7,3,-1,-4,-9,-14,-21,-28,-21,-6,19,32,38,37,27,10,-23,-42,-49,-31,-1,45,57,51,27,13,3,-9,-20,-32,-37,-28,-12,19,37,49,49,35,13,-21,-36,-41,-42,-45,-50,-46,-28,4,61,86,91,61,28,-1,-34,-46,-48,-43,-36,-23,-10,2,14,11,0,-24,-37,-41,-25,-4,19,52,67,75,75,68,55,21,-9,-44,-88,-107,-116,-106,-85,-32,8,46,84,96,97,83,70,60,54,55,58,59,52,38,4,-23,-51,-87,-104,-112,-106,-90,-66,-26,-1,20,44,53,56,49,38,21,-8,-30,-60,-78,-94,-113,-122,-127,-126,-120,-110,-86,-67,-46,-13},  //clavinet 5
		{0,4,13,18,23,30,34,37,43,48,52,58,62,65,71,74,80,83,86,90,93,96,101,104,106,109,111,113,116,117,118,120,121,121,123,124,124,125,124,123,122,121,120,121,121,122,120,118,115,111,109,106,105,104,101,100,98,96,94,91,87,84,81,76,73,71,69,68,66,63,61,57,51,46,42,35,32,29,27,27,28,28,28,26,23,18,10,4,-1,-7,-9,-11,-11,-11,-10,-8,-9,-9,-12,-14,-16,-19,-21,-22,-21,-20,-18,-15,-15,-15,-18,-21,-25,-30,-33,-36,-36,-35,-32,-29,-27,-26,-27,-29,-34,-39,-44,-53,-58,-63,-70,-74,-79,-85,-90,-95,-103,-108,-113,-119,-122,-125,-127,-127,-127,-126,-125,-124,-123,-123,-121,-120,-118,-113,-108,-103,-92,-84,-74,-60,-50,-40,-24,-14,-4,8,16,24,35,42,48,57,62,66,72,75,78,82,84,85,85,84,83,82,80,75,72,68,62,57,53,44,39,33,24,17,12,2,-3,-9,-19,-25,-31,-40,-45,-51,-59,-64,-72,-77,-81,-86,-89,-93,-98,-101,-104,-107,-109,-110,-112,-114,-115,-116,-116,-115,-114,-113,-113,-112,-111,-109,-105,-102,-100,-97,-94,-91,-86,-83,-79,-73,-70,-64,-60,-56,-50,-46,-42,-35,-30,-26,-19,-14,-10,-3},  //elec bass 8
		{0,2,6,9,12,16,18,20,24,26,28,31,33,35,38,40,43,45,48,51,53,55,58,60,62,65,67,69,72,73,75,78,80,81,83,85,86,88,89,91,93,94,96,98,100,101,103,105,106,108,109,111,112,114,115,117,118,119,120,121,122,123,124,125,126,126,127,127,127,127,127,127,127,127,127,127,127,126,125,125,124,123,122,120,119,117,115,114,112,110,108,105,102,100,98,95,92,89,85,82,79,76,73,70,65,62,59,53,50,47,42,38,35,29,25,20,17,14,9,6,3,-1,-4,-7,-11,-14,-16,-20,-22,-24,-28,-30,-32,-35,-37,-38,-41,-43,-44,-46,-47,-49,-50,-52,-53,-54,-55,-57,-57,-58,-59,-60,-61,-62,-63,-64,-65,-66,-67,-68,-69,-71,-72,-73,-74,-76,-77,-78,-79,-81,-82,-84,-86,-87,-89,-90,-91,-93,-94,-96,-98,-99,-100,-101,-102,-104,-105,-105,-106,-107,-107,-107,-108,-108,-109,-109,-109,-109,-108,-108,-107,-107,-106,-106,-105,-105,-104,-103,-101,-100,-99,-97,-96,-95,-93,-92,-91,-89,-87,-86,-85,-84,-83,-81,-79,-77,-75,-73,-71,-69,-67,-65,-63,-61,-60,-57,-55,-53,-50,-47,-45,-42,-40,-37,-34,-32,-28,-25,-23,-20,-17,-15,-11,-8,-5,-1},  //flute 7
		{0,-24,-53,-69,-82,-96,-103,-109,-115,-118,-120,-123,-124,-125,-126,-126,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-113,-94,-68,-26,0,24,53,69,82,96,103,109,115,118,120,123,124,125,126,126,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,113,94,68,26},  //round square 2
		{4,19,46,62,76,88,91,90,85,82,80,79,80,81,79,77,70,65,62,63,68,78,96,109,120,127,126,119,101,88,76,64,61,61,65,68,69,65,60,54,45,42,42,47,54,60,68,71,70,66,63,60,61,65,74,80,83,82,76,66,47,35,26,21,24,31,45,54,61,62,59,51,37,28,20,12,9,6,0,-4,-13,-19,-24,-24,-19,-9,9,23,34,44,44,39,24,12,1,-9,-12,-11,-6,-3,-2,-5,-10,-17,-27,-31,-33,-29,-24,-19,-12,-11,-12,-17,-21,-25,-24,-21,-12,-6,-2,-2,-7,-15,-32,-43,-51,-54,-50,-42,-25,-15,-7,-2,-5,-11,-24,-34,-41,-50,-54,-58,-65,-71,-82,-90,-96,-99,-97,-89,-73,-61,-51,-43,-44,-50,-65,-77,-88,-98,-99,-97,-88,-82,-77,-74,-75,-77,-80,-79,-76,-64,-53,-41,-25,-17,-11,-7,-5,-1,4,12,28,38,47,53,51,46,33,24,18,17,22,31,49,60,69,75,73,67,54,45,37,29,25,22,17,11,2,-4,-10,-13,-9,-2,13,26,36,45,44,38,21,8,-3,-17,-21,-21,-18,-15,-13,-16,-21,-28,-38,-43,-44,-41,-35,-28,-18,-14,-13,-14,-16,-16,-13,-7,4,13,21,27,26,21,9,2,-2,-1},  //organ
		{1,1,1,1,1,1,1,1,1,1,16,16,16,16,16,16,30,30,30,30,30,44,44,44,44,44,44,44,44,44,57,57,57,57,57,57,57,69,69,69,69,69,69,69,80,80,80,80,80,80,80,90,90,90,90,90,90,99,99,99,99,99,99,99,106,106,106,106,106,106,106,106,106,106,113,113,113,113,113,113,113,113,113,113,118,118,118,118,118,118,118,118,121,121,121,124,124,124,124,124,124,124,124,124,124,126,126,126,126,126,126,126,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-127,-126,-126,-126,-126,-126,-126,-126,-124,-124,-124,-124,-124,-124,-124,-121,-122,-121,-122,-122,-122,-122,-118,-118,-118,-118,-118,-118,-113,-113,-113,-113,-113,-113,-113,-113,-113,-107,-107,-107,-107,-107,-107,-107,-107,-107,-107,-107,-99,-99,-99,-99,-99,-99,-99,-99,-91,-91,-81,-81,-81,-81,-81,-81,-81,-81,-81,-81,-81,-69,-70,-70,-70,-70,-70,-70,-57,-57,-57,-44,-44,-44,-44,-44,-44,-44,-44,-44,-44,-44,-31,-31,-31,-31,-31,-31,-31,-17,-17,-17,-17,-17,-16,-2},  //birght saw
		{1,16,39,53,68,87,98,108,119,124,127,127,124,119,107,97,78,64,48,23,5,-5,-4,1,8,21,31,40,51,57,61,63,61,57,47,37,25,5,-9,-24,-47,-62,-76,-94,-103,-110,-116,-116,-113,-103,-94,-75,-60,-43,-16,0,3,4,2,0,-5,-9,-13,-20,-25,-29,-35,-38,-41,-44,-45,-45,-43,-41,-39,-33,-29,-23,-14,-8,2,9,17,28,35,42,52,58,63,70,73,75,77,77,76,73,70,65,57,51,44,32,23,15,1,-4,-5,-3,-1,2,8,12,16,22,25,30,31,32,32,31,29,24,20,15,6,0,-6,-17,-24,-31,-41,-47,-53,-59,-63,-65,-67,-66,-65,-61,-57,-52,-42,-35,-24,-15,-7,4,0,-3,-10,-15,-21,-30,-36,-42,-50,-54,-59,-64,-66,-68,-68,-67,-65,-59,-55,-49,-39,-31,-23,-9,0,11,26,37,47,62,71,83,90,96,103,106,108,109,107,105,99,93,86,74,65,55,38,27,15,-2,-4,-1,7,15,23,37,45,53,62,66,69,69,67,59,52,43,26,13,0,-22,-36,-51,-72,-84,-95,-108,-115,-119,-121,-119,-114,-104,-94,-82,-61,-45,-28,-2,1,0,-9,-17,-25,-39,-48,-61,-68,-74,-80,-82,-82,-79,-74,-68,-55,-44,-32,-12},  //fifths
		{0,1,2,4,6,11,13,15,17,18,20,23,24,22,23,25,27,28,29,30,34,39,42,44,45,49,51,54,52,51,52,54,56,58,62,65,72,93,99,104,108,111,115,121,121,117,119,120,121,122,121,120,123,125,125,125,124,123,123,122,118,116,114,112,111,110,107,105,105,106,105,104,101,100,99,98,95,91,88,87,84,83,81,78,78,78,76,75,73,71,69,68,64,61,59,56,55,53,50,48,47,47,46,45,42,41,40,38,35,31,28,27,25,23,21,18,18,18,17,15,13,11,10,9,5,2,0,-1,-3,-4,-7,-9,-10,-9,-10,-11,-13,-15,-16,-17,-20,-25,-27,-29,-31,-33,-35,-38,-37,-35,-37,-38,-40,-42,-43,-44,-52,-59,-63,-70,-73,-77,-85,-90,-91,-82,-84,-88,-95,-98,-100,-103,-109,-117,-120,-122,-122,-124,-126,-127,-125,-122,-121,-120,-120,-119,-118,-116,-117,-118,-117,-116,-115,-113,-112,-111,-110,-104,-102,-101,-99,-97,-95,-92,-92,-93,-91,-90,-87,-86,-85,-83,-80,-76,-73,-72,-70,-68,-66,-64,-63,-63,-62,-59,-58,-56,-54,-53,-51,-46,-44,-42,-40,-38,-36,-33,-32,-33,-31,-30,-28,-26,-25,-23,-20,-16,-14,-12,-11,-8,-6,-4,-4,-4,-3,-1},  //tri high harmonic
	}
};

//static const char OSC_WAVETABLE[2][16][32] PROGMEM = {{
	////square
	//{-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,-128,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127}, // 0 Pure Square
	//{75,89,92,92,92,91,90,89,-11,-21,-24,-25,-26,28,81,85,-2,-14,-16,-17,-17,-17,-17,-17,-119,-126,-128,-128,-127,-69,-16,-10},                        // 1 Octave square (Juno)
	//{115,126,81,-2,-122,-105,-90,-67,82,93,104,109,-16,-100,-128,-107,46,58,70,77,-49,-34,-20,-7,7,20,33,43,-84,-69,-54,-37},                          // 2 square 5ths
	//{106,127,125,124,123,122,121,121,-36,-47,-46,-46,-46,-45,-45,-45,-44,-44,-43,-43,-43,-42,-42,-42,-41,-41,-41,-40,-40,-40,-39,-35},                 // 3 NES pulse wave
	////saw
	//{-128,-121,-113,-105,-97,-89,-81,-73,-65,-57,-49,-41,-33,-25,-17,-9,-1,7,15,23,31,39,47,55,63,71,79,87,95,103,111,119},                            // 4 Pure Saw
	//{7,20,31,44,55,67,78,89,100,110,119,127,69,-90,-31,8,-33,-89,-61,-40,-46,-50,-109,-81,-67,-64,-58,-48,-36,-26,-16,-5},                             // 5 buzz saw
	//{-128,-123,-108,-89,-69,-48,-28,-7,14,34,22,-26,-9,9,29,47,-29,-15,2,22,41,-5,-22,-5,15,34,54,74,93,99,33,45},                                     // 6 Saw 5ths (Juno)
	//{64,81,93,102,111,119,126,121,4,6,12,20,29,38,48,51,-58,-54,-47,-37,-27,-17,-6,0,-128,-127,-120,-112,-102,-92,-81,-64},                            // 7 Octave saw (Juno)
	////sine
	//{-26,-61,-92,-110,-122,-128,-117,-119,-86,-92,-42,-58,0,-24,26,0,21,25,26,31,57,50,92,74,117,91,122,89,99,63,48,10},                               // 8 sub sine + square
	//{-1,23,47,70,89,105,117,124,127,124,117,105,89,70,47,23,-1,-25,-49,-72,-91,-107,-119,-126,-128,-126,-119,-107,-91,-72,-49,-25},                    // 9 Pure Sine
	//{18,47,44,68,109,108,98,121,127,106,94,106,83,40,34,29,-25,-45,-43,-76,-111,-104,-102,-127,-127,-103,-102,-111,-79,-42,-42,-28},                   //10 sine harmonics (ppg)
	//{44,57,62,66,72,79,90,120,126,85,69,58,49,42,36,28,-49,-60,-64,-69,-74,-82,-93,-122,-128,-88,-71,-60,-52,-45,-38,-30},                             //11 warped sine
	////pulse
	//{-128,7,7,6,6,5,5,4,4,3,3,3,2,2,2,1,1,1,1,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-2,1},                                                                       //12 pulse (CZ101)
	//{-54,-36,127,99,-101,-123,30,107,13,-78,-43,43,46,-17,-43,-5,29,12,-19,-18,6,14,-1,-12,-6,6,5,-4,-7,-1,4,1},                                       //13 bassoon (multivox)
	//{27,30,25,15,16,10,11,8,11,5,8,3,5,1,6,-1,2,-2,3,-2,1,-3,-1,-2,2,-2,1,-3,0,-19,-128,-52},                                                          //14 bass (multivox)
	////noise
	//{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}                                                                                  //15 Noise (calculated in code)
	//},{
	////buzz
	//{-100,-65,10,7,-33,-60,-37,1,-22,-84,-45,-10,-19,-17,-53,25,37,13,60,64,-15,65,127,34,9,9,-11,-44,31,42,49,2},                                     // 0 Metal 1
	//{93,35,-58,-128,5,24,30,75,44,-72,-39,59,-7,13,10,34,-35,66,77,52,-55,7,21,-31,-66,-55,-43,-104,7,7,-2,-6},                                        // 1 Metal 2
	//{12,37,25,25,100,113,120,-36,-59,127,115,99,36,8,18,9,-15,-38,-47,-36,-52,-116,-124,-126,39,58,-119,-103,-83,-14,8,-14},                           // 2 Metal 3
	//{119,-16,26,50,66,-71,-52,3,62,15,6,-33,106,5,125,102,-103,-128,-9,-109,32,-9,-17,-62,-4,48,69,-65,-50,-28,16,-114},                               // 3 Metal 4 (PPG)
	////vocal
	//{37,-49,31,-62,20,-28,-128,70,86,19,-64,94,4,89,-34,47,15,-114,96,-16,-17,-67,65,55,-70,26,-76,61,-57,-24,10,-77},                                 // 4 Vocal 1
	//{44,119,126,111,53,7,-7,2,11,0,-25,-52,-67,-60,-40,-15,15,40,59,64,48,21,-5,-15,-5,4,-11,-58,-115,-128,-118,-43},                                  // 5 Vocal 2
	//{-128,-116,-79,-116,-114,-128,-121,-54,18,-11,-15,18,29,16,6,3,-5,-6,-19,-29,-15,20,6,-16,70,117,127,109,104,78,113,110},                          // 6 Vocal 3 (PPG)
	////reed organ
	//{28,36,38,38,37,36,33,35,67,44,29,22,17,14,13,13,41,23,12,6,3,1,0,-10,-128,-119,-100,-83,-67,-52,-39,-24},                                         // 7 brass (multivox)
	//{-128,-127,-119,-102,-52,-43,10,22,10,28,50,17,-11,-27,-12,25,-27,11,25,8,-20,-52,-28,-11,-23,-10,43,51,101,115,122,127},                          // 8 reed organ (PPG)
	//{35,94,118,71,51,84,88,64,27,19,6,-66,-111,-110,-128,-94,-19,48,87,64,62,55,-55,-96,-54,-7,13,-37,-70,-61,-74,-40},                                // 9 elec piano (Logic)
	//{69,126,125,120,81,-8,-94,-128,-113,-74,-29,15,58,98,121,105,32,-64,-121,-128,-125,-100,16,118,126,90,-87,65,-19,-125,-123,-64},                   //10 reed
	////resonant
	//{-128,24,-119,27,-110,29,-102,30,-93,23,-84,22,-76,22,-67,16,-40,23,-15,30,7,37,25,44,43,47,54,54,63,61,69,56},                                    //11 resonant saw (CZ101)
	////harmonics
	//{40,35,-50,-32,43,0,-117,-35,-22,52,11,8,24,15,-31,16,95,94,-128,-70,-10,28,-26,-17,-8,-28,-48,33,51,113,-36,-31},                                 //12 bell (PPG)
	//{-29,-39,116,-30,-97,101,-10,-23,-56,88,-16,-128,104,-3,-31,-51,77,36,-115,89,33,-47,-54,66,33,-111,5,73,-48,-71,89,5},                            //13 chord
	//{104,120,120,29,-128,-117,-109,30,118,74,87,-72,-74,-54,-62,63,4,71,21,-4,31,-89,-29,-72,-7,102,75,111,-57,-103,-123,-91},                         //14 sine overtones
	//{28,86,48,-53,-80,-20,38,61,-18,32,-72,-12,46,-38,-7,50,-2,-1,-34,-53,7,64,75,-26,-103,-42,17,73,127,-97,-93,-32}                                  //15 saw 3rds
//}};

#endif /* ATEOSCOSCILLATORPROGMEM_H_ */