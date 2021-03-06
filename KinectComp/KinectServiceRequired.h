

#ifndef _KinectService_REQUIRED_PORT_H
#define _KinectService_REQUIRED_PORT_H

#include <OPRoSTypes.h>
#include <InputDataPort.h>
#include <OutputDataPort.h>
#include <InputEventPort.h>
#include <OutputEventPort.h>
#include <ProvidedServicePort.h>
#include <RequiredServicePort.h>
#include <ProvidedMethod.h>
#include <RequiredMethod.h>


#include "Property.h"
		



/*
 * 
 * KinectService : public RequiredServicePort
 *
 */
class KinectServiceRequired
   :public RequiredServicePort
{
protected:

	typedef RequiredMethod<bool> SetParameterFuncType;
	SetParameterFuncType *SetParameterFunc;

	typedef RequiredMethod<Property> GetParameterFuncType;
	GetParameterFuncType *GetParameterFunc;

	typedef RequiredMethod<bool> SetCameraAngleFuncType;
	SetCameraAngleFuncType *SetCameraAngleFunc;

	typedef RequiredMethod<float> GetCameraAngleFuncType;
	GetCameraAngleFuncType *GetCameraAngleFunc;

	typedef RequiredMethod<vector<Skeleton>> GetSkeletonAllFuncType;
	GetSkeletonAllFuncType *GetSkeletonAllFunc;

	typedef RequiredMethod<Skeleton> GetSkeletonFuncType;
	GetSkeletonFuncType *GetSkeletonFunc;

	typedef RequiredMethod<vector<unsigned long>> GetSkeletonIDFuncType;
	GetSkeletonIDFuncType *GetSkeletonIDFunc;

	typedef RequiredMethod<ImageFrame> GetImageFuncType;
	GetImageFuncType *GetImageFunc;

	typedef RequiredMethod<DepthFrame> GetDepthImageFuncType;
	GetDepthImageFuncType *GetDepthImageFunc;

	typedef RequiredMethod<Position> GetPixelDepthFuncType;
	GetPixelDepthFuncType *GetPixelDepthFunc;

public:
	//
	// Constructor
	//
	KinectServiceRequired()
	{
            SetParameterFunc = NULL;
            GetParameterFunc = NULL;
            SetCameraAngleFunc = NULL;
            GetCameraAngleFunc = NULL;
            GetSkeletonAllFunc = NULL;
            GetSkeletonFunc = NULL;
            GetSkeletonIDFunc = NULL;
            GetImageFunc = NULL;
            GetDepthImageFunc = NULL;
            GetPixelDepthFunc = NULL;
            
	   setup();
	}

	// method implementation for required method
	bool SetParameter(Property parameter)
	{
            opros_assert(SetParameterFunc != NULL);
	
            return (*SetParameterFunc)(parameter);
		
	}

	Property GetParameter()
	{
            opros_assert(GetParameterFunc != NULL);
	
            return (*GetParameterFunc)();
		
	}

	bool SetCameraAngle(float degree)
	{
            opros_assert(SetCameraAngleFunc != NULL);
	
            return (*SetCameraAngleFunc)(degree);
		
	}

	float GetCameraAngle()
	{
            opros_assert(GetCameraAngleFunc != NULL);
	
            return (*GetCameraAngleFunc)();
		
	}

	vector<Skeleton> GetSkeletonAll()
	{
            opros_assert(GetSkeletonAllFunc != NULL);
	
            return (*GetSkeletonAllFunc)();
		
	}

	Skeleton GetSkeleton(unsigned long id)
	{
            opros_assert(GetSkeletonFunc != NULL);
	
            return (*GetSkeletonFunc)(id);
		
	}

	vector<unsigned long> GetSkeletonID()
	{
            opros_assert(GetSkeletonIDFunc != NULL);
	
            return (*GetSkeletonIDFunc)();
		
	}

	ImageFrame GetImage()
	{
            opros_assert(GetImageFunc != NULL);
	
            return (*GetImageFunc)();
		
	}

	DepthFrame GetDepthImage()
	{
            opros_assert(GetDepthImageFunc != NULL);
	
            return (*GetDepthImageFunc)();
		
	}

	Position GetPixelDepth(int x,int y)
	{
            opros_assert(GetPixelDepthFunc != NULL);
	
            return (*GetPixelDepthFunc)(x,y);
		
	}

	

    // generated setup function
    virtual void setup()
    {
        Method *ptr_method;
    
        ptr_method = makeRequiredMethod(&KinectServiceRequired::SetParameter,"SetParameter");
        opros_assert(ptr_method != NULL);
        addMethod("SetParameter",ptr_method);
        SetParameterFunc = reinterpret_cast<SetParameterFuncType *>(ptr_method);
        ptr_method = NULL;

    
        ptr_method = makeRequiredMethod(&KinectServiceRequired::GetParameter,"GetParameter");
        opros_assert(ptr_method != NULL);
        addMethod("GetParameter",ptr_method);
        GetParameterFunc = reinterpret_cast<GetParameterFuncType *>(ptr_method);
        ptr_method = NULL;

    
        ptr_method = makeRequiredMethod(&KinectServiceRequired::SetCameraAngle,"SetCameraAngle");
        opros_assert(ptr_method != NULL);
        addMethod("SetCameraAngle",ptr_method);
        SetCameraAngleFunc = reinterpret_cast<SetCameraAngleFuncType *>(ptr_method);
        ptr_method = NULL;

    
        ptr_method = makeRequiredMethod(&KinectServiceRequired::GetCameraAngle,"GetCameraAngle");
        opros_assert(ptr_method != NULL);
        addMethod("GetCameraAngle",ptr_method);
        GetCameraAngleFunc = reinterpret_cast<GetCameraAngleFuncType *>(ptr_method);
        ptr_method = NULL;

    
        ptr_method = makeRequiredMethod(&KinectServiceRequired::GetSkeletonAll,"GetSkeletonAll");
        opros_assert(ptr_method != NULL);
        addMethod("GetSkeletonAll",ptr_method);
        GetSkeletonAllFunc = reinterpret_cast<GetSkeletonAllFuncType *>(ptr_method);
        ptr_method = NULL;

    
        ptr_method = makeRequiredMethod(&KinectServiceRequired::GetSkeleton,"GetSkeleton");
        opros_assert(ptr_method != NULL);
        addMethod("GetSkeleton",ptr_method);
        GetSkeletonFunc = reinterpret_cast<GetSkeletonFuncType *>(ptr_method);
        ptr_method = NULL;

    
        ptr_method = makeRequiredMethod(&KinectServiceRequired::GetSkeletonID,"GetSkeletonID");
        opros_assert(ptr_method != NULL);
        addMethod("GetSkeletonID",ptr_method);
        GetSkeletonIDFunc = reinterpret_cast<GetSkeletonIDFuncType *>(ptr_method);
        ptr_method = NULL;

    
        ptr_method = makeRequiredMethod(&KinectServiceRequired::GetImage,"GetImage");
        opros_assert(ptr_method != NULL);
        addMethod("GetImage",ptr_method);
        GetImageFunc = reinterpret_cast<GetImageFuncType *>(ptr_method);
        ptr_method = NULL;

    
        ptr_method = makeRequiredMethod(&KinectServiceRequired::GetDepthImage,"GetDepthImage");
        opros_assert(ptr_method != NULL);
        addMethod("GetDepthImage",ptr_method);
        GetDepthImageFunc = reinterpret_cast<GetDepthImageFuncType *>(ptr_method);
        ptr_method = NULL;

    
        ptr_method = makeRequiredMethod(&KinectServiceRequired::GetPixelDepth,"GetPixelDepth");
        opros_assert(ptr_method != NULL);
        addMethod("GetPixelDepth",ptr_method);
        GetPixelDepthFunc = reinterpret_cast<GetPixelDepthFuncType *>(ptr_method);
        ptr_method = NULL;

    
    }
};
#endif
