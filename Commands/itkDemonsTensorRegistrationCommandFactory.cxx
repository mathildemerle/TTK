/*=========================================================================

  Program:   Tensor ToolKit - TTK
  Module:    $URL$
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) INRIA 2010. All rights reserved.
  See LICENSE.txt for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#include "itkDemonsTensorRegistrationCommandFactory.h"
#include "itkCreateObjectFunction.h"
#include "itkDemonsTensorRegistrationCommand.h"
#include "itkVersion.h"

namespace itk
{
  
  DemonsTensorRegistrationCommandFactory::DemonsTensorRegistrationCommandFactory()
  {
    this->RegisterOverride("itkCommandObjectBase",
			   "itkDemonsTensorRegistrationCommand",
			   "non-linear diffeomorphic tensor registration using the demons",
			   1,
			   CreateObjectFunction<DemonsTensorRegistrationCommand>::New());
  }
  
  DemonsTensorRegistrationCommandFactory::~DemonsTensorRegistrationCommandFactory()
  {
  }
  
  const char* 
  DemonsTensorRegistrationCommandFactory::GetITKSourceVersion(void) const
  {
    return ITK_SOURCE_VERSION;
  }
  
  const char* 
  DemonsTensorRegistrationCommandFactory::GetDescription(void) const
  {
    return "Non-linear diffeomorphic tensor registration using the demons";
  }
  
} // end namespace itk
