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
#ifndef _itk_RBFTensorExtrapolationCommandFactory_h_
#define _itk_RBFTensorExtrapolationCommandFactory_h_

#include "itkObjectFactoryBase.h"

#include <ttkCommands/ttkCommandsExport.h>

namespace itk
{

  class TTKCOMMANDS_EXPORT RBFTensorExtrapolationCommandFactory : public ObjectFactoryBase
  {
    
  public:
    using Self         = RBFTensorExtrapolationCommandFactory;
    using Superclass   = ObjectFactoryBase;
    using Pointer      = SmartPointer<Self>;
    using ConstPointer = SmartPointer<const Self>;
    
    /** Class methods used to interface with the registered factories. */
    const char* GetITKSourceVersion() const override;
    const char* GetDescription() const override;
    
    /** Method for class instantiation. */
    itkFactorylessNewMacro(Self);
    static RBFTensorExtrapolationCommandFactory* FactoryNew() { return new RBFTensorExtrapolationCommandFactory;}
    
    /** Run-time type information (and related methods). */
    itkTypeMacro(RBFTensorExtrapolationCommandFactory, ObjectFactoryBase);
    
    /** Register one factory of this type  */
    static void RegisterOneFactory()
    {
      RBFTensorExtrapolationCommandFactory::Pointer CSFFactory = RBFTensorExtrapolationCommandFactory::New();
      ObjectFactoryBase::RegisterFactory( CSFFactory );
    }
    
		
  protected:
    RBFTensorExtrapolationCommandFactory();
    ~RBFTensorExtrapolationCommandFactory() override;
    
  private:
    RBFTensorExtrapolationCommandFactory(const Self&);
    void operator=(const Self&);
    
  };
  
}

#endif
