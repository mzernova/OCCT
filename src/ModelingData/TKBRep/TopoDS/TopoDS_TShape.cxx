// Created on: 1991-03-20
// Created by: Remi Lequette
// Copyright (c) 1991-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <TopoDS_TShape.hxx>
#include <TopoDS_Shape.hxx>

#include <Standard_Dump.hxx>

IMPLEMENT_STANDARD_RTTIEXT(TopoDS_TShape, Standard_Transient)

//=================================================================================================

void TopoDS_TShape::DumpJson(Standard_OStream& theOStream, Standard_Integer) const
{
  OCCT_DUMP_TRANSIENT_CLASS_BEGIN(theOStream)

  OCCT_DUMP_FIELD_VALUE_POINTER(theOStream, this)

  OCCT_DUMP_FIELD_VALUE_NUMERICAL(theOStream, ShapeType())
  OCCT_DUMP_FIELD_VALUE_NUMERICAL(theOStream, NbChildren())

  OCCT_DUMP_FIELD_VALUE_NUMERICAL(theOStream, myFlags)

  OCCT_DUMP_FIELD_VALUE_NUMERICAL(theOStream, Free())

  OCCT_DUMP_FIELD_VALUE_NUMERICAL(theOStream, Free())
  OCCT_DUMP_FIELD_VALUE_NUMERICAL(theOStream, Locked())
  OCCT_DUMP_FIELD_VALUE_NUMERICAL(theOStream, Modified())
  OCCT_DUMP_FIELD_VALUE_NUMERICAL(theOStream, Checked())

  OCCT_DUMP_FIELD_VALUE_NUMERICAL(theOStream, Orientable())
  OCCT_DUMP_FIELD_VALUE_NUMERICAL(theOStream, Closed())
  OCCT_DUMP_FIELD_VALUE_NUMERICAL(theOStream, Infinite())
  OCCT_DUMP_FIELD_VALUE_NUMERICAL(theOStream, Convex())
}
