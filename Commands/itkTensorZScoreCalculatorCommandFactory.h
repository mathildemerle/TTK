#pragma once

#include "itkObjectFactoryBase.h"

#include <ttkCommands/ttkCommandsExport.h>

namespace itk
{

  class TTKCOMMANDS_EXPORT TensorZScoreCalculatorCommandFactory : public ObjectFactoryBase
  {
    
  public:
    typedef TensorZScoreCalculatorCommandFactory Self;
    typedef ObjectFactoryBase        Superclass;
    typedef SmartPointer<Self>       Pointer;
    typedef SmartPointer<const Self> ConstPointer;
    
    /** Class methods used to interface with the registered factories. */
    virtual const char* GetITKSourceVersion(void) const;
    virtual const char* GetDescription(void) const;
    
    /** Method for class instantiation. */
    itkFactorylessNewMacro(Self);
    static TensorZScoreCalculatorCommandFactory* FactoryNew() { return new TensorZScoreCalculatorCommandFactory;}
    
    /** Run-time type information (and related methods). */
    itkTypeMacro(TensorZScoreCalculatorCommandFactory, ObjectFactoryBase);
    
    /** Register one factory of this type  */
    static void RegisterOneFactory(void)
    {
      TensorZScoreCalculatorCommandFactory::Pointer CSFFactory = TensorZScoreCalculatorCommandFactory::New();
      ObjectFactoryBase::RegisterFactory( CSFFactory );
    }
    
		
  protected:
    TensorZScoreCalculatorCommandFactory();
    ~TensorZScoreCalculatorCommandFactory();
    
  private:
    TensorZScoreCalculatorCommandFactory(const Self&);
    void operator=(const Self&);
    
  };
  
}
