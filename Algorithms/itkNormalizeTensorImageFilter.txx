#ifndef _itkNormalizeTensorImageFilter_txx
#define _itkNormalizeTensorImageFilter_txx

#include "itkNormalizeTensorImageFilter.h"

#include <itkImageRegionConstIterator.h>
#include <itkImageRegionIterator.h>


namespace itk
{

  template <class TInputImage, class TOutputImage>
  void
  NormalizeTensorImageFilter<TInputImage, TOutputImage>
  ::ThreadedGenerateData(const OutputRegionType& outputRegion, int threadId)
  {

    typedef ImageRegionIterator<OutputImageType>       OutputIteratorType;
    typedef ImageRegionConstIterator<InputImageType>  InputIteratorType;
                                      
    InputIteratorType itIn(this->GetInput(), outputRegion);
    OutputIteratorType itOut(this->GetOutput(), outputRegion);

    while(!itOut.IsAtEnd() )
    {
      
      InputPixelType T = itIn.Get();	
      if( !T.IsZero() )
      {
	InputValueType l = T.GetEigenvalue ( InputPixelType::Dimension -1 );
	T /= l;
      }
      itOut.Set (T);
      
      ++itOut;
      ++itIn;
    }
    
  }


} // end of namespace itk

#endif