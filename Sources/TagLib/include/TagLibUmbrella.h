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

#include "aifffile.h"
#include "aiffproperties.h"
#include "apefile.h"
#include "apefooter.h"
#include "apeitem.h"
#include "apeproperties.h"
#include "apetag.h"
#include "asfattribute.h"
#include "asffile.h"
#include "asfpicture.h"
#include "asfproperties.h"
#include "asftag.h"
#include "asfutils.h"
#include "checked.h"
#include "config.h"
#include "core.h"
#include "cpp11.h"
#include "cpp17.h"
#include "cpp20.h"
#include "dsdiffdiintag.h"
#include "dsdifffile.h"
#include "dsdiffproperties.h"
#include "dsffile.h"
#include "dsfproperties.h"
#include "fileref.h"
#include "flacfile.h"
#include "flacmetadatablock.h"
#include "flacpicture.h"
#include "flacproperties.h"
#include "flacunknownmetadatablock.h"
#include "id3v1genres.h"
#include "id3v1tag.h"
#include "id3v2.h"
#include "id3v2extendedheader.h"
#include "id3v2footer.h"
#include "id3v2frame.h"
#include "id3v2framefactory.h"
#include "id3v2header.h"
#include "id3v2synchdata.h"
#include "id3v2tag.h"
#include "infotag.h"
#include "itfile.h"
#include "itproperties.h"
#include "modfile.h"
#include "modfilebase.h"
#include "modfileprivate.h"
#include "modproperties.h"
#include "modtag.h"
#include "mp4atom.h"
#include "mp4coverart.h"
#include "mp4file.h"
#include "mp4item.h"
#include "mp4itemfactory.h"
#include "mp4properties.h"
#include "mp4tag.h"
#include "mpcfile.h"
#include "mpcproperties.h"
#include "mpegfile.h"
#include "mpegheader.h"
#include "mpegproperties.h"
#include "mpegutils.h"
#include "oggfile.h"
#include "oggflacfile.h"
#include "oggpage.h"
#include "oggpageheader.h"
#include "opusfile.h"
#include "opusproperties.h"
#include "rifffile.h"
#include "riffutils.h"
#include "s3mfile.h"
#include "s3mproperties.h"
#include "speexfile.h"
#include "speexproperties.h"
#include "tag.h"
#include "taglib_export.h"
#include "taglib.h"
#include "tagunion.h"
#include "tagutils.h"
#include "tbytevector.h"
#include "tbytevectorlist.h"
#include "tbytevectorstream.h"
#include "tdebug.h"
#include "tdebuglistener.h"
#include "tfile.h"
#include "tfilestream.h"
#include "tiostream.h"
#include "tlist.h"
#include "tlist.tcc"
#include "tmap.h"
#include "tmap.tcc"
#include "tpicturetype.h"
#include "tpropertymap.h"
#include "trueaudiofile.h"
#include "trueaudioproperties.h"
#include "tstring.h"
#include "tstringlist.h"
#include "tutils.h"
#include "tvariant.h"
#include "tversionnumber.h"
#include "tzlib.h"
#include "unchecked.h"
#include "utf8.h"
#include "vorbisfile.h"
#include "vorbisproperties.h"
#include "wavfile.h"
#include "wavpackfile.h"
#include "wavpackproperties.h"
#include "wavproperties.h"
#include "xingheader.h"
#include "xiphcomment.h"
#include "xmfile.h"
#include "xmproperties.h"
