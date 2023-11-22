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
#ifndef _itk_TensorConverterCommandFactory_h_
#define _itk_TensorConverterCommandFactory_h_

#include "itkObjectFactoryBase.h"

#include <ttkConvertCommands/ttkConvertCommandsExport.h>

namespace itk
{

  class TTKCONVERTCOMMANDS_EXPORT TensorConverterCommandFactory : public ObjectFactoryBase
  {
    
  public:
    using Self         = TensorConverterCommandFactory;
    using Superclass   = ObjectFactoryBase;
    using Pointer      = SmartPointer<Self>;
    using ConstPointer = SmartPointer<const Self>;
    
    /** Class methods used to interface with the registered factories. */
    const char* GetITKSourceVersion() const override;
    const char* GetDescription() const override;
    
    /** Method for class instantiation. */
    itkFactorylessNewMacro(Self);
    static TensorConverterCommandFactory* FactoryNew() { return new TensorConverterCommandFactory;}
    
    /** Run-time type information (and related methods). */
    itkTypeMacro(TensorConverterCommandFactory, ObjectFactoryBase);
    
    /** Register one factory of this type  */
    static void RegisterOneFactory()
    {
      TensorConverterCommandFactory::Pointer CSFFactory = TensorConverterCommandFactory::New();
      ObjectFactoryBase::RegisterFactory( CSFFactory );
    }
    
		
  protected:
    TensorConverterCommandFactory();
    ~TensorConverterCommandFactory() override;
    
  private:
    TensorConverterCommandFactory(const Self&);
    void operator=(const Self&);
    
  };
  
}

#endif
