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
#ifndef _itk_ImageConverterCommandFactory_h_
#define _itk_ImageConverterCommandFactory_h_

#include "itkObjectFactoryBase.h"

#include <ttkConvertCommands/ttkConvertCommandsExport.h>

namespace itk
{

  class TTKCONVERTCOMMANDS_EXPORT ImageConverterCommandFactory : public ObjectFactoryBase
  {
    
  public:
    using Self         = ImageConverterCommandFactory;
    using Superclass   = ObjectFactoryBase;
    using Pointer      = SmartPointer<Self>;
    using ConstPointer = SmartPointer<const Self>;
    
    /** Class methods used to interface with the registered factories. */
    const char* GetITKSourceVersion() const override;
    const char* GetDescription() const override;
    
    /** Method for class instantiation. */
    itkFactorylessNewMacro(Self);
    static ImageConverterCommandFactory* FactoryNew() { return new ImageConverterCommandFactory;}
    
    /** Run-time type information (and related methods). */
    itkTypeMacro(ImageConverterCommandFactory, ObjectFactoryBase);
    
    /** Register one factory of this type  */
    static void RegisterOneFactory()
    {
      ImageConverterCommandFactory::Pointer CSFFactory = ImageConverterCommandFactory::New();
      ObjectFactoryBase::RegisterFactory( CSFFactory );
    }
    
		
  protected:
    ImageConverterCommandFactory();
    ~ImageConverterCommandFactory() override;
    
  private:
    ImageConverterCommandFactory(const Self&);
    void operator=(const Self&);
    
  };
  
}

#endif
