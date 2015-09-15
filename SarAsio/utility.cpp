// SynchronousAudioRouter
// Copyright (C) 2015 Mackenzie Straight
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with SynchronousAudioRouter.  If not, see <http://www.gnu.org/licenses/>.

#include "stdafx.h"
#include "utility.h"

namespace Sar {

std::string TCHARToUTF8(TCHAR *ptr)
{
    std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;

    return converter.to_bytes(ptr);
}

std::wstring UTF8ToWide(const std::string& str)
{
    std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;

    return converter.from_bytes(str);
}

} // namespace Sar