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
#import <TagLib/audioproperties.h"
#import <TagLib/fileref.h"
#import <TagLib/tag.h"
#import <TagLib/taglib_export.h"
#import <TagLib/tagunion.h"

// xm
#import <TagLib/xmproperties.h"
#import <TagLib/xmfile.h"

// it
#import <TagLib/itfile.h"
#import <TagLib/itproperties.h"

// mod
#import <TagLib/modfile.h"
#import <TagLib/modfilebase.h"
#import <TagLib/modproperties.h"
#import <TagLib/modtag.h"

// s3m
#import <TagLib/s3mfile.h"
#import <TagLib/s3mproperties.h"

// ape
#import <TagLib/apefile.h"
#import <TagLib/apeproperties.h"
#import <TagLib/apefooter.h"
#import <TagLib/apeitem.h"
#import <TagLib/apetag.h"

// asf
#import <TagLib/asfattribute.h"
#import <TagLib/asffile.h"
#import <TagLib/asfpicture.h"
#import <TagLib/asfproperties.h"
#import <TagLib/asftag.h"

// flac
#import <TagLib/flacmetadatablock.h"
#import <TagLib/flacunknownmetadatablock.h"
#import <TagLib/flacpicture.h"
#import <TagLib/flacfile.h"
#import <TagLib/flacproperties.h"

// mp4
#import <TagLib/mp4atom.h"
#import <TagLib/mp4coverart.h"
#import <TagLib/mp4file.h"
#import <TagLib/mp4item.h"
#import <TagLib/mp4properties.h"
#import <TagLib/mp4tag.h"

//mpc
#import <TagLib/mpcfile.h"
#import <TagLib/mpcproperties.h"

// mpeg
#import <TagLib/id3v1genres.h"
#import <TagLib/id3v1tag.h"
#import <TagLib/attachedpictureframe.h"
#import <TagLib/commentsframe.h"
#import <TagLib/generalencapsulatedobjectframe.h"
#import <TagLib/ownershipframe.h"
#import <TagLib/popularimeterframe.h"
#import <TagLib/privateframe.h"
#import <TagLib/relativevolumeframe.h"
#import <TagLib/textidentificationframe.h"
#import <TagLib/uniquefileidentifierframe.h"
#import <TagLib/unknownframe.h"
#import <TagLib/unsynchronizedlyricsframe.h"
#import <TagLib/urllinkframe.h"
#import <TagLib/id3v2extendedheader.h"
#import <TagLib/id3v2footer.h"
#import <TagLib/id3v2frame.h"
#import <TagLib/id3v2framefactory.h"
#import <TagLib/id3v2header.h"
#import <TagLib/id3v2synchdata.h"
#import <TagLib/id3v2tag.h"
#import <TagLib/mpegfile.h"
#import <TagLib/mpegheader.h"
#import <TagLib/mpegproperties.h"
#import <TagLib/xingheader.h"

// 0gg
#import <TagLib/oggflacfile.h"
#import <TagLib/oggfile.h"
#import <TagLib/oggpage.h"
#import <TagLib/oggpageheader.h"
#import <TagLib/speexfile.h"
#import <TagLib/speexproperties.h"
#import <TagLib/vorbisfile.h"
#import <TagLib/vorbisproperties.h"
#import <TagLib/xiphcomment.h"

// riff
#import <TagLib/aifffile.h"
#import <TagLib/aiffproperties.h"
#import <TagLib/rifffile.h"
#import <TagLib/infotag.h"
#import <TagLib/wavfile.h"
#import <TagLib/wavproperties.h"

// toolkit
#import <TagLib/trefcounter.h"
#import <TagLib/tpropertymap.h"
#import <TagLib/tbytevectorstream.h"
#import <TagLib/tfilestream.h"
#import <TagLib/tiostream.h"
#import <TagLib/tbytevector.h"
#import <TagLib/tbytevectorlist.h"
#import <TagLib/tdebug.h"
#import <TagLib/tfile.h"
#import <TagLib/tlist.h"
#import <TagLib/tmap.h"
#import <TagLib/tstring.h"
#import <TagLib/tstringlist.h"
#import <TagLib/unicode.h"

// trueaudio
#import <TagLib/trueaudiofile.h"
#import <TagLib/trueaudioproperties.h"

// wavpack
#import <TagLib/wavpackfile.h"
#import <TagLib/wavpackproperties.h"
