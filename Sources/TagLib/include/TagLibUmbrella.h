/***************************************************************************
    copyright            : (C) 2020 by Simon Gaus
    email                   : simon.cay.gaus@gmail.com
 ***************************************************************************/

/***************************************************************************
 *   This library is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Lesser General Public License version   *
 *   2.1 as published by the Free Software Foundation.                     *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful, but   *
 *   WITHOUT ANY WARRANTY; without even the implied warranty of            *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the Free Software   *
 *   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA         *
 *   02110-1301  USA                                                       *
 *                                                                         *
 *   Alternatively, this file is available under the Mozilla Public        *
 *   License Version 1.1.  You may obtain a copy of the License at         *
 *   http://www.mozilla.org/MPL/                                           *
 ***************************************************************************/

@import Foundation;

//! Project version number for TagLib.
FOUNDATION_EXPORT double TagLibVersionNumber;

//! Project version string for TagLib.
FOUNDATION_EXPORT const unsigned char TagLibVersionString[];

// taglib
#import "TagLib/audioproperties.h"
#import "TagLib/fileref.h"
#import "TagLib/tag.h"
#import "TagLib/taglib_export.h"
#include "TagLib/tagunion.h"

// xm
#include "TagLib/xmproperties.h"
#include "TagLib/xmfile.h"

// it
#include "TagLib/itfile.h"
#include "TagLib/itproperties.h"

// mod
#include "TagLib/modfile.h"
#include "TagLib/modfilebase.h"
#include "TagLib/modproperties.h"
#include "TagLib/modtag.h"

// s3m
#include "TagLib/s3mfile.h"
#include "TagLib/s3mproperties.h"

// ape
#include "TagLib/apefile.h"
#include "TagLib/apeproperties.h"
#include "TagLib/apefooter.h"
#include "TagLib/apeitem.h"
#include "TagLib/apetag.h"

// asf
#include "TagLib/asfattribute.h"
#include "TagLib/asffile.h"
#include "TagLib/asfpicture.h"
#include "TagLib/asfproperties.h"
#include "TagLib/asftag.h"

// flac
#include "TagLib/flacmetadatablock.h"
#include "TagLib/flacunknownmetadatablock.h"
#include "TagLib/flacpicture.h"
#include "TagLib/flacfile.h"
#include "TagLib/flacproperties.h"

// mp4
#include "TagLib/mp4atom.h"
#include "TagLib/mp4coverart.h"
#include "TagLib/mp4file.h"
#include "TagLib/mp4item.h"
#include "TagLib/mp4properties.h"
#include "TagLib/mp4tag.h"

//mpc
#include "TagLib/mpcfile.h"
#include "TagLib/mpcproperties.h"

// mpeg
#include "TagLib/id3v1genres.h"
#include "TagLib/id3v1tag.h"
#include "TagLib/attachedpictureframe.h"
#include "TagLib/commentsframe.h"
#include "TagLib/generalencapsulatedobjectframe.h"
#include "TagLib/ownershipframe.h"
#include "TagLib/popularimeterframe.h"
#include "TagLib/privateframe.h"
#include "TagLib/relativevolumeframe.h"
#include "TagLib/textidentificationframe.h"
#include "TagLib/uniquefileidentifierframe.h"
#include "TagLib/unknownframe.h"
#include "TagLib/unsynchronizedlyricsframe.h"
#include "TagLib/urllinkframe.h"
#include "TagLib/id3v2extendedheader.h"
#include "TagLib/id3v2footer.h"
#include "TagLib/id3v2frame.h"
#include "TagLib/id3v2framefactory.h"
#include "TagLib/id3v2header.h"
#include "TagLib/id3v2synchdata.h"
#include "TagLib/id3v2tag.h"
#include "TagLib/mpegfile.h"
#include "TagLib/mpegheader.h"
#include "TagLib/mpegproperties.h"
#include "TagLib/xingheader.h"

// 0gg
#include "TagLib/oggflacfile.h"
#include "TagLib/oggfile.h"
#include "TagLib/oggpage.h"
#include "TagLib/oggpageheader.h"
#include "TagLib/speexfile.h"
#include "TagLib/speexproperties.h"
#include "TagLib/vorbisfile.h"
#include "TagLib/vorbisproperties.h"
#include "TagLib/xiphcomment.h"

// riff
#include "TagLib/aifffile.h"
#include "TagLib/aiffproperties.h"
#include "TagLib/rifffile.h"
#include "TagLib/infotag.h"
#include "TagLib/wavfile.h"
#include "TagLib/wavproperties.h"

// toolkit
#include "TagLib/trefcounter.h"
#include "TagLib/tpropertymap.h"
#include "TagLib/tbytevectorstream.h"
#include "TagLib/tfilestream.h"
#include "TagLib/tiostream.h"
#include "TagLib/tbytevector.h"
#include "TagLib/tbytevectorlist.h"
#include "TagLib/tdebug.h"
#include "TagLib/tfile.h"
#include "TagLib/tlist.h"
#include "TagLib/tmap.h"
#include "TagLib/tstring.h"
#include "TagLib/tstringlist.h"
#include "TagLib/unicode.h"

// trueaudio
#include "TagLib/trueaudiofile.h"
#include "TagLib/trueaudioproperties.h"

// wavpack
#include "TagLib/wavpackfile.h"
#include "TagLib/wavpackproperties.h"
