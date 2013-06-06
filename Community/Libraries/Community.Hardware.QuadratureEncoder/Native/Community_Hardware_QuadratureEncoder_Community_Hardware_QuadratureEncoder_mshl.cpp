//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "Community_Hardware_QuadratureEncoder.h"
#include "Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder.h"

using namespace Community::Hardware;


HRESULT Library_Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder::GetIOPinCount___I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT32 retVal = QuadratureEncoder::GetIOPinCount( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder::GetIOPin___MicrosoftSPOTHardwareMicrosoftSPOTHardwareCpuPin__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 1, param0 ) );

        INT32 retVal = QuadratureEncoder::GetIOPin( pMngObj,  param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );
   }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder::GetIOStatus___CommunityHardwareQuadratureEncoderIOStatus__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 1, param0 ) );

        INT32 retVal = QuadratureEncoder::GetIOStatus( pMngObj,  param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder::InitOutputCompare___VOID__I4__I4__I4__BOOLEAN( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 1, param0 ) );

        INT32 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 2, param1 ) );

        INT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 3, param2 ) );

        INT8 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 4, param3 ) );

        QuadratureEncoder::InitOutputCompare( pMngObj,  param0, param1, param2, param3, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder::InitInputCapture___VOID__I4__BOOLEAN( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 1, param0 ) );

        INT8 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 2, param1 ) );

        QuadratureEncoder::InitInputCapture( pMngObj,  param0, param1, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder::ReleaseIO___VOID__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 1, param0 ) );

        QuadratureEncoder::ReleaseIO( pMngObj,  param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder::GetQuadratureEncoderChannelCount___I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT32 retVal = QuadratureEncoder::GetQuadratureEncoderChannelCount( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder::GetQuadratureEncoderPinsForChannel___VOID__CommunityHardwareQuadratureEncoderChannel__BYREF_MicrosoftSPOTHardwareMicrosoftSPOTHardwareCpuPin__BYREF_MicrosoftSPOTHardwareMicrosoftSPOTHardwareCpuPin( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 1, param0 ) );

        INT32 * param1;
        UINT8 heapblock1[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32_ByRef( stack, heapblock1, 2, param1 ) );

        INT32 * param2;
        UINT8 heapblock2[CLR_RT_HEAP_BLOCK_SIZE];
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32_ByRef( stack, heapblock2, 3, param2 ) );

        QuadratureEncoder::GetQuadratureEncoderPinsForChannel( pMngObj,  param0, param1, param2, hr );
        TINYCLR_CHECK_HRESULT( hr );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock1, 2 ) );
        TINYCLR_CHECK_HRESULT( Interop_Marshal_StoreRef( stack, heapblock2, 3 ) );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder::Initialize___VOID( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        QuadratureEncoder::Initialize( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder::Uninitialize___VOID( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        QuadratureEncoder::Uninitialize( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder::get_Count___I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT32 retVal = QuadratureEncoder::get_Count( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder::set_Count___VOID__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 1, param0 ) );

        QuadratureEncoder::set_Count( pMngObj,  param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder::get_CountEnabled___BOOLEAN( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT8 retVal = QuadratureEncoder::get_CountEnabled( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Community_Hardware_QuadratureEncoder_Community_Hardware_QuadratureEncoder::set_CountEnabled___VOID__BOOLEAN( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT8 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT8( stack, 1, param0 ) );

        QuadratureEncoder::set_CountEnabled( pMngObj,  param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}
