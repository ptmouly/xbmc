/*
 *      Copyright (C) 2012 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#pragma once

#include <string>

class CGUIKeyboard;
enum FILTERING { FILTERING_NONE = 0, FILTERING_CURRENT, FILTERING_SEARCH };
typedef void (*char_callback_t) (CGUIKeyboard *ref, const std::string &typedString);

class CGUIKeyboard
{
  public:

    CGUIKeyboard(){};
    virtual ~CGUIKeyboard(){};

    //entrypoint
    virtual bool ShowAndGetInput(char_callback_t pCallback, const std::string &initialString, std::string &typedString, const std::string &heading, bool bHiddenInput = false) = 0;
    virtual int GetWindowId() const {return 0;}
};
