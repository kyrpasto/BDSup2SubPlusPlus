/*
 * BDSup2Sub++ (C) 2012 Adam T.
 * Based on code from BDSup2Sub by Copyright 2009 Volker Oth (0xdeadbeef)
 * and Copyright 2012 Miklos Juhasz (mjuhasz)
 *
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "subpicturexml.h"

SubPictureXML::SubPictureXML()
{
}

SubPictureXML::SubPictureXML(const SubPictureXML &other) :
    SubPicture(other),
    origX(other.origX),
    origY(other.origY),
    filenames(other.filenames),
    scaledImageRects(other.scaledImageRects),
    imageRects(other.imageRects)
{
}

SubPictureXML::SubPictureXML(const SubPictureXML *other) :
    SubPicture(other),
    origX(other->origX),
    origY(other->origY),
    filenames(other->filenames),
    scaledImageRects(other->scaledImageRects),
    imageRects(other->imageRects)
{
}

SubPicture *SubPictureXML::copy()
{
    return new SubPictureXML(this);
}
