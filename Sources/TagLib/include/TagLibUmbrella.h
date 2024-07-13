/***************************************************************************
    copyright            : (C) 2020-2024 by Simon Gaus
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

/*
 //! Project version number for TagLib.
 FOUNDATION_EXPORT double TagLibVersionNumber;

 //! Project version string for TagLib.
 FOUNDATION_EXPORT const unsigned char TagLibVersionString[];
 */

// taglib
#include "audioproperties.h"
#include "fileref.h"
#include "tag.h"
#include "taglib_export.h"
#include "tagunion.h"

// xm
#include "xmproperties.h"
#include "xmfile.h"

// it
#include "itfile.h"
#include "itproperties.h"

// mod
#include "modfile.h"
#include "modfilebase.h"
#include "modproperties.h"
#include "modtag.h"

// s3m
#include "s3mfile.h"
#include "s3mproperties.h"

// ape
#include "apefile.h"
#include "apeproperties.h"
#include "apefooter.h"
#include "apeitem.h"
#include "apetag.h"

// asf
#include "asfattribute.h"
#include "asffile.h"
#include "asfpicture.h"
#include "asfproperties.h"
#include "asftag.h"

// flac
#include "flacmetadatablock.h"
#include "flacunknownmetadatablock.h"
#include "flacpicture.h"
#include "flacfile.h"
#include "flacproperties.h"

// mp4
#include "mp4atom.h"
#include "mp4coverart.h"
#include "mp4file.h"
#include "mp4item.h"
#include "mp4properties.h"
#include "mp4tag.h"

//mpc
#include "mpcfile.h"
#include "mpcproperties.h"

// mpeg
#include "id3v1genres.h"
#include "id3v1tag.h"
#include "attachedpictureframe.h"
#include "commentsframe.h"
#include "generalencapsulatedobjectframe.h"
#include "ownershipframe.h"
#include "popularimeterframe.h"
#include "privateframe.h"
#include "relativevolumeframe.h"
#include "textidentificationframe.h"
#include "uniquefileidentifierframe.h"
#include "unknownframe.h"
#include "unsynchronizedlyricsframe.h"
#include "urllinkframe.h"
#include "id3v2extendedheader.h"
#include "id3v2footer.h"
#include "id3v2frame.h"
#include "id3v2framefactory.h"
#include "id3v2header.h"
#include "id3v2synchdata.h"
#include "id3v2tag.h"
#include "mpegfile.h"
#include "mpegheader.h"
#include "mpegproperties.h"
#include "xingheader.h"

// 0gg
#include "oggflacfile.h"
#include "oggfile.h"
#include "oggpage.h"
#include "oggpageheader.h"
#include "speexfile.h"
#include "speexproperties.h"
#include "vorbisfile.h"
#include "vorbisproperties.h"
#include "xiphcomment.h"

// riff
#include "aifffile.h"
#include "aiffproperties.h"
#include "rifffile.h"
#include "infotag.h"
#include "wavfile.h"
#include "wavproperties.h"

// toolkit
#include "trefcounter.h"
#include "tpropertymap.h"
#include "tbytevectorstream.h"
#include "tfilestream.h"
#include "tiostream.h"
#include "tbytevector.h"
#include "tbytevectorlist.h"
#include "tdebug.h"
#include "tfile.h"
#include "tlist.h"
#include "tmap.h"
#include "tstring.h"
#include "tstringlist.h"
#include "unicode.h"

// trueaudio
#include "trueaudiofile.h"
#include "trueaudioproperties.h"

// wavpack
#include "wavpackfile.h"
#include "wavpackproperties.h"
