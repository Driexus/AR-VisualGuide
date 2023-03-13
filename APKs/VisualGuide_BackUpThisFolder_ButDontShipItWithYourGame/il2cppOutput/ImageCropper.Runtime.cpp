#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t67A1600A303BB89506DFD21B59687088B7E0675B;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ImageCropperNamespace.CircleGraphic
struct CircleGraphic_t22568D3DC935708BD0358D447676C882F663C9CC;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// ImageCropperNamespace.EventSystemHandler
struct EventSystemHandler_t484EF318A7E4379500713AD9EEE6619F9B585DD8;
// System.Exception
struct Exception_t;
// ImageCropperNamespace.FadeOverlayGraphic
struct FadeOverlayGraphic_t0F67593423CB01E5FF6329FAABA7BC9A852EB776;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// ImageCropperNamespace.FontSizeSynchronizer
struct FontSizeSynchronizer_t4948362E402A8E289EADFE345ED6B6C4F35046ED;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// ImageCropperNamespace.ISelectionHandler
struct ISelectionHandler_t68418E9C342FD552C978B6A26609CCDC74ADCBEA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// ImageCropper
struct ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596;
// ImageCropperNamespace.ImageCropperDemo
struct ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// ImageCropperNamespace.NotchCompensator
struct NotchCompensator_t48269ABF6C719407B0C81DB6E2E15E2F72166FB0;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// ImageCropperNamespace.SelectionCornersFitter
struct SelectionCornersFitter_t86C4A7CBE818DFCA669FD9AD9960FE2B617E6FDB;
// ImageCropperNamespace.SelectionGraphicsSynchronizer
struct SelectionGraphicsSynchronizer_tBDA964ED2DF0C6309303CBD46C64EDC0C14127C5;
// ImageCropperNamespace.SelectionMovementHandler
struct SelectionMovementHandler_t8DB56965578BA93748587F2C1CEDD7A7E2ACCBB0;
// ImageCropperNamespace.SelectionResizeHandler
struct SelectionResizeHandler_t5393F0EA60524A1A68EF3E0C61FD95EF8ED839CC;
// ImageCropperNamespace.SizeChangeListener
struct SizeChangeListener_t3F60764215E050A17E62E68E775CA846120B8416;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// ImageCropper/<AutoZoom>d__121
struct U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421;
// ImageCropper/CropResult
struct CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60;
// ImageCropper/ImageResizePolicy
struct ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63;
// ImageCropper/Settings
struct Settings_t0536E882B2B738327E36C740A30DF82DA97F131B;
// ImageCropperNamespace.ImageCropperDemo/<>c
struct U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71;
// ImageCropperNamespace.ImageCropperDemo/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6;
// ImageCropperNamespace.ImageCropperDemo/<TakeScreenshotAndCrop>d__7
struct U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISelectionHandler_t68418E9C342FD552C978B6A26609CCDC74ADCBEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Settings_t0536E882B2B738327E36C740A30DF82DA97F131B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral6507BF4A504215DA9471CFDF2C469668FD98F01F;
IL2CPP_EXTERN_C String_t* _stringLiteral6782C5B76B96AD94BDAE68144D82D5D00C130B40;
IL2CPP_EXTERN_C String_t* _stringLiteral6D8ABF2A5EAB7F1196FDCBA4ED3775CE14E7EC08;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralCE3FBDCAA6E34E685EAC4D80D347E0671F52EB4F;
IL2CPP_EXTERN_C String_t* _stringLiteralD1D7A58EC20889F457B6482430E8AA9E7ADC1D38;
IL2CPP_EXTERN_C String_t* _stringLiteralDE4EA3C15F9ABAD8E68349C988A5AE037A7E5572;
IL2CPP_EXTERN_C String_t* _stringLiteralEF609783F6A30C441C250D9C0A4945927F42099B;
IL2CPP_EXTERN_C const RuntimeMethod* EventSystemHandler_OnSceneLoaded_mEAE56912B7FAF15CDADD5C249D3195D674026D71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSystemHandler_OnSceneUnloaded_m903A043E7EBE3A1512016A052634A307DD6EA9CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageCropper_OnViewportDimensionsChange_mDE32369CEC0F2C348753F6D356BBFB939BF2B0FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_mD66C7660333F5034921DFB3E9E9044BF938A1516_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_mC1AB713B8CCDA3B3F5C9E947BA129F2F72A14D03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAutoZoomU3Ed__121_System_Collections_IEnumerator_Reset_m38B6245CC76775CDF821BEBD6BBA86B6C53B922D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTakeScreenshotAndCropU3Ed__7_System_Collections_IEnumerator_Reset_m8B36DF463622C280E0D9307B265E68EF125A2942_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CTakeScreenshotAndCropU3Eb__7_1_m362548C3B6299A14FAB8C606EEF5E77F50A90432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CTakeScreenshotAndCropU3Eb__0_m6E9B2DD59936ACF19FE21BFD8823317EEA138305_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5B70402306970CF8519A4B4A61573631AC7CF7A3 
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// ImageCropperNamespace.ImageCropperUtils
struct ImageCropperUtils_tB5F8088A0842C26F6C6A8498DBE9D192B71719CF  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// ImageCropperNamespace.ImageCropperDemo/<>c
struct U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71  : public RuntimeObject
{
};

struct U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_StaticFields
{
	// ImageCropperNamespace.ImageCropperDemo/<>c ImageCropperNamespace.ImageCropperDemo/<>c::<>9
	U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71* ___U3CU3E9_0;
	// ImageCropper/ImageResizePolicy ImageCropperNamespace.ImageCropperDemo/<>c::<>9__7_1
	ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* ___U3CU3E9__7_1_1;
};

// ImageCropperNamespace.ImageCropperDemo/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6  : public RuntimeObject
{
	// ImageCropperNamespace.ImageCropperDemo ImageCropperNamespace.ImageCropperDemo/<>c__DisplayClass7_0::<>4__this
	ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* ___U3CU3E4__this_0;
	// UnityEngine.Texture2D ImageCropperNamespace.ImageCropperDemo/<>c__DisplayClass7_0::screenshot
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___screenshot_1;
};

// ImageCropperNamespace.ImageCropperDemo/<TakeScreenshotAndCrop>d__7
struct U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0  : public RuntimeObject
{
	// System.Int32 ImageCropperNamespace.ImageCropperDemo/<TakeScreenshotAndCrop>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ImageCropperNamespace.ImageCropperDemo/<TakeScreenshotAndCrop>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ImageCropperNamespace.ImageCropperDemo ImageCropperNamespace.ImageCropperDemo/<TakeScreenshotAndCrop>d__7::<>4__this
	ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* ___U3CU3E4__this_2;
	// ImageCropperNamespace.ImageCropperDemo/<>c__DisplayClass7_0 ImageCropperNamespace.ImageCropperDemo/<TakeScreenshotAndCrop>d__7::<>8__1
	U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6* ___U3CU3E8__1_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3 
{
	// UnityEngine.Font UnityEngine.TextGenerationSettings::font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	// UnityEngine.Color UnityEngine.TextGenerationSettings::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	// System.Int32 UnityEngine.TextGenerationSettings::fontSize
	int32_t ___fontSize_2;
	// System.Single UnityEngine.TextGenerationSettings::lineSpacing
	float ___lineSpacing_3;
	// System.Boolean UnityEngine.TextGenerationSettings::richText
	bool ___richText_4;
	// System.Single UnityEngine.TextGenerationSettings::scaleFactor
	float ___scaleFactor_5;
	// UnityEngine.FontStyle UnityEngine.TextGenerationSettings::fontStyle
	int32_t ___fontStyle_6;
	// UnityEngine.TextAnchor UnityEngine.TextGenerationSettings::textAnchor
	int32_t ___textAnchor_7;
	// System.Boolean UnityEngine.TextGenerationSettings::alignByGeometry
	bool ___alignByGeometry_8;
	// System.Boolean UnityEngine.TextGenerationSettings::resizeTextForBestFit
	bool ___resizeTextForBestFit_9;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMinSize
	int32_t ___resizeTextMinSize_10;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMaxSize
	int32_t ___resizeTextMaxSize_11;
	// System.Boolean UnityEngine.TextGenerationSettings::updateBounds
	bool ___updateBounds_12;
	// UnityEngine.VerticalWrapMode UnityEngine.TextGenerationSettings::verticalOverflow
	int32_t ___verticalOverflow_13;
	// UnityEngine.HorizontalWrapMode UnityEngine.TextGenerationSettings::horizontalOverflow
	int32_t ___horizontalOverflow_14;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::generationExtents
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___generationExtents_15;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::pivot
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_16;
	// System.Boolean UnityEngine.TextGenerationSettings::generateOutOfBounds
	bool ___generateOutOfBounds_17;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___generationExtents_15;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
// Native definition for COM marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___generationExtents_15;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;
};

struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_10;
};

// ImageCropper/<AutoZoom>d__121
struct U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421  : public RuntimeObject
{
	// System.Int32 ImageCropper/<AutoZoom>d__121::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ImageCropper/<AutoZoom>d__121::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ImageCropper ImageCropper/<AutoZoom>d__121::<>4__this
	ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* ___U3CU3E4__this_2;
	// System.Single ImageCropper/<AutoZoom>d__121::zoomAmount
	float ___zoomAmount_3;
	// System.Boolean ImageCropper/<AutoZoom>d__121::instantZoom
	bool ___instantZoom_4;
	// System.Single ImageCropper/<AutoZoom>d__121::<elapsed>5__2
	float ___U3CelapsedU3E5__2_5;
	// System.Single ImageCropper/<AutoZoom>d__121::<length>5__3
	float ___U3ClengthU3E5__3_6;
	// UnityEngine.Vector3 ImageCropper/<AutoZoom>d__121::<initialScale>5__4
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CinitialScaleU3E5__4_7;
	// UnityEngine.Vector2 ImageCropper/<AutoZoom>d__121::<initialPosition>5__5
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CinitialPositionU3E5__5_8;
	// UnityEngine.Vector3 ImageCropper/<AutoZoom>d__121::<finalScale>5__6
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CfinalScaleU3E5__6_9;
	// UnityEngine.Vector2 ImageCropper/<AutoZoom>d__121::<finalPosition>5__7
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CfinalPositionU3E5__7_10;
	// UnityEngine.Vector2 ImageCropper/<AutoZoom>d__121::<deltaPosition>5__8
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaPositionU3E5__8_11;
	// UnityEngine.Vector3 ImageCropper/<AutoZoom>d__121::<deltaScale>5__9
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CdeltaScaleU3E5__9_12;
};

// ImageCropper/Settings
struct Settings_t0536E882B2B738327E36C740A30DF82DA97F131B  : public RuntimeObject
{
	// System.Boolean ImageCropper/Settings::autoZoomEnabled
	bool ___autoZoomEnabled_0;
	// System.Boolean ImageCropper/Settings::pixelPerfectSelection
	bool ___pixelPerfectSelection_1;
	// System.Boolean ImageCropper/Settings::ovalSelection
	bool ___ovalSelection_2;
	// System.Boolean ImageCropper/Settings::markTextureNonReadable
	bool ___markTextureNonReadable_3;
	// UnityEngine.Color ImageCropper/Settings::imageBackground
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___imageBackground_4;
	// ImageCropper/Button ImageCropper/Settings::visibleButtons
	int32_t ___visibleButtons_5;
	// ImageCropper/Visibility ImageCropper/Settings::guidelinesVisibility
	int32_t ___guidelinesVisibility_6;
	// ImageCropper/Orientation ImageCropper/Settings::initialOrientation
	int32_t ___initialOrientation_7;
	// UnityEngine.Vector2 ImageCropper/Settings::selectionMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___selectionMinSize_8;
	// UnityEngine.Vector2 ImageCropper/Settings::selectionMaxSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___selectionMaxSize_9;
	// System.Single ImageCropper/Settings::selectionMinAspectRatio
	float ___selectionMinAspectRatio_10;
	// System.Single ImageCropper/Settings::selectionMaxAspectRatio
	float ___selectionMaxAspectRatio_11;
	// System.Single ImageCropper/Settings::selectionInitialPaddingLeft
	float ___selectionInitialPaddingLeft_12;
	// System.Single ImageCropper/Settings::selectionInitialPaddingTop
	float ___selectionInitialPaddingTop_13;
	// System.Single ImageCropper/Settings::selectionInitialPaddingRight
	float ___selectionInitialPaddingRight_14;
	// System.Single ImageCropper/Settings::selectionInitialPaddingBottom
	float ___selectionInitialPaddingBottom_15;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TextGenerator::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.String UnityEngine.TextGenerator::m_LastString
	String_t* ___m_LastString_1;
	// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::m_LastSettings
	TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3 ___m_LastSettings_2;
	// System.Boolean UnityEngine.TextGenerator::m_HasGenerated
	bool ___m_HasGenerated_3;
	// UnityEngine.TextGenerationError UnityEngine.TextGenerator::m_LastValid
	int32_t ___m_LastValid_4;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::m_Verts
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_Verts_5;
	// System.Collections.Generic.List`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::m_Characters
	List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ___m_Characters_6;
	// System.Collections.Generic.List`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::m_Lines
	List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ___m_Lines_7;
	// System.Boolean UnityEngine.TextGenerator::m_CachedVerts
	bool ___m_CachedVerts_8;
	// System.Boolean UnityEngine.TextGenerator::m_CachedCharacters
	bool ___m_CachedCharacters_9;
	// System.Boolean UnityEngine.TextGenerator::m_CachedLines
	bool ___m_CachedLines_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	char* ___m_LastString_1;
	TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshaled_pinvoke ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_Verts_5;
	List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ___m_Characters_6;
	List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
// Native definition for COM marshalling of UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppChar* ___m_LastString_1;
	TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshaled_com ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_Verts_5;
	List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ___m_Characters_6;
	List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Action`1<UnityEngine.Vector2>
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
	// System.Boolean UnityEngine.CanvasRenderer::<isMask>k__BackingField
	bool ___U3CisMaskU3Ek__BackingField_4;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ImageCropper/CropResult
struct CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60  : public MulticastDelegate_t
{
};

// ImageCropper/ImageResizePolicy
struct ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// ImageCropperNamespace.EventSystemHandler
struct EventSystemHandler_t484EF318A7E4379500713AD9EEE6619F9B585DD8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ImageCropperNamespace.EventSystemHandler::embeddedEventSystem
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___embeddedEventSystem_4;
};

// ImageCropperNamespace.FontSizeSynchronizer
struct FontSizeSynchronizer_t4948362E402A8E289EADFE345ED6B6C4F35046ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text[] ImageCropperNamespace.FontSizeSynchronizer::texts
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___texts_4;
	// System.Int32[] ImageCropperNamespace.FontSizeSynchronizer::initialBestFitSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___initialBestFitSizes_5;
	// UnityEngine.Canvas ImageCropperNamespace.FontSizeSynchronizer::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_6;
};

// ImageCropper
struct ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ImageCropper::autoZoomInThreshold
	float ___autoZoomInThreshold_5;
	// System.Single ImageCropper::autoZoomOutThreshold
	float ___autoZoomOutThreshold_6;
	// System.Single ImageCropper::autoZoomInFillAmount
	float ___autoZoomInFillAmount_7;
	// System.Single ImageCropper::autoZoomOutFillAmount
	float ___autoZoomOutFillAmount_8;
	// UnityEngine.AnimationCurve ImageCropper::autoZoomCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___autoZoomCurve_9;
	// System.Single ImageCropper::m_selectionSnapToEdgeThreshold
	float ___m_selectionSnapToEdgeThreshold_10;
	// System.Single ImageCropper::viewportScrollSpeed
	float ___viewportScrollSpeed_11;
	// UnityEngine.Canvas ImageCropper::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_12;
	// UnityEngine.RectTransform ImageCropper::m_viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_viewport_13;
	// UnityEngine.RectTransform ImageCropper::m_imageHolder
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_imageHolder_14;
	// UnityEngine.UI.RawImage ImageCropper::m_orientedImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___m_orientedImage_15;
	// UnityEngine.RectTransform ImageCropper::m_selection
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_selection_16;
	// UnityEngine.RectTransform ImageCropper::m_selectionGraphics
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_selectionGraphics_17;
	// ImageCropperNamespace.SizeChangeListener ImageCropper::viewportSizeChangeListener
	SizeChangeListener_t3F60764215E050A17E62E68E775CA846120B8416* ___viewportSizeChangeListener_18;
	// ImageCropperNamespace.SelectionGraphicsSynchronizer ImageCropper::selectionGraphicsSynchronizer
	SelectionGraphicsSynchronizer_tBDA964ED2DF0C6309303CBD46C64EDC0C14127C5* ___selectionGraphicsSynchronizer_19;
	// UnityEngine.Behaviour[] ImageCropper::ovalMaskElements
	BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___ovalMaskElements_20;
	// UnityEngine.Behaviour[] ImageCropper::guidelines
	BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___guidelines_21;
	// UnityEngine.GameObject ImageCropper::flipHorizontalButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___flipHorizontalButton_22;
	// UnityEngine.GameObject ImageCropper::flipVerticalButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___flipVerticalButton_23;
	// UnityEngine.GameObject ImageCropper::rotate90DegreesButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rotate90DegreesButton_24;
	// ImageCropperNamespace.FontSizeSynchronizer ImageCropper::textsSynchronizer
	FontSizeSynchronizer_t4948362E402A8E289EADFE345ED6B6C4F35046ED* ___textsSynchronizer_25;
	// UnityEngine.Canvas ImageCropper::cropRenderCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___cropRenderCanvas_26;
	// UnityEngine.UI.RawImage ImageCropper::cropRenderImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___cropRenderImage_27;
	// UnityEngine.RectTransform ImageCropper::cropRenderSelection
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___cropRenderSelection_28;
	// UnityEngine.Camera ImageCropper::cropRenderCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cropRenderCamera_29;
	// ImageCropper/Settings ImageCropper::m_defaultSettings
	Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* ___m_defaultSettings_30;
	// System.Boolean ImageCropper::m_autoZoomEnabled
	bool ___m_autoZoomEnabled_31;
	// System.Boolean ImageCropper::m_pixelPerfectSelection
	bool ___m_pixelPerfectSelection_32;
	// System.Boolean ImageCropper::m_ovalSelection
	bool ___m_ovalSelection_33;
	// ImageCropper/Visibility ImageCropper::m_guidelinesVisibility
	int32_t ___m_guidelinesVisibility_34;
	// System.Boolean ImageCropper::<MarkTextureNonReadable>k__BackingField
	bool ___U3CMarkTextureNonReadableU3Ek__BackingField_35;
	// UnityEngine.Color ImageCropper::<ImageBackground>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CImageBackgroundU3Ek__BackingField_36;
	// UnityEngine.Vector2 ImageCropper::m_viewportSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_viewportSize_37;
	// UnityEngine.Vector2 ImageCropper::m_originalImageSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_originalImageSize_38;
	// UnityEngine.Vector2 ImageCropper::m_orientedImageSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_orientedImageSize_39;
	// UnityEngine.RectTransform ImageCropper::orientedImageTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___orientedImageTransform_40;
	// System.Collections.IEnumerator ImageCropper::autoZoomCoroutine
	RuntimeObject* ___autoZoomCoroutine_41;
	// ImageCropperNamespace.ISelectionHandler ImageCropper::currentSelectionHandler
	RuntimeObject* ___currentSelectionHandler_42;
	// ImageCropper/Orientation ImageCropper::currentOrientation
	int32_t ___currentOrientation_43;
	// ImageCropper/CropResult ImageCropper::cropCallback
	CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* ___cropCallback_44;
	// ImageCropper/ImageResizePolicy ImageCropper::imageResizePolicy
	ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* ___imageResizePolicy_45;
	// System.Boolean ImageCropper::shouldRefreshViewport
	bool ___shouldRefreshViewport_46;
	// UnityEngine.Vector2 ImageCropper::minSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minSize_47;
	// UnityEngine.Vector2 ImageCropper::maxSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___maxSize_48;
	// UnityEngine.Vector2 ImageCropper::currMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currMinSize_49;
	// UnityEngine.Vector2 ImageCropper::currMaxSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currMaxSize_50;
	// System.Single ImageCropper::minAspectRatio
	float ___minAspectRatio_51;
	// System.Single ImageCropper::maxAspectRatio
	float ___maxAspectRatio_52;
	// System.Single ImageCropper::minImageScale
	float ___minImageScale_53;
};

struct ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_StaticFields
{
	// ImageCropper ImageCropper::m_instance
	ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* ___m_instance_4;
};

// ImageCropperNamespace.ImageCropperDemo
struct ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.RawImage ImageCropperNamespace.ImageCropperDemo::croppedImageHolder
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___croppedImageHolder_4;
	// UnityEngine.UI.Text ImageCropperNamespace.ImageCropperDemo::croppedImageSize
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___croppedImageSize_5;
	// UnityEngine.UI.Toggle ImageCropperNamespace.ImageCropperDemo::ovalSelectionInput
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___ovalSelectionInput_6;
	// UnityEngine.UI.Toggle ImageCropperNamespace.ImageCropperDemo::autoZoomInput
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___autoZoomInput_7;
	// UnityEngine.UI.InputField ImageCropperNamespace.ImageCropperDemo::minAspectRatioInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___minAspectRatioInput_8;
	// UnityEngine.UI.InputField ImageCropperNamespace.ImageCropperDemo::maxAspectRatioInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___maxAspectRatioInput_9;
};

// ImageCropperNamespace.NotchCompensator
struct NotchCompensator_t48269ABF6C719407B0C81DB6E2E15E2F72166FB0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ImageCropperNamespace.NotchCompensator::avoidScreenCutout
	bool ___avoidScreenCutout_4;
	// UnityEngine.RectTransform ImageCropperNamespace.NotchCompensator::buttons
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___buttons_5;
	// UnityEngine.RectTransform ImageCropperNamespace.NotchCompensator::viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___viewport_6;
	// UnityEngine.UI.Image ImageCropperNamespace.NotchCompensator::notchBackground
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___notchBackground_7;
	// UnityEngine.RectTransform ImageCropperNamespace.NotchCompensator::canvasTR
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___canvasTR_8;
	// System.Boolean ImageCropperNamespace.NotchCompensator::screenDimensionsChanged
	bool ___screenDimensionsChanged_9;
};

// ImageCropperNamespace.SelectionCornersFitter
struct SelectionCornersFitter_t86C4A7CBE818DFCA669FD9AD9960FE2B617E6FDB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform ImageCropperNamespace.SelectionCornersFitter::selection
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___selection_4;
	// UnityEngine.RectTransform ImageCropperNamespace.SelectionCornersFitter::bottomLeft
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___bottomLeft_5;
	// UnityEngine.RectTransform ImageCropperNamespace.SelectionCornersFitter::bottomRight
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___bottomRight_6;
	// UnityEngine.RectTransform ImageCropperNamespace.SelectionCornersFitter::topLeft
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___topLeft_7;
	// UnityEngine.RectTransform ImageCropperNamespace.SelectionCornersFitter::topRight
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___topRight_8;
	// System.Single ImageCropperNamespace.SelectionCornersFitter::preferredCornerSize
	float ___preferredCornerSize_9;
	// System.Single ImageCropperNamespace.SelectionCornersFitter::cornerSizeMaxRatio
	float ___cornerSizeMaxRatio_10;
	// UnityEngine.Vector2 ImageCropperNamespace.SelectionCornersFitter::inset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___inset_11;
};

// ImageCropperNamespace.SelectionGraphicsSynchronizer
struct SelectionGraphicsSynchronizer_tBDA964ED2DF0C6309303CBD46C64EDC0C14127C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ImageCropper ImageCropperNamespace.SelectionGraphicsSynchronizer::manager
	ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* ___manager_4;
	// UnityEngine.RectTransform ImageCropperNamespace.SelectionGraphicsSynchronizer::selectionBottomLeft
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___selectionBottomLeft_5;
	// UnityEngine.RectTransform ImageCropperNamespace.SelectionGraphicsSynchronizer::selectionTopRight
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___selectionTopRight_6;
	// UnityEngine.RectTransform ImageCropperNamespace.SelectionGraphicsSynchronizer::viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___viewport_7;
	// UnityEngine.RectTransform ImageCropperNamespace.SelectionGraphicsSynchronizer::selectionGraphics
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___selectionGraphics_8;
	// UnityEngine.Vector2 ImageCropperNamespace.SelectionGraphicsSynchronizer::bottomLeftPrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftPrevPosition_9;
	// UnityEngine.Vector2 ImageCropperNamespace.SelectionGraphicsSynchronizer::topRightPrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightPrevPosition_10;
};

// ImageCropperNamespace.SelectionMovementHandler
struct SelectionMovementHandler_t8DB56965578BA93748587F2C1CEDD7A7E2ACCBB0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ImageCropper ImageCropperNamespace.SelectionMovementHandler::manager
	ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* ___manager_5;
	// UnityEngine.RectTransform ImageCropperNamespace.SelectionMovementHandler::selection
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___selection_6;
	// UnityEngine.Vector2 ImageCropperNamespace.SelectionMovementHandler::initialPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialPosition_7;
	// UnityEngine.Vector2 ImageCropperNamespace.SelectionMovementHandler::initialTouchPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialTouchPosition_8;
	// System.Int32 ImageCropperNamespace.SelectionMovementHandler::draggingPointer
	int32_t ___draggingPointer_9;
};

// ImageCropperNamespace.SelectionResizeHandler
struct SelectionResizeHandler_t5393F0EA60524A1A68EF3E0C61FD95EF8ED839CC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ImageCropper ImageCropperNamespace.SelectionResizeHandler::manager
	ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* ___manager_6;
	// ImageCropper/Direction ImageCropperNamespace.SelectionResizeHandler::direction
	int32_t ___direction_7;
	// ImageCropper/Direction ImageCropperNamespace.SelectionResizeHandler::secondaryDirection
	int32_t ___secondaryDirection_8;
	// ImageCropper/Direction ImageCropperNamespace.SelectionResizeHandler::directions
	int32_t ___directions_9;
	// ImageCropper/Direction ImageCropperNamespace.SelectionResizeHandler::pivot
	int32_t ___pivot_10;
	// UnityEngine.RectTransform ImageCropperNamespace.SelectionResizeHandler::selection
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___selection_11;
	// UnityEngine.Vector2 ImageCropperNamespace.SelectionResizeHandler::initialPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialPosition_12;
	// UnityEngine.Vector2 ImageCropperNamespace.SelectionResizeHandler::initialTouchPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialTouchPosition_13;
	// UnityEngine.Vector2 ImageCropperNamespace.SelectionResizeHandler::initialSelectionPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialSelectionPosition_14;
	// UnityEngine.Vector2 ImageCropperNamespace.SelectionResizeHandler::initialSelectionSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialSelectionSize_15;
	// System.Int32 ImageCropperNamespace.SelectionResizeHandler::draggingPointer
	int32_t ___draggingPointer_16;
	// UnityEngine.EventSystems.PointerEventData ImageCropperNamespace.SelectionResizeHandler::draggingPointerEventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___draggingPointerEventData_17;
};

// ImageCropperNamespace.SizeChangeListener
struct SizeChangeListener_t3F60764215E050A17E62E68E775CA846120B8416  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform ImageCropperNamespace.SizeChangeListener::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_4;
	// System.Action`1<UnityEngine.Vector2> ImageCropperNamespace.SizeChangeListener::onSizeChanged
	Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___onSizeChanged_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// ImageCropperNamespace.FadeOverlayGraphic
struct FadeOverlayGraphic_t0F67593423CB01E5FF6329FAABA7BC9A852EB776  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// UnityEngine.Sprite ImageCropperNamespace.FadeOverlayGraphic::renderSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___renderSprite_27;
	// UnityEngine.Vector2 ImageCropperNamespace.FadeOverlayGraphic::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_28;
	// UnityEngine.Color32 ImageCropperNamespace.FadeOverlayGraphic::color32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color32_29;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// ImageCropperNamespace.CircleGraphic
struct CircleGraphic_t22568D3DC935708BD0358D447676C882F663C9CC  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite ImageCropperNamespace.CircleGraphic::renderSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___renderSprite_36;
	// System.Int32 ImageCropperNamespace.CircleGraphic::detail
	int32_t ___detail_37;
	// ImageCropperNamespace.CircleGraphic/Mode ImageCropperNamespace.CircleGraphic::mode
	int32_t ___mode_38;
	// System.Single ImageCropperNamespace.CircleGraphic::edgeThickness
	float ___edgeThickness_39;
	// UnityEngine.Vector2 ImageCropperNamespace.CircleGraphic::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_40;
	// UnityEngine.Color32 ImageCropperNamespace.CircleGraphic::color32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color32_41;
	// System.Single ImageCropperNamespace.CircleGraphic::width
	float ___width_42;
	// System.Single ImageCropperNamespace.CircleGraphic::height
	float ___height_43;
	// System.Single ImageCropperNamespace.CircleGraphic::deltaWidth
	float ___deltaWidth_44;
	// System.Single ImageCropperNamespace.CircleGraphic::deltaHeight
	float ___deltaHeight_45;
	// System.Single ImageCropperNamespace.CircleGraphic::deltaRadians
	float ___deltaRadians_46;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA  : public RuntimeArray
{
	ALIGN_FIELD (8) Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* m_Items[1];

	inline Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m23EDF9F259C0FB6CB9AF2E2B6D9931C08F510841_gshared (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m3D196ADE59DE13B9FDC5D827B1A6D00CBEF1F6DF_gshared (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector2>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_gshared_inline (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___obj0, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<ImageCropper>(System.String)
inline ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* Resources_Load_TisImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_mC1AB713B8CCDA3B3F5C9E947BA129F2F72A14D03 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___path0, method);
}
// T UnityEngine.Object::Instantiate<ImageCropper>(T)
inline ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* Object_Instantiate_TisImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_mD66C7660333F5034921DFB3E9E9044BF938A1516 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* ___original0, const RuntimeMethod* method)
{
	return ((  ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* (*) (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void ImageCropper/Settings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settings__ctor_m75E3F038BEE35F0BC924BB73718DB89FED60B6DF (Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* __this, const RuntimeMethod* method) ;
// System.Void ImageCropper::StartAutoZoom(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_StartAutoZoom_mD2DA1F4851822D5A7D635A7485278FB706542971 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, bool ___instantZoom0, const RuntimeMethod* method) ;
// System.Void ImageCropper::MakePixelPerfectSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_MakePixelPerfectSelection_mAD54D05F1B90EF39861478B1BC2E2DFB0BDA00BA (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m23EDF9F259C0FB6CB9AF2E2B6D9931C08F510841 (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m23EDF9F259C0FB6CB9AF2E2B6D9931C08F510841_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.FontSizeSynchronizer::Synchronize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FontSizeSynchronizer_Synchronize_m17B19EF73FBA278E588718323C6940A102454C1C (FontSizeSynchronizer_t4948362E402A8E289EADFE345ED6B6C4F35046ED* __this, const RuntimeMethod* method) ;
// System.Void ImageCropper::ResetView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_ResetView_m75A480044959DD462C6BB298D4E377F67D79BD9E (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, bool ___frameSelection0, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.SelectionGraphicsSynchronizer::Synchronize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionGraphicsSynchronizer_Synchronize_mF678C5C810F0541DD021369CF80100374CA73325 (SelectionGraphicsSynchronizer_tBDA964ED2DF0C6309303CBD46C64EDC0C14127C5* __this, const RuntimeMethod* method) ;
// System.Void ImageCropper::Show(UnityEngine.Texture,ImageCropper/CropResult,ImageCropper/Settings,ImageCropper/ImageResizePolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_Show_mDDEA5F5F4F1933DB335157CA6B055911C91133F4 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image0, CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* ___onCrop1, Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* ___settings2, ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* ___croppedImageResizePolicy3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// ImageCropper/Settings ImageCropper::get_DefaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* ImageCropper_get_DefaultSettings_m3603A4B72C72E4A0B64473B7FA57DF11F5AC6910 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void ImageCropper::set_MarkTextureNonReadable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCropper_set_MarkTextureNonReadable_mCB414FBDD1A5F9C3AF74C2AD577F7E03531B121B_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ImageCropper::set_OvalSelection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_set_OvalSelection_mD832D0366DB542A650C869F1828F1F723FAA683F (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ImageCropper::set_GuidelinesVisibility(ImageCropper/Visibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_set_GuidelinesVisibility_m966DBF042058CDE4ABA9F001AF1B0E849E488429 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ImageCropper::set_ImageBackground(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCropper_set_ImageBackground_m7E5A3D8309BF128DE480AA51052482C9C36EA3AC_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 ImageCropperNamespace.ImageCropperUtils::ClampBetween(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropperUtils_ClampBetween_m2C62C6E17BA7EDABF01DE29DC8252975D332380C (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max2, const RuntimeMethod* method) ;
// System.Void ImageCropper::SetOrientation(ImageCropper/Orientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, int32_t ___orientation0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ImageCropperNamespace.ImageCropperUtils::ScaleWith(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropperUtils_ScaleWith_mBE8BCAA5749C2DFC7844283E20579C5AC7402387 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale1, const RuntimeMethod* method) ;
// System.Void ImageCropper::UpdateSelection(UnityEngine.Vector2,UnityEngine.Vector2,ImageCropper/Direction,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_UpdateSelection_m1AB88B93DC6948B2F045FDD2B43F00CE464B432F (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size1, int32_t ___pivot2, bool ___shrinkToFit3, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void ImageCropper::StopAutoZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_StopAutoZoom_m83614FBD595053EDFCADC679407A4184EBEE76CB (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ImageCropper::RestrictImageToViewport(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropper_RestrictImageToViewport_mF1AB8CD9C02E9FC6853F8FB6D8D3163210FC20B0 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___scale1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813_inline (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, const RuntimeMethod* method) ;
// System.Void ImageCropper/CropResult::Invoke(System.Boolean,UnityEngine.Texture,UnityEngine.Texture2D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CropResult_Invoke_mAE2B7E0A2A52A7E221E695001C760FF018F36970_inline (CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* __this, bool ___result0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalImage1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___croppedImage2, const RuntimeMethod* method) ;
// System.Void ImageCropper::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_Hide_m95FBBB51D7EE499C6C767EB42395481446770413 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D ImageCropper::CropSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ImageCropper_CropSelection_mBE9948ECEE3E522D28C21F1C14CF3E7D6E2B0C7F (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void ImageCropper/ImageResizePolicy::Invoke(System.Int32&,System.Int32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResizePolicy_Invoke_m341ACAE059981DEA0DC94A356814501C496D386E_inline (ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* __this, int32_t* ___width0, int32_t* ___height1, const RuntimeMethod* method) ;
// UnityEngine.Texture2D ImageCropper::CropSelection(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ImageCropper_CropSelection_m35CA6FC33E687C46C9987BDA4CCF182E1C3C9EDB (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_aspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7 (const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutRebuilder_ForceRebuildLayoutImmediate_mCCA094579654469919EFA4B5AA5D9AF93CD67B4A (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___layoutRoot0, const RuntimeMethod* method) ;
// UnityEngine.Color ImageCropper::get_ImageBackground()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ImageCropper_get_ImageBackground_m753EC4DD5F1C68FCC34E67FBF935947C3FFF623B_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Clear_mA172E771FC32B516DB826F537832307C3A16BE09 (bool ___clearDepth0, bool ___clearColor1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method) ;
// System.Boolean ImageCropper::get_MarkTextureNonReadable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ImageCropper_get_MarkTextureNonReadable_mEFF3600F631486EC373C0CB8CDD1692F8E5BEA20_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void ImageCropper::RotateClockwise(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_RotateClockwise_mADB728DF260AB2EBA668BF85AB8B429B09DA4577 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator ImageCropper::AutoZoom(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageCropper_AutoZoom_m1E15C105151E36C0FD2A47815CC180FDE436AF22 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, float ___zoomAmount0, bool ___instantZoom1, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void ImageCropper/<AutoZoom>d__121::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAutoZoomU3Ed__121__ctor_mA710C978E765D54A68830663C0C120F496E34C07 (U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ImageCropperNamespace.ImageCropperUtils::RoundToInt(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropperUtils_RoundToInt_m19D6FA6CBFBF006299F8B4AF5BA05D8661EF4B1F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ImageCropperNamespace.ImageCropperUtils::CeilToInt(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropperUtils_CeilToInt_m232ABCB677D6AD78501B51C830D69E8FF6CEBE60 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// ImageCropper ImageCropper::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* ImageCropper_get_Instance_m7563710A6D38B123978A0867F3C85275F281B63B (const RuntimeMethod* method) ;
// System.Boolean ImageCropper::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageCropper_get_IsOpen_mE564B3643A3F8B095534D0C3AD7350FB5CC69767 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ImageCropperNamespace.ImageCropperDemo::TakeScreenshotAndCrop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageCropperDemo_TakeScreenshotAndCrop_mF9E85B66735266A8A0DB960BCAAE24B8EC85CCCB (ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* __this, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.ImageCropperDemo/<TakeScreenshotAndCrop>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotAndCropU3Ed__7__ctor_mEE76CB290C3FD78229E8C505CF9B922B542B2DEB (U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.ImageCropperDemo/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD56F2B763F554561FDE0F5F25C548F308A0A559D (U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71* __this, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.ImageCropperDemo/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mD3DCCFABEF1900718E6F0A44780E84AAB77036D6 (U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423 (String_t* ___s0, float* ___result1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void ImageCropper/CropResult::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropResult__ctor_m73027D83B97458F16268DFF5BB87B9ED7A0480B9 (CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) ;
// System.Void ImageCropper/ImageResizePolicy::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResizePolicy__ctor_mE27648850070826641FBAA6A3ED67AFAC8782FF0 (ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 DataUtility_GetOuterUV_m408EFF91CB39DE165F8D00D42603DF1C49C57CF2 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.UI.Graphic::GetPixelAdjustedRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Graphic_GetPixelAdjustedRect_m70D7B527D04C0B88C23E7C6661A8FF1ECC4B4BA1 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.CircleGraphic::FillInside(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleGraphic_FillInside_m413B411752B09EBDD0D5499AA20DFE7BCB87741F (CircleGraphic_t22568D3DC935708BD0358D447676C882F663C9CC* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv02, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.CircleGraphic::FillOutside(UnityEngine.UI.VertexHelper,UnityEngine.Vector3,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleGraphic_FillOutside_mF0B3E71C71AF14E4C0C603679380B169F0B654BE (CircleGraphic_t22568D3DC935708BD0358D447676C882F663C9CC* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPoint1, int32_t ___quarterIndex2, int32_t ___detail3, int32_t* ___triangleIndex4, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.CircleGraphic::GenerateEdges(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleGraphic_GenerateEdges_m8FCC956137D053959CA1EE206C50F6226BB6C4B7 (CircleGraphic_t22568D3DC935708BD0358D447676C882F663C9CC* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, const RuntimeMethod* method) ;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_set_cull_mA2A521F41185511CCFF6E2BFCD7B68B1DE3C0D9D (CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, int32_t ___idx00, int32_t ___idx11, int32_t ___idx22, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic__ctor_mD2E256F950AAAE0E2445971361B5C54D2066E4C2 (MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneLoaded_m72A7C2A1B8EF1C21A208A9A015375577768B3978 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m3D196ADE59DE13B9FDC5D827B1A6D00CBEF1F6DF (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m3D196ADE59DE13B9FDC5D827B1A6D00CBEF1F6DF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneUnloaded(UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneUnloaded_m2CACDB3F47DED2C92E6AA1912906F7E2C61424EB (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneUnloaded(UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneUnloaded_mC3BAE77FFFA0DBA3F6EE3303CA78400A3932F029 (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* ___value0, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.EventSystemHandler::ActivateEventSystemIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_ActivateEventSystemIfNeeded_mCEC2BD012763853C07243106E32DC20DCF7CF581 (EventSystemHandler_t484EF318A7E4379500713AD9EEE6619F9B585DD8* __this, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.EventSystemHandler::DeactivateEventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_DeactivateEventSystem_mBF43D9AEA6B35225E4D9D5398547F133DBB54834 (EventSystemHandler_t484EF318A7E4379500713AD9EEE6619F9B585DD8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.FadeOverlayGraphic::GenerateMesh(UnityEngine.UI.VertexHelper,System.Single,System.Single,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeOverlayGraphic_GenerateMesh_mB86477CD653EB337DAD4B9EABC6CD438DE0D68AD (FadeOverlayGraphic_t0F67593423CB01E5FF6329FAABA7BC9A852EB776* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, float ___xMin1, float ___yMin2, float ___xMax3, float ___yMax4, int32_t ___triangleIndex5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic__ctor_m61FAEBEC21F22FE00B8CF39A8498AD31F62C0D6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Text_get_resizeTextMaxSize_m7B61DCEEA4D801C4B8149674B27DBE99098A38E3 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_resizeTextMaxSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_resizeTextMaxSize_m25EB2C9302AA9354237A2F56BB3E019192C6015B (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_resizeTextForBestFit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_resizeTextForBestFit_m1376BB9FDBAC5571E0F24564E22391AC8EB89A35 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGenerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* Text_get_cachedTextGenerator_mFC242539F7380F54696D431B126B69DC4EFC821E (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.TextGenerationSettings UnityEngine.UI.Text::GetGenerationSettings(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3 Text_GetGenerationSettings_m620E0E5AFB30E3331A0371EB2361F587BB0A1E0F (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___extents0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextGenerator_Populate_m5620AF6DBC180FC3FBE3E5F5930CF7CB65DD3CE2 (TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* __this, String_t* ___str0, TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3 ___settings1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextGenerator_get_fontSizeUsedForBestFit_mBCA834ACDE42232D91E30FB189D99D7CE9EAE084 (TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.NotchCompensator::CheckScreenCutout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotchCompensator_CheckScreenCutout_m2E2E49CBA751DF86B8B6C80F48E447AC246A4D24 (NotchCompensator_t48269ABF6C719407B0C81DB6E2E15E2F72166FB0* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Screen::get_safeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Screen_get_safeArea_m2ADAD6C36CC5DB40CC2DAD300DD1DF7CA4DF2525 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.SelectionCornersFitter::OnRectTransformDimensionsChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionCornersFitter_OnRectTransformDimensionsChange_mD6A621D7E346250D7F65F508C48A7273421CA76A (SelectionCornersFitter_t86C4A7CBE818DFCA669FD9AD9960FE2B617E6FDB* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform ImageCropper::get_Viewport()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ImageCropper_get_Viewport_mA3410F26F2F2AFF7C2BEF68B3B70C06B9CC1FED3_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform ImageCropper::get_SelectionGraphics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ImageCropper_get_SelectionGraphics_m64A007CB7FF756C6F2592A1644E0A8717B67B871_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.SelectionGraphicsSynchronizer::Synchronize(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionGraphicsSynchronizer_Synchronize_m5D2510D370CA2B6627C0FA8277C2C33A8197011F (SelectionGraphicsSynchronizer_tBDA964ED2DF0C6309303CBD46C64EDC0C14127C5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeft0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRight1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform ImageCropper::get_Selection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ImageCropper_get_Selection_mC538C5B65CDD6980DEAAD6DE113FCAA53AA8A828_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// System.Void ImageCropper::StopModifySelectionWith(ImageCropperNamespace.ISelectionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_StopModifySelectionWith_mC48D8422A1768DD62D31062865628352E0A80EAF (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, RuntimeObject* ___handler0, const RuntimeMethod* method) ;
// System.Boolean ImageCropper::CanModifySelectionWith(ImageCropperNamespace.ISelectionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageCropper_CanModifySelectionWith_m849C3291BCCFE5FC82DBADB9AC491C58DE73805D (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, RuntimeObject* ___handler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ImageCropper::GetTouchPosition(UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropper_GetTouchPosition_mA2276D3CDB7730839FCF54A09142B895C45969F7 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPos0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void ImageCropper::UpdateSelection(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_UpdateSelection_m029DF565AC7BB2D873C7310B03622395CBC6E943 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform ImageCropper::get_ImageHolder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ImageCropper_get_ImageHolder_mED261B36450556B6C346A656B4538C022FC6E46C_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ImageCropper::get_ViewportSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropper_get_ViewportSize_m7DD5EF86737B7A14C95C69FF5EB754631EF9340B_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ImageCropper::ScrollImage(UnityEngine.Vector2,ImageCropper/Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropper_ScrollImage_mD210D83BC94A503918341CD3902FE441777F0496 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___imagePosition0, int32_t ___direction1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single ImageCropper::get_SelectionSnapToEdgeThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ImageCropper_get_SelectionSnapToEdgeThreshold_m70652C503410616AC6177CDB948E379D5C3DE5B5_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ImageCropper::get_OrientedImageSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropper_get_OrientedImageSize_m40649E191CA14B9FE480249553B817521D9CBAB1_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.SelectionResizeHandler::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionResizeHandler_OnDrag_m8F1A672764B6EA162D049B67BB673F76C5421A98 (SelectionResizeHandler_t5393F0EA60524A1A68EF3E0C61FD95EF8ED839CC* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void ImageCropperNamespace.SizeChangeListener::OnRectTransformDimensionsChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeChangeListener_OnRectTransformDimensionsChange_mF1716EFABC2B0EFD3151685A03FEAF06023D3210 (SizeChangeListener_t3F60764215E050A17E62E68E775CA846120B8416* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector2>::Invoke(T)
inline void Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_inline (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ImageCropper ImageCropper::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* ImageCropper_get_Instance_m7563710A6D38B123978A0867F3C85275F281B63B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_mD66C7660333F5034921DFB3E9E9044BF938A1516_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_mC1AB713B8CCDA3B3F5C9E947BA129F2F72A14D03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1D7A58EC20889F457B6482430E8AA9E7ADC1D38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_instance == null )
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_0 = ((ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_StaticFields*)il2cpp_codegen_static_fields_for(ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_il2cpp_TypeInfo_var))->___m_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// m_instance = Instantiate( Resources.Load<ImageCropper>( "ImageCropper" ) );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_2;
		L_2 = Resources_Load_TisImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_mC1AB713B8CCDA3B3F5C9E947BA129F2F72A14D03(_stringLiteralD1D7A58EC20889F457B6482430E8AA9E7ADC1D38, Resources_Load_TisImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_mC1AB713B8CCDA3B3F5C9E947BA129F2F72A14D03_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_3;
		L_3 = Object_Instantiate_TisImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_mD66C7660333F5034921DFB3E9E9044BF938A1516(L_2, Object_Instantiate_TisImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_mD66C7660333F5034921DFB3E9E9044BF938A1516_RuntimeMethod_var);
		((ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_StaticFields*)il2cpp_codegen_static_fields_for(ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_il2cpp_TypeInfo_var))->___m_instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_StaticFields*)il2cpp_codegen_static_fields_for(ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_il2cpp_TypeInfo_var))->___m_instance_4), (void*)L_3);
	}

IL_0021:
	{
		// return m_instance;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_4 = ((ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_StaticFields*)il2cpp_codegen_static_fields_for(ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_il2cpp_TypeInfo_var))->___m_instance_4;
		return L_4;
	}
}
// System.Single ImageCropper::get_SelectionSnapToEdgeThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ImageCropper_get_SelectionSnapToEdgeThreshold_m70652C503410616AC6177CDB948E379D5C3DE5B5 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public float SelectionSnapToEdgeThreshold { get { return m_selectionSnapToEdgeThreshold; } }
		float L_0 = __this->___m_selectionSnapToEdgeThreshold_10;
		return L_0;
	}
}
// UnityEngine.RectTransform ImageCropper::get_Viewport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ImageCropper_get_Viewport_mA3410F26F2F2AFF7C2BEF68B3B70C06B9CC1FED3 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform Viewport { get { return m_viewport; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_viewport_13;
		return L_0;
	}
}
// UnityEngine.RectTransform ImageCropper::get_ImageHolder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ImageCropper_get_ImageHolder_mED261B36450556B6C346A656B4538C022FC6E46C (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform ImageHolder { get { return m_imageHolder; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_imageHolder_14;
		return L_0;
	}
}
// UnityEngine.UI.RawImage ImageCropper::get_OrientedImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ImageCropper_get_OrientedImage_m3A238CB5F61399408E1C77D9107BEC528BE40037 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public RawImage OrientedImage { get { return m_orientedImage; } }
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_0 = __this->___m_orientedImage_15;
		return L_0;
	}
}
// UnityEngine.RectTransform ImageCropper::get_Selection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ImageCropper_get_Selection_mC538C5B65CDD6980DEAAD6DE113FCAA53AA8A828 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform Selection { get { return m_selection; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_selection_16;
		return L_0;
	}
}
// UnityEngine.RectTransform ImageCropper::get_SelectionGraphics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ImageCropper_get_SelectionGraphics_m64A007CB7FF756C6F2592A1644E0A8717B67B871 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform SelectionGraphics { get { return m_selectionGraphics; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_selectionGraphics_17;
		return L_0;
	}
}
// System.Boolean ImageCropper::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageCropper_get_IsOpen_mE564B3643A3F8B095534D0C3AD7350FB5CC69767 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsOpen { get { return gameObject.activeSelf; } }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		return L_1;
	}
}
// ImageCropper/Settings ImageCropper::get_DefaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* ImageCropper_get_DefaultSettings_m3603A4B72C72E4A0B64473B7FA57DF11F5AC6910 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Settings_t0536E882B2B738327E36C740A30DF82DA97F131B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_defaultSettings == null )
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_0 = __this->___m_defaultSettings_30;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_defaultSettings = new Settings();
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_1 = (Settings_t0536E882B2B738327E36C740A30DF82DA97F131B*)il2cpp_codegen_object_new(Settings_t0536E882B2B738327E36C740A30DF82DA97F131B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Settings__ctor_m75E3F038BEE35F0BC924BB73718DB89FED60B6DF(L_1, NULL);
		__this->___m_defaultSettings_30 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_defaultSettings_30), (void*)L_1);
	}

IL_0013:
	{
		// return m_defaultSettings;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_2 = __this->___m_defaultSettings_30;
		return L_2;
	}
}
// System.Boolean ImageCropper::get_AutoZoomEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageCropper_get_AutoZoomEnabled_mA75FEBC23D7B7304F2BC6B25122576460BC3B988 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_autoZoomEnabled; }
		bool L_0 = __this->___m_autoZoomEnabled_31;
		return L_0;
	}
}
// System.Void ImageCropper::set_AutoZoomEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_set_AutoZoomEnabled_m6CA5A2089BD60726B0C345B8287FA9548B653A8E (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_autoZoomEnabled = value;
		bool L_0 = ___value0;
		__this->___m_autoZoomEnabled_31 = L_0;
		// if( m_autoZoomEnabled )
		bool L_1 = __this->___m_autoZoomEnabled_31;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// StartAutoZoom( false );
		ImageCropper_StartAutoZoom_mD2DA1F4851822D5A7D635A7485278FB706542971(__this, (bool)0, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Boolean ImageCropper::get_PixelPerfectSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageCropper_get_PixelPerfectSelection_mFC2D99A6AE650E25CAEDEB3A7B7C400F517EE44D (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_pixelPerfectSelection; }
		bool L_0 = __this->___m_pixelPerfectSelection_32;
		return L_0;
	}
}
// System.Void ImageCropper::set_PixelPerfectSelection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_set_PixelPerfectSelection_m13EDB52B85301B4FA5602925DE7BB38FCFBC4C44 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_pixelPerfectSelection = value;
		bool L_0 = ___value0;
		__this->___m_pixelPerfectSelection_32 = L_0;
		// if( m_pixelPerfectSelection )
		bool L_1 = __this->___m_pixelPerfectSelection_32;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// MakePixelPerfectSelection();
		ImageCropper_MakePixelPerfectSelection_mAD54D05F1B90EF39861478B1BC2E2DFB0BDA00BA(__this, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Boolean ImageCropper::get_OvalSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageCropper_get_OvalSelection_m4ED1716D701328B5E27D67E8B6E38A23287D127F (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_ovalSelection; }
		bool L_0 = __this->___m_ovalSelection_33;
		return L_0;
	}
}
// System.Void ImageCropper::set_OvalSelection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_set_OvalSelection_mD832D0366DB542A650C869F1828F1F723FAA683F (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, bool ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// m_ovalSelection = value;
		bool L_0 = ___value0;
		__this->___m_ovalSelection_33 = L_0;
		// for( int i = 0; i < ovalMaskElements.Length; i++ )
		V_0 = 0;
		goto IL_0022;
	}

IL_000b:
	{
		// ovalMaskElements[i].enabled = m_ovalSelection;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_1 = __this->___ovalMaskElements_20;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		bool L_5 = __this->___m_ovalSelection_33;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, L_5, NULL);
		// for( int i = 0; i < ovalMaskElements.Length; i++ )
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0022:
	{
		// for( int i = 0; i < ovalMaskElements.Length; i++ )
		int32_t L_7 = V_0;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_8 = __this->___ovalMaskElements_20;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// ImageCropper/Visibility ImageCropper::get_GuidelinesVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageCropper_get_GuidelinesVisibility_mA1040B1BC39C1FD18F069A232E2420EB891A5171 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_guidelinesVisibility; }
		int32_t L_0 = __this->___m_guidelinesVisibility_34;
		return L_0;
	}
}
// System.Void ImageCropper::set_GuidelinesVisibility(ImageCropper/Visibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_set_GuidelinesVisibility_m966DBF042058CDE4ABA9F001AF1B0E849E488429 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// m_guidelinesVisibility = value;
		int32_t L_0 = ___value0;
		__this->___m_guidelinesVisibility_34 = L_0;
		// bool visible = m_guidelinesVisibility == Visibility.AlwaysVisible;
		int32_t L_1 = __this->___m_guidelinesVisibility_34;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		// for( int i = 0; i < guidelines.Length; i++ )
		V_1 = 0;
		goto IL_0027;
	}

IL_0015:
	{
		// guidelines[i].enabled = visible;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_2 = __this->___guidelines_21;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6 = V_0;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, L_6, NULL);
		// for( int i = 0; i < guidelines.Length; i++ )
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0027:
	{
		// for( int i = 0; i < guidelines.Length; i++ )
		int32_t L_8 = V_1;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_9 = __this->___guidelines_21;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean ImageCropper::get_MarkTextureNonReadable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageCropper_get_MarkTextureNonReadable_mEFF3600F631486EC373C0CB8CDD1692F8E5BEA20 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public bool MarkTextureNonReadable { get; set; }
		bool L_0 = __this->___U3CMarkTextureNonReadableU3Ek__BackingField_35;
		return L_0;
	}
}
// System.Void ImageCropper::set_MarkTextureNonReadable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_set_MarkTextureNonReadable_mCB414FBDD1A5F9C3AF74C2AD577F7E03531B121B (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool MarkTextureNonReadable { get; set; }
		bool L_0 = ___value0;
		__this->___U3CMarkTextureNonReadableU3Ek__BackingField_35 = L_0;
		return;
	}
}
// UnityEngine.Color ImageCropper::get_ImageBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ImageCropper_get_ImageBackground_m753EC4DD5F1C68FCC34E67FBF935947C3FFF623B (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public Color ImageBackground { get; set; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CImageBackgroundU3Ek__BackingField_36;
		return L_0;
	}
}
// System.Void ImageCropper::set_ImageBackground(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_set_ImageBackground_m7E5A3D8309BF128DE480AA51052482C9C36EA3AC (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color ImageBackground { get; set; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___U3CImageBackgroundU3Ek__BackingField_36 = L_0;
		return;
	}
}
// UnityEngine.Vector2 ImageCropper::get_ViewportSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropper_get_ViewportSize_m7DD5EF86737B7A14C95C69FF5EB754631EF9340B (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 ViewportSize { get { return m_viewportSize; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_viewportSize_37;
		return L_0;
	}
}
// UnityEngine.Vector2 ImageCropper::get_OriginalImageSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropper_get_OriginalImageSize_mE7230DAA6778768305B2F171E90F5F23CF8AC871 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 OriginalImageSize { get { return m_originalImageSize; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_originalImageSize_38;
		return L_0;
	}
}
// UnityEngine.Vector2 ImageCropper::get_OrientedImageSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropper_get_OrientedImageSize_m40649E191CA14B9FE480249553B817521D9CBAB1 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 OrientedImageSize { get { return m_orientedImageSize; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_orientedImageSize_39;
		return L_0;
	}
}
// UnityEngine.Vector2 ImageCropper::get_SelectionSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropper_get_SelectionSize_m0BC2C9F9A5C958943584FE1D3521C311D3B1748E (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 SelectionSize { get { return m_selection.sizeDelta; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_selection_16;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_0, NULL);
		return L_1;
	}
}
// System.Void ImageCropper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_Awake_m4A43CF0299B382BBD1AFAED74351B276544CB34F (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageCropper_OnViewportDimensionsChange_mDE32369CEC0F2C348753F6D356BBFB939BF2B0FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_instance == null )
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_0 = ((ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_StaticFields*)il2cpp_codegen_static_fields_for(ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_il2cpp_TypeInfo_var))->___m_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// m_instance = this;
		((ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_StaticFields*)il2cpp_codegen_static_fields_for(ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_il2cpp_TypeInfo_var))->___m_instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_StaticFields*)il2cpp_codegen_static_fields_for(ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_il2cpp_TypeInfo_var))->___m_instance_4), (void*)__this);
		goto IL_002e;
	}

IL_0015:
	{
		// else if( this != m_instance )
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_2 = ((ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_StaticFields*)il2cpp_codegen_static_fields_for(ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596_il2cpp_TypeInfo_var))->___m_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Destroy( gameObject );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// return;
		return;
	}

IL_002e:
	{
		// orientedImageTransform = (RectTransform) m_orientedImage.transform;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_5 = __this->___m_orientedImage_15;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		__this->___orientedImageTransform_40 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_6, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___orientedImageTransform_40), (void*)((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_6, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		// viewportSizeChangeListener.onSizeChanged = OnViewportDimensionsChange;
		SizeChangeListener_t3F60764215E050A17E62E68E775CA846120B8416* L_7 = __this->___viewportSizeChangeListener_18;
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_8 = (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81*)il2cpp_codegen_object_new(Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m23EDF9F259C0FB6CB9AF2E2B6D9931C08F510841(L_8, __this, (intptr_t)((void*)ImageCropper_OnViewportDimensionsChange_mDE32369CEC0F2C348753F6D356BBFB939BF2B0FD_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		L_7->___onSizeChanged_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___onSizeChanged_5), (void*)L_8);
		// cropRenderCanvas.gameObject.layer = 22; // some random layer that is hopefully not used by any other object
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_9 = __this->___cropRenderCanvas_26;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_10, ((int32_t)22), NULL);
		// cropRenderImage.gameObject.layer = 22;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_11 = __this->___cropRenderImage_27;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_12, ((int32_t)22), NULL);
		// cropRenderCamera.cullingMask = 1 << 22;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = __this->___cropRenderCamera_29;
		NullCheck(L_13);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_13, ((int32_t)4194304), NULL);
		// cropRenderCanvas.gameObject.SetActive( false );
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_14 = __this->___cropRenderCanvas_26;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// gameObject.SetActive( false );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_OnDisable_mBAA822CC644B7AF7559757E1BEE3089B78D181F5 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// autoZoomCoroutine = null;
		__this->___autoZoomCoroutine_41 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___autoZoomCoroutine_41), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_LateUpdate_m1E9B6D7DAF40E602DB0D69FDAC5B6F52BA94F9FD (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISelectionHandler_t68418E9C342FD552C978B6A26609CCDC74ADCBEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( gameObject.activeInHierarchy )
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// if( currentSelectionHandler != null && m_imageHolder.localScale.z > minImageScale + 0.01f )
		RuntimeObject* L_2 = __this->___currentSelectionHandler_42;
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___m_imageHolder_14;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_3, NULL);
		float L_5 = L_4.___z_4;
		float L_6 = __this->___minImageScale_53;
		if ((!(((float)L_5) > ((float)((float)il2cpp_codegen_add(L_6, (0.00999999978f)))))))
		{
			goto IL_003e;
		}
	}
	{
		// currentSelectionHandler.OnUpdate();
		RuntimeObject* L_7 = __this->___currentSelectionHandler_42;
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(0 /* System.Void ImageCropperNamespace.ISelectionHandler::OnUpdate() */, ISelectionHandler_t68418E9C342FD552C978B6A26609CCDC74ADCBEA_il2cpp_TypeInfo_var, L_7);
	}

IL_003e:
	{
		// if( shouldRefreshViewport )
		bool L_8 = __this->___shouldRefreshViewport_46;
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		// textsSynchronizer.Synchronize();
		FontSizeSynchronizer_t4948362E402A8E289EADFE345ED6B6C4F35046ED* L_9 = __this->___textsSynchronizer_25;
		NullCheck(L_9);
		FontSizeSynchronizer_Synchronize_m17B19EF73FBA278E588718323C6940A102454C1C(L_9, NULL);
		// ResetView( true );
		ImageCropper_ResetView_m75A480044959DD462C6BB298D4E377F67D79BD9E(__this, (bool)1, NULL);
		// shouldRefreshViewport = false;
		__this->___shouldRefreshViewport_46 = (bool)0;
	}

IL_005f:
	{
		// selectionGraphicsSynchronizer.Synchronize();
		SelectionGraphicsSynchronizer_tBDA964ED2DF0C6309303CBD46C64EDC0C14127C5* L_10 = __this->___selectionGraphicsSynchronizer_19;
		NullCheck(L_10);
		SelectionGraphicsSynchronizer_Synchronize_mF678C5C810F0541DD021369CF80100374CA73325(L_10, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void ImageCropper::OnViewportDimensionsChange(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_OnViewportDimensionsChange_mDE32369CEC0F2C348753F6D356BBFB939BF2B0FD (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size0, const RuntimeMethod* method) 
{
	{
		// m_viewportSize = size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___size0;
		__this->___m_viewportSize_37 = L_0;
		// shouldRefreshViewport = true;
		__this->___shouldRefreshViewport_46 = (bool)1;
		// }
		return;
	}
}
// System.Void ImageCropper::Show(UnityEngine.Texture,ImageCropper/Settings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_Show_mDD5497174FD1D4030E56AAF77783BF7E6095F5D1 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image0, Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* ___settings1, const RuntimeMethod* method) 
{
	{
		// Show( image, null, settings, null );
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___image0;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_1 = ___settings1;
		ImageCropper_Show_mDDEA5F5F4F1933DB335157CA6B055911C91133F4(__this, L_0, (CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60*)NULL, L_1, (ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63*)NULL, NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::Show(UnityEngine.Texture,ImageCropper/CropResult,ImageCropper/Settings,ImageCropper/ImageResizePolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_Show_mDDEA5F5F4F1933DB335157CA6B055911C91133F4 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image0, CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* ___onCrop1, Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* ___settings2, ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* ___croppedImageResizePolicy3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF609783F6A30C441C250D9C0A4945927F42099B);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// if( image == null )
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___image0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError( "Image is null!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEF609783F6A30C441C250D9C0A4945927F42099B, NULL);
		// return;
		return;
	}

IL_0014:
	{
		// if( !gameObject.activeSelf )
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_2, NULL);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		// gameObject.SetActive( true );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
	}

IL_002d:
	{
		// cropCallback = onCrop;
		CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* L_5 = ___onCrop1;
		__this->___cropCallback_44 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cropCallback_44), (void*)L_5);
		// imageResizePolicy = croppedImageResizePolicy;
		ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* L_6 = ___croppedImageResizePolicy3;
		__this->___imageResizePolicy_45 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imageResizePolicy_45), (void*)L_6);
		// if( settings == null )
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_7 = ___settings2;
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		// settings = DefaultSettings;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_8;
		L_8 = ImageCropper_get_DefaultSettings_m3603A4B72C72E4A0B64473B7FA57DF11F5AC6910(__this, NULL);
		___settings2 = L_8;
	}

IL_0047:
	{
		// m_orientedImage.texture = image;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_9 = __this->___m_orientedImage_15;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_10 = ___image0;
		NullCheck(L_9);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_9, L_10, NULL);
		// m_originalImageSize = new Vector2( image.width, image.height );
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11 = ___image0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13 = ___image0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), ((float)L_12), ((float)L_14), /*hidden argument*/NULL);
		__this->___m_originalImageSize_38 = L_15;
		// orientedImageTransform.sizeDelta = m_originalImageSize;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___orientedImageTransform_40;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = __this->___m_originalImageSize_38;
		NullCheck(L_16);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_16, L_17, NULL);
		// MarkTextureNonReadable = settings.markTextureNonReadable;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_18 = ___settings2;
		NullCheck(L_18);
		bool L_19 = L_18->___markTextureNonReadable_3;
		ImageCropper_set_MarkTextureNonReadable_mCB414FBDD1A5F9C3AF74C2AD577F7E03531B121B_inline(__this, L_19, NULL);
		// OvalSelection = settings.ovalSelection;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_20 = ___settings2;
		NullCheck(L_20);
		bool L_21 = L_20->___ovalSelection_2;
		ImageCropper_set_OvalSelection_mD832D0366DB542A650C869F1828F1F723FAA683F(__this, L_21, NULL);
		// GuidelinesVisibility = settings.guidelinesVisibility;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_22 = ___settings2;
		NullCheck(L_22);
		int32_t L_23 = L_22->___guidelinesVisibility_6;
		ImageCropper_set_GuidelinesVisibility_m966DBF042058CDE4ABA9F001AF1B0E849E488429(__this, L_23, NULL);
		// ImageBackground = settings.imageBackground;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_24 = ___settings2;
		NullCheck(L_24);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = L_24->___imageBackground_4;
		ImageCropper_set_ImageBackground_m7E5A3D8309BF128DE480AA51052482C9C36EA3AC_inline(__this, L_25, NULL);
		// minAspectRatio = settings.selectionMinAspectRatio;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_26 = ___settings2;
		NullCheck(L_26);
		float L_27 = L_26->___selectionMinAspectRatio_10;
		__this->___minAspectRatio_51 = L_27;
		// maxAspectRatio = settings.selectionMaxAspectRatio;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_28 = ___settings2;
		NullCheck(L_28);
		float L_29 = L_28->___selectionMaxAspectRatio_11;
		__this->___maxAspectRatio_52 = L_29;
		// if( minAspectRatio <= 0f )
		float L_30 = __this->___minAspectRatio_51;
		if ((!(((float)L_30) <= ((float)(0.0f)))))
		{
			goto IL_00dd;
		}
	}
	{
		// minAspectRatio = 1E-6f;
		__this->___minAspectRatio_51 = (9.99999997E-07f);
	}

IL_00dd:
	{
		// if( maxAspectRatio <= 0f )
		float L_31 = __this->___maxAspectRatio_52;
		if ((!(((float)L_31) <= ((float)(0.0f)))))
		{
			goto IL_00f5;
		}
	}
	{
		// maxAspectRatio = 1E6f;
		__this->___maxAspectRatio_52 = (1000000.0f);
	}

IL_00f5:
	{
		// if( minAspectRatio > maxAspectRatio )
		float L_32 = __this->___minAspectRatio_51;
		float L_33 = __this->___maxAspectRatio_52;
		if ((!(((float)L_32) > ((float)L_33))))
		{
			goto IL_011d;
		}
	}
	{
		// float temp = minAspectRatio;
		float L_34 = __this->___minAspectRatio_51;
		V_3 = L_34;
		// minAspectRatio = maxAspectRatio;
		float L_35 = __this->___maxAspectRatio_52;
		__this->___minAspectRatio_51 = L_35;
		// maxAspectRatio = temp;
		float L_36 = V_3;
		__this->___maxAspectRatio_52 = L_36;
	}

IL_011d:
	{
		// minSize = settings.selectionMinSize;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_37 = ___settings2;
		NullCheck(L_37);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = L_37->___selectionMinSize_8;
		__this->___minSize_47 = L_38;
		// maxSize = settings.selectionMaxSize;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_39 = ___settings2;
		NullCheck(L_39);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = L_39->___selectionMaxSize_9;
		__this->___maxSize_48 = L_40;
		// Vector2 maxSizeDefault = new Vector2( 2f, 2f ) * Mathf.Max( m_originalImageSize.x, m_originalImageSize.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_41), (2.0f), (2.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_42 = (&__this->___m_originalImageSize_38);
		float L_43 = L_42->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_44 = (&__this->___m_originalImageSize_38);
		float L_45 = L_44->___y_1;
		float L_46;
		L_46 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_43, L_45, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_41, L_46, NULL);
		V_0 = L_47;
		// if( minSize.x < 1f || minSize.y < 1f )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_48 = (&__this->___minSize_47);
		float L_49 = L_48->___x_0;
		if ((((float)L_49) < ((float)(1.0f))))
		{
			goto IL_0189;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_50 = (&__this->___minSize_47);
		float L_51 = L_50->___y_1;
		if ((!(((float)L_51) < ((float)(1.0f)))))
		{
			goto IL_01be;
		}
	}

IL_0189:
	{
		// minSize = new Vector2( 0.1f, 0.1f ) * Mathf.Min( m_originalImageSize.x, m_originalImageSize.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_52), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_53 = (&__this->___m_originalImageSize_38);
		float L_54 = L_53->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_55 = (&__this->___m_originalImageSize_38);
		float L_56 = L_55->___y_1;
		float L_57;
		L_57 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_54, L_56, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_52, L_57, NULL);
		__this->___minSize_47 = L_58;
	}

IL_01be:
	{
		// if( maxSize.x < 1f || maxSize.y < 1f )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_59 = (&__this->___maxSize_48);
		float L_60 = L_59->___x_0;
		if ((((float)L_60) < ((float)(1.0f))))
		{
			goto IL_01e2;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_61 = (&__this->___maxSize_48);
		float L_62 = L_61->___y_1;
		if ((!(((float)L_62) < ((float)(1.0f)))))
		{
			goto IL_01e9;
		}
	}

IL_01e2:
	{
		// maxSize = maxSizeDefault;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = V_0;
		__this->___maxSize_48 = L_63;
	}

IL_01e9:
	{
		// minSize = minSize.ClampBetween( Vector2.one, Vector2.one * Mathf.Max( m_originalImageSize.x, m_originalImageSize.y ) );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = __this->___minSize_47;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		L_65 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		L_66 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_67 = (&__this->___m_originalImageSize_38);
		float L_68 = L_67->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_69 = (&__this->___m_originalImageSize_38);
		float L_70 = L_69->___y_1;
		float L_71;
		L_71 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_68, L_70, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		L_72 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_66, L_71, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = ImageCropperUtils_ClampBetween_m2C62C6E17BA7EDABF01DE29DC8252975D332380C(L_64, L_65, L_72, NULL);
		__this->___minSize_47 = L_73;
		// maxSize = maxSize.ClampBetween( minSize, maxSizeDefault );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74 = __this->___maxSize_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75 = __this->___minSize_47;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77;
		L_77 = ImageCropperUtils_ClampBetween_m2C62C6E17BA7EDABF01DE29DC8252975D332380C(L_74, L_75, L_76, NULL);
		__this->___maxSize_48 = L_77;
		// m_autoZoomEnabled = false;
		__this->___m_autoZoomEnabled_31 = (bool)0;
		// SetOrientation( settings.initialOrientation );
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_78 = ___settings2;
		NullCheck(L_78);
		int32_t L_79 = L_78->___initialOrientation_7;
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, L_79, NULL);
		// m_autoZoomEnabled = settings.autoZoomEnabled;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_80 = ___settings2;
		NullCheck(L_80);
		bool L_81 = L_80->___autoZoomEnabled_0;
		__this->___m_autoZoomEnabled_31 = L_81;
		// m_pixelPerfectSelection = settings.pixelPerfectSelection;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_82 = ___settings2;
		NullCheck(L_82);
		bool L_83 = L_82->___pixelPerfectSelection_1;
		__this->___m_pixelPerfectSelection_32 = L_83;
		// flipHorizontalButton.SetActive( ( settings.visibleButtons & Button.FlipHorizontal ) == Button.FlipHorizontal );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = __this->___flipHorizontalButton_22;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_85 = ___settings2;
		NullCheck(L_85);
		int32_t L_86 = L_85->___visibleButtons_5;
		NullCheck(L_84);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_84, (bool)((((int32_t)((int32_t)((int32_t)L_86&1))) == ((int32_t)1))? 1 : 0), NULL);
		// flipVerticalButton.SetActive( ( settings.visibleButtons & Button.FlipVertical ) == Button.FlipVertical );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = __this->___flipVerticalButton_23;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_88 = ___settings2;
		NullCheck(L_88);
		int32_t L_89 = L_88->___visibleButtons_5;
		NullCheck(L_87);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_87, (bool)((((int32_t)((int32_t)((int32_t)L_89&2))) == ((int32_t)2))? 1 : 0), NULL);
		// rotate90DegreesButton.SetActive( ( settings.visibleButtons & Button.Rotate90Degrees ) == Button.Rotate90Degrees );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90 = __this->___rotate90DegreesButton_24;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_91 = ___settings2;
		NullCheck(L_91);
		int32_t L_92 = L_91->___visibleButtons_5;
		NullCheck(L_90);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_90, (bool)((((int32_t)((int32_t)((int32_t)L_92&4))) == ((int32_t)4))? 1 : 0), NULL);
		// Vector2 paddingMax = new Vector2( 1f - Mathf.Clamp01( settings.selectionInitialPaddingRight ), 1f - Mathf.Clamp01( settings.selectionInitialPaddingTop ) );
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_93 = ___settings2;
		NullCheck(L_93);
		float L_94 = L_93->___selectionInitialPaddingRight_14;
		float L_95;
		L_95 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_94, NULL);
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_96 = ___settings2;
		NullCheck(L_96);
		float L_97 = L_96->___selectionInitialPaddingTop_13;
		float L_98;
		L_98 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_97, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_subtract((1.0f), L_95)), ((float)il2cpp_codegen_subtract((1.0f), L_98)), NULL);
		// Vector2 paddingMin = new Vector2( Mathf.Clamp( settings.selectionInitialPaddingLeft, 0f, paddingMax.x ), Mathf.Clamp( settings.selectionInitialPaddingBottom, 0f, paddingMax.y ) );
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_99 = ___settings2;
		NullCheck(L_99);
		float L_100 = L_99->___selectionInitialPaddingLeft_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_101 = V_1;
		float L_102 = L_101.___x_0;
		float L_103;
		L_103 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_100, (0.0f), L_102, NULL);
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_104 = ___settings2;
		NullCheck(L_104);
		float L_105 = L_104->___selectionInitialPaddingBottom_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_106 = V_1;
		float L_107 = L_106.___y_1;
		float L_108;
		L_108 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_105, (0.0f), L_107, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), L_103, L_108, NULL);
		// UpdateSelection( Vector2.zero, m_orientedImageSize.ScaleWith( paddingMax - paddingMin ) );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109;
		L_109 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110 = __this->___m_orientedImageSize_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_111 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113;
		L_113 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_111, L_112, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_114;
		L_114 = ImageCropperUtils_ScaleWith_mBE8BCAA5749C2DFC7844283E20579C5AC7402387(L_110, L_113, NULL);
		ImageCropper_UpdateSelection_m1AB88B93DC6948B2F045FDD2B43F00CE464B432F(__this, L_109, L_114, 0, (bool)1, NULL);
		// m_selection.anchoredPosition = ( m_orientedImageSize - m_selection.sizeDelta ) * 0.5f;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_115 = __this->___m_selection_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_116 = __this->___m_orientedImageSize_39;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_117 = __this->___m_selection_16;
		NullCheck(L_117);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118;
		L_118 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_117, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_119;
		L_119 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_116, L_118, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_120;
		L_120 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_119, (0.5f), NULL);
		NullCheck(L_115);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_115, L_120, NULL);
		// if( m_pixelPerfectSelection )
		bool L_121 = __this->___m_pixelPerfectSelection_32;
		if (!L_121)
		{
			goto IL_035d;
		}
	}
	{
		// MakePixelPerfectSelection();
		ImageCropper_MakePixelPerfectSelection_mAD54D05F1B90EF39861478B1BC2E2DFB0BDA00BA(__this, NULL);
	}

IL_035d:
	{
		// ResetView( false );
		ImageCropper_ResetView_m75A480044959DD462C6BB298D4E377F67D79BD9E(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_Hide_m95FBBB51D7EE499C6C767EB42395481446770413 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive( false );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// m_orientedImage.texture = null;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_1 = __this->___m_orientedImage_15;
		NullCheck(L_1);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_1, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// cropCallback = null;
		__this->___cropCallback_44 = (CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cropCallback_44), (void*)(CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60*)NULL);
		// imageResizePolicy = null;
		__this->___imageResizePolicy_45 = (ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imageResizePolicy_45), (void*)(ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63*)NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::ResetView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_ResetView_m75A480044959DD462C6BB298D4E377F67D79BD9E (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, bool ___frameSelection0, const RuntimeMethod* method) 
{
	{
		// if( m_orientedImageSize.x <= 0f || m_orientedImageSize.y <= 0f )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___m_orientedImageSize_39);
		float L_1 = L_0->___x_0;
		if ((((float)L_1) <= ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___m_orientedImageSize_39);
		float L_3 = L_2->___y_1;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		// return;
		return;
	}

IL_0025:
	{
		// StopAutoZoom();
		ImageCropper_StopAutoZoom_m83614FBD595053EDFCADC679407A4184EBEE76CB(__this, NULL);
		// minImageScale = Mathf.Min( m_viewportSize.x / m_orientedImageSize.x, m_viewportSize.y / m_orientedImageSize.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___m_viewportSize_37);
		float L_5 = L_4->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___m_orientedImageSize_39);
		float L_7 = L_6->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___m_viewportSize_37);
		float L_9 = L_8->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___m_orientedImageSize_39);
		float L_11 = L_10->___y_1;
		float L_12;
		L_12 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)(L_5/L_7)), ((float)(L_9/L_11)), NULL);
		__this->___minImageScale_53 = L_12;
		// m_imageHolder.anchoredPosition = RestrictImageToViewport( m_imageHolder.anchoredPosition, minImageScale );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___m_imageHolder_14;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___m_imageHolder_14;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_14, NULL);
		float L_16 = __this->___minImageScale_53;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = ImageCropper_RestrictImageToViewport_mF1AB8CD9C02E9FC6853F8FB6D8D3163210FC20B0(__this, L_15, L_16, NULL);
		NullCheck(L_13);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_13, L_17, NULL);
		// m_imageHolder.localScale = new Vector3( minImageScale, minImageScale, minImageScale );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = __this->___m_imageHolder_14;
		float L_19 = __this->___minImageScale_53;
		float L_20 = __this->___minImageScale_53;
		float L_21 = __this->___minImageScale_53;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), L_19, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_18, L_22, NULL);
		// if( frameSelection && m_autoZoomEnabled )
		bool L_23 = ___frameSelection0;
		if (!L_23)
		{
			goto IL_00ba;
		}
	}
	{
		bool L_24 = __this->___m_autoZoomEnabled_31;
		if (!L_24)
		{
			goto IL_00ba;
		}
	}
	{
		// StartAutoZoom( true );
		ImageCropper_StartAutoZoom_mD2DA1F4851822D5A7D635A7485278FB706542971(__this, (bool)1, NULL);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void ImageCropper::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_Cancel_m442FDCAFCA8356E31476F4A7E9684ED9CFD8190B (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// if( cropCallback != null )
		CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* L_0 = __this->___cropCallback_44;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// cropCallback( false, m_orientedImage.texture, null );
		CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* L_1 = __this->___cropCallback_44;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_2 = __this->___m_orientedImage_15;
		NullCheck(L_2);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3;
		L_3 = RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813_inline(L_2, NULL);
		NullCheck(L_1);
		CropResult_Invoke_mAE2B7E0A2A52A7E221E695001C760FF018F36970_inline(L_1, (bool)0, L_3, (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL, NULL);
	}

IL_0020:
	{
		// Hide();
		ImageCropper_Hide_m95FBBB51D7EE499C6C767EB42395481446770413(__this, NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::Crop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_Crop_mB0E845AE16860F2B21909FEBFC07CF5263DBF640 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		// if( cropCallback != null )
		CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* L_0 = __this->___cropCallback_44;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// Texture2D result = CropSelection();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1;
		L_1 = ImageCropper_CropSelection_mBE9948ECEE3E522D28C21F1C14CF3E7D6E2B0C7F(__this, NULL);
		V_0 = L_1;
		// cropCallback( result != null, m_orientedImage.texture, result );
		CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* L_2 = __this->___cropCallback_44;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_5 = __this->___m_orientedImage_15;
		NullCheck(L_5);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6;
		L_6 = RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813_inline(L_5, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = V_0;
		NullCheck(L_2);
		CropResult_Invoke_mAE2B7E0A2A52A7E221E695001C760FF018F36970_inline(L_2, L_4, L_6, L_7, NULL);
	}

IL_002d:
	{
		// Hide();
		ImageCropper_Hide_m95FBBB51D7EE499C6C767EB42395481446770413(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Texture2D ImageCropper::CropSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ImageCropper_CropSelection_mBE9948ECEE3E522D28C21F1C14CF3E7D6E2B0C7F (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// Vector2 selectionSize = m_selection.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_selection_16;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_0, NULL);
		// int width = Mathf.Clamp( (int) selectionSize.x, 1, (int) m_orientedImageSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = L_1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___m_orientedImageSize_39);
		float L_5 = L_4->___x_0;
		int32_t L_6;
		L_6 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(il2cpp_codegen_cast_double_to_int<int32_t>(L_3), 1, il2cpp_codegen_cast_double_to_int<int32_t>(L_5), NULL);
		V_0 = L_6;
		// int height = Mathf.Clamp( (int) selectionSize.y, 1, (int) m_orientedImageSize.y );
		float L_7 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___m_orientedImageSize_39);
		float L_9 = L_8->___y_1;
		int32_t L_10;
		L_10 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(il2cpp_codegen_cast_double_to_int<int32_t>(L_7), 1, il2cpp_codegen_cast_double_to_int<int32_t>(L_9), NULL);
		V_1 = L_10;
		// if( imageResizePolicy != null )
		ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* L_11 = __this->___imageResizePolicy_45;
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		// imageResizePolicy( ref width, ref height );
		ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* L_12 = __this->___imageResizePolicy_45;
		NullCheck(L_12);
		ImageResizePolicy_Invoke_m341ACAE059981DEA0DC94A356814501C496D386E_inline(L_12, (&V_0), (&V_1), NULL);
	}

IL_0055:
	{
		// if( width < 0 )
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		// width = 1;
		V_0 = 1;
	}

IL_005b:
	{
		// if( height < 0 )
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		// height = 1;
		V_1 = 1;
	}

IL_0061:
	{
		// return CropSelection( width, height );
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17;
		L_17 = ImageCropper_CropSelection_m35CA6FC33E687C46C9987BDA4CCF182E1C3C9EDB(__this, L_15, L_16, NULL);
		return L_17;
	}
}
// UnityEngine.Texture2D ImageCropper::CropSelection(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ImageCropper_CropSelection_m35CA6FC33E687C46C9987BDA4CCF182E1C3C9EDB (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6782C5B76B96AD94BDAE68144D82D5D00C130B40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D8ABF2A5EAB7F1196FDCBA4ED3775CE14E7EC08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE3FBDCAA6E34E685EAC4D80D347E0671F52EB4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE4EA3C15F9ABAD8E68349C988A5AE037A7E5572);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_5 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_6 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	{
		// if( !gameObject.activeInHierarchy )
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError( "Cropper is not visible!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6782C5B76B96AD94BDAE68144D82D5D00C130B40, NULL);
		// return null;
		return (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
	}

IL_0019:
	{
		// if( m_orientedImage.texture == null )
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_2 = __this->___m_orientedImage_15;
		NullCheck(L_2);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3;
		L_3 = RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// Debug.LogError( "Cropper is not initialized!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralDE4EA3C15F9ABAD8E68349C988A5AE037A7E5572, NULL);
		// return null;
		return (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
	}

IL_0038:
	{
		// int maxTextureSize = SystemInfo.maxTextureSize;
		int32_t L_5;
		L_5 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		V_0 = L_5;
		// if( width > maxTextureSize || height > maxTextureSize )
		int32_t L_6 = ___width0;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) > ((int32_t)L_7)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_8 = ___height1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_00c5;
		}
	}

IL_0046:
	{
		// int preferredWidth = (int) ( maxTextureSize * width / (float) height );
		int32_t L_10 = V_0;
		int32_t L_11 = ___width0;
		int32_t L_12 = ___height1;
		V_8 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)((int32_t)il2cpp_codegen_multiply(L_10, L_11)))/((float)L_12))));
		// int preferredHeight = (int) ( maxTextureSize * height / (float) width );
		int32_t L_13 = V_0;
		int32_t L_14 = ___height1;
		int32_t L_15 = ___width0;
		V_9 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)((int32_t)il2cpp_codegen_multiply(L_13, L_14)))/((float)L_15))));
		// if( preferredWidth <= maxTextureSize )
		int32_t L_16 = V_8;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) > ((int32_t)L_17)))
		{
			goto IL_0064;
		}
	}
	{
		// preferredHeight = maxTextureSize;
		int32_t L_18 = V_0;
		V_9 = L_18;
		goto IL_0067;
	}

IL_0064:
	{
		// preferredWidth = maxTextureSize;
		int32_t L_19 = V_0;
		V_8 = L_19;
	}

IL_0067:
	{
		// Debug.Log( string.Concat( width, "x", height, " is too large, using ", preferredWidth, "x", preferredHeight, " instead..." ) );
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
		int32_t L_22 = ___width0;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
		int32_t L_27 = ___height1;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_26;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteralCE3FBDCAA6E34E685EAC4D80D347E0671F52EB4F);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteralCE3FBDCAA6E34E685EAC4D80D347E0671F52EB4F);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_30;
		int32_t L_32 = V_8;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_31;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_35;
		int32_t L_37 = V_9;
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_39);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_36;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral6D8ABF2A5EAB7F1196FDCBA4ED3775CE14E7EC08);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)_stringLiteral6D8ABF2A5EAB7F1196FDCBA4ED3775CE14E7EC08);
		String_t* L_41;
		L_41 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_40, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_41, NULL);
		// width = preferredWidth;
		int32_t L_42 = V_8;
		___width0 = L_42;
		// height = preferredHeight;
		int32_t L_43 = V_9;
		___height1 = L_43;
	}

IL_00c5:
	{
		// RectTransform cropRenderCanvasTR = (RectTransform) cropRenderCanvas.transform;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_44 = __this->___cropRenderCanvas_26;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		V_1 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_45, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// RectTransform cropRenderImageTR = (RectTransform) cropRenderImage.transform;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_46 = __this->___cropRenderImage_27;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_46, NULL);
		// Transform cropRenderCameraTR = cropRenderCamera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_48 = __this->___cropRenderCamera_29;
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_48, NULL);
		V_2 = L_49;
		// cropRenderImage.texture = m_orientedImage.texture;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_50 = __this->___cropRenderImage_27;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_51 = __this->___m_orientedImage_15;
		NullCheck(L_51);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_52;
		L_52 = RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813_inline(L_51, NULL);
		NullCheck(L_50);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_50, L_52, NULL);
		// Vector2 selectionSize = m_selection.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_53 = __this->___m_selection_16;
		NullCheck(L_53);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		L_54 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_53, NULL);
		V_3 = L_54;
		// Vector2 selectionCenter = m_selection.anchoredPosition + selectionSize * 0.5f;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_55 = __this->___m_selection_16;
		NullCheck(L_55);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		L_56 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_55, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_57, (0.5f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_56, L_58, NULL);
		V_4 = L_59;
		// cropRenderCanvasTR.sizeDelta = m_orientedImageSize;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_60 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = __this->___m_orientedImageSize_39;
		NullCheck(L_60);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_60, L_61, NULL);
		// cropRenderSelection.anchoredPosition = m_selection.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_62 = __this->___cropRenderSelection_28;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_63 = __this->___m_selection_16;
		NullCheck(L_63);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64;
		L_64 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_63, NULL);
		NullCheck(L_62);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_62, L_64, NULL);
		// cropRenderSelection.sizeDelta = selectionSize;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_65 = __this->___cropRenderSelection_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = V_3;
		NullCheck(L_65);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_65, L_66, NULL);
		// cropRenderImageTR.position = cropRenderCanvasTR.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_67 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_47, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_68 = V_1;
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_68, NULL);
		NullCheck(L_67);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_67, L_69, NULL);
		// cropRenderImageTR.sizeDelta = m_originalImageSize;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_70 = L_67;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71 = __this->___m_originalImageSize_38;
		NullCheck(L_70);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_70, L_71, NULL);
		// cropRenderImageTR.localScale = orientedImageTransform.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_72 = L_70;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_73 = __this->___orientedImageTransform_40;
		NullCheck(L_73);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_73, NULL);
		NullCheck(L_72);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_72, L_74, NULL);
		// cropRenderImageTR.localEulerAngles = orientedImageTransform.localEulerAngles;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_75 = __this->___orientedImageTransform_40;
		NullCheck(L_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_75, NULL);
		NullCheck(L_72);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_72, L_76, NULL);
		// cropRenderCameraTR.eulerAngles = cropRenderCanvasTR.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77 = V_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_78 = V_1;
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_78, NULL);
		NullCheck(L_77);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_77, L_79, NULL);
		// cropRenderCameraTR.position = cropRenderCanvasTR.TransformPoint( new Vector3( selectionCenter.x - m_orientedImageSize.x * 0.5f, selectionCenter.y - m_orientedImageSize.y * 0.5f, -5f ) );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80 = V_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_81 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_4;
		float L_83 = L_82.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_84 = (&__this->___m_orientedImageSize_39);
		float L_85 = L_84->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_86 = V_4;
		float L_87 = L_86.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_88 = (&__this->___m_orientedImageSize_39);
		float L_89 = L_88->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		memset((&L_90), 0, sizeof(L_90));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_90), ((float)il2cpp_codegen_subtract(L_83, ((float)il2cpp_codegen_multiply(L_85, (0.5f))))), ((float)il2cpp_codegen_subtract(L_87, ((float)il2cpp_codegen_multiply(L_89, (0.5f))))), (-5.0f), /*hidden argument*/NULL);
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_81, L_90, NULL);
		NullCheck(L_80);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_80, L_91, NULL);
		// cropRenderCamera.aspect = selectionSize.x / selectionSize.y;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_92 = __this->___cropRenderCamera_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_93 = V_3;
		float L_94 = L_93.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95 = V_3;
		float L_96 = L_95.___y_1;
		NullCheck(L_92);
		Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6(L_92, ((float)(L_94/L_96)), NULL);
		// cropRenderCamera.orthographicSize = selectionSize.y * 0.5f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_97 = __this->___cropRenderCamera_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98 = V_3;
		float L_99 = L_98.___y_1;
		NullCheck(L_97);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_97, ((float)il2cpp_codegen_multiply(L_99, (0.5f))), NULL);
		// Texture2D result = null;
		V_5 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		// RenderTexture temp = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_100;
		L_100 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7(NULL);
		V_6 = L_100;
		// RenderTexture renderTex = RenderTexture.GetTemporary( width, height, 24 );
		int32_t L_101 = ___width0;
		int32_t L_102 = ___height1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_103;
		L_103 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_101, L_102, ((int32_t)24), NULL);
		V_7 = L_103;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0310:
			{// begin finally (depth: 1)
				// RenderTexture.active = temp;
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_104 = V_6;
				RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_104, NULL);
				// RenderTexture.ReleaseTemporary( renderTex );
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_105 = V_7;
				RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_105, NULL);
				// cropRenderCanvas.gameObject.SetActive( false );
				Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_106 = __this->___cropRenderCanvas_26;
				NullCheck(L_106);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107;
				L_107 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_106, NULL);
				NullCheck(L_107);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_107, (bool)0, NULL);
				// cropRenderImage.texture = null;
				RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_108 = __this->___cropRenderImage_27;
				NullCheck(L_108);
				RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_108, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
				// cropRenderCamera.targetTexture = null;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_109 = __this->___cropRenderCamera_29;
				NullCheck(L_109);
				Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_109, (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// cropRenderCanvas.gameObject.SetActive( true );
					Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_110 = __this->___cropRenderCanvas_26;
					NullCheck(L_110);
					GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111;
					L_111 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_110, NULL);
					NullCheck(L_111);
					GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_111, (bool)1, NULL);
					// LayoutRebuilder.ForceRebuildLayoutImmediate( cropRenderCanvasTR );
					RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_112 = V_1;
					il2cpp_codegen_runtime_class_init_inline(LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
					LayoutRebuilder_ForceRebuildLayoutImmediate_mCCA094579654469919EFA4B5AA5D9AF93CD67B4A(L_112, NULL);
					// RenderTexture.active = renderTex;
					RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_113 = V_7;
					RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_113, NULL);
					// bool transparentBackground = ImageBackground.a < 1f;
					Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_114;
					L_114 = ImageCropper_get_ImageBackground_m753EC4DD5F1C68FCC34E67FBF935947C3FFF623B_inline(__this, NULL);
					float L_115 = L_114.___a_3;
					V_10 = (bool)((((float)L_115) < ((float)(1.0f)))? 1 : 0);
					// if( transparentBackground )
					bool L_116 = V_10;
					if (!L_116)
					{
						goto IL_0281_2;
					}
				}
				{
					// cropRenderCamera.clearFlags = CameraClearFlags.Depth;
					Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_117 = __this->___cropRenderCamera_29;
					NullCheck(L_117);
					Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_117, 3, NULL);
					// GL.Clear( false, true, ImageBackground );
					Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_118;
					L_118 = ImageCropper_get_ImageBackground_m753EC4DD5F1C68FCC34E67FBF935947C3FFF623B_inline(__this, NULL);
					GL_Clear_mA172E771FC32B516DB826F537832307C3A16BE09((bool)0, (bool)1, L_118, NULL);
					goto IL_028d_2;
				}

IL_0281_2:
				{
					// cropRenderCamera.clearFlags = CameraClearFlags.Color;
					Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_119 = __this->___cropRenderCamera_29;
					NullCheck(L_119);
					Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_119, 2, NULL);
				}

IL_028d_2:
				{
					// cropRenderCamera.backgroundColor = ImageBackground;
					Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_120 = __this->___cropRenderCamera_29;
					Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_121;
					L_121 = ImageCropper_get_ImageBackground_m753EC4DD5F1C68FCC34E67FBF935947C3FFF623B_inline(__this, NULL);
					NullCheck(L_120);
					Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_120, L_121, NULL);
					// cropRenderCamera.targetTexture = renderTex;
					Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_122 = __this->___cropRenderCamera_29;
					RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_123 = V_7;
					NullCheck(L_122);
					Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_122, L_123, NULL);
					// cropRenderCamera.Render();
					Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_124 = __this->___cropRenderCamera_29;
					NullCheck(L_124);
					Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509(L_124, NULL);
					// result = new Texture2D( width, height, transparentBackground ? TextureFormat.RGBA32 : TextureFormat.RGB24, false );
					int32_t L_125 = ___width0;
					int32_t L_126 = ___height1;
					bool L_127 = V_10;
					G_B15_0 = L_126;
					G_B15_1 = L_125;
					if (L_127)
					{
						G_B16_0 = L_126;
						G_B16_1 = L_125;
						goto IL_02bf_2;
					}
				}
				{
					G_B17_0 = 3;
					G_B17_1 = G_B15_0;
					G_B17_2 = G_B15_1;
					goto IL_02c0_2;
				}

IL_02bf_2:
				{
					G_B17_0 = 4;
					G_B17_1 = G_B16_0;
					G_B17_2 = G_B16_1;
				}

IL_02c0_2:
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_128 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
					NullCheck(L_128);
					Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_128, G_B17_2, G_B17_1, G_B17_0, (bool)0, NULL);
					V_5 = L_128;
					// result.ReadPixels( new Rect( 0, 0, width, height ), 0, 0, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_129 = V_5;
					int32_t L_130 = ___width0;
					int32_t L_131 = ___height1;
					Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_132;
					memset((&L_132), 0, sizeof(L_132));
					Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_132), (0.0f), (0.0f), ((float)L_130), ((float)L_131), /*hidden argument*/NULL);
					NullCheck(L_129);
					Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C(L_129, L_132, 0, 0, (bool)0, NULL);
					// result.Apply( false, MarkTextureNonReadable );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_133 = V_5;
					bool L_134;
					L_134 = ImageCropper_get_MarkTextureNonReadable_mEFF3600F631486EC373C0CB8CDD1692F8E5BEA20_inline(__this, NULL);
					NullCheck(L_133);
					Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_133, (bool)0, L_134, NULL);
					// }
					goto IL_0348;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_02f5_1;
				}
				throw e;
			}

CATCH_02f5_1:
			{// begin catch(System.Exception)
				{
					// Debug.LogException( e );
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
					Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
					// if( result != null )
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_135 = V_5;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
					bool L_136;
					L_136 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_135, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
					if (!L_136)
					{
						goto IL_030e_1;
					}
				}
				{
					// DestroyImmediate( result );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_137 = V_5;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
					Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_137, NULL);
					// result = null;
					V_5 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
				}

IL_030e_1:
				{
					// }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0348;
				}
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0348:
	{
		// return result;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_138 = V_5;
		return L_138;
	}
}
// System.Void ImageCropper::Rotate90Clockwise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_Rotate90Clockwise_mD0F49D58FA6BDC968746AB0E60782F85046DA2A6 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// RotateClockwise( 1 );
		ImageCropper_RotateClockwise_mADB728DF260AB2EBA668BF85AB8B429B09DA4577(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::Rotate180Clockwise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_Rotate180Clockwise_m42BBC6408A0C9C4DCB43DA09DAC1E62DB99F20EB (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// RotateClockwise( 2 );
		ImageCropper_RotateClockwise_mADB728DF260AB2EBA668BF85AB8B429B09DA4577(__this, 2, NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::Rotate270Clockwise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_Rotate270Clockwise_mFB5EADAB267842EE94B41A528C0124AAA240C3CF (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// RotateClockwise( 3 );
		ImageCropper_RotateClockwise_mADB728DF260AB2EBA668BF85AB8B429B09DA4577(__this, 3, NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::RotateClockwise(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_RotateClockwise_mADB728DF260AB2EBA668BF85AB8B429B09DA4577 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0007;
	}

IL_0002:
	{
		// amount += 4;
		int32_t L_0 = ___amount0;
		___amount0 = ((int32_t)il2cpp_codegen_add(L_0, 4));
	}

IL_0007:
	{
		// while( amount < 0 )
		int32_t L_1 = ___amount0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		goto IL_0012;
	}

IL_000d:
	{
		// amount -= 4;
		int32_t L_2 = ___amount0;
		___amount0 = ((int32_t)il2cpp_codegen_subtract(L_2, 4));
	}

IL_0012:
	{
		// while( amount > 3 )
		int32_t L_3 = ___amount0;
		if ((((int32_t)L_3) > ((int32_t)3)))
		{
			goto IL_000d;
		}
	}
	{
		// if( amount == 0 )
		int32_t L_4 = ___amount0;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// int orientationInt = (int) currentOrientation;
		int32_t L_5 = __this->___currentOrientation_43;
		V_0 = L_5;
		// if( orientationInt < 4 )
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)4)))
		{
			goto IL_0033;
		}
	}
	{
		// orientationInt -= amount;
		int32_t L_7 = V_0;
		int32_t L_8 = ___amount0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		// if( orientationInt < 0 )
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// orientationInt += 4;
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 4));
		goto IL_003f;
	}

IL_0033:
	{
		// orientationInt -= amount;
		int32_t L_11 = V_0;
		int32_t L_12 = ___amount0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
		// if( orientationInt < 4 )
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)4)))
		{
			goto IL_003f;
		}
	}
	{
		// orientationInt += 4;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 4));
	}

IL_003f:
	{
		// SetOrientation( (Orientation) orientationInt );
		int32_t L_15 = V_0;
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, L_15, NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::FlipHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_FlipHorizontal_mE82FF65603EE9F895C62BA96C461BEF26DB1AF3C (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// if( currentOrientation == Orientation.Normal )
		int32_t L_0 = __this->___currentOrientation_43;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// SetOrientation( Orientation.FlipHorizontal );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 4, NULL);
		return;
	}

IL_0010:
	{
		// else if( currentOrientation == Orientation.FlipHorizontal )
		int32_t L_1 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0021;
		}
	}
	{
		// SetOrientation( Orientation.Normal );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 0, NULL);
		return;
	}

IL_0021:
	{
		// else if( currentOrientation == Orientation.Rotate90 )
		int32_t L_2 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		// SetOrientation( Orientation.Transverse );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 7, NULL);
		return;
	}

IL_0032:
	{
		// else if( currentOrientation == Orientation.Transverse )
		int32_t L_3 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_3) == ((uint32_t)7))))
		{
			goto IL_0043;
		}
	}
	{
		// SetOrientation( Orientation.Rotate90 );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 1, NULL);
		return;
	}

IL_0043:
	{
		// else if( currentOrientation == Orientation.Rotate180 )
		int32_t L_4 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0054;
		}
	}
	{
		// SetOrientation( Orientation.FlipVertical );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 6, NULL);
		return;
	}

IL_0054:
	{
		// else if( currentOrientation == Orientation.FlipVertical )
		int32_t L_5 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_5) == ((uint32_t)6))))
		{
			goto IL_0065;
		}
	}
	{
		// SetOrientation( Orientation.Rotate180 );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 2, NULL);
		return;
	}

IL_0065:
	{
		// else if( currentOrientation == Orientation.Rotate270 )
		int32_t L_6 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0076;
		}
	}
	{
		// SetOrientation( Orientation.Transpose );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 5, NULL);
		return;
	}

IL_0076:
	{
		// SetOrientation( Orientation.Rotate270 );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 3, NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::FlipVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_FlipVertical_m986687D13277B2AFDB92B154B5E380FD55DA4A76 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// if( currentOrientation == Orientation.Normal )
		int32_t L_0 = __this->___currentOrientation_43;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// SetOrientation( Orientation.FlipVertical );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 6, NULL);
		return;
	}

IL_0010:
	{
		// else if( currentOrientation == Orientation.FlipVertical )
		int32_t L_1 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_1) == ((uint32_t)6))))
		{
			goto IL_0021;
		}
	}
	{
		// SetOrientation( Orientation.Normal );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 0, NULL);
		return;
	}

IL_0021:
	{
		// else if( currentOrientation == Orientation.Rotate90 )
		int32_t L_2 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		// SetOrientation( Orientation.Transpose );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 5, NULL);
		return;
	}

IL_0032:
	{
		// else if( currentOrientation == Orientation.Transpose )
		int32_t L_3 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_0043;
		}
	}
	{
		// SetOrientation( Orientation.Rotate90 );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 1, NULL);
		return;
	}

IL_0043:
	{
		// else if( currentOrientation == Orientation.Rotate180 )
		int32_t L_4 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0054;
		}
	}
	{
		// SetOrientation( Orientation.FlipHorizontal );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 4, NULL);
		return;
	}

IL_0054:
	{
		// else if( currentOrientation == Orientation.FlipHorizontal )
		int32_t L_5 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_5) == ((uint32_t)4))))
		{
			goto IL_0065;
		}
	}
	{
		// SetOrientation( Orientation.Rotate180 );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 2, NULL);
		return;
	}

IL_0065:
	{
		// else if( currentOrientation == Orientation.Rotate270 )
		int32_t L_6 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0076;
		}
	}
	{
		// SetOrientation( Orientation.Transverse );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 7, NULL);
		return;
	}

IL_0076:
	{
		// SetOrientation( Orientation.Rotate270 );
		ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB(__this, 3, NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::SetOrientation(ImageCropper/Orientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_SetOrientation_m4AE862D8BC4C59C00457F640D468B45273FD6EEB (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, int32_t ___orientation0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// Vector2 selectionPosition = m_selection.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_selection_16;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		V_0 = L_1;
		// Vector2 selectionSize = m_selection.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___m_selection_16;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_2, NULL);
		V_1 = L_3;
		// if( currentOrientation == Orientation.Normal )
		int32_t L_4 = __this->___currentOrientation_43;
		if (!L_4)
		{
			goto IL_01da;
		}
	}
	{
		// else if( currentOrientation == Orientation.Rotate90 )
		int32_t L_5 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_006a;
		}
	}
	{
		// selectionPosition = new Vector2( selectionPosition.y, m_orientedImageSize.x - selectionPosition.x - selectionSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___m_orientedImageSize_39);
		float L_9 = L_8->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		float L_13 = L_12.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_7, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_9, L_11)), L_13)), NULL);
		// selectionSize = new Vector2( selectionSize.y, selectionSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_1;
		float L_15 = L_14.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_1;
		float L_17 = L_16.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_15, L_17, NULL);
		goto IL_01da;
	}

IL_006a:
	{
		// else if( currentOrientation == Orientation.Rotate180 )
		int32_t L_18 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_00b1;
		}
	}
	{
		// selectionPosition = new Vector2( m_orientedImageSize.x - selectionPosition.x - selectionSize.x, m_orientedImageSize.y - selectionPosition.y - selectionSize.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&__this->___m_orientedImageSize_39);
		float L_20 = L_19->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		float L_22 = L_21.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_1;
		float L_24 = L_23.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&__this->___m_orientedImageSize_39);
		float L_26 = L_25->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_0;
		float L_28 = L_27.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_1;
		float L_30 = L_29.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_20, L_22)), L_24)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_26, L_28)), L_30)), NULL);
		goto IL_01da;
	}

IL_00b1:
	{
		// else if( currentOrientation == Orientation.Rotate270 )
		int32_t L_31 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_31) == ((uint32_t)3))))
		{
			goto IL_00f8;
		}
	}
	{
		// selectionPosition = new Vector2( m_orientedImageSize.y - selectionPosition.y - selectionSize.y, selectionPosition.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_32 = (&__this->___m_orientedImageSize_39);
		float L_33 = L_32->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_0;
		float L_35 = L_34.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_1;
		float L_37 = L_36.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_0;
		float L_39 = L_38.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_33, L_35)), L_37)), L_39, NULL);
		// selectionSize = new Vector2( selectionSize.y, selectionSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_1;
		float L_41 = L_40.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_1;
		float L_43 = L_42.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_41, L_43, NULL);
		goto IL_01da;
	}

IL_00f8:
	{
		// else if( currentOrientation == Orientation.FlipHorizontal )
		int32_t L_44 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_44) == ((uint32_t)4))))
		{
			goto IL_012c;
		}
	}
	{
		// selectionPosition = new Vector2( m_orientedImageSize.x - selectionPosition.x - selectionSize.x, selectionPosition.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_45 = (&__this->___m_orientedImageSize_39);
		float L_46 = L_45->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = V_0;
		float L_48 = L_47.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_1;
		float L_50 = L_49.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_0;
		float L_52 = L_51.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_46, L_48)), L_50)), L_52, NULL);
		goto IL_01da;
	}

IL_012c:
	{
		// else if( currentOrientation == Orientation.Transpose )
		int32_t L_53 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_53) == ((uint32_t)5))))
		{
			goto IL_0183;
		}
	}
	{
		// selectionPosition = new Vector2( m_orientedImageSize.y - selectionPosition.y - selectionSize.y, m_orientedImageSize.x - selectionPosition.x - selectionSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_54 = (&__this->___m_orientedImageSize_39);
		float L_55 = L_54->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = V_0;
		float L_57 = L_56.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_1;
		float L_59 = L_58.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_60 = (&__this->___m_orientedImageSize_39);
		float L_61 = L_60->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_0;
		float L_63 = L_62.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = V_1;
		float L_65 = L_64.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_55, L_57)), L_59)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_61, L_63)), L_65)), NULL);
		// selectionSize = new Vector2( selectionSize.y, selectionSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = V_1;
		float L_67 = L_66.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68 = V_1;
		float L_69 = L_68.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_67, L_69, NULL);
		goto IL_01da;
	}

IL_0183:
	{
		// else if( currentOrientation == Orientation.FlipVertical )
		int32_t L_70 = __this->___currentOrientation_43;
		if ((!(((uint32_t)L_70) == ((uint32_t)6))))
		{
			goto IL_01b4;
		}
	}
	{
		// selectionPosition = new Vector2( selectionPosition.x, m_orientedImageSize.y - selectionPosition.y - selectionSize.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71 = V_0;
		float L_72 = L_71.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_73 = (&__this->___m_orientedImageSize_39);
		float L_74 = L_73->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75 = V_0;
		float L_76 = L_75.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = V_1;
		float L_78 = L_77.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_72, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_74, L_76)), L_78)), NULL);
		goto IL_01da;
	}

IL_01b4:
	{
		// selectionPosition = new Vector2( selectionPosition.y, selectionPosition.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_0;
		float L_80 = L_79.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81 = V_0;
		float L_82 = L_81.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_80, L_82, NULL);
		// selectionSize = new Vector2( selectionSize.y, selectionSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83 = V_1;
		float L_84 = L_83.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_85 = V_1;
		float L_86 = L_85.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_84, L_86, NULL);
	}

IL_01da:
	{
		// if( orientation == Orientation.Normal )
		int32_t L_87 = ___orientation0;
		if (L_87)
		{
			goto IL_020e;
		}
	}
	{
		// m_orientedImageSize = m_originalImageSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88 = __this->___m_originalImageSize_38;
		__this->___m_orientedImageSize_39 = L_88;
		// orientedImageTransform.localScale = Vector3.one;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_89 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_89);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_89, L_90, NULL);
		// orientedImageTransform.localEulerAngles = Vector3.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_91 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_91);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_91, L_92, NULL);
		goto IL_05d4;
	}

IL_020e:
	{
		// else if( orientation == Orientation.Rotate90 )
		int32_t L_93 = ___orientation0;
		if ((!(((uint32_t)L_93) == ((uint32_t)1))))
		{
			goto IL_02a3;
		}
	}
	{
		// m_orientedImageSize = new Vector2( m_originalImageSize.y, m_originalImageSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_94 = (&__this->___m_originalImageSize_38);
		float L_95 = L_94->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_96 = (&__this->___m_originalImageSize_38);
		float L_97 = L_96->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_98), L_95, L_97, /*hidden argument*/NULL);
		__this->___m_orientedImageSize_39 = L_98;
		// orientedImageTransform.localScale = Vector3.one;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_99 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_99);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_99, L_100, NULL);
		// orientedImageTransform.localEulerAngles = new Vector3( 0f, 0f, 90f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_101 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		memset((&L_102), 0, sizeof(L_102));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_102), (0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		NullCheck(L_101);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_101, L_102, NULL);
		// selectionPosition = new Vector2( m_originalImageSize.y - selectionPosition.y - selectionSize.y, selectionPosition.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_103 = (&__this->___m_originalImageSize_38);
		float L_104 = L_103->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105 = V_0;
		float L_106 = L_105.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_107 = V_1;
		float L_108 = L_107.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109 = V_0;
		float L_110 = L_109.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_104, L_106)), L_108)), L_110, NULL);
		// selectionSize = new Vector2( selectionSize.y, selectionSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_111 = V_1;
		float L_112 = L_111.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113 = V_1;
		float L_114 = L_113.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_112, L_114, NULL);
		goto IL_05d4;
	}

IL_02a3:
	{
		// else if( orientation == Orientation.Rotate180 )
		int32_t L_115 = ___orientation0;
		if ((!(((uint32_t)L_115) == ((uint32_t)2))))
		{
			goto IL_0320;
		}
	}
	{
		// m_orientedImageSize = m_originalImageSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_116 = __this->___m_originalImageSize_38;
		__this->___m_orientedImageSize_39 = L_116;
		// orientedImageTransform.localScale = Vector3.one;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_117 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_117);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_117, L_118, NULL);
		// orientedImageTransform.localEulerAngles = new Vector3( 0f, 0f, 180f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_119 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		memset((&L_120), 0, sizeof(L_120));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_120), (0.0f), (0.0f), (180.0f), /*hidden argument*/NULL);
		NullCheck(L_119);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_119, L_120, NULL);
		// selectionPosition = new Vector2( m_originalImageSize.x - selectionPosition.x - selectionSize.x, m_originalImageSize.y - selectionPosition.y - selectionSize.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_121 = (&__this->___m_originalImageSize_38);
		float L_122 = L_121->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_123 = V_0;
		float L_124 = L_123.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_125 = V_1;
		float L_126 = L_125.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_127 = (&__this->___m_originalImageSize_38);
		float L_128 = L_127->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_129 = V_0;
		float L_130 = L_129.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_131 = V_1;
		float L_132 = L_131.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_122, L_124)), L_126)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_128, L_130)), L_132)), NULL);
		goto IL_05d4;
	}

IL_0320:
	{
		// else if( orientation == Orientation.Rotate270 )
		int32_t L_133 = ___orientation0;
		if ((!(((uint32_t)L_133) == ((uint32_t)3))))
		{
			goto IL_03b5;
		}
	}
	{
		// m_orientedImageSize = new Vector2( m_originalImageSize.y, m_originalImageSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_134 = (&__this->___m_originalImageSize_38);
		float L_135 = L_134->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_136 = (&__this->___m_originalImageSize_38);
		float L_137 = L_136->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_138;
		memset((&L_138), 0, sizeof(L_138));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_138), L_135, L_137, /*hidden argument*/NULL);
		__this->___m_orientedImageSize_39 = L_138;
		// orientedImageTransform.localScale = Vector3.one;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_139 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_139);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_139, L_140, NULL);
		// orientedImageTransform.localEulerAngles = new Vector3( 0f, 0f, 270f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_141 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
		memset((&L_142), 0, sizeof(L_142));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_142), (0.0f), (0.0f), (270.0f), /*hidden argument*/NULL);
		NullCheck(L_141);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_141, L_142, NULL);
		// selectionPosition = new Vector2( selectionPosition.y, m_originalImageSize.x - selectionPosition.x - selectionSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_143 = V_0;
		float L_144 = L_143.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_145 = (&__this->___m_originalImageSize_38);
		float L_146 = L_145->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_147 = V_0;
		float L_148 = L_147.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_149 = V_1;
		float L_150 = L_149.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_144, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_146, L_148)), L_150)), NULL);
		// selectionSize = new Vector2( selectionSize.y, selectionSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_151 = V_1;
		float L_152 = L_151.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_153 = V_1;
		float L_154 = L_153.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_152, L_154, NULL);
		goto IL_05d4;
	}

IL_03b5:
	{
		// else if( orientation == Orientation.FlipHorizontal )
		int32_t L_155 = ___orientation0;
		if ((!(((uint32_t)L_155) == ((uint32_t)4))))
		{
			goto IL_041f;
		}
	}
	{
		// m_orientedImageSize = m_originalImageSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_156 = __this->___m_originalImageSize_38;
		__this->___m_orientedImageSize_39 = L_156;
		// orientedImageTransform.localScale = new Vector3( -1f, 1f, 1f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_157 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158;
		memset((&L_158), 0, sizeof(L_158));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_158), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_157);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_157, L_158, NULL);
		// orientedImageTransform.localEulerAngles = Vector3.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_159 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160;
		L_160 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_159);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_159, L_160, NULL);
		// selectionPosition = new Vector2( m_originalImageSize.x - selectionPosition.x - selectionSize.x, selectionPosition.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_161 = (&__this->___m_originalImageSize_38);
		float L_162 = L_161->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_163 = V_0;
		float L_164 = L_163.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_165 = V_1;
		float L_166 = L_165.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_167 = V_0;
		float L_168 = L_167.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_162, L_164)), L_166)), L_168, NULL);
		goto IL_05d4;
	}

IL_041f:
	{
		// else if( orientation == Orientation.Transpose )
		int32_t L_169 = ___orientation0;
		if ((!(((uint32_t)L_169) == ((uint32_t)5))))
		{
			goto IL_04d6;
		}
	}
	{
		// m_orientedImageSize = new Vector2( m_originalImageSize.y, m_originalImageSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_170 = (&__this->___m_originalImageSize_38);
		float L_171 = L_170->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_172 = (&__this->___m_originalImageSize_38);
		float L_173 = L_172->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_174;
		memset((&L_174), 0, sizeof(L_174));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_174), L_171, L_173, /*hidden argument*/NULL);
		__this->___m_orientedImageSize_39 = L_174;
		// orientedImageTransform.localScale = new Vector3( -1f, 1f, 1f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_175 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_176;
		memset((&L_176), 0, sizeof(L_176));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_176), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_175);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_175, L_176, NULL);
		// orientedImageTransform.localEulerAngles = new Vector3( 0f, 0f, 90f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_177 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_178;
		memset((&L_178), 0, sizeof(L_178));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_178), (0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		NullCheck(L_177);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_177, L_178, NULL);
		// selectionPosition = new Vector2( m_originalImageSize.y - selectionPosition.y - selectionSize.y, m_originalImageSize.x - selectionPosition.x - selectionSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_179 = (&__this->___m_originalImageSize_38);
		float L_180 = L_179->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_181 = V_0;
		float L_182 = L_181.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_183 = V_1;
		float L_184 = L_183.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_185 = (&__this->___m_originalImageSize_38);
		float L_186 = L_185->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_187 = V_0;
		float L_188 = L_187.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_189 = V_1;
		float L_190 = L_189.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_180, L_182)), L_184)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_186, L_188)), L_190)), NULL);
		// selectionSize = new Vector2( selectionSize.y, selectionSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_191 = V_1;
		float L_192 = L_191.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_193 = V_1;
		float L_194 = L_193.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_192, L_194, NULL);
		goto IL_05d4;
	}

IL_04d6:
	{
		// else if( orientation == Orientation.FlipVertical )
		int32_t L_195 = ___orientation0;
		if ((!(((uint32_t)L_195) == ((uint32_t)6))))
		{
			goto IL_054f;
		}
	}
	{
		// m_orientedImageSize = m_originalImageSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_196 = __this->___m_originalImageSize_38;
		__this->___m_orientedImageSize_39 = L_196;
		// orientedImageTransform.localScale = new Vector3( -1f, 1f, 1f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_197 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_198;
		memset((&L_198), 0, sizeof(L_198));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_198), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_197);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_197, L_198, NULL);
		// orientedImageTransform.localEulerAngles = new Vector3( 0f, 0f, 180f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_199 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_200;
		memset((&L_200), 0, sizeof(L_200));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_200), (0.0f), (0.0f), (180.0f), /*hidden argument*/NULL);
		NullCheck(L_199);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_199, L_200, NULL);
		// selectionPosition = new Vector2( selectionPosition.x, m_originalImageSize.y - selectionPosition.y - selectionSize.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_201 = V_0;
		float L_202 = L_201.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_203 = (&__this->___m_originalImageSize_38);
		float L_204 = L_203->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_205 = V_0;
		float L_206 = L_205.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_207 = V_1;
		float L_208 = L_207.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_202, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_204, L_206)), L_208)), NULL);
		goto IL_05d4;
	}

IL_054f:
	{
		// m_orientedImageSize = new Vector2( m_originalImageSize.y, m_originalImageSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_209 = (&__this->___m_originalImageSize_38);
		float L_210 = L_209->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_211 = (&__this->___m_originalImageSize_38);
		float L_212 = L_211->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_213;
		memset((&L_213), 0, sizeof(L_213));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_213), L_210, L_212, /*hidden argument*/NULL);
		__this->___m_orientedImageSize_39 = L_213;
		// orientedImageTransform.localScale = new Vector3( -1f, 1f, 1f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_214 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_215;
		memset((&L_215), 0, sizeof(L_215));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_215), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_214);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_214, L_215, NULL);
		// orientedImageTransform.localEulerAngles = new Vector3( 0f, 0f, 270f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_216 = __this->___orientedImageTransform_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_217;
		memset((&L_217), 0, sizeof(L_217));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_217), (0.0f), (0.0f), (270.0f), /*hidden argument*/NULL);
		NullCheck(L_216);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_216, L_217, NULL);
		// selectionPosition = new Vector2( selectionPosition.y, selectionPosition.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_218 = V_0;
		float L_219 = L_218.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_220 = V_0;
		float L_221 = L_220.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_219, L_221, NULL);
		// selectionSize = new Vector2( selectionSize.y, selectionSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_222 = V_1;
		float L_223 = L_222.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_224 = V_1;
		float L_225 = L_224.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_223, L_225, NULL);
	}

IL_05d4:
	{
		// m_imageHolder.sizeDelta = m_orientedImageSize;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_226 = __this->___m_imageHolder_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_227 = __this->___m_orientedImageSize_39;
		NullCheck(L_226);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_226, L_227, NULL);
		// currMinSize = minSize.ClampBetween( Vector2.one, m_orientedImageSize );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_228 = __this->___minSize_47;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_229;
		L_229 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_230 = __this->___m_orientedImageSize_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_231;
		L_231 = ImageCropperUtils_ClampBetween_m2C62C6E17BA7EDABF01DE29DC8252975D332380C(L_228, L_229, L_230, NULL);
		__this->___currMinSize_49 = L_231;
		// currMaxSize = maxSize.ClampBetween( currMinSize, m_orientedImageSize );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_232 = __this->___maxSize_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_233 = __this->___currMinSize_49;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_234 = __this->___m_orientedImageSize_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_235;
		L_235 = ImageCropperUtils_ClampBetween_m2C62C6E17BA7EDABF01DE29DC8252975D332380C(L_232, L_233, L_234, NULL);
		__this->___currMaxSize_50 = L_235;
		// float aspectRatio = selectionSize.x / selectionSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_236 = V_1;
		float L_237 = L_236.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_238 = V_1;
		float L_239 = L_238.___y_1;
		V_2 = ((float)(L_237/L_239));
		// if( aspectRatio < minAspectRatio - 1E-4f ) // consider floating-point precision
		float L_240 = V_2;
		float L_241 = __this->___minAspectRatio_51;
		if ((!(((float)L_240) < ((float)((float)il2cpp_codegen_subtract(L_241, (9.99999975E-05f)))))))
		{
			goto IL_0678;
		}
	}
	{
		// if( !m_pixelPerfectSelection || ( selectionSize.x + 1 ) / ( selectionSize.y - 1 ) < minAspectRatio - 1E-4f )
		bool L_242 = __this->___m_pixelPerfectSelection_32;
		if (!L_242)
		{
			goto IL_066a;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_243 = V_1;
		float L_244 = L_243.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_245 = V_1;
		float L_246 = L_245.___y_1;
		float L_247 = __this->___minAspectRatio_51;
		if ((!(((float)((float)(((float)il2cpp_codegen_add(L_244, (1.0f)))/((float)il2cpp_codegen_subtract(L_246, (1.0f)))))) < ((float)((float)il2cpp_codegen_subtract(L_247, (9.99999975E-05f)))))))
		{
			goto IL_06c2;
		}
	}

IL_066a:
	{
		// selectionSize = m_selection.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_248 = __this->___m_selection_16;
		NullCheck(L_248);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_249;
		L_249 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_248, NULL);
		V_1 = L_249;
		goto IL_06c2;
	}

IL_0678:
	{
		// else if( aspectRatio > maxAspectRatio + 1E-4f )
		float L_250 = V_2;
		float L_251 = __this->___maxAspectRatio_52;
		if ((!(((float)L_250) > ((float)((float)il2cpp_codegen_add(L_251, (9.99999975E-05f)))))))
		{
			goto IL_06c2;
		}
	}
	{
		// if( !m_pixelPerfectSelection || ( selectionSize.x - 1 ) / ( selectionSize.y + 1 ) > maxAspectRatio + 1E-4f )
		bool L_252 = __this->___m_pixelPerfectSelection_32;
		if (!L_252)
		{
			goto IL_06b6;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_253 = V_1;
		float L_254 = L_253.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_255 = V_1;
		float L_256 = L_255.___y_1;
		float L_257 = __this->___maxAspectRatio_52;
		if ((!(((float)((float)(((float)il2cpp_codegen_subtract(L_254, (1.0f)))/((float)il2cpp_codegen_add(L_256, (1.0f)))))) > ((float)((float)il2cpp_codegen_add(L_257, (9.99999975E-05f)))))))
		{
			goto IL_06c2;
		}
	}

IL_06b6:
	{
		// selectionSize = m_selection.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_258 = __this->___m_selection_16;
		NullCheck(L_258);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_259;
		L_259 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_258, NULL);
		V_1 = L_259;
	}

IL_06c2:
	{
		// UpdateSelection( selectionPosition, selectionSize );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_260 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_261 = V_1;
		ImageCropper_UpdateSelection_m1AB88B93DC6948B2F045FDD2B43F00CE464B432F(__this, L_260, L_261, 0, (bool)1, NULL);
		// if( m_pixelPerfectSelection )
		bool L_262 = __this->___m_pixelPerfectSelection_32;
		if (!L_262)
		{
			goto IL_06da;
		}
	}
	{
		// MakePixelPerfectSelection();
		ImageCropper_MakePixelPerfectSelection_mAD54D05F1B90EF39861478B1BC2E2DFB0BDA00BA(__this, NULL);
	}

IL_06da:
	{
		// currentOrientation = orientation;
		int32_t L_263 = ___orientation0;
		__this->___currentOrientation_43 = L_263;
		// ResetView( true );
		ImageCropper_ResetView_m75A480044959DD462C6BB298D4E377F67D79BD9E(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::StartAutoZoom(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_StartAutoZoom_mD2DA1F4851822D5A7D635A7485278FB706542971 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, bool ___instantZoom0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// if( !gameObject.activeInHierarchy )
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// StopAutoZoom();
		ImageCropper_StopAutoZoom_m83614FBD595053EDFCADC679407A4184EBEE76CB(__this, NULL);
		// Vector2 selectionSize = m_selection.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___m_selection_16;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_2, NULL);
		V_0 = L_3;
		// Vector2 selectionSizeScaled = selectionSize * m_imageHolder.localScale.z;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___m_imageHolder_14;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = L_6.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_4, L_7, NULL);
		V_1 = L_8;
		// float zoomAmount = -1f;
		V_2 = (-1.0f);
		// float scale = m_imageHolder.localScale.z;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___m_imageHolder_14;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_9, NULL);
		float L_11 = L_10.___z_4;
		V_3 = L_11;
		// float fillRate = Mathf.Max( selectionSizeScaled.x / m_viewportSize.x, selectionSizeScaled.y / m_viewportSize.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___m_viewportSize_37);
		float L_15 = L_14->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_1;
		float L_17 = L_16.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&__this->___m_viewportSize_37);
		float L_19 = L_18->___y_1;
		float L_20;
		L_20 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)(L_13/L_15)), ((float)(L_17/L_19)), NULL);
		V_4 = L_20;
		// if( fillRate <= autoZoomInThreshold )
		float L_21 = V_4;
		float L_22 = __this->___autoZoomInThreshold_5;
		if ((!(((float)L_21) <= ((float)L_22))))
		{
			goto IL_00c4;
		}
	}
	{
		// float scaleX = m_viewportSize.x * autoZoomInFillAmount / selectionSize.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&__this->___m_viewportSize_37);
		float L_24 = L_23->___x_0;
		float L_25 = __this->___autoZoomInFillAmount_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_0;
		float L_27 = L_26.___x_0;
		// float scaleY = m_viewportSize.y * autoZoomInFillAmount / selectionSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (&__this->___m_viewportSize_37);
		float L_29 = L_28->___y_1;
		float L_30 = __this->___autoZoomInFillAmount_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_0;
		float L_32 = L_31.___y_1;
		V_5 = ((float)(((float)il2cpp_codegen_multiply(L_29, L_30))/L_32));
		// zoomAmount = Mathf.Min( scaleX, scaleY );
		float L_33 = V_5;
		float L_34;
		L_34 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)(((float)il2cpp_codegen_multiply(L_24, L_25))/L_27)), L_33, NULL);
		V_2 = L_34;
		goto IL_019e;
	}

IL_00c4:
	{
		// else if( fillRate >= autoZoomOutThreshold )
		float L_35 = V_4;
		float L_36 = __this->___autoZoomOutThreshold_6;
		if ((!(((float)L_35) >= ((float)L_36))))
		{
			goto IL_010f;
		}
	}
	{
		// float scaleX = m_viewportSize.x * autoZoomOutFillAmount / selectionSize.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_37 = (&__this->___m_viewportSize_37);
		float L_38 = L_37->___x_0;
		float L_39 = __this->___autoZoomOutFillAmount_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_0;
		float L_41 = L_40.___x_0;
		// float scaleY = m_viewportSize.y * autoZoomOutFillAmount / selectionSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_42 = (&__this->___m_viewportSize_37);
		float L_43 = L_42->___y_1;
		float L_44 = __this->___autoZoomOutFillAmount_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_0;
		float L_46 = L_45.___y_1;
		V_6 = ((float)(((float)il2cpp_codegen_multiply(L_43, L_44))/L_46));
		// zoomAmount = Mathf.Min( scaleX, scaleY );
		float L_47 = V_6;
		float L_48;
		L_48 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)(((float)il2cpp_codegen_multiply(L_38, L_39))/L_41)), L_47, NULL);
		V_2 = L_48;
		goto IL_019e;
	}

IL_010f:
	{
		// Vector2 selectionBottomLeft = m_imageHolder.anchoredPosition + m_selection.anchoredPosition * scale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49 = __this->___m_imageHolder_14;
		NullCheck(L_49);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_49, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51 = __this->___m_selection_16;
		NullCheck(L_51);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_51, NULL);
		float L_53 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		L_54 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_52, L_53, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		L_55 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_50, L_54, NULL);
		V_7 = L_55;
		// Vector2 selectionTopRight = selectionBottomLeft + m_selection.sizeDelta * scale;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = V_7;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_57 = __this->___m_selection_16;
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_57, NULL);
		float L_59 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_58, L_59, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_56, L_60, NULL);
		V_8 = L_61;
		// if( selectionBottomLeft.x < -1E-4f || selectionBottomLeft.y < -1E-4f || selectionTopRight.x > m_viewportSize.x + 1E-4f || selectionTopRight.y > m_viewportSize.y + 1E-4f )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_7;
		float L_63 = L_62.___x_0;
		if ((((float)L_63) < ((float)(-9.99999975E-05f))))
		{
			goto IL_019c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = V_7;
		float L_65 = L_64.___y_1;
		if ((((float)L_65) < ((float)(-9.99999975E-05f))))
		{
			goto IL_019c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = V_8;
		float L_67 = L_66.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_68 = (&__this->___m_viewportSize_37);
		float L_69 = L_68->___x_0;
		if ((((float)L_67) > ((float)((float)il2cpp_codegen_add(L_69, (9.99999975E-05f))))))
		{
			goto IL_019c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = V_8;
		float L_71 = L_70.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_72 = (&__this->___m_viewportSize_37);
		float L_73 = L_72->___y_1;
		if ((!(((float)L_71) > ((float)((float)il2cpp_codegen_add(L_73, (9.99999975E-05f)))))))
		{
			goto IL_019e;
		}
	}

IL_019c:
	{
		// zoomAmount = scale;
		float L_74 = V_3;
		V_2 = L_74;
	}

IL_019e:
	{
		// if( zoomAmount < 0f )
		float L_75 = V_2;
		if ((!(((float)L_75) < ((float)(0.0f)))))
		{
			goto IL_01a7;
		}
	}
	{
		// return;
		return;
	}

IL_01a7:
	{
		// if( zoomAmount < minImageScale )
		float L_76 = V_2;
		float L_77 = __this->___minImageScale_53;
		if ((!(((float)L_76) < ((float)L_77))))
		{
			goto IL_01b7;
		}
	}
	{
		// zoomAmount = minImageScale;
		float L_78 = __this->___minImageScale_53;
		V_2 = L_78;
	}

IL_01b7:
	{
		// if( Mathf.Abs( zoomAmount - scale ) < 0.001f )
		float L_79 = V_2;
		float L_80 = V_3;
		float L_81;
		L_81 = fabsf(((float)il2cpp_codegen_subtract(L_79, L_80)));
		if ((!(((float)L_81) < ((float)(0.00100000005f)))))
		{
			goto IL_01c9;
		}
	}
	{
		// instantZoom = true;
		___instantZoom0 = (bool)1;
	}

IL_01c9:
	{
		// autoZoomCoroutine = AutoZoom( zoomAmount, instantZoom );
		float L_82 = V_2;
		bool L_83 = ___instantZoom0;
		RuntimeObject* L_84;
		L_84 = ImageCropper_AutoZoom_m1E15C105151E36C0FD2A47815CC180FDE436AF22(__this, L_82, L_83, NULL);
		__this->___autoZoomCoroutine_41 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___autoZoomCoroutine_41), (void*)L_84);
		// StartCoroutine( autoZoomCoroutine );
		RuntimeObject* L_85 = __this->___autoZoomCoroutine_41;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_86;
		L_86 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_85, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ImageCropper::AutoZoom(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageCropper_AutoZoom_m1E15C105151E36C0FD2A47815CC180FDE436AF22 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, float ___zoomAmount0, bool ___instantZoom1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421* L_0 = (U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421*)il2cpp_codegen_object_new(U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAutoZoomU3Ed__121__ctor_mA710C978E765D54A68830663C0C120F496E34C07(L_0, 0, NULL);
		U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421* L_2 = L_1;
		float L_3 = ___zoomAmount0;
		NullCheck(L_2);
		L_2->___zoomAmount_3 = L_3;
		U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421* L_4 = L_2;
		bool L_5 = ___instantZoom1;
		NullCheck(L_4);
		L_4->___instantZoom_4 = L_5;
		return L_4;
	}
}
// System.Void ImageCropper::StopAutoZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_StopAutoZoom_m83614FBD595053EDFCADC679407A4184EBEE76CB (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISelectionHandler_t68418E9C342FD552C978B6A26609CCDC74ADCBEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( autoZoomCoroutine != null )
		RuntimeObject* L_0 = __this->___autoZoomCoroutine_41;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// StopCoroutine( autoZoomCoroutine );
		RuntimeObject* L_1 = __this->___autoZoomCoroutine_41;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_1, NULL);
		// autoZoomCoroutine = null;
		__this->___autoZoomCoroutine_41 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___autoZoomCoroutine_41), (void*)(RuntimeObject*)NULL);
	}

IL_001b:
	{
		// if( currentSelectionHandler != null )
		RuntimeObject* L_2 = __this->___currentSelectionHandler_42;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// currentSelectionHandler.Stop();
		RuntimeObject* L_3 = __this->___currentSelectionHandler_42;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(1 /* System.Void ImageCropperNamespace.ISelectionHandler::Stop() */, ISelectionHandler_t68418E9C342FD552C978B6A26609CCDC74ADCBEA_il2cpp_TypeInfo_var, L_3);
		// currentSelectionHandler = null;
		__this->___currentSelectionHandler_42 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentSelectionHandler_42), (void*)(RuntimeObject*)NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Boolean ImageCropper::CanModifySelectionWith(ImageCropperNamespace.ISelectionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageCropper_CanModifySelectionWith_m849C3291BCCFE5FC82DBADB9AC491C58DE73805D (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, RuntimeObject* ___handler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISelectionHandler_t68418E9C342FD552C978B6A26609CCDC74ADCBEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if( autoZoomCoroutine != null )
		RuntimeObject* L_0 = __this->___autoZoomCoroutine_41;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if( handler != currentSelectionHandler )
		RuntimeObject* L_1 = ___handler0;
		RuntimeObject* L_2 = __this->___currentSelectionHandler_42;
		if ((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2)))
		{
			goto IL_002d;
		}
	}
	{
		// if( currentSelectionHandler != null )
		RuntimeObject* L_3 = __this->___currentSelectionHandler_42;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// currentSelectionHandler.Stop();
		RuntimeObject* L_4 = __this->___currentSelectionHandler_42;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(1 /* System.Void ImageCropperNamespace.ISelectionHandler::Stop() */, ISelectionHandler_t68418E9C342FD552C978B6A26609CCDC74ADCBEA_il2cpp_TypeInfo_var, L_4);
	}

IL_0026:
	{
		// currentSelectionHandler = handler;
		RuntimeObject* L_5 = ___handler0;
		__this->___currentSelectionHandler_42 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentSelectionHandler_42), (void*)L_5);
	}

IL_002d:
	{
		// if( m_guidelinesVisibility == Visibility.OnDrag )
		int32_t L_6 = __this->___m_guidelinesVisibility_34;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0057;
		}
	}
	{
		// for( int i = 0; i < guidelines.Length; i++ )
		V_0 = 0;
		goto IL_004c;
	}

IL_003a:
	{
		// guidelines[i].enabled = true;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_7 = __this->___guidelines_21;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		// for( int i = 0; i < guidelines.Length; i++ )
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		// for( int i = 0; i < guidelines.Length; i++ )
		int32_t L_12 = V_0;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_13 = __this->___guidelines_21;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_003a;
		}
	}

IL_0057:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void ImageCropper::StopModifySelectionWith(ImageCropperNamespace.ISelectionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_StopModifySelectionWith_mC48D8422A1768DD62D31062865628352E0A80EAF (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, RuntimeObject* ___handler0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if( currentSelectionHandler == handler )
		RuntimeObject* L_0 = __this->___currentSelectionHandler_42;
		RuntimeObject* L_1 = ___handler0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0057;
		}
	}
	{
		// currentSelectionHandler = null;
		__this->___currentSelectionHandler_42 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentSelectionHandler_42), (void*)(RuntimeObject*)NULL);
		// if( m_guidelinesVisibility == Visibility.OnDrag )
		int32_t L_2 = __this->___m_guidelinesVisibility_34;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		// for( int i = 0; i < guidelines.Length; i++ )
		V_0 = 0;
		goto IL_002f;
	}

IL_001d:
	{
		// guidelines[i].enabled = false;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_3 = __this->___guidelines_21;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// for( int i = 0; i < guidelines.Length; i++ )
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002f:
	{
		// for( int i = 0; i < guidelines.Length; i++ )
		int32_t L_8 = V_0;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_9 = __this->___guidelines_21;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_001d;
		}
	}

IL_003a:
	{
		// if( m_pixelPerfectSelection )
		bool L_10 = __this->___m_pixelPerfectSelection_32;
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// MakePixelPerfectSelection();
		ImageCropper_MakePixelPerfectSelection_mAD54D05F1B90EF39861478B1BC2E2DFB0BDA00BA(__this, NULL);
	}

IL_0048:
	{
		// if( m_autoZoomEnabled )
		bool L_11 = __this->___m_autoZoomEnabled_31;
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		// StartAutoZoom( false );
		ImageCropper_StartAutoZoom_mD2DA1F4851822D5A7D635A7485278FB706542971(__this, (bool)0, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void ImageCropper::MakePixelPerfectSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_MakePixelPerfectSelection_mAD54D05F1B90EF39861478B1BC2E2DFB0BDA00BA (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// Vector2 size = m_selection.sizeDelta.RoundToInt().ClampBetween( currMinSize.CeilToInt(), m_orientedImageSize );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_selection_16;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = ImageCropperUtils_RoundToInt_m19D6FA6CBFBF006299F8B4AF5BA05D8661EF4B1F(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___currMinSize_49;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = ImageCropperUtils_CeilToInt_m232ABCB677D6AD78501B51C830D69E8FF6CEBE60(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___m_orientedImageSize_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = ImageCropperUtils_ClampBetween_m2C62C6E17BA7EDABF01DE29DC8252975D332380C(L_2, L_4, L_5, NULL);
		V_0 = L_6;
		// float aspectRatio = size.x / size.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		float L_8 = L_7.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10 = L_9.___y_1;
		V_1 = ((float)(L_8/L_10));
		// if( aspectRatio < minAspectRatio )
		float L_11 = V_1;
		float L_12 = __this->___minAspectRatio_51;
		if ((!(((float)L_11) < ((float)L_12))))
		{
			goto IL_015f;
		}
	}
	{
		// bool foundMatchingSize = false;
		V_2 = (bool)0;
		// bool canExpandWidth = size.x < m_orientedImageSize.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___m_orientedImageSize_39);
		float L_16 = L_15->___x_0;
		V_3 = (bool)((((float)L_14) < ((float)L_16))? 1 : 0);
		// bool canShrinkHeight = size.y > Mathf.CeilToInt( currMinSize.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		float L_18 = L_17.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&__this->___currMinSize_49);
		float L_20 = L_19->___y_1;
		int32_t L_21;
		L_21 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(L_20, NULL);
		V_4 = (bool)((((float)L_18) > ((float)((float)L_21)))? 1 : 0);
		// if( canExpandWidth )
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_00b0;
		}
	}
	{
		// aspectRatio = ( size.x + 1 ) / size.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_0;
		float L_24 = L_23.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_0;
		float L_26 = L_25.___y_1;
		V_1 = ((float)(((float)il2cpp_codegen_add(L_24, (1.0f)))/L_26));
		// if( aspectRatio >= minAspectRatio && aspectRatio <= maxAspectRatio )
		float L_27 = V_1;
		float L_28 = __this->___minAspectRatio_51;
		if ((!(((float)L_27) >= ((float)L_28))))
		{
			goto IL_00b0;
		}
	}
	{
		float L_29 = V_1;
		float L_30 = __this->___maxAspectRatio_52;
		if ((!(((float)L_29) <= ((float)L_30))))
		{
			goto IL_00b0;
		}
	}
	{
		// size.x = size.x + 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_0;
		float L_32 = L_31.___x_0;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_add(L_32, (1.0f)));
		// foundMatchingSize = true;
		V_2 = (bool)1;
	}

IL_00b0:
	{
		// if( !foundMatchingSize && canShrinkHeight )
		bool L_33 = V_2;
		bool L_34 = V_4;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00f4;
		}
	}
	{
		// aspectRatio = size.x / ( size.y - 1 );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_0;
		float L_36 = L_35.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_0;
		float L_38 = L_37.___y_1;
		V_1 = ((float)(L_36/((float)il2cpp_codegen_subtract(L_38, (1.0f)))));
		// if( aspectRatio >= minAspectRatio && aspectRatio <= maxAspectRatio )
		float L_39 = V_1;
		float L_40 = __this->___minAspectRatio_51;
		if ((!(((float)L_39) >= ((float)L_40))))
		{
			goto IL_00f4;
		}
	}
	{
		float L_41 = V_1;
		float L_42 = __this->___maxAspectRatio_52;
		if ((!(((float)L_41) <= ((float)L_42))))
		{
			goto IL_00f4;
		}
	}
	{
		// size.y = size.y - 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = V_0;
		float L_44 = L_43.___y_1;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_subtract(L_44, (1.0f)));
		// foundMatchingSize = true;
		V_2 = (bool)1;
	}

IL_00f4:
	{
		// if( !foundMatchingSize && canExpandWidth && canShrinkHeight )
		bool L_45 = V_2;
		bool L_46 = V_3;
		bool L_47 = V_4;
		if (!((int32_t)(((int32_t)(((((int32_t)L_45) == ((int32_t)0))? 1 : 0)&(int32_t)L_46))&(int32_t)L_47)))
		{
			goto IL_0283;
		}
	}
	{
		// aspectRatio = ( size.x + 1 ) / ( size.y - 1 );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_0;
		float L_49 = L_48.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = V_0;
		float L_51 = L_50.___y_1;
		V_1 = ((float)(((float)il2cpp_codegen_add(L_49, (1.0f)))/((float)il2cpp_codegen_subtract(L_51, (1.0f)))));
		// if( aspectRatio >= minAspectRatio && aspectRatio <= maxAspectRatio )
		float L_52 = V_1;
		float L_53 = __this->___minAspectRatio_51;
		if ((!(((float)L_52) >= ((float)L_53))))
		{
			goto IL_0283;
		}
	}
	{
		float L_54 = V_1;
		float L_55 = __this->___maxAspectRatio_52;
		if ((!(((float)L_54) <= ((float)L_55))))
		{
			goto IL_0283;
		}
	}
	{
		// size.x = size.x + 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = V_0;
		float L_57 = L_56.___x_0;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_add(L_57, (1.0f)));
		// size.y = size.y - 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_0;
		float L_59 = L_58.___y_1;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_subtract(L_59, (1.0f)));
		goto IL_0283;
	}

IL_015f:
	{
		// else if( aspectRatio > maxAspectRatio )
		float L_60 = V_1;
		float L_61 = __this->___maxAspectRatio_52;
		if ((!(((float)L_60) > ((float)L_61))))
		{
			goto IL_0283;
		}
	}
	{
		// bool foundMatchingSize = false;
		V_5 = (bool)0;
		// bool canShrinkWidth = size.x > Mathf.CeilToInt( currMinSize.x );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_0;
		float L_63 = L_62.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_64 = (&__this->___currMinSize_49);
		float L_65 = L_64->___x_0;
		int32_t L_66;
		L_66 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(L_65, NULL);
		V_6 = (bool)((((float)L_63) > ((float)((float)L_66)))? 1 : 0);
		// bool canExpandHeight = size.y < m_orientedImageSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = V_0;
		float L_68 = L_67.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_69 = (&__this->___m_orientedImageSize_39);
		float L_70 = L_69->___y_1;
		V_7 = (bool)((((float)L_68) < ((float)L_70))? 1 : 0);
		// if( !foundMatchingSize && canShrinkWidth )
		bool L_71 = V_5;
		bool L_72 = V_6;
		if (!((int32_t)(((((int32_t)L_71) == ((int32_t)0))? 1 : 0)&(int32_t)L_72)))
		{
			goto IL_01e4;
		}
	}
	{
		// aspectRatio = ( size.x - 1 ) / size.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73 = V_0;
		float L_74 = L_73.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75 = V_0;
		float L_76 = L_75.___y_1;
		V_1 = ((float)(((float)il2cpp_codegen_subtract(L_74, (1.0f)))/L_76));
		// if( aspectRatio >= minAspectRatio && aspectRatio <= maxAspectRatio )
		float L_77 = V_1;
		float L_78 = __this->___minAspectRatio_51;
		if ((!(((float)L_77) >= ((float)L_78))))
		{
			goto IL_01e4;
		}
	}
	{
		float L_79 = V_1;
		float L_80 = __this->___maxAspectRatio_52;
		if ((!(((float)L_79) <= ((float)L_80))))
		{
			goto IL_01e4;
		}
	}
	{
		// size.x = size.x - 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81 = V_0;
		float L_82 = L_81.___x_0;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_subtract(L_82, (1.0f)));
		// foundMatchingSize = true;
		V_5 = (bool)1;
	}

IL_01e4:
	{
		// if( canExpandHeight )
		bool L_83 = V_7;
		if (!L_83)
		{
			goto IL_0224;
		}
	}
	{
		// aspectRatio = size.x / ( size.y + 1 );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_84 = V_0;
		float L_85 = L_84.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_86 = V_0;
		float L_87 = L_86.___y_1;
		V_1 = ((float)(L_85/((float)il2cpp_codegen_add(L_87, (1.0f)))));
		// if( aspectRatio >= minAspectRatio && aspectRatio <= maxAspectRatio )
		float L_88 = V_1;
		float L_89 = __this->___minAspectRatio_51;
		if ((!(((float)L_88) >= ((float)L_89))))
		{
			goto IL_0224;
		}
	}
	{
		float L_90 = V_1;
		float L_91 = __this->___maxAspectRatio_52;
		if ((!(((float)L_90) <= ((float)L_91))))
		{
			goto IL_0224;
		}
	}
	{
		// size.y = size.y + 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_0;
		float L_93 = L_92.___y_1;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_add(L_93, (1.0f)));
		// foundMatchingSize = true;
		V_5 = (bool)1;
	}

IL_0224:
	{
		// if( !foundMatchingSize && canShrinkWidth && canExpandHeight )
		bool L_94 = V_5;
		bool L_95 = V_6;
		bool L_96 = V_7;
		if (!((int32_t)(((int32_t)(((((int32_t)L_94) == ((int32_t)0))? 1 : 0)&(int32_t)L_95))&(int32_t)L_96)))
		{
			goto IL_0283;
		}
	}
	{
		// aspectRatio = ( size.x - 1 ) / ( size.y + 1 );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_97 = V_0;
		float L_98 = L_97.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_0;
		float L_100 = L_99.___y_1;
		V_1 = ((float)(((float)il2cpp_codegen_subtract(L_98, (1.0f)))/((float)il2cpp_codegen_add(L_100, (1.0f)))));
		// if( aspectRatio >= minAspectRatio && aspectRatio <= maxAspectRatio )
		float L_101 = V_1;
		float L_102 = __this->___minAspectRatio_51;
		if ((!(((float)L_101) >= ((float)L_102))))
		{
			goto IL_0283;
		}
	}
	{
		float L_103 = V_1;
		float L_104 = __this->___maxAspectRatio_52;
		if ((!(((float)L_103) <= ((float)L_104))))
		{
			goto IL_0283;
		}
	}
	{
		// size.x = size.x - 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105 = V_0;
		float L_106 = L_105.___x_0;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_subtract(L_106, (1.0f)));
		// size.y = size.y + 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_107 = V_0;
		float L_108 = L_107.___y_1;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_add(L_108, (1.0f)));
	}

IL_0283:
	{
		// m_selection.anchoredPosition = m_selection.anchoredPosition.RoundToInt().ClampBetween( Vector2.zero, m_orientedImageSize - size );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_109 = __this->___m_selection_16;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_110 = __this->___m_selection_16;
		NullCheck(L_110);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_111;
		L_111 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_110, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112;
		L_112 = ImageCropperUtils_RoundToInt_m19D6FA6CBFBF006299F8B4AF5BA05D8661EF4B1F(L_111, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113;
		L_113 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_114 = __this->___m_orientedImageSize_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_115 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_116;
		L_116 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_114, L_115, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_117;
		L_117 = ImageCropperUtils_ClampBetween_m2C62C6E17BA7EDABF01DE29DC8252975D332380C(L_112, L_113, L_116, NULL);
		NullCheck(L_109);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_109, L_117, NULL);
		// m_selection.sizeDelta = size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_118 = __this->___m_selection_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_119 = V_0;
		NullCheck(L_118);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_118, L_119, NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::UpdateSelection(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_UpdateSelection_m029DF565AC7BB2D873C7310B03622395CBC6E943 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// m_selection.anchoredPosition = position.ClampBetween( Vector2.zero, m_orientedImageSize - m_selection.sizeDelta );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_selection_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___position0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___m_orientedImageSize_39;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___m_selection_16;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_3, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = ImageCropperUtils_ClampBetween_m2C62C6E17BA7EDABF01DE29DC8252975D332380C(L_1, L_2, L_6, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_7, NULL);
		// }
		return;
	}
}
// System.Void ImageCropper::UpdateSelection(UnityEngine.Vector2,UnityEngine.Vector2,ImageCropper/Direction,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper_UpdateSelection_m1AB88B93DC6948B2F045FDD2B43F00CE464B432F (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size1, int32_t ___pivot2, bool ___shrinkToFit3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	{
		// Vector2 newSize = size.ClampBetween( currMinSize, currMaxSize );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___size1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___currMinSize_49;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___currMaxSize_50;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = ImageCropperUtils_ClampBetween_m2C62C6E17BA7EDABF01DE29DC8252975D332380C(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// float aspectRatio = newSize.x / newSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___y_1;
		V_1 = ((float)(L_5/L_7));
		// if( aspectRatio < minAspectRatio )
		float L_8 = V_1;
		float L_9 = __this->___minAspectRatio_51;
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_012c;
		}
	}
	{
		// if( shrinkToFit )
		bool L_10 = ___shrinkToFit3;
		if (!L_10)
		{
			goto IL_00b8;
		}
	}
	{
		// float requiredHeight = newSize.x / minAspectRatio;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		float L_12 = L_11.___x_0;
		float L_13 = __this->___minAspectRatio_51;
		V_2 = ((float)(L_12/L_13));
		// if( requiredHeight >= currMinSize.y )
		float L_14 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___currMinSize_49);
		float L_16 = L_15->___y_1;
		if ((!(((float)L_14) >= ((float)L_16))))
		{
			goto IL_005d;
		}
	}
	{
		// newSize.y = requiredHeight;
		float L_17 = V_2;
		(&V_0)->___y_1 = L_17;
		goto IL_022f;
	}

IL_005d:
	{
		// float requiredWidth = currMinSize.y * minAspectRatio;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&__this->___currMinSize_49);
		float L_19 = L_18->___y_1;
		float L_20 = __this->___minAspectRatio_51;
		V_3 = ((float)il2cpp_codegen_multiply(L_19, L_20));
		// if( requiredWidth <= currMaxSize.x )
		float L_21 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___currMaxSize_50);
		float L_23 = L_22->___x_0;
		if ((!(((float)L_21) <= ((float)L_23))))
		{
			goto IL_0096;
		}
	}
	{
		// newSize = new Vector2( requiredWidth, currMinSize.y );
		float L_24 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&__this->___currMinSize_49);
		float L_26 = L_25->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_24, L_26, NULL);
		goto IL_022f;
	}

IL_0096:
	{
		// newSize = new Vector2( currMaxSize.x, currMinSize.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_27 = (&__this->___currMaxSize_50);
		float L_28 = L_27->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = (&__this->___currMinSize_49);
		float L_30 = L_29->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_28, L_30, NULL);
		goto IL_022f;
	}

IL_00b8:
	{
		// float requiredWidth = newSize.y * minAspectRatio;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_0;
		float L_32 = L_31.___y_1;
		float L_33 = __this->___minAspectRatio_51;
		V_4 = ((float)il2cpp_codegen_multiply(L_32, L_33));
		// if( requiredWidth <= currMaxSize.x )
		float L_34 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = (&__this->___currMaxSize_50);
		float L_36 = L_35->___x_0;
		if ((!(((float)L_34) <= ((float)L_36))))
		{
			goto IL_00e4;
		}
	}
	{
		// newSize.x = requiredWidth;
		float L_37 = V_4;
		(&V_0)->___x_0 = L_37;
		goto IL_022f;
	}

IL_00e4:
	{
		// float requiredHeight = currMaxSize.x / minAspectRatio;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_38 = (&__this->___currMaxSize_50);
		float L_39 = L_38->___x_0;
		float L_40 = __this->___minAspectRatio_51;
		V_5 = ((float)(L_39/L_40));
		// if( requiredHeight <= currMaxSize.y )
		float L_41 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_42 = (&__this->___currMaxSize_50);
		float L_43 = L_42->___y_1;
		if ((!(((float)L_41) <= ((float)L_43))))
		{
			goto IL_0120;
		}
	}
	{
		// newSize = new Vector2( currMaxSize.x, requiredHeight );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_44 = (&__this->___currMaxSize_50);
		float L_45 = L_44->___x_0;
		float L_46 = V_5;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_45, L_46, NULL);
		goto IL_022f;
	}

IL_0120:
	{
		// newSize = currMaxSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = __this->___currMaxSize_50;
		V_0 = L_47;
		goto IL_022f;
	}

IL_012c:
	{
		// else if( aspectRatio > maxAspectRatio )
		float L_48 = V_1;
		float L_49 = __this->___maxAspectRatio_52;
		if ((!(((float)L_48) > ((float)L_49))))
		{
			goto IL_022f;
		}
	}
	{
		// if( shrinkToFit )
		bool L_50 = ___shrinkToFit3;
		if (!L_50)
		{
			goto IL_01c6;
		}
	}
	{
		// float requiredWidth = newSize.y * maxAspectRatio;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_0;
		float L_52 = L_51.___y_1;
		float L_53 = __this->___maxAspectRatio_52;
		V_6 = ((float)il2cpp_codegen_multiply(L_52, L_53));
		// if( requiredWidth >= currMinSize.x )
		float L_54 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_55 = (&__this->___currMinSize_49);
		float L_56 = L_55->___x_0;
		if ((!(((float)L_54) >= ((float)L_56))))
		{
			goto IL_016b;
		}
	}
	{
		// newSize.x = requiredWidth;
		float L_57 = V_6;
		(&V_0)->___x_0 = L_57;
		goto IL_022f;
	}

IL_016b:
	{
		// float requiredHeight = currMinSize.x / maxAspectRatio;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_58 = (&__this->___currMinSize_49);
		float L_59 = L_58->___x_0;
		float L_60 = __this->___maxAspectRatio_52;
		V_7 = ((float)(L_59/L_60));
		// if( requiredHeight <= currMaxSize.y )
		float L_61 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_62 = (&__this->___currMaxSize_50);
		float L_63 = L_62->___y_1;
		if ((!(((float)L_61) <= ((float)L_63))))
		{
			goto IL_01a7;
		}
	}
	{
		// newSize = new Vector2( currMinSize.x, requiredHeight );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_64 = (&__this->___currMinSize_49);
		float L_65 = L_64->___x_0;
		float L_66 = V_7;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_65, L_66, NULL);
		goto IL_022f;
	}

IL_01a7:
	{
		// newSize = new Vector2( currMinSize.x, currMaxSize.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_67 = (&__this->___currMinSize_49);
		float L_68 = L_67->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_69 = (&__this->___currMaxSize_50);
		float L_70 = L_69->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_68, L_70, NULL);
		goto IL_022f;
	}

IL_01c6:
	{
		// float requiredHeight = newSize.x / maxAspectRatio;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71 = V_0;
		float L_72 = L_71.___x_0;
		float L_73 = __this->___maxAspectRatio_52;
		V_8 = ((float)(L_72/L_73));
		// if( requiredHeight <= currMaxSize.y )
		float L_74 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_75 = (&__this->___currMaxSize_50);
		float L_76 = L_75->___y_1;
		if ((!(((float)L_74) <= ((float)L_76))))
		{
			goto IL_01ef;
		}
	}
	{
		// newSize.y = requiredHeight;
		float L_77 = V_8;
		(&V_0)->___y_1 = L_77;
		goto IL_022f;
	}

IL_01ef:
	{
		// float requiredWidth = currMaxSize.y * maxAspectRatio;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_78 = (&__this->___currMaxSize_50);
		float L_79 = L_78->___y_1;
		float L_80 = __this->___maxAspectRatio_52;
		V_9 = ((float)il2cpp_codegen_multiply(L_79, L_80));
		// if( requiredWidth <= currMaxSize.x )
		float L_81 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_82 = (&__this->___currMaxSize_50);
		float L_83 = L_82->___x_0;
		if ((!(((float)L_81) <= ((float)L_83))))
		{
			goto IL_0228;
		}
	}
	{
		// newSize = new Vector2( requiredWidth, currMaxSize.y );
		float L_84 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_85 = (&__this->___currMaxSize_50);
		float L_86 = L_85->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_84, L_86, NULL);
		goto IL_022f;
	}

IL_0228:
	{
		// newSize = currMaxSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87 = __this->___currMaxSize_50;
		V_0 = L_87;
	}

IL_022f:
	{
		// if( size.x != newSize.x )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88 = ___size1;
		float L_89 = L_88.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_90 = V_0;
		float L_91 = L_90.___x_0;
		if ((((float)L_89) == ((float)L_91)))
		{
			goto IL_028e;
		}
	}
	{
		// if( ( pivot & Direction.Right ) == Direction.Right )
		int32_t L_92 = ___pivot2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_92&4))) == ((uint32_t)4))))
		{
			goto IL_025d;
		}
	}
	{
		// position.x -= newSize.x - size.x;
		float* L_93 = (&(&___position0)->___x_0);
		float* L_94 = L_93;
		float L_95 = *((float*)L_94);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_96 = V_0;
		float L_97 = L_96.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98 = ___size1;
		float L_99 = L_98.___x_0;
		*((float*)L_94) = (float)((float)il2cpp_codegen_subtract(L_95, ((float)il2cpp_codegen_subtract(L_97, L_99))));
		goto IL_0281;
	}

IL_025d:
	{
		// else if( ( pivot & Direction.Left ) != Direction.Left )
		int32_t L_100 = ___pivot2;
		if ((((int32_t)((int32_t)((int32_t)L_100&1))) == ((int32_t)1)))
		{
			goto IL_0281;
		}
	}
	{
		// position.x -= ( newSize.x - size.x ) * 0.5f;
		float* L_101 = (&(&___position0)->___x_0);
		float* L_102 = L_101;
		float L_103 = *((float*)L_102);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104 = V_0;
		float L_105 = L_104.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_106 = ___size1;
		float L_107 = L_106.___x_0;
		*((float*)L_102) = (float)((float)il2cpp_codegen_subtract(L_103, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_105, L_107)), (0.5f)))));
	}

IL_0281:
	{
		// size.x = newSize.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_108 = V_0;
		float L_109 = L_108.___x_0;
		(&___size1)->___x_0 = L_109;
	}

IL_028e:
	{
		// if( size.y != newSize.y )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110 = ___size1;
		float L_111 = L_110.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112 = V_0;
		float L_113 = L_112.___y_1;
		if ((((float)L_111) == ((float)L_113)))
		{
			goto IL_02ed;
		}
	}
	{
		// if( ( pivot & Direction.Top ) == Direction.Top )
		int32_t L_114 = ___pivot2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_114&2))) == ((uint32_t)2))))
		{
			goto IL_02bc;
		}
	}
	{
		// position.y -= newSize.y - size.y;
		float* L_115 = (&(&___position0)->___y_1);
		float* L_116 = L_115;
		float L_117 = *((float*)L_116);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118 = V_0;
		float L_119 = L_118.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_120 = ___size1;
		float L_121 = L_120.___y_1;
		*((float*)L_116) = (float)((float)il2cpp_codegen_subtract(L_117, ((float)il2cpp_codegen_subtract(L_119, L_121))));
		goto IL_02e0;
	}

IL_02bc:
	{
		// else if( ( pivot & Direction.Bottom ) != Direction.Bottom )
		int32_t L_122 = ___pivot2;
		if ((((int32_t)((int32_t)((int32_t)L_122&8))) == ((int32_t)8)))
		{
			goto IL_02e0;
		}
	}
	{
		// position.y -= ( newSize.y - size.y ) * 0.5f;
		float* L_123 = (&(&___position0)->___y_1);
		float* L_124 = L_123;
		float L_125 = *((float*)L_124);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_126 = V_0;
		float L_127 = L_126.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_128 = ___size1;
		float L_129 = L_128.___y_1;
		*((float*)L_124) = (float)((float)il2cpp_codegen_subtract(L_125, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_127, L_129)), (0.5f)))));
	}

IL_02e0:
	{
		// size.y = newSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_130 = V_0;
		float L_131 = L_130.___y_1;
		(&___size1)->___y_1 = L_131;
	}

IL_02ed:
	{
		// m_selection.anchoredPosition = position.ClampBetween( Vector2.zero, m_orientedImageSize - size );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_132 = __this->___m_selection_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_133 = ___position0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_134;
		L_134 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_135 = __this->___m_orientedImageSize_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_136 = ___size1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_137;
		L_137 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_135, L_136, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_138;
		L_138 = ImageCropperUtils_ClampBetween_m2C62C6E17BA7EDABF01DE29DC8252975D332380C(L_133, L_134, L_137, NULL);
		NullCheck(L_132);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_132, L_138, NULL);
		// m_selection.sizeDelta = size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_139 = __this->___m_selection_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_140 = ___size1;
		NullCheck(L_139);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_139, L_140, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 ImageCropper::RestrictImageToViewport(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropper_RestrictImageToViewport_mF1AB8CD9C02E9FC6853F8FB6D8D3163210FC20B0 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___scale1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 sizeScaled = m_imageHolder.sizeDelta * scale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_imageHolder_14;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_0, NULL);
		float L_2 = ___scale1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// if( sizeScaled.x < m_viewportSize.x )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___m_viewportSize_37);
		float L_7 = L_6->___x_0;
		if ((!(((float)L_5) < ((float)L_7))))
		{
			goto IL_0046;
		}
	}
	{
		// position.x = ( m_viewportSize.x - sizeScaled.x ) * 0.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___m_viewportSize_37);
		float L_9 = L_8->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___x_0;
		(&___position0)->___x_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_9, L_11)), (0.5f)));
		goto IL_006f;
	}

IL_0046:
	{
		// position.x = Mathf.Clamp( position.x, m_viewportSize.x - sizeScaled.x, 0f );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___position0;
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___m_viewportSize_37);
		float L_15 = L_14->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		float L_17 = L_16.___x_0;
		float L_18;
		L_18 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_13, ((float)il2cpp_codegen_subtract(L_15, L_17)), (0.0f), NULL);
		(&___position0)->___x_0 = L_18;
	}

IL_006f:
	{
		// if( sizeScaled.y < m_viewportSize.y )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_0;
		float L_20 = L_19.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (&__this->___m_viewportSize_37);
		float L_22 = L_21->___y_1;
		if ((!(((float)L_20) < ((float)L_22))))
		{
			goto IL_00a3;
		}
	}
	{
		// position.y = ( m_viewportSize.y - sizeScaled.y ) * 0.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&__this->___m_viewportSize_37);
		float L_24 = L_23->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_0;
		float L_26 = L_25.___y_1;
		(&___position0)->___y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_24, L_26)), (0.5f)));
		goto IL_00cc;
	}

IL_00a3:
	{
		// position.y = Mathf.Clamp( position.y, m_viewportSize.y - sizeScaled.y, 0f );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = ___position0;
		float L_28 = L_27.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = (&__this->___m_viewportSize_37);
		float L_30 = L_29->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_0;
		float L_32 = L_31.___y_1;
		float L_33;
		L_33 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_28, ((float)il2cpp_codegen_subtract(L_30, L_32)), (0.0f), NULL);
		(&___position0)->___y_1 = L_33;
	}

IL_00cc:
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = ___position0;
		return L_34;
	}
}
// UnityEngine.Vector2 ImageCropper::ScrollImage(UnityEngine.Vector2,ImageCropper/Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropper_ScrollImage_mD210D83BC94A503918341CD3902FE441777F0496 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___imagePosition0, int32_t ___direction1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if( direction == Direction.Left )
		int32_t L_0 = ___direction1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_003c;
		}
	}
	{
		// imagePosition.x += viewportScrollSpeed * Time.unscaledDeltaTime;
		float* L_1 = (&(&___imagePosition0)->___x_0);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = __this->___viewportScrollSpeed_11;
		float L_5;
		L_5 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		// if( imagePosition.x > 0f )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___imagePosition0;
		float L_7 = L_6.___x_0;
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_0142;
		}
	}
	{
		// imagePosition.x = 0f;
		(&___imagePosition0)->___x_0 = (0.0f);
		goto IL_0142;
	}

IL_003c:
	{
		// else if( direction == Direction.Top )
		int32_t L_8 = ___direction1;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_00aa;
		}
	}
	{
		// float imageHeight = m_imageHolder.sizeDelta.y * m_imageHolder.localScale.z;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___m_imageHolder_14;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_9, NULL);
		float L_11 = L_10.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___m_imageHolder_14;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_12, NULL);
		float L_14 = L_13.___z_4;
		V_0 = ((float)il2cpp_codegen_multiply(L_11, L_14));
		// imagePosition.y -= viewportScrollSpeed * Time.unscaledDeltaTime;
		float* L_15 = (&(&___imagePosition0)->___y_1);
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		float L_18 = __this->___viewportScrollSpeed_11;
		float L_19;
		L_19 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		*((float*)L_16) = (float)((float)il2cpp_codegen_subtract(L_17, ((float)il2cpp_codegen_multiply(L_18, L_19))));
		// if( imagePosition.y + imageHeight < m_viewportSize.y )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = ___imagePosition0;
		float L_21 = L_20.___y_1;
		float L_22 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&__this->___m_viewportSize_37);
		float L_24 = L_23->___y_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_21, L_22))) < ((float)L_24))))
		{
			goto IL_0142;
		}
	}
	{
		// imagePosition.y = m_viewportSize.y - imageHeight;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&__this->___m_viewportSize_37);
		float L_26 = L_25->___y_1;
		float L_27 = V_0;
		(&___imagePosition0)->___y_1 = ((float)il2cpp_codegen_subtract(L_26, L_27));
		goto IL_0142;
	}

IL_00aa:
	{
		// else if( direction == Direction.Right )
		int32_t L_28 = ___direction1;
		if ((!(((uint32_t)L_28) == ((uint32_t)4))))
		{
			goto IL_0112;
		}
	}
	{
		// float imageWidth = m_imageHolder.sizeDelta.x * m_imageHolder.localScale.z;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_29 = __this->___m_imageHolder_14;
		NullCheck(L_29);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_29, NULL);
		float L_31 = L_30.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32 = __this->___m_imageHolder_14;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_32, NULL);
		float L_34 = L_33.___z_4;
		V_1 = ((float)il2cpp_codegen_multiply(L_31, L_34));
		// imagePosition.x -= viewportScrollSpeed * Time.unscaledDeltaTime;
		float* L_35 = (&(&___imagePosition0)->___x_0);
		float* L_36 = L_35;
		float L_37 = *((float*)L_36);
		float L_38 = __this->___viewportScrollSpeed_11;
		float L_39;
		L_39 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		*((float*)L_36) = (float)((float)il2cpp_codegen_subtract(L_37, ((float)il2cpp_codegen_multiply(L_38, L_39))));
		// if( imagePosition.x + imageWidth < m_viewportSize.x )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = ___imagePosition0;
		float L_41 = L_40.___x_0;
		float L_42 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&__this->___m_viewportSize_37);
		float L_44 = L_43->___x_0;
		if ((!(((float)((float)il2cpp_codegen_add(L_41, L_42))) < ((float)L_44))))
		{
			goto IL_0142;
		}
	}
	{
		// imagePosition.x = m_viewportSize.x - imageWidth;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_45 = (&__this->___m_viewportSize_37);
		float L_46 = L_45->___x_0;
		float L_47 = V_1;
		(&___imagePosition0)->___x_0 = ((float)il2cpp_codegen_subtract(L_46, L_47));
		goto IL_0142;
	}

IL_0112:
	{
		// imagePosition.y += viewportScrollSpeed * Time.unscaledDeltaTime;
		float* L_48 = (&(&___imagePosition0)->___y_1);
		float* L_49 = L_48;
		float L_50 = *((float*)L_49);
		float L_51 = __this->___viewportScrollSpeed_11;
		float L_52;
		L_52 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		*((float*)L_49) = (float)((float)il2cpp_codegen_add(L_50, ((float)il2cpp_codegen_multiply(L_51, L_52))));
		// if( imagePosition.y > 0f )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = ___imagePosition0;
		float L_54 = L_53.___y_1;
		if ((!(((float)L_54) > ((float)(0.0f)))))
		{
			goto IL_0142;
		}
	}
	{
		// imagePosition.y = 0f;
		(&___imagePosition0)->___y_1 = (0.0f);
	}

IL_0142:
	{
		// return imagePosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = ___imagePosition0;
		return L_55;
	}
}
// UnityEngine.Vector2 ImageCropper::GetTouchPosition(UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropper_GetTouchPosition_mA2276D3CDB7730839FCF54A09142B895C45969F7 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPos0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle( m_imageHolder, screenPos, cam, out localPos );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_imageHolder_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___screenPos0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___cam1;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_1, L_2, (&V_0), NULL);
		// return localPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		return L_4;
	}
}
// System.Void ImageCropper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropper__ctor_m8A157ABA0E5F2B6665F9D5F692F1E188887D9603 (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// private float autoZoomInThreshold = 0.5f;
		__this->___autoZoomInThreshold_5 = (0.5f);
		// private float autoZoomOutThreshold = 0.65f;
		__this->___autoZoomOutThreshold_6 = (0.649999976f);
		// private float autoZoomInFillAmount = 0.64f;
		__this->___autoZoomInFillAmount_7 = (0.639999986f);
		// private float autoZoomOutFillAmount = 0.51f;
		__this->___autoZoomOutFillAmount_8 = (0.50999999f);
		// private float m_selectionSnapToEdgeThreshold = 5f;
		__this->___m_selectionSnapToEdgeThreshold_10 = (5.0f);
		// private float viewportScrollSpeed = 512f;
		__this->___viewportScrollSpeed_11 = (512.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageCropper/Settings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settings__ctor_m75E3F038BEE35F0BC924BB73718DB89FED60B6DF (Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* __this, const RuntimeMethod* method) 
{
	{
		// public bool autoZoomEnabled = true;
		__this->___autoZoomEnabled_0 = (bool)1;
		// public bool markTextureNonReadable = true;
		__this->___markTextureNonReadable_3 = (bool)1;
		// public Color imageBackground = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___imageBackground_4 = L_0;
		// public Button visibleButtons = ~Button.None;
		__this->___visibleButtons_5 = (-1);
		// public Visibility guidelinesVisibility = Visibility.AlwaysVisible;
		__this->___guidelinesVisibility_6 = 2;
		// public Vector2 selectionMinSize = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___selectionMinSize_8 = L_1;
		// public Vector2 selectionMaxSize = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___selectionMaxSize_9 = L_2;
		// public float selectionInitialPaddingLeft = 0.1f;
		__this->___selectionInitialPaddingLeft_12 = (0.100000001f);
		// public float selectionInitialPaddingTop = 0.1f;
		__this->___selectionInitialPaddingTop_13 = (0.100000001f);
		// public float selectionInitialPaddingRight = 0.1f;
		__this->___selectionInitialPaddingRight_14 = (0.100000001f);
		// public float selectionInitialPaddingBottom = 0.1f;
		__this->___selectionInitialPaddingBottom_15 = (0.100000001f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CropResult_Invoke_mAE2B7E0A2A52A7E221E695001C760FF018F36970_Multicast(CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* __this, bool ___result0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalImage1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___croppedImage2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* currentDelegate = reinterpret_cast<CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___result0, ___originalImage1, ___croppedImage2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CropResult_Invoke_mAE2B7E0A2A52A7E221E695001C760FF018F36970_OpenInst(CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* __this, bool ___result0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalImage1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___croppedImage2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___result0, ___originalImage1, ___croppedImage2, method);
}
void CropResult_Invoke_mAE2B7E0A2A52A7E221E695001C760FF018F36970_OpenStatic(CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* __this, bool ___result0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalImage1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___croppedImage2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___result0, ___originalImage1, ___croppedImage2, method);
}
void CropResult_Invoke_mAE2B7E0A2A52A7E221E695001C760FF018F36970_OpenStaticInvoker(CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* __this, bool ___result0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalImage1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___croppedImage2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< bool, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* >::Invoke(__this->___method_ptr_0, method, NULL, ___result0, ___originalImage1, ___croppedImage2);
}
void CropResult_Invoke_mAE2B7E0A2A52A7E221E695001C760FF018F36970_ClosedStaticInvoker(CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* __this, bool ___result0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalImage1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___croppedImage2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, bool, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___result0, ___originalImage1, ___croppedImage2);
}
// System.Void ImageCropper/CropResult::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropResult__ctor_m73027D83B97458F16268DFF5BB87B9ED7A0480B9 (CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CropResult_Invoke_mAE2B7E0A2A52A7E221E695001C760FF018F36970_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CropResult_Invoke_mAE2B7E0A2A52A7E221E695001C760FF018F36970_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CropResult_Invoke_mAE2B7E0A2A52A7E221E695001C760FF018F36970_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CropResult_Invoke_mAE2B7E0A2A52A7E221E695001C760FF018F36970_Multicast;
}
// System.Void ImageCropper/CropResult::Invoke(System.Boolean,UnityEngine.Texture,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropResult_Invoke_mAE2B7E0A2A52A7E221E695001C760FF018F36970 (CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* __this, bool ___result0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalImage1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___croppedImage2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___result0, ___originalImage1, ___croppedImage2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ImageCropper/CropResult::BeginInvoke(System.Boolean,UnityEngine.Texture,UnityEngine.Texture2D,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CropResult_BeginInvoke_mEA9669FF2C4C9EA063A749E9742EDB2BBAAE4424 (CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* __this, bool ___result0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalImage1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___croppedImage2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___result0);
	__d_args[1] = ___originalImage1;
	__d_args[2] = ___croppedImage2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void ImageCropper/CropResult::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropResult_EndInvoke_mE9558E07741760FCE5B477D0A71AD507656BA192 (CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ImageResizePolicy_Invoke_m341ACAE059981DEA0DC94A356814501C496D386E_Multicast(ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* __this, int32_t* ___width0, int32_t* ___height1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* currentDelegate = reinterpret_cast<ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t*, int32_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___width0, ___height1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ImageResizePolicy_Invoke_m341ACAE059981DEA0DC94A356814501C496D386E_OpenInst(ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* __this, int32_t* ___width0, int32_t* ___height1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t*, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___width0, ___height1, method);
}
void ImageResizePolicy_Invoke_m341ACAE059981DEA0DC94A356814501C496D386E_OpenStatic(ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* __this, int32_t* ___width0, int32_t* ___height1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t*, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___width0, ___height1, method);
}
void ImageResizePolicy_Invoke_m341ACAE059981DEA0DC94A356814501C496D386E_OpenStaticInvoker(ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* __this, int32_t* ___width0, int32_t* ___height1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t*, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___width0, ___height1);
}
void ImageResizePolicy_Invoke_m341ACAE059981DEA0DC94A356814501C496D386E_ClosedStaticInvoker(ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* __this, int32_t* ___width0, int32_t* ___height1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t*, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___width0, ___height1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63 (ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* __this, int32_t* ___width0, int32_t* ___height1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t*, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___width0, ___height1);

}
// System.Void ImageCropper/ImageResizePolicy::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResizePolicy__ctor_mE27648850070826641FBAA6A3ED67AFAC8782FF0 (ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ImageResizePolicy_Invoke_m341ACAE059981DEA0DC94A356814501C496D386E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ImageResizePolicy_Invoke_m341ACAE059981DEA0DC94A356814501C496D386E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ImageResizePolicy_Invoke_m341ACAE059981DEA0DC94A356814501C496D386E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ImageResizePolicy_Invoke_m341ACAE059981DEA0DC94A356814501C496D386E_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ImageResizePolicy_Invoke_m341ACAE059981DEA0DC94A356814501C496D386E_Multicast;
}
// System.Void ImageCropper/ImageResizePolicy::Invoke(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResizePolicy_Invoke_m341ACAE059981DEA0DC94A356814501C496D386E (ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* __this, int32_t* ___width0, int32_t* ___height1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t*, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___width0, ___height1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ImageCropper/ImageResizePolicy::BeginInvoke(System.Int32&,System.Int32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageResizePolicy_BeginInvoke_m639EE287781C6314C7583DE2EDDCB826E152A201 (ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* __this, int32_t* ___width0, int32_t* ___height1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &*___width0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &*___height1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void ImageCropper/ImageResizePolicy::EndInvoke(System.Int32&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResizePolicy_EndInvoke_m18D0A0A1EFB7FDBA041260FEDF6B7070E70B79CB (ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* __this, int32_t* ___width0, int32_t* ___height1, RuntimeObject* ___result2, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___width0,
	___height1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageCropper/<AutoZoom>d__121::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAutoZoomU3Ed__121__ctor_mA710C978E765D54A68830663C0C120F496E34C07 (U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ImageCropper/<AutoZoom>d__121::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAutoZoomU3Ed__121_System_IDisposable_Dispose_m6AC1552224B3079AD46BB3C1887F9181935DE42C (U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ImageCropper/<AutoZoom>d__121::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAutoZoomU3Ed__121_MoveNext_m943EF50743E47BA205D936FE123A8CFBC8C22A0A (U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* V_1 = NULL;
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421* G_B5_0 = NULL;
	U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421* G_B6_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_016c;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float elapsed = 0f;
		__this->___U3CelapsedU3E5__2_5 = (0.0f);
		// float length = autoZoomCurve.length == 0 ? 0f : autoZoomCurve[autoZoomCurve.length - 1].time;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_4 = V_1;
		NullCheck(L_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = L_4->___autoZoomCurve_9;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_5, NULL);
		G_B4_0 = __this;
		if (!L_6)
		{
			G_B5_0 = __this;
			goto IL_005c;
		}
	}
	{
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_7 = V_1;
		NullCheck(L_7);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = L_7->___autoZoomCurve_9;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_9 = V_1;
		NullCheck(L_9);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_10 = L_9->___autoZoomCurve_9;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_10, NULL);
		NullCheck(L_8);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_12;
		L_12 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_8, ((int32_t)il2cpp_codegen_subtract(L_11, 1)), NULL);
		V_2 = L_12;
		float L_13;
		L_13 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_2), NULL);
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		goto IL_0061;
	}

IL_005c:
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B5_0;
	}

IL_0061:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3ClengthU3E5__3_6 = G_B6_0;
		// Vector3 initialScale = m_imageHolder.localScale;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_14 = V_1;
		NullCheck(L_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = L_14->___m_imageHolder_14;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_15, NULL);
		__this->___U3CinitialScaleU3E5__4_7 = L_16;
		// Vector2 initialPosition = m_imageHolder.anchoredPosition;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_17 = V_1;
		NullCheck(L_17);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = L_17->___m_imageHolder_14;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_18, NULL);
		__this->___U3CinitialPositionU3E5__5_8 = L_19;
		// Vector3 finalScale = new Vector3( zoomAmount, zoomAmount, zoomAmount );
		float L_20 = __this->___zoomAmount_3;
		float L_21 = __this->___zoomAmount_3;
		float L_22 = __this->___zoomAmount_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), L_20, L_21, L_22, /*hidden argument*/NULL);
		__this->___U3CfinalScaleU3E5__6_9 = L_23;
		// Vector2 finalPosition = m_viewportSize * 0.5f - ( m_selection.anchoredPosition + m_selection.sizeDelta * 0.5f ) * finalScale.z;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_24 = V_1;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = L_24->___m_viewportSize_37;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_25, (0.5f), NULL);
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_27 = V_1;
		NullCheck(L_27);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_28 = L_27->___m_selection_16;
		NullCheck(L_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_28, NULL);
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_30 = V_1;
		NullCheck(L_30);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31 = L_30->___m_selection_16;
		NullCheck(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_31, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_32, (0.5f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_29, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = (&__this->___U3CfinalScaleU3E5__6_9);
		float L_36 = L_35->___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_34, L_36, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_26, L_37, NULL);
		__this->___U3CfinalPositionU3E5__7_10 = L_38;
		// finalPosition = RestrictImageToViewport( finalPosition, zoomAmount );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_39 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = __this->___U3CfinalPositionU3E5__7_10;
		float L_41 = __this->___zoomAmount_3;
		NullCheck(L_39);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		L_42 = ImageCropper_RestrictImageToViewport_mF1AB8CD9C02E9FC6853F8FB6D8D3163210FC20B0(L_39, L_40, L_41, NULL);
		__this->___U3CfinalPositionU3E5__7_10 = L_42;
		// if( !instantZoom && elapsed < length )
		bool L_43 = __this->___instantZoom_4;
		if (L_43)
		{
			goto IL_0212;
		}
	}
	{
		float L_44 = __this->___U3CelapsedU3E5__2_5;
		float L_45 = __this->___U3ClengthU3E5__3_6;
		if ((!(((float)L_44) < ((float)L_45))))
		{
			goto IL_0212;
		}
	}
	{
		// Vector2 deltaPosition = finalPosition - initialPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = __this->___U3CfinalPositionU3E5__7_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = __this->___U3CinitialPositionU3E5__5_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_46, L_47, NULL);
		__this->___U3CdeltaPositionU3E5__8_11 = L_48;
		// Vector3 deltaScale = finalScale - initialScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = __this->___U3CfinalScaleU3E5__6_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = __this->___U3CinitialScaleU3E5__4_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_49, L_50, NULL);
		__this->___U3CdeltaScaleU3E5__9_12 = L_51;
		goto IL_01e9;
	}

IL_015c:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_016c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// elapsed += Time.unscaledDeltaTime;
		float L_52 = __this->___U3CelapsedU3E5__2_5;
		float L_53;
		L_53 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		__this->___U3CelapsedU3E5__2_5 = ((float)il2cpp_codegen_add(L_52, L_53));
		// if( elapsed >= length )
		float L_54 = __this->___U3CelapsedU3E5__2_5;
		float L_55 = __this->___U3ClengthU3E5__3_6;
		if ((((float)L_54) >= ((float)L_55)))
		{
			goto IL_01fa;
		}
	}
	{
		// float modifier = autoZoomCurve.Evaluate( elapsed );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_56 = V_1;
		NullCheck(L_56);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_57 = L_56->___autoZoomCurve_9;
		float L_58 = __this->___U3CelapsedU3E5__2_5;
		NullCheck(L_57);
		float L_59;
		L_59 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_57, L_58, NULL);
		V_3 = L_59;
		// m_imageHolder.anchoredPosition = initialPosition + deltaPosition * modifier;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_60 = V_1;
		NullCheck(L_60);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_61 = L_60->___m_imageHolder_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = __this->___U3CinitialPositionU3E5__5_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = __this->___U3CdeltaPositionU3E5__8_11;
		float L_64 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		L_65 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_63, L_64, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		L_66 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_62, L_65, NULL);
		NullCheck(L_61);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_61, L_66, NULL);
		// m_imageHolder.localScale = initialScale + deltaScale * modifier;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_67 = V_1;
		NullCheck(L_67);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_68 = L_67->___m_imageHolder_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = __this->___U3CinitialScaleU3E5__4_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = __this->___U3CdeltaScaleU3E5__9_12;
		float L_71 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_70, L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_69, L_72, NULL);
		NullCheck(L_68);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_68, L_73, NULL);
	}

IL_01e9:
	{
		// while( elapsed < length )
		float L_74 = __this->___U3CelapsedU3E5__2_5;
		float L_75 = __this->___U3ClengthU3E5__3_6;
		if ((((float)L_74) < ((float)L_75)))
		{
			goto IL_015c;
		}
	}

IL_01fa:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_76 = (&__this->___U3CdeltaPositionU3E5__8_11);
		il2cpp_codegen_initobj(L_76, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_77 = (&__this->___U3CdeltaScaleU3E5__9_12);
		il2cpp_codegen_initobj(L_77, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}

IL_0212:
	{
		// m_imageHolder.anchoredPosition = finalPosition;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_78 = V_1;
		NullCheck(L_78);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_79 = L_78->___m_imageHolder_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80 = __this->___U3CfinalPositionU3E5__7_10;
		NullCheck(L_79);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_79, L_80, NULL);
		// m_imageHolder.localScale = finalScale;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_81 = V_1;
		NullCheck(L_81);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_82 = L_81->___m_imageHolder_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = __this->___U3CfinalScaleU3E5__6_9;
		NullCheck(L_82);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_82, L_83, NULL);
		// autoZoomCoroutine = null;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_84 = V_1;
		NullCheck(L_84);
		L_84->___autoZoomCoroutine_41 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_84->___autoZoomCoroutine_41), (void*)(RuntimeObject*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object ImageCropper/<AutoZoom>d__121::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAutoZoomU3Ed__121_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m42CCC8C6039BB615BE2855E5F1ABC0FDA97C6EFD (U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ImageCropper/<AutoZoom>d__121::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAutoZoomU3Ed__121_System_Collections_IEnumerator_Reset_m38B6245CC76775CDF821BEBD6BBA86B6C53B922D (U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAutoZoomU3Ed__121_System_Collections_IEnumerator_Reset_m38B6245CC76775CDF821BEBD6BBA86B6C53B922D_RuntimeMethod_var)));
	}
}
// System.Object ImageCropper/<AutoZoom>d__121::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAutoZoomU3Ed__121_System_Collections_IEnumerator_get_Current_m980519348BA1148EA851F29FB4661CC88FADDFB7 (U3CAutoZoomU3Ed__121_tAB3B6C209F75000B07634D5C6165D78D7CFF3421* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageCropperNamespace.ImageCropperDemo::Crop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropperDemo_Crop_m6A949CB3FE964DA2AC42A13805989CDBEDACA17C (ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* __this, const RuntimeMethod* method) 
{
	{
		// if( ImageCropper.Instance.IsOpen )
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_0;
		L_0 = ImageCropper_get_Instance_m7563710A6D38B123978A0867F3C85275F281B63B(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ImageCropper_get_IsOpen_mE564B3643A3F8B095534D0C3AD7350FB5CC69767(L_0, NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// StartCoroutine( TakeScreenshotAndCrop() );
		RuntimeObject* L_2;
		L_2 = ImageCropperDemo_TakeScreenshotAndCrop_mF9E85B66735266A8A0DB960BCAAE24B8EC85CCCB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ImageCropperNamespace.ImageCropperDemo::TakeScreenshotAndCrop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageCropperDemo_TakeScreenshotAndCrop_mF9E85B66735266A8A0DB960BCAAE24B8EC85CCCB (ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0* L_0 = (U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0*)il2cpp_codegen_object_new(U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTakeScreenshotAndCropU3Ed__7__ctor_mEE76CB290C3FD78229E8C505CF9B922B542B2DEB(L_0, 0, NULL);
		U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ImageCropperNamespace.ImageCropperDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCropperDemo__ctor_mE8325D56CF0FB87A905337EC5B9D65EA6B7A01BE (ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageCropperNamespace.ImageCropperDemo/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mD3DCCFABEF1900718E6F0A44780E84AAB77036D6 (U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ImageCropperNamespace.ImageCropperDemo/<>c__DisplayClass7_0::<TakeScreenshotAndCrop>b__0(System.Boolean,UnityEngine.Texture,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CTakeScreenshotAndCropU3Eb__0_m6E9B2DD59936ACF19FE21BFD8823317EEA138305 (U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6* __this, bool ___result0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalImage1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___croppedImage2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6507BF4A504215DA9471CFDF2C469668FD98F01F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Destroy( croppedImageHolder.texture, 5f );
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_1 = L_0->___croppedImageHolder_4;
		NullCheck(L_1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2;
		L_2 = RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_2, (5.0f), NULL);
		// if( result )
		bool L_3 = ___result0;
		if (!L_3)
		{
			goto IL_010e;
		}
	}
	{
		// croppedImageHolder.enabled = true;
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_5 = L_4->___croppedImageHolder_4;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)1, NULL);
		// croppedImageHolder.texture = croppedImage;
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_6 = __this->___U3CU3E4__this_0;
		NullCheck(L_6);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_7 = L_6->___croppedImageHolder_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___croppedImage2;
		NullCheck(L_7);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_7, L_8, NULL);
		// Vector2 size = croppedImageHolder.rectTransform.sizeDelta;
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_9 = __this->___U3CU3E4__this_0;
		NullCheck(L_9);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_10 = L_9->___croppedImageHolder_4;
		NullCheck(L_10);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11;
		L_11 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_10, NULL);
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_11, NULL);
		V_0 = L_12;
		// if( croppedImage.height <= croppedImage.width )
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = ___croppedImage2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = ___croppedImage2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_15);
		if ((((int32_t)L_14) > ((int32_t)L_16)))
		{
			goto IL_0089;
		}
	}
	{
		// size = new Vector2( 400f, 400f * ( croppedImage.height / (float) croppedImage.width ) );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = ___croppedImage2;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_17);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = ___croppedImage2;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_19);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (400.0f), ((float)il2cpp_codegen_multiply((400.0f), ((float)(((float)L_18)/((float)L_20))))), NULL);
		goto IL_00aa;
	}

IL_0089:
	{
		// size = new Vector2( 400f * ( croppedImage.width / (float) croppedImage.height ), 400f );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = ___croppedImage2;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_21);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = ___croppedImage2;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_23);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_multiply((400.0f), ((float)(((float)L_22)/((float)L_24))))), (400.0f), NULL);
	}

IL_00aa:
	{
		// croppedImageHolder.rectTransform.sizeDelta = size;
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_25 = __this->___U3CU3E4__this_0;
		NullCheck(L_25);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_26 = L_25->___croppedImageHolder_4;
		NullCheck(L_26);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27;
		L_27 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_0;
		NullCheck(L_27);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_27, L_28, NULL);
		// croppedImageSize.enabled = true;
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_29 = __this->___U3CU3E4__this_0;
		NullCheck(L_29);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = L_29->___croppedImageSize_5;
		NullCheck(L_30);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_30, (bool)1, NULL);
		// croppedImageSize.text = "Image size: " + croppedImage.width + ", " + croppedImage.height;
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_31 = __this->___U3CU3E4__this_0;
		NullCheck(L_31);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32 = L_31->___croppedImageSize_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = ___croppedImage2;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_33);
		V_1 = L_34;
		String_t* L_35;
		L_35 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_36 = ___croppedImage2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_36);
		V_1 = L_37;
		String_t* L_38;
		L_38 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_39;
		L_39 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral6507BF4A504215DA9471CFDF2C469668FD98F01F, L_35, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_38, NULL);
		NullCheck(L_32);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_32, L_39);
		goto IL_0130;
	}

IL_010e:
	{
		// croppedImageHolder.enabled = false;
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_40 = __this->___U3CU3E4__this_0;
		NullCheck(L_40);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_41 = L_40->___croppedImageHolder_4;
		NullCheck(L_41);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_41, (bool)0, NULL);
		// croppedImageSize.enabled = false;
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_42 = __this->___U3CU3E4__this_0;
		NullCheck(L_42);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_43 = L_42->___croppedImageSize_5;
		NullCheck(L_43);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_43, (bool)0, NULL);
	}

IL_0130:
	{
		// Destroy( screenshot );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = __this->___screenshot_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_44, NULL);
		// },
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageCropperNamespace.ImageCropperDemo/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBC6FC64D825A4EF12BA917CDECD39AC349621265 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71* L_0 = (U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71*)il2cpp_codegen_object_new(U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mD56F2B763F554561FDE0F5F25C548F308A0A559D(L_0, NULL);
		((U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ImageCropperNamespace.ImageCropperDemo/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD56F2B763F554561FDE0F5F25C548F308A0A559D (U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ImageCropperNamespace.ImageCropperDemo/<>c::<TakeScreenshotAndCrop>b__7_1(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CTakeScreenshotAndCropU3Eb__7_1_m362548C3B6299A14FAB8C606EEF5E77F50A90432 (U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71* __this, int32_t* ___width0, int32_t* ___height1, const RuntimeMethod* method) 
{
	{
		// } );
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageCropperNamespace.ImageCropperDemo/<TakeScreenshotAndCrop>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotAndCropU3Ed__7__ctor_mEE76CB290C3FD78229E8C505CF9B922B542B2DEB (U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ImageCropperNamespace.ImageCropperDemo/<TakeScreenshotAndCrop>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotAndCropU3Ed__7_System_IDisposable_Dispose_m15644B654DF958B53FDEE74CF2C428F1E29F7556 (U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ImageCropperNamespace.ImageCropperDemo/<TakeScreenshotAndCrop>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTakeScreenshotAndCropU3Ed__7_MoveNext_m983800AEB8497311745771D6AC5550E47C99697C (U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Settings_t0536E882B2B738327E36C740A30DF82DA97F131B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CTakeScreenshotAndCropU3Eb__7_1_m362548C3B6299A14FAB8C606EEF5E77F50A90432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CTakeScreenshotAndCropU3Eb__0_m6E9B2DD59936ACF19FE21BFD8823317EEA138305_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* G_B10_0 = NULL;
	Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* G_B10_1 = NULL;
	CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* G_B10_2 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B10_3 = NULL;
	ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* G_B10_4 = NULL;
	ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* G_B9_0 = NULL;
	Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* G_B9_1 = NULL;
	CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* G_B9_2 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B9_3 = NULL;
	ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* G_B9_4 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6* L_4 = (U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CU3Ec__DisplayClass7_0__ctor_mD3DCCFABEF1900718E6F0A44780E84AAB77036D6(L_4, NULL);
		__this->___U3CU3E8__1_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)L_4);
		U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6* L_5 = __this->___U3CU3E8__1_3;
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		L_5->___U3CU3E4__this_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___U3CU3E4__this_0), (void*)L_6);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_7 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_7, NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// bool ovalSelection = ovalSelectionInput.isOn;
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_8 = V_1;
		NullCheck(L_8);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_9 = L_8->___ovalSelectionInput_6;
		NullCheck(L_9);
		bool L_10;
		L_10 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_9, NULL);
		V_2 = L_10;
		// bool autoZoom = autoZoomInput.isOn;
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_11 = V_1;
		NullCheck(L_11);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_12 = L_11->___autoZoomInput_7;
		NullCheck(L_12);
		bool L_13;
		L_13 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_12, NULL);
		V_3 = L_13;
		// if( !float.TryParse( minAspectRatioInput.text, out minAspectRatio ) )
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_14 = V_1;
		NullCheck(L_14);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_15 = L_14->___minAspectRatioInput_8;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_15, NULL);
		bool L_17;
		L_17 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(L_16, (&V_4), NULL);
		if (L_17)
		{
			goto IL_0088;
		}
	}
	{
		// minAspectRatio = 0f;
		V_4 = (0.0f);
	}

IL_0088:
	{
		// if( !float.TryParse( maxAspectRatioInput.text, out maxAspectRatio ) )
		ImageCropperDemo_t5BF5B70779CEEE56786DF57E6A5213B0EA82B377* L_18 = V_1;
		NullCheck(L_18);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_19 = L_18->___maxAspectRatioInput_9;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_19, NULL);
		bool L_21;
		L_21 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(L_20, (&V_5), NULL);
		if (L_21)
		{
			goto IL_00a3;
		}
	}
	{
		// maxAspectRatio = 0f;
		V_5 = (0.0f);
	}

IL_00a3:
	{
		// Texture2D screenshot = new Texture2D( Screen.width, Screen.height, TextureFormat.RGB24, false );
		U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6* L_22 = __this->___U3CU3E8__1_3;
		int32_t L_23;
		L_23 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_24;
		L_24 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_25, L_23, L_24, 3, (bool)0, NULL);
		NullCheck(L_22);
		L_22->___screenshot_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___screenshot_1), (void*)L_25);
		// screenshot.ReadPixels( new Rect( 0, 0, Screen.width, Screen.height ), 0, 0 );
		U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6* L_26 = __this->___U3CU3E8__1_3;
		NullCheck(L_26);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = L_26->___screenshot_1;
		int32_t L_28;
		L_28 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_29;
		L_29 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_30;
		memset((&L_30), 0, sizeof(L_30));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_30), (0.0f), (0.0f), ((float)L_28), ((float)L_29), /*hidden argument*/NULL);
		NullCheck(L_27);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_27, L_30, 0, 0, NULL);
		// screenshot.Apply();
		U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6* L_31 = __this->___U3CU3E8__1_3;
		NullCheck(L_31);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = L_31->___screenshot_1;
		NullCheck(L_32);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_32, NULL);
		// ImageCropper.Instance.Show( screenshot, ( bool result, Texture originalImage, Texture2D croppedImage ) =>
		// {
		//     // Destroy previously cropped texture (if any) to free memory
		//     Destroy( croppedImageHolder.texture, 5f );
		// 
		//     // If screenshot was cropped successfully
		//     if( result )
		//     {
		//         // Assign cropped texture to the RawImage
		//         croppedImageHolder.enabled = true;
		//         croppedImageHolder.texture = croppedImage;
		// 
		//         Vector2 size = croppedImageHolder.rectTransform.sizeDelta;
		//         if( croppedImage.height <= croppedImage.width )
		//             size = new Vector2( 400f, 400f * ( croppedImage.height / (float) croppedImage.width ) );
		//         else
		//             size = new Vector2( 400f * ( croppedImage.width / (float) croppedImage.height ), 400f );
		//         croppedImageHolder.rectTransform.sizeDelta = size;
		// 
		//         croppedImageSize.enabled = true;
		//         croppedImageSize.text = "Image size: " + croppedImage.width + ", " + croppedImage.height;
		//     }
		//     else
		//     {
		//         croppedImageHolder.enabled = false;
		//         croppedImageSize.enabled = false;
		//     }
		// 
		//     // Destroy the screenshot as we no longer need it in this case
		//     Destroy( screenshot );
		// },
		// settings: new ImageCropper.Settings()
		// {
		//     ovalSelection = ovalSelection,
		//     autoZoomEnabled = autoZoom,
		//     imageBackground = Color.clear, // transparent background
		//     selectionMinAspectRatio = minAspectRatio,
		//     selectionMaxAspectRatio = maxAspectRatio
		// 
		// },
		// croppedImageResizePolicy: ( ref int width, ref int height ) =>
		// {
		//     // uncomment lines below to save cropped image at half resolution
		//     //width /= 2;
		//     //height /= 2;
		// } );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_33;
		L_33 = ImageCropper_get_Instance_m7563710A6D38B123978A0867F3C85275F281B63B(NULL);
		U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6* L_34 = __this->___U3CU3E8__1_3;
		NullCheck(L_34);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35 = L_34->___screenshot_1;
		U3CU3Ec__DisplayClass7_0_t5F05E4E5ACC7A1E2C6A70B17A6E76C79CF6E40D6* L_36 = __this->___U3CU3E8__1_3;
		CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* L_37 = (CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60*)il2cpp_codegen_object_new(CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		CropResult__ctor_m73027D83B97458F16268DFF5BB87B9ED7A0480B9(L_37, L_36, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CTakeScreenshotAndCropU3Eb__0_m6E9B2DD59936ACF19FE21BFD8823317EEA138305_RuntimeMethod_var), NULL);
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_38 = (Settings_t0536E882B2B738327E36C740A30DF82DA97F131B*)il2cpp_codegen_object_new(Settings_t0536E882B2B738327E36C740A30DF82DA97F131B_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Settings__ctor_m75E3F038BEE35F0BC924BB73718DB89FED60B6DF(L_38, NULL);
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_39 = L_38;
		bool L_40 = V_2;
		NullCheck(L_39);
		L_39->___ovalSelection_2 = L_40;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_41 = L_39;
		bool L_42 = V_3;
		NullCheck(L_41);
		L_41->___autoZoomEnabled_0 = L_42;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_43 = L_41;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44;
		L_44 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		NullCheck(L_43);
		L_43->___imageBackground_4 = L_44;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_45 = L_43;
		float L_46 = V_4;
		NullCheck(L_45);
		L_45->___selectionMinAspectRatio_10 = L_46;
		Settings_t0536E882B2B738327E36C740A30DF82DA97F131B* L_47 = L_45;
		float L_48 = V_5;
		NullCheck(L_47);
		L_47->___selectionMaxAspectRatio_11 = L_48;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_il2cpp_TypeInfo_var);
		ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* L_49 = ((U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_1;
		ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* L_50 = L_49;
		G_B9_0 = L_50;
		G_B9_1 = L_47;
		G_B9_2 = L_37;
		G_B9_3 = L_35;
		G_B9_4 = L_33;
		if (L_50)
		{
			G_B10_0 = L_50;
			G_B10_1 = L_47;
			G_B10_2 = L_37;
			G_B10_3 = L_35;
			G_B10_4 = L_33;
			goto IL_016a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_il2cpp_TypeInfo_var);
		U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71* L_51 = ((U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* L_52 = (ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63*)il2cpp_codegen_object_new(ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		ImageResizePolicy__ctor_mE27648850070826641FBAA6A3ED67AFAC8782FF0(L_52, L_51, (intptr_t)((void*)U3CU3Ec_U3CTakeScreenshotAndCropU3Eb__7_1_m362548C3B6299A14FAB8C606EEF5E77F50A90432_RuntimeMethod_var), NULL);
		ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* L_53 = L_52;
		((U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_1 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF71D8A6462BB583D22BE6C2771183476F89ECF71_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_1), (void*)L_53);
		G_B10_0 = L_53;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
	}

IL_016a:
	{
		NullCheck(G_B10_4);
		ImageCropper_Show_mDDEA5F5F4F1933DB335157CA6B055911C91133F4(G_B10_4, G_B10_3, G_B10_2, G_B10_1, G_B10_0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ImageCropperNamespace.ImageCropperDemo/<TakeScreenshotAndCrop>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTakeScreenshotAndCropU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6ED2ECE68364C28CA20804EC45031D78D52D7829 (U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ImageCropperNamespace.ImageCropperDemo/<TakeScreenshotAndCrop>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotAndCropU3Ed__7_System_Collections_IEnumerator_Reset_m8B36DF463622C280E0D9307B265E68EF125A2942 (U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTakeScreenshotAndCropU3Ed__7_System_Collections_IEnumerator_Reset_m8B36DF463622C280E0D9307B265E68EF125A2942_RuntimeMethod_var)));
	}
}
// System.Object ImageCropperNamespace.ImageCropperDemo/<TakeScreenshotAndCrop>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTakeScreenshotAndCropU3Ed__7_System_Collections_IEnumerator_get_Current_m1E7F1FA6FE377323F5F7AA3B78082CE5CAB22F24 (U3CTakeScreenshotAndCropU3Ed__7_t9DE94C95A82B252F0983E94C38C50CD8D4A579B0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Texture ImageCropperNamespace.CircleGraphic::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* CircleGraphic_get_mainTexture_m83EB278D653B25EE74AAEE10489EE5A67CACDA9C (CircleGraphic_t22568D3DC935708BD0358D447676C882F663C9CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Texture mainTexture { get { return renderSprite != null ? renderSprite.texture : s_WhiteTexture; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___renderSprite_36;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ((Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields*)il2cpp_codegen_static_fields_for(Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var))->___s_WhiteTexture_5;
		return L_2;
	}

IL_0014:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___renderSprite_36;
		NullCheck(L_3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4;
		L_4 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_3, NULL);
		return L_4;
	}
}
// System.Void ImageCropperNamespace.CircleGraphic::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleGraphic_Awake_m979C001A134411780901253D7C077F959DC48E89 (CircleGraphic_t22568D3DC935708BD0358D447676C882F663C9CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// base.Awake();
		UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2(__this, NULL);
		// if( renderSprite != null )
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___renderSprite_36;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// Vector4 packedUv = UnityEngine.Sprites.DataUtility.GetOuterUV( renderSprite );
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___renderSprite_36;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = DataUtility_GetOuterUV_m408EFF91CB39DE165F8D00D42603DF1C49C57CF2(L_2, NULL);
		V_0 = L_3;
		// uv = new Vector2( packedUv.x + packedUv.z, packedUv.y + packedUv.w ) * 0.5f; // uv center point
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = V_0;
		float L_5 = L_4.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = V_0;
		float L_7 = L_6.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = V_0;
		float L_9 = L_8.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = V_0;
		float L_11 = L_10.___w_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_12, (0.5f), NULL);
		__this->___uv_40 = L_13;
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.CircleGraphic::OnPopulateMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleGraphic_OnPopulateMesh_mEBCBD0D0F72681B2455A229C16D616FD65FEB0A1 (CircleGraphic_t22568D3DC935708BD0358D447676C882F663C9CC* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Rect r = GetPixelAdjustedRect();
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = Graphic_GetPixelAdjustedRect_m70D7B527D04C0B88C23E7C6661A8FF1ECC4B4BA1(__this, NULL);
		V_0 = L_0;
		// color32 = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, __this);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2;
		L_2 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_1, NULL);
		__this->___color32_41 = L_2;
		// width = r.width * 0.5f;
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		__this->___width_42 = ((float)il2cpp_codegen_multiply(L_3, (0.5f)));
		// height = r.height * 0.5f;
		float L_4;
		L_4 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		__this->___height_43 = ((float)il2cpp_codegen_multiply(L_4, (0.5f)));
		// vh.Clear();
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_5 = ___vh0;
		NullCheck(L_5);
		VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5(L_5, NULL);
		// Vector2 pivot = rectTransform.pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(__this, NULL);
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_6, NULL);
		V_1 = L_7;
		// deltaWidth = r.width * ( 0.5f - pivot.x );
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		float L_10 = L_9.___x_0;
		__this->___deltaWidth_44 = ((float)il2cpp_codegen_multiply(L_8, ((float)il2cpp_codegen_subtract((0.5f), L_10))));
		// deltaHeight = r.height * ( 0.5f - pivot.y );
		float L_11;
		L_11 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		float L_13 = L_12.___y_1;
		__this->___deltaHeight_45 = ((float)il2cpp_codegen_multiply(L_11, ((float)il2cpp_codegen_subtract((0.5f), L_13))));
		// if( mode == Mode.FillInside )
		int32_t L_14 = __this->___mode_38;
		if (L_14)
		{
			goto IL_00ad;
		}
	}
	{
		// deltaRadians = 360f / detail * Mathf.Deg2Rad;
		int32_t L_15 = __this->___detail_37;
		__this->___deltaRadians_46 = ((float)il2cpp_codegen_multiply(((float)((360.0f)/((float)L_15))), (0.0174532924f)));
		// FillInside( vh );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_16 = ___vh0;
		CircleGraphic_FillInside_m413B411752B09EBDD0D5499AA20DFE7BCB87741F(__this, L_16, NULL);
		return;
	}

IL_00ad:
	{
		// else if( mode == Mode.FillOutside )
		int32_t L_17 = __this->___mode_38;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_026f;
		}
	}
	{
		// int quarterDetail = ( detail + 3 ) / 4;
		int32_t L_18 = __this->___detail_37;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_18, 3))/4));
		// deltaRadians = 360f / ( quarterDetail * 4 ) * Mathf.Deg2Rad;
		int32_t L_19 = V_2;
		__this->___deltaRadians_46 = ((float)il2cpp_codegen_multiply(((float)((360.0f)/((float)((int32_t)il2cpp_codegen_multiply(L_19, 4))))), (0.0174532924f)));
		// vh.AddVert( new Vector3( width + deltaWidth, height + deltaHeight, 0f ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_20 = ___vh0;
		float L_21 = __this->___width_42;
		float L_22 = __this->___deltaWidth_44;
		float L_23 = __this->___height_43;
		float L_24 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), ((float)il2cpp_codegen_add(L_21, L_22)), ((float)il2cpp_codegen_add(L_23, L_24)), (0.0f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_26 = __this->___color32_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = __this->___uv_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28;
		L_28 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_27, NULL);
		NullCheck(L_20);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_20, L_25, L_26, L_28, NULL);
		// vh.AddVert( new Vector3( -width + deltaWidth, height + deltaHeight, 0f ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_29 = ___vh0;
		float L_30 = __this->___width_42;
		float L_31 = __this->___deltaWidth_44;
		float L_32 = __this->___height_43;
		float L_33 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), ((float)il2cpp_codegen_add(((-L_30)), L_31)), ((float)il2cpp_codegen_add(L_32, L_33)), (0.0f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_35 = __this->___color32_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = __this->___uv_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_37;
		L_37 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_36, NULL);
		NullCheck(L_29);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_29, L_34, L_35, L_37, NULL);
		// vh.AddVert( new Vector3( -width + deltaWidth, -height + deltaHeight, 0f ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_38 = ___vh0;
		float L_39 = __this->___width_42;
		float L_40 = __this->___deltaWidth_44;
		float L_41 = __this->___height_43;
		float L_42 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), ((float)il2cpp_codegen_add(((-L_39)), L_40)), ((float)il2cpp_codegen_add(((-L_41)), L_42)), (0.0f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_44 = __this->___color32_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = __this->___uv_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_46;
		L_46 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_45, NULL);
		NullCheck(L_38);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_38, L_43, L_44, L_46, NULL);
		// vh.AddVert( new Vector3( width + deltaWidth, -height + deltaHeight, 0f ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_47 = ___vh0;
		float L_48 = __this->___width_42;
		float L_49 = __this->___deltaWidth_44;
		float L_50 = __this->___height_43;
		float L_51 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_52), ((float)il2cpp_codegen_add(L_48, L_49)), ((float)il2cpp_codegen_add(((-L_50)), L_51)), (0.0f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_53 = __this->___color32_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = __this->___uv_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_55;
		L_55 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_54, NULL);
		NullCheck(L_47);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_47, L_52, L_53, L_55, NULL);
		// int triangleIndex = 4;
		V_3 = 4;
		// FillOutside( vh, new Vector3( width + deltaWidth, deltaHeight, 0f ), 0, quarterDetail, ref triangleIndex );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_56 = ___vh0;
		float L_57 = __this->___width_42;
		float L_58 = __this->___deltaWidth_44;
		float L_59 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_60), ((float)il2cpp_codegen_add(L_57, L_58)), L_59, (0.0f), /*hidden argument*/NULL);
		int32_t L_61 = V_2;
		CircleGraphic_FillOutside_mF0B3E71C71AF14E4C0C603679380B169F0B654BE(__this, L_56, L_60, 0, L_61, (&V_3), NULL);
		// FillOutside( vh, new Vector3( deltaWidth, height + deltaHeight, 0f ), 1, quarterDetail, ref triangleIndex );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_62 = ___vh0;
		float L_63 = __this->___deltaWidth_44;
		float L_64 = __this->___height_43;
		float L_65 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_66), L_63, ((float)il2cpp_codegen_add(L_64, L_65)), (0.0f), /*hidden argument*/NULL);
		int32_t L_67 = V_2;
		CircleGraphic_FillOutside_mF0B3E71C71AF14E4C0C603679380B169F0B654BE(__this, L_62, L_66, 1, L_67, (&V_3), NULL);
		// FillOutside( vh, new Vector3( -width + deltaWidth, deltaHeight, 0f ), 2, quarterDetail, ref triangleIndex );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_68 = ___vh0;
		float L_69 = __this->___width_42;
		float L_70 = __this->___deltaWidth_44;
		float L_71 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_72), ((float)il2cpp_codegen_add(((-L_69)), L_70)), L_71, (0.0f), /*hidden argument*/NULL);
		int32_t L_73 = V_2;
		CircleGraphic_FillOutside_mF0B3E71C71AF14E4C0C603679380B169F0B654BE(__this, L_68, L_72, 2, L_73, (&V_3), NULL);
		// FillOutside( vh, new Vector3( deltaWidth, -height + deltaHeight, 0f ), 3, quarterDetail, ref triangleIndex );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_74 = ___vh0;
		float L_75 = __this->___deltaWidth_44;
		float L_76 = __this->___height_43;
		float L_77 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), L_75, ((float)il2cpp_codegen_add(((-L_76)), L_77)), (0.0f), /*hidden argument*/NULL);
		int32_t L_79 = V_2;
		CircleGraphic_FillOutside_mF0B3E71C71AF14E4C0C603679380B169F0B654BE(__this, L_74, L_78, 3, L_79, (&V_3), NULL);
		return;
	}

IL_026f:
	{
		// deltaRadians = 360f / detail * Mathf.Deg2Rad;
		int32_t L_80 = __this->___detail_37;
		__this->___deltaRadians_46 = ((float)il2cpp_codegen_multiply(((float)((360.0f)/((float)L_80))), (0.0174532924f)));
		// GenerateEdges( vh );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_81 = ___vh0;
		CircleGraphic_GenerateEdges_m8FCC956137D053959CA1EE206C50F6226BB6C4B7(__this, L_81, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.CircleGraphic::Cull(UnityEngine.Rect,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleGraphic_Cull_mEE9FDCEA22302346E38EADF5F4E3F274A8A0979D (CircleGraphic_t22568D3DC935708BD0358D447676C882F663C9CC* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___clipRect0, bool ___validRect1, const RuntimeMethod* method) 
{
	{
		// canvasRenderer.cull = false;
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_0;
		L_0 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(__this, NULL);
		NullCheck(L_0);
		CanvasRenderer_set_cull_mA2A521F41185511CCFF6E2BFCD7B68B1DE3C0D9D(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.CircleGraphic::FillInside(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleGraphic_FillInside_m413B411752B09EBDD0D5499AA20DFE7BCB87741F (CircleGraphic_t22568D3DC935708BD0358D447676C882F663C9CC* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// vh.AddVert( new Vector3( deltaWidth, deltaHeight, 0f ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___vh0;
		float L_1 = __this->___deltaWidth_44;
		float L_2 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_1, L_2, (0.0f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = __this->___color32_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___uv_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_5, NULL);
		NullCheck(L_0);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_0, L_3, L_4, L_6, NULL);
		// vh.AddVert( new Vector3( width + deltaWidth, deltaHeight, 0f ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_7 = ___vh0;
		float L_8 = __this->___width_42;
		float L_9 = __this->___deltaWidth_44;
		float L_10 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), ((float)il2cpp_codegen_add(L_8, L_9)), L_10, (0.0f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12 = __this->___color32_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = __this->___uv_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14;
		L_14 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_13, NULL);
		NullCheck(L_7);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_7, L_11, L_12, L_14, NULL);
		// int triangleIndex = 2;
		V_0 = 2;
		// for( int i = 1; i < detail; i++, triangleIndex++ )
		V_1 = 1;
		goto IL_00cd;
	}

IL_0067:
	{
		// float radians = i * deltaRadians;
		int32_t L_15 = V_1;
		float L_16 = __this->___deltaRadians_46;
		V_2 = ((float)il2cpp_codegen_multiply(((float)L_15), L_16));
		// vh.AddVert( new Vector3( Mathf.Cos( radians ) * width + deltaWidth, Mathf.Sin( radians ) * height + deltaHeight, 0f ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_17 = ___vh0;
		float L_18 = V_2;
		float L_19;
		L_19 = cosf(L_18);
		float L_20 = __this->___width_42;
		float L_21 = __this->___deltaWidth_44;
		float L_22 = V_2;
		float L_23;
		L_23 = sinf(L_22);
		float L_24 = __this->___height_43;
		float L_25 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_19, L_20)), L_21)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_23, L_24)), L_25)), (0.0f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_27 = __this->___color32_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = __this->___uv_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_29;
		L_29 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_28, NULL);
		NullCheck(L_17);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_17, L_26, L_27, L_29, NULL);
		// vh.AddTriangle( triangleIndex, triangleIndex - 1, 0 );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_30 = ___vh0;
		int32_t L_31 = V_0;
		int32_t L_32 = V_0;
		NullCheck(L_30);
		VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4(L_30, L_31, ((int32_t)il2cpp_codegen_subtract(L_32, 1)), 0, NULL);
		// for( int i = 1; i < detail; i++, triangleIndex++ )
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		// for( int i = 1; i < detail; i++, triangleIndex++ )
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00cd:
	{
		// for( int i = 1; i < detail; i++, triangleIndex++ )
		int32_t L_35 = V_1;
		int32_t L_36 = __this->___detail_37;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0067;
		}
	}
	{
		// vh.AddTriangle( 1, triangleIndex - 1, 0 );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_37 = ___vh0;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4(L_37, 1, ((int32_t)il2cpp_codegen_subtract(L_38, 1)), 0, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.CircleGraphic::FillOutside(UnityEngine.UI.VertexHelper,UnityEngine.Vector3,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleGraphic_FillOutside_mF0B3E71C71AF14E4C0C603679380B169F0B654BE (CircleGraphic_t22568D3DC935708BD0358D447676C882F663C9CC* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPoint1, int32_t ___quarterIndex2, int32_t ___detail3, int32_t* ___triangleIndex4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// int startIndex = quarterIndex * detail;
		int32_t L_0 = ___quarterIndex2;
		int32_t L_1 = ___detail3;
		// int endIndex = ( quarterIndex + 1 ) * detail;
		int32_t L_2 = ___quarterIndex2;
		int32_t L_3 = ___detail3;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_2, 1)), L_3));
		// vh.AddVert( initialPoint, color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_4 = ___vh0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___initialPoint1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = __this->___color32_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___uv_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_7, NULL);
		NullCheck(L_4);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_4, L_5, L_6, L_8, NULL);
		// triangleIndex++;
		int32_t* L_9 = ___triangleIndex4;
		int32_t* L_10 = ___triangleIndex4;
		int32_t L_11 = *((int32_t*)L_10);
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, 1));
		// for( int i = startIndex + 1; i <= endIndex; i++, triangleIndex++ )
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, L_1)), 1));
		goto IL_009e;
	}

IL_0030:
	{
		// float radians = i * deltaRadians;
		int32_t L_12 = V_1;
		float L_13 = __this->___deltaRadians_46;
		V_2 = ((float)il2cpp_codegen_multiply(((float)L_12), L_13));
		// vh.AddVert( new Vector3( Mathf.Cos( radians ) * width + deltaWidth, Mathf.Sin( radians ) * height + deltaHeight, 0f ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_14 = ___vh0;
		float L_15 = V_2;
		float L_16;
		L_16 = cosf(L_15);
		float L_17 = __this->___width_42;
		float L_18 = __this->___deltaWidth_44;
		float L_19 = V_2;
		float L_20;
		L_20 = sinf(L_19);
		float L_21 = __this->___height_43;
		float L_22 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), L_18)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_20, L_21)), L_22)), (0.0f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_24 = __this->___color32_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = __this->___uv_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26;
		L_26 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_25, NULL);
		NullCheck(L_14);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_14, L_23, L_24, L_26, NULL);
		// vh.AddTriangle( quarterIndex, triangleIndex - 1, triangleIndex );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_27 = ___vh0;
		int32_t L_28 = ___quarterIndex2;
		int32_t* L_29 = ___triangleIndex4;
		int32_t L_30 = *((int32_t*)L_29);
		int32_t* L_31 = ___triangleIndex4;
		int32_t L_32 = *((int32_t*)L_31);
		NullCheck(L_27);
		VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4(L_27, L_28, ((int32_t)il2cpp_codegen_subtract(L_30, 1)), L_32, NULL);
		// for( int i = startIndex + 1; i <= endIndex; i++, triangleIndex++ )
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		// for( int i = startIndex + 1; i <= endIndex; i++, triangleIndex++ )
		int32_t* L_34 = ___triangleIndex4;
		int32_t* L_35 = ___triangleIndex4;
		int32_t L_36 = *((int32_t*)L_35);
		*((int32_t*)L_34) = (int32_t)((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_009e:
	{
		// for( int i = startIndex + 1; i <= endIndex; i++, triangleIndex++ )
		int32_t L_37 = V_1;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) <= ((int32_t)L_38)))
		{
			goto IL_0030;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.CircleGraphic::GenerateEdges(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleGraphic_GenerateEdges_m8FCC956137D053959CA1EE206C50F6226BB6C4B7 (CircleGraphic_t22568D3DC935708BD0358D447676C882F663C9CC* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// float innerWidth = width - edgeThickness;
		float L_0 = __this->___width_42;
		float L_1 = __this->___edgeThickness_39;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// float innerHeight = height - edgeThickness;
		float L_2 = __this->___height_43;
		float L_3 = __this->___edgeThickness_39;
		V_1 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// vh.AddVert( new Vector3( width + deltaWidth, deltaHeight, 0f ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_4 = ___vh0;
		float L_5 = __this->___width_42;
		float L_6 = __this->___deltaWidth_44;
		float L_7 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), ((float)il2cpp_codegen_add(L_5, L_6)), L_7, (0.0f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9 = __this->___color32_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___uv_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_10, NULL);
		NullCheck(L_4);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_4, L_8, L_9, L_11, NULL);
		// vh.AddVert( new Vector3( innerWidth + deltaWidth, deltaHeight, 0f ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_12 = ___vh0;
		float L_13 = V_0;
		float L_14 = __this->___deltaWidth_44;
		float L_15 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), ((float)il2cpp_codegen_add(L_13, L_14)), L_15, (0.0f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = __this->___color32_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = __this->___uv_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19;
		L_19 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_18, NULL);
		NullCheck(L_12);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_12, L_16, L_17, L_19, NULL);
		// int triangleIndex = 2;
		V_2 = 2;
		// for( int i = 1; i < detail; i++, triangleIndex += 2 )
		V_3 = 1;
		goto IL_013a;
	}

IL_0088:
	{
		// float radians = i * deltaRadians;
		int32_t L_20 = V_3;
		float L_21 = __this->___deltaRadians_46;
		// float cos = Mathf.Cos( radians );
		float L_22 = ((float)il2cpp_codegen_multiply(((float)L_20), L_21));
		float L_23;
		L_23 = cosf(L_22);
		V_4 = L_23;
		// float sin = Mathf.Sin( radians );
		float L_24;
		L_24 = sinf(L_22);
		V_5 = L_24;
		// vh.AddVert( new Vector3( cos * width + deltaWidth, sin * height + deltaHeight, 0f ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_25 = ___vh0;
		float L_26 = V_4;
		float L_27 = __this->___width_42;
		float L_28 = __this->___deltaWidth_44;
		float L_29 = V_5;
		float L_30 = __this->___height_43;
		float L_31 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_26, L_27)), L_28)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_29, L_30)), L_31)), (0.0f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_33 = __this->___color32_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = __this->___uv_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35;
		L_35 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_34, NULL);
		NullCheck(L_25);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_25, L_32, L_33, L_35, NULL);
		// vh.AddVert( new Vector3( cos * innerWidth + deltaWidth, sin * innerHeight + deltaHeight, 0f ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_36 = ___vh0;
		float L_37 = V_4;
		float L_38 = V_0;
		float L_39 = __this->___deltaWidth_44;
		float L_40 = V_5;
		float L_41 = V_1;
		float L_42 = __this->___deltaHeight_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_37, L_38)), L_39)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_40, L_41)), L_42)), (0.0f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_44 = __this->___color32_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = __this->___uv_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_46;
		L_46 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_45, NULL);
		NullCheck(L_36);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_36, L_43, L_44, L_46, NULL);
		// vh.AddTriangle( triangleIndex, triangleIndex - 2, triangleIndex - 1 );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_47 = ___vh0;
		int32_t L_48 = V_2;
		int32_t L_49 = V_2;
		int32_t L_50 = V_2;
		NullCheck(L_47);
		VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4(L_47, L_48, ((int32_t)il2cpp_codegen_subtract(L_49, 2)), ((int32_t)il2cpp_codegen_subtract(L_50, 1)), NULL);
		// vh.AddTriangle( triangleIndex, triangleIndex - 1, triangleIndex + 1 );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_51 = ___vh0;
		int32_t L_52 = V_2;
		int32_t L_53 = V_2;
		int32_t L_54 = V_2;
		NullCheck(L_51);
		VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4(L_51, L_52, ((int32_t)il2cpp_codegen_subtract(L_53, 1)), ((int32_t)il2cpp_codegen_add(L_54, 1)), NULL);
		// for( int i = 1; i < detail; i++, triangleIndex += 2 )
		int32_t L_55 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		// for( int i = 1; i < detail; i++, triangleIndex += 2 )
		int32_t L_56 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_56, 2));
	}

IL_013a:
	{
		// for( int i = 1; i < detail; i++, triangleIndex += 2 )
		int32_t L_57 = V_3;
		int32_t L_58 = __this->___detail_37;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0088;
		}
	}
	{
		// vh.AddTriangle( 0, triangleIndex - 2, triangleIndex - 1 );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_59 = ___vh0;
		int32_t L_60 = V_2;
		int32_t L_61 = V_2;
		NullCheck(L_59);
		VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4(L_59, 0, ((int32_t)il2cpp_codegen_subtract(L_60, 2)), ((int32_t)il2cpp_codegen_subtract(L_61, 1)), NULL);
		// vh.AddTriangle( 0, triangleIndex - 1, 1 );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_62 = ___vh0;
		int32_t L_63 = V_2;
		NullCheck(L_62);
		VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4(L_62, 0, ((int32_t)il2cpp_codegen_subtract(L_63, 1)), 1, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.CircleGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleGraphic__ctor_mAD0A7B2FD0C060BB139E26B27DDF7FE2FCC66BD9 (CircleGraphic_t22568D3DC935708BD0358D447676C882F663C9CC* __this, const RuntimeMethod* method) 
{
	{
		// private int detail = 64;
		__this->___detail_37 = ((int32_t)64);
		// private float edgeThickness = 1;
		__this->___edgeThickness_39 = (1.0f);
		MaskableGraphic__ctor_mD2E256F950AAAE0E2445971361B5C54D2066E4C2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageCropperNamespace.EventSystemHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_OnEnable_m1F2ECF78C20E6C9C014CED88C2F8351D764A436C (EventSystemHandler_t484EF318A7E4379500713AD9EEE6619F9B585DD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemHandler_OnSceneLoaded_mEAE56912B7FAF15CDADD5C249D3195D674026D71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemHandler_OnSceneUnloaded_m903A043E7EBE3A1512016A052634A307DD6EA9CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded -= OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)EventSystemHandler_OnSceneLoaded_mEAE56912B7FAF15CDADD5C249D3195D674026D71_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_remove_sceneLoaded_m72A7C2A1B8EF1C21A208A9A015375577768B3978(L_0, NULL);
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_1 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_1, __this, (intptr_t)((void*)EventSystemHandler_OnSceneLoaded_mEAE56912B7FAF15CDADD5C249D3195D674026D71_RuntimeMethod_var), NULL);
		SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6(L_1, NULL);
		// SceneManager.sceneUnloaded -= OnSceneUnloaded;
		UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* L_2 = (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C*)il2cpp_codegen_object_new(UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m3D196ADE59DE13B9FDC5D827B1A6D00CBEF1F6DF(L_2, __this, (intptr_t)((void*)EventSystemHandler_OnSceneUnloaded_m903A043E7EBE3A1512016A052634A307DD6EA9CE_RuntimeMethod_var), NULL);
		SceneManager_remove_sceneUnloaded_m2CACDB3F47DED2C92E6AA1912906F7E2C61424EB(L_2, NULL);
		// SceneManager.sceneUnloaded += OnSceneUnloaded;
		UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* L_3 = (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C*)il2cpp_codegen_object_new(UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m3D196ADE59DE13B9FDC5D827B1A6D00CBEF1F6DF(L_3, __this, (intptr_t)((void*)EventSystemHandler_OnSceneUnloaded_m903A043E7EBE3A1512016A052634A307DD6EA9CE_RuntimeMethod_var), NULL);
		SceneManager_add_sceneUnloaded_mC3BAE77FFFA0DBA3F6EE3303CA78400A3932F029(L_3, NULL);
		// ActivateEventSystemIfNeeded();
		EventSystemHandler_ActivateEventSystemIfNeeded_mCEC2BD012763853C07243106E32DC20DCF7CF581(__this, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.EventSystemHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_OnDisable_m782B90D9E46B8770AF79A0E30E48F44E5B61ACEE (EventSystemHandler_t484EF318A7E4379500713AD9EEE6619F9B585DD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemHandler_OnSceneLoaded_mEAE56912B7FAF15CDADD5C249D3195D674026D71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemHandler_OnSceneUnloaded_m903A043E7EBE3A1512016A052634A307DD6EA9CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded -= OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)EventSystemHandler_OnSceneLoaded_mEAE56912B7FAF15CDADD5C249D3195D674026D71_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_remove_sceneLoaded_m72A7C2A1B8EF1C21A208A9A015375577768B3978(L_0, NULL);
		// SceneManager.sceneUnloaded -= OnSceneUnloaded;
		UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* L_1 = (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C*)il2cpp_codegen_object_new(UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_m3D196ADE59DE13B9FDC5D827B1A6D00CBEF1F6DF(L_1, __this, (intptr_t)((void*)EventSystemHandler_OnSceneUnloaded_m903A043E7EBE3A1512016A052634A307DD6EA9CE_RuntimeMethod_var), NULL);
		SceneManager_remove_sceneUnloaded_m2CACDB3F47DED2C92E6AA1912906F7E2C61424EB(L_1, NULL);
		// DeactivateEventSystem();
		EventSystemHandler_DeactivateEventSystem_mBF43D9AEA6B35225E4D9D5398547F133DBB54834(__this, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.EventSystemHandler::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_OnSceneLoaded_mEAE56912B7FAF15CDADD5C249D3195D674026D71 (EventSystemHandler_t484EF318A7E4379500713AD9EEE6619F9B585DD8* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		// ActivateEventSystemIfNeeded();
		EventSystemHandler_ActivateEventSystemIfNeeded_mCEC2BD012763853C07243106E32DC20DCF7CF581(__this, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.EventSystemHandler::OnSceneUnloaded(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_OnSceneUnloaded_m903A043E7EBE3A1512016A052634A307DD6EA9CE (EventSystemHandler_t484EF318A7E4379500713AD9EEE6619F9B585DD8* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___current0, const RuntimeMethod* method) 
{
	{
		// DeactivateEventSystem();
		EventSystemHandler_DeactivateEventSystem_mBF43D9AEA6B35225E4D9D5398547F133DBB54834(__this, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.EventSystemHandler::ActivateEventSystemIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_ActivateEventSystemIfNeeded_mCEC2BD012763853C07243106E32DC20DCF7CF581 (EventSystemHandler_t484EF318A7E4379500713AD9EEE6619F9B585DD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( embeddedEventSystem && !EventSystem.current )
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___embeddedEventSystem_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2;
		L_2 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// embeddedEventSystem.SetActive( true );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___embeddedEventSystem_4;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.EventSystemHandler::DeactivateEventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_DeactivateEventSystem_mBF43D9AEA6B35225E4D9D5398547F133DBB54834 (EventSystemHandler_t484EF318A7E4379500713AD9EEE6619F9B585DD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( embeddedEventSystem )
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___embeddedEventSystem_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// embeddedEventSystem.SetActive( false );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___embeddedEventSystem_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.EventSystemHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler__ctor_mD866C69D6862E6EA4A7C81AFF81ECDD9679F982D (EventSystemHandler_t484EF318A7E4379500713AD9EEE6619F9B585DD8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Texture ImageCropperNamespace.FadeOverlayGraphic::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* FadeOverlayGraphic_get_mainTexture_mAE09407F17B211DB1758BA05987D96443662B8D5 (FadeOverlayGraphic_t0F67593423CB01E5FF6329FAABA7BC9A852EB776* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Texture mainTexture { get { return renderSprite != null ? renderSprite.texture : s_WhiteTexture; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___renderSprite_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ((Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields*)il2cpp_codegen_static_fields_for(Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var))->___s_WhiteTexture_5;
		return L_2;
	}

IL_0014:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___renderSprite_27;
		NullCheck(L_3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4;
		L_4 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_3, NULL);
		return L_4;
	}
}
// System.Void ImageCropperNamespace.FadeOverlayGraphic::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeOverlayGraphic_Awake_m088EA833C3B26BDEA7F2D3A105B7AE38D9EAE097 (FadeOverlayGraphic_t0F67593423CB01E5FF6329FAABA7BC9A852EB776* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// base.Awake();
		UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2(__this, NULL);
		// if( renderSprite != null )
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___renderSprite_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// Vector4 packedUv = UnityEngine.Sprites.DataUtility.GetOuterUV( renderSprite );
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___renderSprite_27;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = DataUtility_GetOuterUV_m408EFF91CB39DE165F8D00D42603DF1C49C57CF2(L_2, NULL);
		V_0 = L_3;
		// uv = new Vector2( packedUv.x + packedUv.z, packedUv.y + packedUv.w ) * 0.5f; // uv center point
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = V_0;
		float L_5 = L_4.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = V_0;
		float L_7 = L_6.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = V_0;
		float L_9 = L_8.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = V_0;
		float L_11 = L_10.___w_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_12, (0.5f), NULL);
		__this->___uv_28 = L_13;
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.FadeOverlayGraphic::OnPopulateMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeOverlayGraphic_OnPopulateMesh_m8054E68D23A438C64861E24D646FD4F4C516ADC3 (FadeOverlayGraphic_t0F67593423CB01E5FF6329FAABA7BC9A852EB776* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// Rect r = GetPixelAdjustedRect();
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = Graphic_GetPixelAdjustedRect_m70D7B527D04C0B88C23E7C6661A8FF1ECC4B4BA1(__this, NULL);
		V_0 = L_0;
		// float xMin = r.x, xMax = r.x + r.width;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		V_1 = L_1;
		// float xMin = r.x, xMax = r.x + r.width;
		float L_2;
		L_2 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		V_2 = ((float)il2cpp_codegen_add(L_2, L_3));
		// float yMin = r.y, yMax = r.y + r.height;
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		V_3 = L_4;
		// float yMin = r.y, yMax = r.y + r.height;
		float L_5;
		L_5 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		V_4 = ((float)il2cpp_codegen_add(L_5, L_6));
		// color32 = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, __this);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8;
		L_8 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_7, NULL);
		__this->___color32_29 = L_8;
		// vh.Clear();
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_9 = ___vh0;
		NullCheck(L_9);
		VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5(L_9, NULL);
		// GenerateMesh( vh, -OFFSET, yMax, OFFSET, OFFSET, 0 );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_10 = ___vh0;
		float L_11 = V_4;
		FadeOverlayGraphic_GenerateMesh_mB86477CD653EB337DAD4B9EABC6CD438DE0D68AD(__this, L_10, (-20000.0f), L_11, (20000.0f), (20000.0f), 0, NULL);
		// GenerateMesh( vh, -OFFSET, -OFFSET, OFFSET, yMin, 4 );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_12 = ___vh0;
		float L_13 = V_3;
		FadeOverlayGraphic_GenerateMesh_mB86477CD653EB337DAD4B9EABC6CD438DE0D68AD(__this, L_12, (-20000.0f), (-20000.0f), (20000.0f), L_13, 4, NULL);
		// GenerateMesh( vh, -OFFSET, yMin, xMin, yMax, 8 );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_14 = ___vh0;
		float L_15 = V_3;
		float L_16 = V_1;
		float L_17 = V_4;
		FadeOverlayGraphic_GenerateMesh_mB86477CD653EB337DAD4B9EABC6CD438DE0D68AD(__this, L_14, (-20000.0f), L_15, L_16, L_17, 8, NULL);
		// GenerateMesh( vh, xMax, yMin, OFFSET, yMax, 12 );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_18 = ___vh0;
		float L_19 = V_2;
		float L_20 = V_3;
		float L_21 = V_4;
		FadeOverlayGraphic_GenerateMesh_mB86477CD653EB337DAD4B9EABC6CD438DE0D68AD(__this, L_18, L_19, L_20, (20000.0f), L_21, ((int32_t)12), NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.FadeOverlayGraphic::GenerateMesh(UnityEngine.UI.VertexHelper,System.Single,System.Single,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeOverlayGraphic_GenerateMesh_mB86477CD653EB337DAD4B9EABC6CD438DE0D68AD (FadeOverlayGraphic_t0F67593423CB01E5FF6329FAABA7BC9A852EB776* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, float ___xMin1, float ___yMin2, float ___xMax3, float ___yMax4, int32_t ___triangleIndex5, const RuntimeMethod* method) 
{
	{
		// vh.AddVert( new Vector3( xMin, yMin ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___vh0;
		float L_1 = ___xMin1;
		float L_2 = ___yMin2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = __this->___color32_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___uv_28;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_5, NULL);
		NullCheck(L_0);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_0, L_3, L_4, L_6, NULL);
		// vh.AddVert( new Vector3( xMin, yMax ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_7 = ___vh0;
		float L_8 = ___xMin1;
		float L_9 = ___yMax4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11 = __this->___color32_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = __this->___uv_28;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_12, NULL);
		NullCheck(L_7);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_7, L_10, L_11, L_13, NULL);
		// vh.AddVert( new Vector3( xMax, yMax ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_14 = ___vh0;
		float L_15 = ___xMax3;
		float L_16 = ___yMax4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_17), L_15, L_16, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_18 = __this->___color32_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = __this->___uv_28;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20;
		L_20 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_19, NULL);
		NullCheck(L_14);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_14, L_17, L_18, L_20, NULL);
		// vh.AddVert( new Vector3( xMax, yMin ), color32, uv );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_21 = ___vh0;
		float L_22 = ___xMax3;
		float L_23 = ___yMin2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_24), L_22, L_23, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_25 = __this->___color32_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = __this->___uv_28;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27;
		L_27 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_26, NULL);
		NullCheck(L_21);
		VertexHelper_AddVert_m2187D76DC2CE7E9AF69280424660739858901287(L_21, L_24, L_25, L_27, NULL);
		// vh.AddTriangle( triangleIndex, triangleIndex + 1, triangleIndex + 2 );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_28 = ___vh0;
		int32_t L_29 = ___triangleIndex5;
		int32_t L_30 = ___triangleIndex5;
		int32_t L_31 = ___triangleIndex5;
		NullCheck(L_28);
		VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4(L_28, L_29, ((int32_t)il2cpp_codegen_add(L_30, 1)), ((int32_t)il2cpp_codegen_add(L_31, 2)), NULL);
		// vh.AddTriangle( triangleIndex + 2, triangleIndex + 3, triangleIndex );
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_32 = ___vh0;
		int32_t L_33 = ___triangleIndex5;
		int32_t L_34 = ___triangleIndex5;
		int32_t L_35 = ___triangleIndex5;
		NullCheck(L_32);
		VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4(L_32, ((int32_t)il2cpp_codegen_add(L_33, 2)), ((int32_t)il2cpp_codegen_add(L_34, 3)), L_35, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.FadeOverlayGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeOverlayGraphic__ctor_m15CF93D6289D9A9531FECC5D0FE955442372D1F3 (FadeOverlayGraphic_t0F67593423CB01E5FF6329FAABA7BC9A852EB776* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector2 uv = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___uv_28 = L_0;
		il2cpp_codegen_runtime_class_init_inline(Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		Graphic__ctor_m61FAEBEC21F22FE00B8CF39A8498AD31F62C0D6D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageCropperNamespace.FontSizeSynchronizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FontSizeSynchronizer_Awake_m6254319F756EE5B0E9578DE158EAE5A8AE249E3D (FontSizeSynchronizer_t4948362E402A8E289EADFE345ED6B6C4F35046ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if( texts.Length == 0 )
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_0 = __this->___texts_4;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// canvas = texts[0].canvas;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_1 = __this->___texts_4;
		NullCheck(L_1);
		int32_t L_2 = 0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4;
		L_4 = Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419(L_3, NULL);
		__this->___canvas_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_6), (void*)L_4);
		// initialBestFitSizes = new int[texts.Length];
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_5 = __this->___texts_4;
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		__this->___initialBestFitSizes_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialBestFitSizes_5), (void*)L_6);
		// for( int i = 0; i < texts.Length; i++ )
		V_0 = 0;
		goto IL_004d;
	}

IL_0034:
	{
		// initialBestFitSizes[i] = texts[i].resizeTextMaxSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___initialBestFitSizes_5;
		int32_t L_8 = V_0;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_9 = __this->___texts_4;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Text_get_resizeTextMaxSize_m7B61DCEEA4D801C4B8149674B27DBE99098A38E3(L_12, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_13);
		// for( int i = 0; i < texts.Length; i++ )
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004d:
	{
		// for( int i = 0; i < texts.Length; i++ )
		int32_t L_15 = V_0;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_16 = __this->___texts_4;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0034;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.FontSizeSynchronizer::Synchronize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FontSizeSynchronizer_Synchronize_m17B19EF73FBA278E588718323C6940A102454C1C (FontSizeSynchronizer_t4948362E402A8E289EADFE345ED6B6C4F35046ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_3 = NULL;
	int32_t V_4 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		// if( canvas == null || !gameObject.activeInHierarchy )
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_2, NULL);
		if (L_3)
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		// return;
		return;
	}

IL_001c:
	{
		// int minSize = int.MaxValue;
		V_0 = ((int32_t)2147483647LL);
		// for( int i = 0; i < texts.Length; i++ )
		V_2 = 0;
		goto IL_0089;
	}

IL_0026:
	{
		// Text text = texts[i];
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_4 = __this->___texts_4;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// text.resizeTextMaxSize = initialBestFitSizes[i];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___initialBestFitSizes_5;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		Text_set_resizeTextMaxSize_m25EB2C9302AA9354237A2F56BB3E019192C6015B(L_8, L_12, NULL);
		// text.resizeTextForBestFit = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = V_3;
		NullCheck(L_13);
		Text_set_resizeTextForBestFit_m1376BB9FDBAC5571E0F24564E22391AC8EB89A35(L_13, (bool)1, NULL);
		// text.cachedTextGenerator.Populate( text.text, text.GetGenerationSettings( text.rectTransform.rect.size ) );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = V_3;
		NullCheck(L_14);
		TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* L_15;
		L_15 = Text_get_cachedTextGenerator_mFC242539F7380F54696D431B126B69DC4EFC821E(L_14, NULL);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = V_3;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_16);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = V_3;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = V_3;
		NullCheck(L_19);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20;
		L_20 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_19, NULL);
		NullCheck(L_20);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_21;
		L_21 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_20, NULL);
		V_5 = L_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_5), NULL);
		NullCheck(L_18);
		TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3 L_23;
		L_23 = Text_GetGenerationSettings_m620E0E5AFB30E3331A0371EB2361F587BB0A1E0F(L_18, L_22, NULL);
		NullCheck(L_15);
		bool L_24;
		L_24 = TextGenerator_Populate_m5620AF6DBC180FC3FBE3E5F5930CF7CB65DD3CE2(L_15, L_17, L_23, NULL);
		// int fontSize = text.cachedTextGenerator.fontSizeUsedForBestFit;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = V_3;
		NullCheck(L_25);
		TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* L_26;
		L_26 = Text_get_cachedTextGenerator_mFC242539F7380F54696D431B126B69DC4EFC821E(L_25, NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = TextGenerator_get_fontSizeUsedForBestFit_mBCA834ACDE42232D91E30FB189D99D7CE9EAE084(L_26, NULL);
		V_4 = L_27;
		// if( fontSize < minSize )
		int32_t L_28 = V_4;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		// minSize = fontSize;
		int32_t L_30 = V_4;
		V_0 = L_30;
	}

IL_0085:
	{
		// for( int i = 0; i < texts.Length; i++ )
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0089:
	{
		// for( int i = 0; i < texts.Length; i++ )
		int32_t L_32 = V_2;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_33 = __this->___texts_4;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		// int fontSizeScaled = (int) ( minSize / canvas.scaleFactor );
		int32_t L_34 = V_0;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_35 = __this->___canvas_6;
		NullCheck(L_35);
		float L_36;
		L_36 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_35, NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)L_34)/L_36)));
		// for( int i = 0; i < texts.Length; i++ )
		V_6 = 0;
		goto IL_00cd;
	}

IL_00a9:
	{
		// texts[i].fontSize = fontSizeScaled;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_37 = __this->___texts_4;
		int32_t L_38 = V_6;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		int32_t L_41 = V_1;
		NullCheck(L_40);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_40, L_41, NULL);
		// texts[i].resizeTextForBestFit = false;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_42 = __this->___texts_4;
		int32_t L_43 = V_6;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		Text_set_resizeTextForBestFit_m1376BB9FDBAC5571E0F24564E22391AC8EB89A35(L_45, (bool)0, NULL);
		// for( int i = 0; i < texts.Length; i++ )
		int32_t L_46 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00cd:
	{
		// for( int i = 0; i < texts.Length; i++ )
		int32_t L_47 = V_6;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_48 = __this->___texts_4;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_00a9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.FontSizeSynchronizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FontSizeSynchronizer__ctor_mEE07C5C44E49B12679FFE3A61BA7E444753F8FB2 (FontSizeSynchronizer_t4948362E402A8E289EADFE345ED6B6C4F35046ED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 ImageCropperNamespace.ImageCropperUtils::RoundToInt(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropperUtils_RoundToInt_m19D6FA6CBFBF006299F8B4AF5BA05D8661EF4B1F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, const RuntimeMethod* method) 
{
	{
		// vector.x = (int) ( vector.x + 0.5f );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___vector0;
		float L_1 = L_0.___x_0;
		(&___vector0)->___x_0 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_add(L_1, (0.5f)))));
		// vector.y = (int) ( vector.y + 0.5f );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___vector0;
		float L_3 = L_2.___y_1;
		(&___vector0)->___y_1 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_add(L_3, (0.5f)))));
		// return vector;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___vector0;
		return L_4;
	}
}
// UnityEngine.Vector2 ImageCropperNamespace.ImageCropperUtils::CeilToInt(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropperUtils_CeilToInt_m232ABCB677D6AD78501B51C830D69E8FF6CEBE60 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, const RuntimeMethod* method) 
{
	{
		// vector.x = (int) ( vector.x + 0.999f );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___vector0;
		float L_1 = L_0.___x_0;
		(&___vector0)->___x_0 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_add(L_1, (0.999000013f)))));
		// vector.y = (int) ( vector.y + 0.999f );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___vector0;
		float L_3 = L_2.___y_1;
		(&___vector0)->___y_1 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_add(L_3, (0.999000013f)))));
		// return vector;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___vector0;
		return L_4;
	}
}
// UnityEngine.Vector2 ImageCropperNamespace.ImageCropperUtils::FloorToInt(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropperUtils_FloorToInt_mE34706BBE2CE287460EE3A3E4D6102CEC11FC66B (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, const RuntimeMethod* method) 
{
	{
		// vector.x = (int) vector.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___vector0;
		float L_1 = L_0.___x_0;
		(&___vector0)->___x_0 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(L_1));
		// vector.y = (int) vector.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___vector0;
		float L_3 = L_2.___y_1;
		(&___vector0)->___y_1 = ((float)il2cpp_codegen_cast_double_to_int<int32_t>(L_3));
		// return vector;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___vector0;
		return L_4;
	}
}
// UnityEngine.Vector2 ImageCropperNamespace.ImageCropperUtils::ClampBetween(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropperUtils_ClampBetween_m2C62C6E17BA7EDABF01DE29DC8252975D332380C (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max2, const RuntimeMethod* method) 
{
	{
		// if( min.x < max.x )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___min1;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___max2;
		float L_3 = L_2.___x_0;
		if ((!(((float)L_1) < ((float)L_3))))
		{
			goto IL_0048;
		}
	}
	{
		// if( vector.x < min.x )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___vector0;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___min1;
		float L_7 = L_6.___x_0;
		if ((!(((float)L_5) < ((float)L_7))))
		{
			goto IL_002b;
		}
	}
	{
		// vector.x = min.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___min1;
		float L_9 = L_8.___x_0;
		(&___vector0)->___x_0 = L_9;
		goto IL_0080;
	}

IL_002b:
	{
		// else if( vector.x > max.x )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___vector0;
		float L_11 = L_10.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___max2;
		float L_13 = L_12.___x_0;
		if ((!(((float)L_11) > ((float)L_13))))
		{
			goto IL_0080;
		}
	}
	{
		// vector.x = max.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___max2;
		float L_15 = L_14.___x_0;
		(&___vector0)->___x_0 = L_15;
		goto IL_0080;
	}

IL_0048:
	{
		// if( vector.x < max.x )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___vector0;
		float L_17 = L_16.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___max2;
		float L_19 = L_18.___x_0;
		if ((!(((float)L_17) < ((float)L_19))))
		{
			goto IL_0065;
		}
	}
	{
		// vector.x = max.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = ___max2;
		float L_21 = L_20.___x_0;
		(&___vector0)->___x_0 = L_21;
		goto IL_0080;
	}

IL_0065:
	{
		// else if( vector.x > min.x )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = ___vector0;
		float L_23 = L_22.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = ___min1;
		float L_25 = L_24.___x_0;
		if ((!(((float)L_23) > ((float)L_25))))
		{
			goto IL_0080;
		}
	}
	{
		// vector.x = min.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___min1;
		float L_27 = L_26.___x_0;
		(&___vector0)->___x_0 = L_27;
	}

IL_0080:
	{
		// if( min.y < max.y )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = ___min1;
		float L_29 = L_28.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___max2;
		float L_31 = L_30.___y_1;
		if ((!(((float)L_29) < ((float)L_31))))
		{
			goto IL_00c8;
		}
	}
	{
		// if( vector.y < min.y )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = ___vector0;
		float L_33 = L_32.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = ___min1;
		float L_35 = L_34.___y_1;
		if ((!(((float)L_33) < ((float)L_35))))
		{
			goto IL_00ab;
		}
	}
	{
		// vector.y = min.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = ___min1;
		float L_37 = L_36.___y_1;
		(&___vector0)->___y_1 = L_37;
		goto IL_0100;
	}

IL_00ab:
	{
		// else if( vector.y > max.y )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = ___vector0;
		float L_39 = L_38.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = ___max2;
		float L_41 = L_40.___y_1;
		if ((!(((float)L_39) > ((float)L_41))))
		{
			goto IL_0100;
		}
	}
	{
		// vector.y = max.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = ___max2;
		float L_43 = L_42.___y_1;
		(&___vector0)->___y_1 = L_43;
		goto IL_0100;
	}

IL_00c8:
	{
		// if( vector.y < max.y )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = ___vector0;
		float L_45 = L_44.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = ___max2;
		float L_47 = L_46.___y_1;
		if ((!(((float)L_45) < ((float)L_47))))
		{
			goto IL_00e5;
		}
	}
	{
		// vector.y = max.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = ___max2;
		float L_49 = L_48.___y_1;
		(&___vector0)->___y_1 = L_49;
		goto IL_0100;
	}

IL_00e5:
	{
		// else if( vector.y > min.y )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = ___vector0;
		float L_51 = L_50.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = ___min1;
		float L_53 = L_52.___y_1;
		if ((!(((float)L_51) > ((float)L_53))))
		{
			goto IL_0100;
		}
	}
	{
		// vector.y = min.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = ___min1;
		float L_55 = L_54.___y_1;
		(&___vector0)->___y_1 = L_55;
	}

IL_0100:
	{
		// return vector;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = ___vector0;
		return L_56;
	}
}
// UnityEngine.Vector2 ImageCropperNamespace.ImageCropperUtils::LerpTo(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropperUtils_LerpTo_m5A583C50074B45EE14AD162244C38F6093A8D8E3 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, float ___t2, const RuntimeMethod* method) 
{
	{
		// return new Vector2( from.x + ( to.x - from.x ) * t, from.y + ( to.y - from.y ) * t );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___from0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___to1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___from0;
		float L_5 = L_4.___x_0;
		float L_6 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___from0;
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___to1;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___from0;
		float L_12 = L_11.___y_1;
		float L_13 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_3, L_5)), L_6)))), ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_12)), L_13)))), /*hidden argument*/NULL);
		return L_14;
	}
}
// UnityEngine.Vector2 ImageCropperNamespace.ImageCropperUtils::ScaleWith(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropperUtils_ScaleWith_mBE8BCAA5749C2DFC7844283E20579C5AC7402387 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale1, const RuntimeMethod* method) 
{
	{
		// return new Vector2( vector.x * scale.x, vector.y * scale.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___vector0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___scale1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___vector0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___scale1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// ImageCropper/Orientation ImageCropperNamespace.ImageCropperUtils::GetExifFixOrientation(ImageCropper/Orientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageCropperUtils_GetExifFixOrientation_m9499BD28F13BE6AD1492D686DDBC41A5EDF256E7 (int32_t ___exifOrientation0, const RuntimeMethod* method) 
{
	{
		// if( exifOrientation == Orientation.Normal )
		int32_t L_0 = ___exifOrientation0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return Orientation.Normal;
		return (int32_t)(0);
	}

IL_0005:
	{
		// else if( exifOrientation == Orientation.Rotate90 )
		int32_t L_1 = ___exifOrientation0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_000b;
		}
	}
	{
		// return Orientation.Rotate270;
		return (int32_t)(3);
	}

IL_000b:
	{
		// else if( exifOrientation == Orientation.Rotate180 )
		int32_t L_2 = ___exifOrientation0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0011;
		}
	}
	{
		// return Orientation.Rotate180;
		return (int32_t)(2);
	}

IL_0011:
	{
		// else if( exifOrientation == Orientation.Rotate270 )
		int32_t L_3 = ___exifOrientation0;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0017;
		}
	}
	{
		// return Orientation.Rotate90;
		return (int32_t)(1);
	}

IL_0017:
	{
		// else if( exifOrientation == Orientation.FlipHorizontal )
		int32_t L_4 = ___exifOrientation0;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_001d;
		}
	}
	{
		// return Orientation.FlipHorizontal;
		return (int32_t)(4);
	}

IL_001d:
	{
		// else if( exifOrientation == Orientation.Transpose )
		int32_t L_5 = ___exifOrientation0;
		if ((!(((uint32_t)L_5) == ((uint32_t)5))))
		{
			goto IL_0023;
		}
	}
	{
		// return Orientation.Transverse;
		return (int32_t)(7);
	}

IL_0023:
	{
		// else if( exifOrientation == Orientation.FlipVertical )
		int32_t L_6 = ___exifOrientation0;
		if ((!(((uint32_t)L_6) == ((uint32_t)6))))
		{
			goto IL_0029;
		}
	}
	{
		// return Orientation.FlipVertical;
		return (int32_t)(6);
	}

IL_0029:
	{
		// return Orientation.Transpose;
		return (int32_t)(5);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageCropperNamespace.NotchCompensator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotchCompensator_Awake_m22F244A529EA6098FF3B77AEDC7B6855FC222360 (NotchCompensator_t48269ABF6C719407B0C81DB6E2E15E2F72166FB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvasTR = (RectTransform) transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___canvasTR_8 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasTR_8), (void*)((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.NotchCompensator::OnRectTransformDimensionsChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotchCompensator_OnRectTransformDimensionsChange_m15413FA4E96DFE80AFEAD8042ED71CBD6921D2DE (NotchCompensator_t48269ABF6C719407B0C81DB6E2E15E2F72166FB0* __this, const RuntimeMethod* method) 
{
	{
		// screenDimensionsChanged = true;
		__this->___screenDimensionsChanged_9 = (bool)1;
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.NotchCompensator::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotchCompensator_LateUpdate_mC9D8C971D1DB41F76169C80F07D7A1C717E7C092 (NotchCompensator_t48269ABF6C719407B0C81DB6E2E15E2F72166FB0* __this, const RuntimeMethod* method) 
{
	{
		// if( screenDimensionsChanged )
		bool L_0 = __this->___screenDimensionsChanged_9;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// CheckScreenCutout();
		NotchCompensator_CheckScreenCutout_m2E2E49CBA751DF86B8B6C80F48E447AC246A4D24(__this, NULL);
		// screenDimensionsChanged = false;
		__this->___screenDimensionsChanged_9 = (bool)0;
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.NotchCompensator::CheckScreenCutout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotchCompensator_CheckScreenCutout_m2E2E49CBA751DF86B8B6C80F48E447AC246A4D24 (NotchCompensator_t48269ABF6C719407B0C81DB6E2E15E2F72166FB0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// if( !avoidScreenCutout )
		bool L_0 = __this->___avoidScreenCutout_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// int screenHeight = Screen.height;
		int32_t L_1;
		L_1 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_0 = L_1;
		// float safeYMax = Screen.safeArea.yMax;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = Screen_get_safeArea_m2ADAD6C36CC5DB40CC2DAD300DD1DF7CA4DF2525(NULL);
		V_2 = L_2;
		float L_3;
		L_3 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_2), NULL);
		V_1 = L_3;
		// if( safeYMax < screenHeight - 1 ) // 1: a small threshold
		float L_4 = V_1;
		int32_t L_5 = V_0;
		if ((!(((float)L_4) < ((float)((float)((int32_t)il2cpp_codegen_subtract(L_5, 1)))))))
		{
			goto IL_00b0;
		}
	}
	{
		// float cutoutPercentage = ( screenHeight - safeYMax ) / Screen.height;
		int32_t L_6 = V_0;
		float L_7 = V_1;
		int32_t L_8;
		L_8 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		// float cutoutLocalSize = cutoutPercentage * canvasTR.rect.height;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___canvasTR_8;
		NullCheck(L_9);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_9, NULL);
		V_2 = L_10;
		float L_11;
		L_11 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_2), NULL);
		V_3 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract(((float)L_6), L_7))/((float)L_8))), L_11));
		// buttons.anchoredPosition = new Vector2( 0f, -cutoutLocalSize );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___buttons_5;
		float L_13 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (0.0f), ((-L_13)), /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_12, L_14, NULL);
		// viewport.sizeDelta = new Vector2( 0f, -cutoutLocalSize );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___viewport_6;
		float L_16 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), (0.0f), ((-L_16)), /*hidden argument*/NULL);
		NullCheck(L_15);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_15, L_17, NULL);
		// notchBackground.rectTransform.sizeDelta = new Vector2( 0f, cutoutLocalSize + 5f ); // 5f: to prevent a thin black line from appearing when canvas is scaled with screen size
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___notchBackground_7;
		NullCheck(L_18);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19;
		L_19 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_18, NULL);
		float L_20 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), (0.0f), ((float)il2cpp_codegen_add(L_20, (5.0f))), /*hidden argument*/NULL);
		NullCheck(L_19);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_19, L_21, NULL);
		// if( !notchBackground.enabled )
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___notchBackground_7;
		NullCheck(L_22);
		bool L_23;
		L_23 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_22, NULL);
		if (L_23)
		{
			goto IL_00e9;
		}
	}
	{
		// notchBackground.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___notchBackground_7;
		NullCheck(L_24);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_24, (bool)1, NULL);
		return;
	}

IL_00b0:
	{
		// buttons.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25 = __this->___buttons_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_25);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_25, L_26, NULL);
		// viewport.sizeDelta = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = __this->___viewport_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_27);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_27, L_28, NULL);
		// if( notchBackground.enabled )
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___notchBackground_7;
		NullCheck(L_29);
		bool L_30;
		L_30 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_29, NULL);
		if (!L_30)
		{
			goto IL_00e9;
		}
	}
	{
		// notchBackground.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31 = __this->___notchBackground_7;
		NullCheck(L_31);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_31, (bool)0, NULL);
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.NotchCompensator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotchCompensator__ctor_m51F319CFBBC43C952991814B596AE3BAF9B77AB7 (NotchCompensator_t48269ABF6C719407B0C81DB6E2E15E2F72166FB0* __this, const RuntimeMethod* method) 
{
	{
		// private bool avoidScreenCutout = true;
		__this->___avoidScreenCutout_4 = (bool)1;
		// private bool screenDimensionsChanged = true;
		__this->___screenDimensionsChanged_9 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageCropperNamespace.SelectionCornersFitter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionCornersFitter_OnEnable_m5317B096F086E28AE85A1FA7F7B0188416E9C026 (SelectionCornersFitter_t86C4A7CBE818DFCA669FD9AD9960FE2B617E6FDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inset = ( (RectTransform) transform ).sizeDelta * 0.5f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_1, (0.5f), NULL);
		__this->___inset_11 = L_2;
		// OnRectTransformDimensionsChange();
		SelectionCornersFitter_OnRectTransformDimensionsChange_mD6A621D7E346250D7F65F508C48A7273421CA76A(__this, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionCornersFitter::OnRectTransformDimensionsChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionCornersFitter_OnRectTransformDimensionsChange_mD6A621D7E346250D7F65F508C48A7273421CA76A (SelectionCornersFitter_t86C4A7CBE818DFCA669FD9AD9960FE2B617E6FDB* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if( !gameObject.activeInHierarchy )
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// Vector2 maxCornerSize = selection.rect.size * cornerSizeMaxRatio + inset;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___selection_4;
		NullCheck(L_2);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_2, NULL);
		V_3 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_3), NULL);
		float L_5 = __this->___cornerSizeMaxRatio_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_4, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___inset_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_6, L_7, NULL);
		V_1 = L_8;
		// if( preferredCornerSize <= maxCornerSize.x && preferredCornerSize <= maxCornerSize.y )
		float L_9 = __this->___preferredCornerSize_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_1;
		float L_11 = L_10.___x_0;
		if ((!(((float)L_9) <= ((float)L_11))))
		{
			goto IL_0069;
		}
	}
	{
		float L_12 = __this->___preferredCornerSize_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		float L_14 = L_13.___y_1;
		if ((!(((float)L_12) <= ((float)L_14))))
		{
			goto IL_0069;
		}
	}
	{
		// cornerSize = new Vector2( preferredCornerSize, preferredCornerSize );
		float L_15 = __this->___preferredCornerSize_9;
		float L_16 = __this->___preferredCornerSize_9;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_15, L_16, NULL);
		goto IL_0085;
	}

IL_0069:
	{
		// cornerSize = Vector2.one * Mathf.Min( maxCornerSize.x, maxCornerSize.y );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_1;
		float L_19 = L_18.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_1;
		float L_21 = L_20.___y_1;
		float L_22;
		L_22 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_19, L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_17, L_22, NULL);
		V_0 = L_23;
	}

IL_0085:
	{
		// float halfCornerSize = cornerSize.x * 0.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		float L_25 = L_24.___x_0;
		V_2 = ((float)il2cpp_codegen_multiply(L_25, (0.5f)));
		// bottomLeft.anchoredPosition = new Vector2( halfCornerSize, halfCornerSize );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = __this->___bottomLeft_5;
		float L_27 = V_2;
		float L_28 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_29), L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_26, L_29, NULL);
		// bottomLeft.sizeDelta = cornerSize;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30 = __this->___bottomLeft_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_0;
		NullCheck(L_30);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_30, L_31, NULL);
		// bottomRight.anchoredPosition = new Vector2( -halfCornerSize, halfCornerSize );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32 = __this->___bottomRight_6;
		float L_33 = V_2;
		float L_34 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_35), ((-L_33)), L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_32, L_35, NULL);
		// bottomRight.sizeDelta = cornerSize;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_36 = __this->___bottomRight_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_0;
		NullCheck(L_36);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_36, L_37, NULL);
		// topLeft.anchoredPosition = new Vector2( halfCornerSize, -halfCornerSize );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38 = __this->___topLeft_7;
		float L_39 = V_2;
		float L_40 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_41), L_39, ((-L_40)), /*hidden argument*/NULL);
		NullCheck(L_38);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_38, L_41, NULL);
		// topLeft.sizeDelta = cornerSize;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_42 = __this->___topLeft_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = V_0;
		NullCheck(L_42);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_42, L_43, NULL);
		// topRight.anchoredPosition = new Vector2( -halfCornerSize, -halfCornerSize );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_44 = __this->___topRight_8;
		float L_45 = V_2;
		float L_46 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_47), ((-L_45)), ((-L_46)), /*hidden argument*/NULL);
		NullCheck(L_44);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_44, L_47, NULL);
		// topRight.sizeDelta = cornerSize;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_48 = __this->___topRight_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_0;
		NullCheck(L_48);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_48, L_49, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionCornersFitter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionCornersFitter__ctor_m5443ABD6F27ADD4DAA84C91727562A875F1B9B42 (SelectionCornersFitter_t86C4A7CBE818DFCA669FD9AD9960FE2B617E6FDB* __this, const RuntimeMethod* method) 
{
	{
		// private float preferredCornerSize = 30f;
		__this->___preferredCornerSize_9 = (30.0f);
		// private float cornerSizeMaxRatio = 0.3f;
		__this->___cornerSizeMaxRatio_10 = (0.300000012f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageCropperNamespace.SelectionGraphicsSynchronizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionGraphicsSynchronizer_Awake_m111BF484EB14A04B99932BC6705491019BF624C8 (SelectionGraphicsSynchronizer_tBDA964ED2DF0C6309303CBD46C64EDC0C14127C5* __this, const RuntimeMethod* method) 
{
	{
		// viewport = manager.Viewport;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_0 = __this->___manager_4;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = ImageCropper_get_Viewport_mA3410F26F2F2AFF7C2BEF68B3B70C06B9CC1FED3_inline(L_0, NULL);
		__this->___viewport_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___viewport_7), (void*)L_1);
		// selectionGraphics = manager.SelectionGraphics;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_2 = __this->___manager_4;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = ImageCropper_get_SelectionGraphics_m64A007CB7FF756C6F2592A1644E0A8717B67B871_inline(L_2, NULL);
		__this->___selectionGraphics_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectionGraphics_8), (void*)L_3);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionGraphicsSynchronizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionGraphicsSynchronizer_Start_mF23B340A289881B49BCFA44EB7218BE5510C31FF (SelectionGraphicsSynchronizer_tBDA964ED2DF0C6309303CBD46C64EDC0C14127C5* __this, const RuntimeMethod* method) 
{
	{
		// bottomLeftPrevPosition = selectionBottomLeft.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___selectionBottomLeft_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		__this->___bottomLeftPrevPosition_9 = L_2;
		// topRightPrevPosition = selectionTopRight.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___selectionTopRight_6;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_4, NULL);
		__this->___topRightPrevPosition_10 = L_5;
		// Synchronize( selectionBottomLeft.position, selectionTopRight.position );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___selectionBottomLeft_5;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_7, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___selectionTopRight_6;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_10, NULL);
		SelectionGraphicsSynchronizer_Synchronize_m5D2510D370CA2B6627C0FA8277C2C33A8197011F(__this, L_8, L_11, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionGraphicsSynchronizer::Synchronize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionGraphicsSynchronizer_Synchronize_mF678C5C810F0541DD021369CF80100374CA73325 (SelectionGraphicsSynchronizer_tBDA964ED2DF0C6309303CBD46C64EDC0C14127C5* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 bottomLeftPosition = selectionBottomLeft.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___selectionBottomLeft_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		V_0 = L_2;
		// Vector2 topRightPosition = selectionTopRight.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___selectionTopRight_6;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_4, NULL);
		V_1 = L_5;
		// if( bottomLeftPosition != bottomLeftPrevPosition || topRightPosition != topRightPrevPosition )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___bottomLeftPrevPosition_9;
		bool L_8;
		L_8 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_003e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___topRightPrevPosition_10;
		bool L_11;
		L_11 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0046;
		}
	}

IL_003e:
	{
		// Synchronize( bottomLeftPosition, topRightPosition );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		SelectionGraphicsSynchronizer_Synchronize_m5D2510D370CA2B6627C0FA8277C2C33A8197011F(__this, L_12, L_13, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionGraphicsSynchronizer::Synchronize(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionGraphicsSynchronizer_Synchronize_m5D2510D370CA2B6627C0FA8277C2C33A8197011F (SelectionGraphicsSynchronizer_tBDA964ED2DF0C6309303CBD46C64EDC0C14127C5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeft0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRight1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 position = viewport.InverseTransformPoint( bottomLeft );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___viewport_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___bottomLeft0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_1, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_0, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		V_0 = L_4;
		// Vector2 size = (Vector2) viewport.InverseTransformPoint( topRight ) - position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___viewport_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___topRight1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_5, L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_9, L_10, NULL);
		V_1 = L_11;
		// selectionGraphics.anchoredPosition = position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___selectionGraphics_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		NullCheck(L_12);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_12, L_13, NULL);
		// selectionGraphics.sizeDelta = size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___selectionGraphics_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		NullCheck(L_14);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_14, L_15, NULL);
		// bottomLeftPrevPosition = bottomLeft;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___bottomLeft0;
		__this->___bottomLeftPrevPosition_9 = L_16;
		// topRightPrevPosition = topRight;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___topRight1;
		__this->___topRightPrevPosition_10 = L_17;
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionGraphicsSynchronizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionGraphicsSynchronizer__ctor_mAD4CF28563FB473D9F58A01E18426025155D6D74 (SelectionGraphicsSynchronizer_tBDA964ED2DF0C6309303CBD46C64EDC0C14127C5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageCropperNamespace.SelectionMovementHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMovementHandler_Awake_mB85FDE387B5F18DE57CA22A82D2874A33D3607CA (SelectionMovementHandler_t8DB56965578BA93748587F2C1CEDD7A7E2ACCBB0* __this, const RuntimeMethod* method) 
{
	{
		// selection = manager.Selection;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_0 = __this->___manager_5;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = ImageCropper_get_Selection_mC538C5B65CDD6980DEAAD6DE113FCAA53AA8A828_inline(L_0, NULL);
		__this->___selection_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selection_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionMovementHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMovementHandler_OnDisable_m845F8CBDDD9764527345A09CCC75CD7B6AF29122 (SelectionMovementHandler_t8DB56965578BA93748587F2C1CEDD7A7E2ACCBB0* __this, const RuntimeMethod* method) 
{
	{
		// manager.StopModifySelectionWith( this );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_0 = __this->___manager_5;
		NullCheck(L_0);
		ImageCropper_StopModifySelectionWith_mC48D8422A1768DD62D31062865628352E0A80EAF(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionMovementHandler::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMovementHandler_OnBeginDrag_mFB9F269D126A1462900943332A9D2D222E26F1D6 (SelectionMovementHandler_t8DB56965578BA93748587F2C1CEDD7A7E2ACCBB0* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if( !manager.CanModifySelectionWith( this ) )
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_0 = __this->___manager_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = ImageCropper_CanModifySelectionWith_m849C3291BCCFE5FC82DBADB9AC491C58DE73805D(L_0, __this, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// eventData.pointerDrag = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_2);
		PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline(L_2, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// return;
		return;
	}

IL_0016:
	{
		// draggingPointer = eventData.pointerId;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline(L_3, NULL);
		__this->___draggingPointer_9 = L_4;
		// initialPosition = selection.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___selection_6;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_5, NULL);
		__this->___initialPosition_7 = L_6;
		// initialTouchPosition = manager.GetTouchPosition( eventData.pressPosition, eventData.pressEventCamera );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_7 = __this->___manager_5;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = ___eventData0;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline(L_8, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = ___eventData0;
		NullCheck(L_10);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_10, NULL);
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = ImageCropper_GetTouchPosition_mA2276D3CDB7730839FCF54A09142B895C45969F7(L_7, L_9, L_11, NULL);
		__this->___initialTouchPosition_8 = L_12;
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionMovementHandler::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMovementHandler_OnDrag_m692DA53719A160ACB88341F1F08C00CB2D000D85 (SelectionMovementHandler_t8DB56965578BA93748587F2C1CEDD7A7E2ACCBB0* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if( eventData.pointerId != draggingPointer )
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline(L_0, NULL);
		int32_t L_2 = __this->___draggingPointer_9;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		// eventData.pointerDrag = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_3);
		PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline(L_3, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// return;
		return;
	}

IL_0016:
	{
		// manager.UpdateSelection( initialPosition + manager.GetTouchPosition( eventData.position, eventData.pressEventCamera ) - initialTouchPosition );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_4 = __this->___manager_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___initialPosition_7;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_6 = __this->___manager_5;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = ___eventData0;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_7, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_9 = ___eventData0;
		NullCheck(L_9);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_9, NULL);
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = ImageCropper_GetTouchPosition_mA2276D3CDB7730839FCF54A09142B895C45969F7(L_6, L_8, L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_5, L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = __this->___initialTouchPosition_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_12, L_13, NULL);
		NullCheck(L_4);
		ImageCropper_UpdateSelection_m029DF565AC7BB2D873C7310B03622395CBC6E943(L_4, L_14, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionMovementHandler::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMovementHandler_OnEndDrag_mE48618840C6FA464DBE0613D435679B14D7EBC47 (SelectionMovementHandler_t8DB56965578BA93748587F2C1CEDD7A7E2ACCBB0* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if( eventData.pointerId == draggingPointer )
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline(L_0, NULL);
		int32_t L_2 = __this->___draggingPointer_9;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001a;
		}
	}
	{
		// manager.StopModifySelectionWith( this );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_3 = __this->___manager_5;
		NullCheck(L_3);
		ImageCropper_StopModifySelectionWith_mC48D8422A1768DD62D31062865628352E0A80EAF(L_3, __this, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionMovementHandler::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMovementHandler_OnUpdate_mD36FC8140445411AD2EEFB39188E112E9A55676E (SelectionMovementHandler_t8DB56965578BA93748587F2C1CEDD7A7E2ACCBB0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// bool shouldUpdateViewport = false;
		V_0 = (bool)0;
		// float scale = manager.ImageHolder.localScale.z;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_0 = __this->___manager_5;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = ImageCropper_get_ImageHolder_mED261B36450556B6C346A656B4538C022FC6E46C_inline(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___z_4;
		V_1 = L_3;
		// Vector2 imagePosition = manager.ImageHolder.anchoredPosition;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_4 = __this->___manager_5;
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = ImageCropper_get_ImageHolder_mED261B36450556B6C346A656B4538C022FC6E46C_inline(L_4, NULL);
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_5, NULL);
		V_2 = L_6;
		// Vector2 selectionBottomLeft = imagePosition + selection.anchoredPosition * scale;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___selection_6;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_8, NULL);
		float L_10 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_9, L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_7, L_11, NULL);
		V_3 = L_12;
		// Vector2 selectionTopRight = selectionBottomLeft + selection.sizeDelta * scale;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___selection_6;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_14, NULL);
		float L_16 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_15, L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_13, L_17, NULL);
		V_4 = L_18;
		// Vector2 selectionSize = selectionTopRight - selectionBottomLeft;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_19, L_20, NULL);
		V_5 = L_21;
		// Vector2 viewportSize = manager.ViewportSize;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_22 = __this->___manager_5;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = ImageCropper_get_ViewportSize_m7DD5EF86737B7A14C95C69FF5EB754631EF9340B_inline(L_22, NULL);
		V_6 = L_23;
		// if( selectionBottomLeft.x <= SCROLL_DISTANCE )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_3;
		float L_25 = L_24.___x_0;
		if ((!(((float)L_25) <= ((float)(5.0f)))))
		{
			goto IL_009c;
		}
	}
	{
		// imagePosition = manager.ScrollImage( imagePosition, Direction.Left );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_26 = __this->___manager_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_2;
		NullCheck(L_26);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = ImageCropper_ScrollImage_mD210D83BC94A503918341CD3902FE441777F0496(L_26, L_27, 1, NULL);
		V_2 = L_28;
		// selectionBottomLeft.x = 0f;
		(&V_3)->___x_0 = (0.0f);
		// shouldUpdateViewport = true;
		V_0 = (bool)1;
		goto IL_00d8;
	}

IL_009c:
	{
		// else if( selectionTopRight.x >= viewportSize.x - SCROLL_DISTANCE )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_4;
		float L_30 = L_29.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_6;
		float L_32 = L_31.___x_0;
		if ((!(((float)L_30) >= ((float)((float)il2cpp_codegen_subtract(L_32, (5.0f)))))))
		{
			goto IL_00d8;
		}
	}
	{
		// imagePosition = manager.ScrollImage( imagePosition, Direction.Right );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_33 = __this->___manager_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_2;
		NullCheck(L_33);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = ImageCropper_ScrollImage_mD210D83BC94A503918341CD3902FE441777F0496(L_33, L_34, 4, NULL);
		V_2 = L_35;
		// selectionBottomLeft.x = viewportSize.x - selectionSize.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_6;
		float L_37 = L_36.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_5;
		float L_39 = L_38.___x_0;
		(&V_3)->___x_0 = ((float)il2cpp_codegen_subtract(L_37, L_39));
		// shouldUpdateViewport = true;
		V_0 = (bool)1;
	}

IL_00d8:
	{
		// if( selectionBottomLeft.y <= SCROLL_DISTANCE )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_3;
		float L_41 = L_40.___y_1;
		if ((!(((float)L_41) <= ((float)(5.0f)))))
		{
			goto IL_0103;
		}
	}
	{
		// imagePosition = manager.ScrollImage( imagePosition, Direction.Bottom );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_42 = __this->___manager_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = V_2;
		NullCheck(L_42);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = ImageCropper_ScrollImage_mD210D83BC94A503918341CD3902FE441777F0496(L_42, L_43, 8, NULL);
		V_2 = L_44;
		// selectionBottomLeft.y = 0f;
		(&V_3)->___y_1 = (0.0f);
		// shouldUpdateViewport = true;
		V_0 = (bool)1;
		goto IL_013f;
	}

IL_0103:
	{
		// else if( selectionTopRight.y >= viewportSize.y - SCROLL_DISTANCE )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_4;
		float L_46 = L_45.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = V_6;
		float L_48 = L_47.___y_1;
		if ((!(((float)L_46) >= ((float)((float)il2cpp_codegen_subtract(L_48, (5.0f)))))))
		{
			goto IL_013f;
		}
	}
	{
		// imagePosition = manager.ScrollImage( imagePosition, Direction.Top );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_49 = __this->___manager_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = V_2;
		NullCheck(L_49);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		L_51 = ImageCropper_ScrollImage_mD210D83BC94A503918341CD3902FE441777F0496(L_49, L_50, 2, NULL);
		V_2 = L_51;
		// selectionBottomLeft.y = viewportSize.y - selectionSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_6;
		float L_53 = L_52.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = V_5;
		float L_55 = L_54.___y_1;
		(&V_3)->___y_1 = ((float)il2cpp_codegen_subtract(L_53, L_55));
		// shouldUpdateViewport = true;
		V_0 = (bool)1;
	}

IL_013f:
	{
		// if( shouldUpdateViewport )
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_016b;
		}
	}
	{
		// manager.ImageHolder.anchoredPosition = imagePosition;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_57 = __this->___manager_5;
		NullCheck(L_57);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_58;
		L_58 = ImageCropper_get_ImageHolder_mED261B36450556B6C346A656B4538C022FC6E46C_inline(L_57, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_2;
		NullCheck(L_58);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_58, L_59, NULL);
		// manager.UpdateSelection( ( selectionBottomLeft - imagePosition ) / scale );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_60 = __this->___manager_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63;
		L_63 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_61, L_62, NULL);
		float L_64 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		L_65 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_63, L_64, NULL);
		NullCheck(L_60);
		ImageCropper_UpdateSelection_m029DF565AC7BB2D873C7310B03622395CBC6E943(L_60, L_65, NULL);
	}

IL_016b:
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionMovementHandler::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMovementHandler_Stop_m8F46797885EB1CBFE743301A9ABB9824023F984C (SelectionMovementHandler_t8DB56965578BA93748587F2C1CEDD7A7E2ACCBB0* __this, const RuntimeMethod* method) 
{
	{
		// draggingPointer--;
		int32_t L_0 = __this->___draggingPointer_9;
		__this->___draggingPointer_9 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionMovementHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMovementHandler__ctor_mB8154B6A9AEFEEE67B9FE29FCC57A3825FBAF269 (SelectionMovementHandler_t8DB56965578BA93748587F2C1CEDD7A7E2ACCBB0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageCropperNamespace.SelectionResizeHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionResizeHandler_Awake_mBB3A727E0D6AD542D2845EB1F55E9852B6E9C798 (SelectionResizeHandler_t5393F0EA60524A1A68EF3E0C61FD95EF8ED839CC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// selection = manager.Selection;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_0 = __this->___manager_6;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = ImageCropper_get_Selection_mC538C5B65CDD6980DEAAD6DE113FCAA53AA8A828_inline(L_0, NULL);
		__this->___selection_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selection_11), (void*)L_1);
		// if( direction == Direction.None )
		int32_t L_2 = __this->___direction_7;
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		// Direction temp = direction;
		int32_t L_3 = __this->___direction_7;
		V_0 = L_3;
		// direction = secondaryDirection;
		int32_t L_4 = __this->___secondaryDirection_8;
		__this->___direction_7 = L_4;
		// secondaryDirection = temp;
		int32_t L_5 = V_0;
		__this->___secondaryDirection_8 = L_5;
	}

IL_0033:
	{
		// directions = direction | secondaryDirection;
		int32_t L_6 = __this->___direction_7;
		int32_t L_7 = __this->___secondaryDirection_8;
		__this->___directions_9 = ((int32_t)((int32_t)L_6|(int32_t)L_7));
		// pivot = Direction.None;
		__this->___pivot_10 = 0;
		// if( ( directions & Direction.Left ) == Direction.Left )
		int32_t L_8 = __this->___directions_9;
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&1))) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		// pivot |= Direction.Right;
		int32_t L_9 = __this->___pivot_10;
		__this->___pivot_10 = ((int32_t)((int32_t)L_9|4));
		goto IL_0081;
	}

IL_0068:
	{
		// else if( ( directions & Direction.Right ) == Direction.Right )
		int32_t L_10 = __this->___directions_9;
		if ((!(((uint32_t)((int32_t)((int32_t)L_10&4))) == ((uint32_t)4))))
		{
			goto IL_0081;
		}
	}
	{
		// pivot |= Direction.Left;
		int32_t L_11 = __this->___pivot_10;
		__this->___pivot_10 = ((int32_t)((int32_t)L_11|1));
	}

IL_0081:
	{
		// if( ( directions & Direction.Top ) == Direction.Top )
		int32_t L_12 = __this->___directions_9;
		if ((!(((uint32_t)((int32_t)((int32_t)L_12&2))) == ((uint32_t)2))))
		{
			goto IL_009b;
		}
	}
	{
		// pivot |= Direction.Bottom;
		int32_t L_13 = __this->___pivot_10;
		__this->___pivot_10 = ((int32_t)((int32_t)L_13|8));
		return;
	}

IL_009b:
	{
		// else if( ( directions & Direction.Bottom ) == Direction.Bottom )
		int32_t L_14 = __this->___directions_9;
		if ((!(((uint32_t)((int32_t)((int32_t)L_14&8))) == ((uint32_t)8))))
		{
			goto IL_00b4;
		}
	}
	{
		// pivot |= Direction.Top;
		int32_t L_15 = __this->___pivot_10;
		__this->___pivot_10 = ((int32_t)((int32_t)L_15|2));
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionResizeHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionResizeHandler_OnDisable_m59C9AF38F0C94BC481A1E938576089299B165471 (SelectionResizeHandler_t5393F0EA60524A1A68EF3E0C61FD95EF8ED839CC* __this, const RuntimeMethod* method) 
{
	{
		// manager.StopModifySelectionWith( this );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_0 = __this->___manager_6;
		NullCheck(L_0);
		ImageCropper_StopModifySelectionWith_mC48D8422A1768DD62D31062865628352E0A80EAF(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionResizeHandler::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionResizeHandler_OnBeginDrag_m9BFE63B78EBA6803887ADC404EEDC7969E8204C1 (SelectionResizeHandler_t5393F0EA60524A1A68EF3E0C61FD95EF8ED839CC* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if( !manager.CanModifySelectionWith( this ) )
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_0 = __this->___manager_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = ImageCropper_CanModifySelectionWith_m849C3291BCCFE5FC82DBADB9AC491C58DE73805D(L_0, __this, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// eventData.pointerDrag = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_2);
		PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline(L_2, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// return;
		return;
	}

IL_0016:
	{
		// draggingPointer = eventData.pointerId;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline(L_3, NULL);
		__this->___draggingPointer_16 = L_4;
		// draggingPointerEventData = eventData;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = ___eventData0;
		__this->___draggingPointerEventData_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___draggingPointerEventData_17), (void*)L_5);
		// if( ( directions & Direction.Left ) == Direction.Left )
		int32_t L_6 = __this->___directions_9;
		if ((!(((uint32_t)((int32_t)((int32_t)L_6&1))) == ((uint32_t)1))))
		{
			goto IL_0051;
		}
	}
	{
		// initialPosition.x = selection.anchoredPosition.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___initialPosition_12);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___selection_11;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_8, NULL);
		float L_10 = L_9.___x_0;
		L_7->___x_0 = L_10;
		goto IL_0088;
	}

IL_0051:
	{
		// else if( ( directions & Direction.Right ) == Direction.Right )
		int32_t L_11 = __this->___directions_9;
		if ((!(((uint32_t)((int32_t)((int32_t)L_11&4))) == ((uint32_t)4))))
		{
			goto IL_0088;
		}
	}
	{
		// initialPosition.x = selection.anchoredPosition.x + selection.sizeDelta.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___initialPosition_12);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___selection_11;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_13, NULL);
		float L_15 = L_14.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___selection_11;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_16, NULL);
		float L_18 = L_17.___x_0;
		L_12->___x_0 = ((float)il2cpp_codegen_add(L_15, L_18));
	}

IL_0088:
	{
		// if( ( directions & Direction.Top ) == Direction.Top )
		int32_t L_19 = __this->___directions_9;
		if ((!(((uint32_t)((int32_t)((int32_t)L_19&2))) == ((uint32_t)2))))
		{
			goto IL_00c1;
		}
	}
	{
		// initialPosition.y = selection.anchoredPosition.y + selection.sizeDelta.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&__this->___initialPosition_12);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = __this->___selection_11;
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_21, NULL);
		float L_23 = L_22.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = __this->___selection_11;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_24, NULL);
		float L_26 = L_25.___y_1;
		L_20->___y_1 = ((float)il2cpp_codegen_add(L_23, L_26));
		goto IL_00e7;
	}

IL_00c1:
	{
		// else if( ( directions & Direction.Bottom ) == Direction.Bottom )
		int32_t L_27 = __this->___directions_9;
		if ((!(((uint32_t)((int32_t)((int32_t)L_27&8))) == ((uint32_t)8))))
		{
			goto IL_00e7;
		}
	}
	{
		// initialPosition.y = selection.anchoredPosition.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (&__this->___initialPosition_12);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_29 = __this->___selection_11;
		NullCheck(L_29);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_29, NULL);
		float L_31 = L_30.___y_1;
		L_28->___y_1 = L_31;
	}

IL_00e7:
	{
		// initialTouchPosition = manager.GetTouchPosition( eventData.pressPosition, eventData.pressEventCamera );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_32 = __this->___manager_6;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_33 = ___eventData0;
		NullCheck(L_33);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline(L_33, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_35 = ___eventData0;
		NullCheck(L_35);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_36;
		L_36 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_35, NULL);
		NullCheck(L_32);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = ImageCropper_GetTouchPosition_mA2276D3CDB7730839FCF54A09142B895C45969F7(L_32, L_34, L_36, NULL);
		__this->___initialTouchPosition_13 = L_37;
		// initialSelectionPosition = selection.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38 = __this->___selection_11;
		NullCheck(L_38);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_38, NULL);
		__this->___initialSelectionPosition_14 = L_39;
		// initialSelectionSize = selection.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_40 = __this->___selection_11;
		NullCheck(L_40);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_40, NULL);
		__this->___initialSelectionSize_15 = L_41;
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionResizeHandler::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionResizeHandler_OnDrag_m8F1A672764B6EA162D049B67BB673F76C5421A98 (SelectionResizeHandler_t5393F0EA60524A1A68EF3E0C61FD95EF8ED839CC* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// if( eventData.pointerId != draggingPointer )
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline(L_0, NULL);
		int32_t L_2 = __this->___draggingPointer_16;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		// eventData.pointerDrag = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_3);
		PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline(L_3, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// return;
		return;
	}

IL_0016:
	{
		// draggingPointerEventData = eventData;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		__this->___draggingPointerEventData_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___draggingPointerEventData_17), (void*)L_4);
		// Vector2 newPosition = initialPosition + manager.GetTouchPosition( eventData.position, eventData.pressEventCamera ) - initialTouchPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___initialPosition_12;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_6 = __this->___manager_6;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = ___eventData0;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_7, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_9 = ___eventData0;
		NullCheck(L_9);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_9, NULL);
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = ImageCropper_GetTouchPosition_mA2276D3CDB7730839FCF54A09142B895C45969F7(L_6, L_8, L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_5, L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = __this->___initialTouchPosition_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_12, L_13, NULL);
		V_0 = L_14;
		// Vector2 selectionPosition = initialSelectionPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = __this->___initialSelectionPosition_14;
		V_1 = L_15;
		// Vector2 selectionSize = initialSelectionSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = __this->___initialSelectionSize_15;
		V_2 = L_16;
		// if( ( directions & Direction.Left ) == Direction.Left )
		int32_t L_17 = __this->___directions_9;
		if ((!(((uint32_t)((int32_t)((int32_t)L_17&1))) == ((uint32_t)1))))
		{
			goto IL_00aa;
		}
	}
	{
		// if( newPosition.x < manager.SelectionSnapToEdgeThreshold )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		float L_19 = L_18.___x_0;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_20 = __this->___manager_6;
		NullCheck(L_20);
		float L_21;
		L_21 = ImageCropper_get_SelectionSnapToEdgeThreshold_m70652C503410616AC6177CDB948E379D5C3DE5B5_inline(L_20, NULL);
		if ((!(((float)L_19) < ((float)L_21))))
		{
			goto IL_0083;
		}
	}
	{
		// newPosition.x = 0f;
		(&V_0)->___x_0 = (0.0f);
	}

IL_0083:
	{
		// selectionSize.x -= newPosition.x - selectionPosition.x;
		float* L_22 = (&(&V_2)->___x_0);
		float* L_23 = L_22;
		float L_24 = *((float*)L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_0;
		float L_26 = L_25.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_1;
		float L_28 = L_27.___x_0;
		*((float*)L_23) = (float)((float)il2cpp_codegen_subtract(L_24, ((float)il2cpp_codegen_subtract(L_26, L_28))));
		// selectionPosition.x = newPosition.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_0;
		float L_30 = L_29.___x_0;
		(&V_1)->___x_0 = L_30;
		goto IL_0104;
	}

IL_00aa:
	{
		// else if( ( directions & Direction.Right ) == Direction.Right )
		int32_t L_31 = __this->___directions_9;
		if ((!(((uint32_t)((int32_t)((int32_t)L_31&4))) == ((uint32_t)4))))
		{
			goto IL_0104;
		}
	}
	{
		// if( newPosition.x > manager.OrientedImageSize.x - manager.SelectionSnapToEdgeThreshold )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_0;
		float L_33 = L_32.___x_0;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_34 = __this->___manager_6;
		NullCheck(L_34);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = ImageCropper_get_OrientedImageSize_m40649E191CA14B9FE480249553B817521D9CBAB1_inline(L_34, NULL);
		float L_36 = L_35.___x_0;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_37 = __this->___manager_6;
		NullCheck(L_37);
		float L_38;
		L_38 = ImageCropper_get_SelectionSnapToEdgeThreshold_m70652C503410616AC6177CDB948E379D5C3DE5B5_inline(L_37, NULL);
		if ((!(((float)L_33) > ((float)((float)il2cpp_codegen_subtract(L_36, L_38))))))
		{
			goto IL_00f0;
		}
	}
	{
		// newPosition.x = manager.OrientedImageSize.x;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_39 = __this->___manager_6;
		NullCheck(L_39);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = ImageCropper_get_OrientedImageSize_m40649E191CA14B9FE480249553B817521D9CBAB1_inline(L_39, NULL);
		float L_41 = L_40.___x_0;
		(&V_0)->___x_0 = L_41;
	}

IL_00f0:
	{
		// selectionSize.x = newPosition.x - selectionPosition.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_0;
		float L_43 = L_42.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_1;
		float L_45 = L_44.___x_0;
		(&V_2)->___x_0 = ((float)il2cpp_codegen_subtract(L_43, L_45));
	}

IL_0104:
	{
		// if( ( directions & Direction.Top ) == Direction.Top )
		int32_t L_46 = __this->___directions_9;
		if ((!(((uint32_t)((int32_t)((int32_t)L_46&2))) == ((uint32_t)2))))
		{
			goto IL_0160;
		}
	}
	{
		// if( newPosition.y > manager.OrientedImageSize.y - manager.SelectionSnapToEdgeThreshold )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = V_0;
		float L_48 = L_47.___y_1;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_49 = __this->___manager_6;
		NullCheck(L_49);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = ImageCropper_get_OrientedImageSize_m40649E191CA14B9FE480249553B817521D9CBAB1_inline(L_49, NULL);
		float L_51 = L_50.___y_1;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_52 = __this->___manager_6;
		NullCheck(L_52);
		float L_53;
		L_53 = ImageCropper_get_SelectionSnapToEdgeThreshold_m70652C503410616AC6177CDB948E379D5C3DE5B5_inline(L_52, NULL);
		if ((!(((float)L_48) > ((float)((float)il2cpp_codegen_subtract(L_51, L_53))))))
		{
			goto IL_014a;
		}
	}
	{
		// newPosition.y = manager.OrientedImageSize.y;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_54 = __this->___manager_6;
		NullCheck(L_54);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		L_55 = ImageCropper_get_OrientedImageSize_m40649E191CA14B9FE480249553B817521D9CBAB1_inline(L_54, NULL);
		float L_56 = L_55.___y_1;
		(&V_0)->___y_1 = L_56;
	}

IL_014a:
	{
		// selectionSize.y = newPosition.y - selectionPosition.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = V_0;
		float L_58 = L_57.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_1;
		float L_60 = L_59.___y_1;
		(&V_2)->___y_1 = ((float)il2cpp_codegen_subtract(L_58, L_60));
		goto IL_01af;
	}

IL_0160:
	{
		// else if( ( directions & Direction.Bottom ) == Direction.Bottom )
		int32_t L_61 = __this->___directions_9;
		if ((!(((uint32_t)((int32_t)((int32_t)L_61&8))) == ((uint32_t)8))))
		{
			goto IL_01af;
		}
	}
	{
		// if( newPosition.y < manager.SelectionSnapToEdgeThreshold )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_0;
		float L_63 = L_62.___y_1;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_64 = __this->___manager_6;
		NullCheck(L_64);
		float L_65;
		L_65 = ImageCropper_get_SelectionSnapToEdgeThreshold_m70652C503410616AC6177CDB948E379D5C3DE5B5_inline(L_64, NULL);
		if ((!(((float)L_63) < ((float)L_65))))
		{
			goto IL_018a;
		}
	}
	{
		// newPosition.y = 0f;
		(&V_0)->___y_1 = (0.0f);
	}

IL_018a:
	{
		// selectionSize.y -= newPosition.y - selectionPosition.y;
		float* L_66 = (&(&V_2)->___y_1);
		float* L_67 = L_66;
		float L_68 = *((float*)L_67);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_0;
		float L_70 = L_69.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71 = V_1;
		float L_72 = L_71.___y_1;
		*((float*)L_67) = (float)((float)il2cpp_codegen_subtract(L_68, ((float)il2cpp_codegen_subtract(L_70, L_72))));
		// selectionPosition.y = newPosition.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73 = V_0;
		float L_74 = L_73.___y_1;
		(&V_1)->___y_1 = L_74;
	}

IL_01af:
	{
		// bool shouldExpand = false;
		V_3 = (bool)0;
		// if( secondaryDirection == Direction.None )
		int32_t L_75 = __this->___secondaryDirection_8;
		if (L_75)
		{
			goto IL_01f7;
		}
	}
	{
		// if( direction == Direction.Left || direction == Direction.Right )
		int32_t L_76 = __this->___direction_7;
		if ((((int32_t)L_76) == ((int32_t)1)))
		{
			goto IL_01cb;
		}
	}
	{
		int32_t L_77 = __this->___direction_7;
		if ((!(((uint32_t)L_77) == ((uint32_t)4))))
		{
			goto IL_01e2;
		}
	}

IL_01cb:
	{
		// if( selectionSize.x > initialSelectionSize.x )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78 = V_2;
		float L_79 = L_78.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_80 = (&__this->___initialSelectionSize_15);
		float L_81 = L_80->___x_0;
		if ((!(((float)L_79) > ((float)L_81))))
		{
			goto IL_01f7;
		}
	}
	{
		// shouldExpand = true;
		V_3 = (bool)1;
		goto IL_01f7;
	}

IL_01e2:
	{
		// if( selectionSize.y > initialSelectionSize.y )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_2;
		float L_83 = L_82.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_84 = (&__this->___initialSelectionSize_15);
		float L_85 = L_84->___y_1;
		if ((!(((float)L_83) > ((float)L_85))))
		{
			goto IL_01f7;
		}
	}
	{
		// shouldExpand = true;
		V_3 = (bool)1;
	}

IL_01f7:
	{
		// manager.UpdateSelection( selectionPosition, selectionSize, pivot, !shouldExpand );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_86 = __this->___manager_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88 = V_2;
		int32_t L_89 = __this->___pivot_10;
		bool L_90 = V_3;
		NullCheck(L_86);
		ImageCropper_UpdateSelection_m1AB88B93DC6948B2F045FDD2B43F00CE464B432F(L_86, L_87, L_88, L_89, (bool)((((int32_t)L_90) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionResizeHandler::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionResizeHandler_OnEndDrag_m1F04A3B436C22EAB620E9D9F93911C821260322B (SelectionResizeHandler_t5393F0EA60524A1A68EF3E0C61FD95EF8ED839CC* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if( eventData.pointerId == draggingPointer )
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline(L_0, NULL);
		int32_t L_2 = __this->___draggingPointer_16;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		// draggingPointerEventData = null;
		__this->___draggingPointerEventData_17 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___draggingPointerEventData_17), (void*)(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)NULL);
		// manager.StopModifySelectionWith( this );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_3 = __this->___manager_6;
		NullCheck(L_3);
		ImageCropper_StopModifySelectionWith_mC48D8422A1768DD62D31062865628352E0A80EAF(L_3, __this, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionResizeHandler::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionResizeHandler_OnUpdate_m5981B3AA0994AE94A7480A13E09B900943EB32C3 (SelectionResizeHandler_t5393F0EA60524A1A68EF3E0C61FD95EF8ED839CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float V_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if( draggingPointerEventData == null )
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = __this->___draggingPointerEventData_17;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle( manager.Viewport, draggingPointerEventData.position, draggingPointerEventData.pressEventCamera, out pointerLocalPos );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_1 = __this->___manager_6;
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = ImageCropper_get_Viewport_mA3410F26F2F2AFF7C2BEF68B3B70C06B9CC1FED3_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = __this->___draggingPointerEventData_17;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = __this->___draggingPointerEventData_17;
		NullCheck(L_5);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_2, L_4, L_6, (&V_0), NULL);
		// bool shouldUpdateViewport = false;
		V_1 = (bool)0;
		// float scale = manager.ImageHolder.localScale.z;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_8 = __this->___manager_6;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = ImageCropper_get_ImageHolder_mED261B36450556B6C346A656B4538C022FC6E46C_inline(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_9, NULL);
		float L_11 = L_10.___z_4;
		V_2 = L_11;
		// Vector2 imagePosition = manager.ImageHolder.anchoredPosition;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_12 = __this->___manager_6;
		NullCheck(L_12);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13;
		L_13 = ImageCropper_get_ImageHolder_mED261B36450556B6C346A656B4538C022FC6E46C_inline(L_12, NULL);
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_13, NULL);
		V_3 = L_14;
		// Vector2 selectionBottomLeft = imagePosition + selection.anchoredPosition * scale;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___selection_11;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_16, NULL);
		float L_18 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_17, L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_15, L_19, NULL);
		V_4 = L_20;
		// Vector2 selectionTopRight = selectionBottomLeft + selection.sizeDelta * scale;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = __this->___selection_11;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_22, NULL);
		float L_24 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_23, L_24, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_21, L_25, NULL);
		V_5 = L_26;
		// Vector2 viewportSize = manager.ViewportSize;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_27 = __this->___manager_6;
		NullCheck(L_27);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = ImageCropper_get_ViewportSize_m7DD5EF86737B7A14C95C69FF5EB754631EF9340B_inline(L_27, NULL);
		V_6 = L_28;
		// if( ( directions & Direction.Left ) == Direction.Left || ( directions & Direction.Right ) == Direction.Right )
		int32_t L_29 = __this->___directions_9;
		if ((((int32_t)((int32_t)((int32_t)L_29&1))) == ((int32_t)1)))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_30 = __this->___directions_9;
		if ((!(((uint32_t)((int32_t)((int32_t)L_30&4))) == ((uint32_t)4))))
		{
			goto IL_0119;
		}
	}

IL_00b1:
	{
		// if( pointerLocalPos.x <= SCROLL_DISTANCE && selectionBottomLeft.x <= SELECTION_MAX_DISTANCE_FOR_SCROLL )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_0;
		float L_32 = L_31.___x_0;
		if ((!(((float)L_32) <= ((float)(70.0f)))))
		{
			goto IL_00de;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_4;
		float L_34 = L_33.___x_0;
		if ((!(((float)L_34) <= ((float)(50.0f)))))
		{
			goto IL_00de;
		}
	}
	{
		// imagePosition = manager.ScrollImage( imagePosition, Direction.Left );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_35 = __this->___manager_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_3;
		NullCheck(L_35);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = ImageCropper_ScrollImage_mD210D83BC94A503918341CD3902FE441777F0496(L_35, L_36, 1, NULL);
		V_3 = L_37;
		// shouldUpdateViewport = true;
		V_1 = (bool)1;
		goto IL_0119;
	}

IL_00de:
	{
		// else if( pointerLocalPos.x >= viewportSize.x - SCROLL_DISTANCE && selectionTopRight.x >= viewportSize.x - SELECTION_MAX_DISTANCE_FOR_SCROLL )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_0;
		float L_39 = L_38.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_6;
		float L_41 = L_40.___x_0;
		if ((!(((float)L_39) >= ((float)((float)il2cpp_codegen_subtract(L_41, (70.0f)))))))
		{
			goto IL_0119;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_5;
		float L_43 = L_42.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_6;
		float L_45 = L_44.___x_0;
		if ((!(((float)L_43) >= ((float)((float)il2cpp_codegen_subtract(L_45, (50.0f)))))))
		{
			goto IL_0119;
		}
	}
	{
		// imagePosition = manager.ScrollImage( imagePosition, Direction.Right );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_46 = __this->___manager_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = V_3;
		NullCheck(L_46);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = ImageCropper_ScrollImage_mD210D83BC94A503918341CD3902FE441777F0496(L_46, L_47, 4, NULL);
		V_3 = L_48;
		// shouldUpdateViewport = true;
		V_1 = (bool)1;
	}

IL_0119:
	{
		// if( ( directions & Direction.Bottom ) == Direction.Bottom || ( directions & Direction.Top ) == Direction.Top )
		int32_t L_49 = __this->___directions_9;
		if ((((int32_t)((int32_t)((int32_t)L_49&8))) == ((int32_t)8)))
		{
			goto IL_012f;
		}
	}
	{
		int32_t L_50 = __this->___directions_9;
		if ((!(((uint32_t)((int32_t)((int32_t)L_50&2))) == ((uint32_t)2))))
		{
			goto IL_0197;
		}
	}

IL_012f:
	{
		// if( pointerLocalPos.y <= SCROLL_DISTANCE && selectionBottomLeft.y <= SELECTION_MAX_DISTANCE_FOR_SCROLL )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_0;
		float L_52 = L_51.___y_1;
		if ((!(((float)L_52) <= ((float)(70.0f)))))
		{
			goto IL_015c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = V_4;
		float L_54 = L_53.___y_1;
		if ((!(((float)L_54) <= ((float)(50.0f)))))
		{
			goto IL_015c;
		}
	}
	{
		// imagePosition = manager.ScrollImage( imagePosition, Direction.Bottom );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_55 = __this->___manager_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = V_3;
		NullCheck(L_55);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = ImageCropper_ScrollImage_mD210D83BC94A503918341CD3902FE441777F0496(L_55, L_56, 8, NULL);
		V_3 = L_57;
		// shouldUpdateViewport = true;
		V_1 = (bool)1;
		goto IL_0197;
	}

IL_015c:
	{
		// else if( pointerLocalPos.y >= viewportSize.y - SCROLL_DISTANCE && selectionTopRight.y >= viewportSize.y - SELECTION_MAX_DISTANCE_FOR_SCROLL )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_0;
		float L_59 = L_58.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = V_6;
		float L_61 = L_60.___y_1;
		if ((!(((float)L_59) >= ((float)((float)il2cpp_codegen_subtract(L_61, (70.0f)))))))
		{
			goto IL_0197;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_5;
		float L_63 = L_62.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = V_6;
		float L_65 = L_64.___y_1;
		if ((!(((float)L_63) >= ((float)((float)il2cpp_codegen_subtract(L_65, (50.0f)))))))
		{
			goto IL_0197;
		}
	}
	{
		// imagePosition = manager.ScrollImage( imagePosition, Direction.Top );
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_66 = __this->___manager_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = V_3;
		NullCheck(L_66);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68;
		L_68 = ImageCropper_ScrollImage_mD210D83BC94A503918341CD3902FE441777F0496(L_66, L_67, 2, NULL);
		V_3 = L_68;
		// shouldUpdateViewport = true;
		V_1 = (bool)1;
	}

IL_0197:
	{
		// if( shouldUpdateViewport )
		bool L_69 = V_1;
		if (!L_69)
		{
			goto IL_01b7;
		}
	}
	{
		// manager.ImageHolder.anchoredPosition = imagePosition;
		ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* L_70 = __this->___manager_6;
		NullCheck(L_70);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_71;
		L_71 = ImageCropper_get_ImageHolder_mED261B36450556B6C346A656B4538C022FC6E46C_inline(L_70, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_3;
		NullCheck(L_71);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_71, L_72, NULL);
		// OnDrag( draggingPointerEventData );
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_73 = __this->___draggingPointerEventData_17;
		SelectionResizeHandler_OnDrag_m8F1A672764B6EA162D049B67BB673F76C5421A98(__this, L_73, NULL);
	}

IL_01b7:
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionResizeHandler::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionResizeHandler_Stop_m09EE94C37AFD95EC4643A9CECA2C507D2C4BD3E3 (SelectionResizeHandler_t5393F0EA60524A1A68EF3E0C61FD95EF8ED839CC* __this, const RuntimeMethod* method) 
{
	{
		// draggingPointer--;
		int32_t L_0 = __this->___draggingPointer_16;
		__this->___draggingPointer_16 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// draggingPointerEventData = null;
		__this->___draggingPointerEventData_17 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___draggingPointerEventData_17), (void*)(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SelectionResizeHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionResizeHandler__ctor_m77B9B9A1F3ED9BBFF3EFD36A3423E5328E9B4DF8 (SelectionResizeHandler_t5393F0EA60524A1A68EF3E0C61FD95EF8ED839CC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageCropperNamespace.SizeChangeListener::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeChangeListener_Awake_m3376ED99B7A0B0E8CF08470FAB3B997D316D50F0 (SizeChangeListener_t3F60764215E050A17E62E68E775CA846120B8416* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rectTransform = (RectTransform) transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___rectTransform_4 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTransform_4), (void*)((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SizeChangeListener::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeChangeListener_Start_m7DAD5A16161F2FA4C7E5AEA9386693C24FC8DD3C (SizeChangeListener_t3F60764215E050A17E62E68E775CA846120B8416* __this, const RuntimeMethod* method) 
{
	{
		// OnRectTransformDimensionsChange();
		SizeChangeListener_OnRectTransformDimensionsChange_mF1716EFABC2B0EFD3151685A03FEAF06023D3210(__this, NULL);
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SizeChangeListener::OnRectTransformDimensionsChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeChangeListener_OnRectTransformDimensionsChange_mF1716EFABC2B0EFD3151685A03FEAF06023D3210 (SizeChangeListener_t3F60764215E050A17E62E68E775CA846120B8416* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if( onSizeChanged != null && rectTransform != null )
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_0 = __this->___onSizeChanged_5;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___rectTransform_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// onSizeChanged( rectTransform.rect.size );
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_3 = __this->___onSizeChanged_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___rectTransform_4;
		NullCheck(L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_4, NULL);
		V_0 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		NullCheck(L_3);
		Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_inline(L_3, L_6, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void ImageCropperNamespace.SizeChangeListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeChangeListener__ctor_m545A5E1E06DD40F0C57AC3F1C481A6E483AF2138 (SizeChangeListener_t3F60764215E050A17E62E68E775CA846120B8416* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCropper_set_MarkTextureNonReadable_mCB414FBDD1A5F9C3AF74C2AD577F7E03531B121B_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool MarkTextureNonReadable { get; set; }
		bool L_0 = ___value0;
		__this->___U3CMarkTextureNonReadableU3Ek__BackingField_35 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCropper_set_ImageBackground_m7E5A3D8309BF128DE480AA51052482C9C36EA3AC_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color ImageBackground { get; set; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___U3CImageBackgroundU3Ek__BackingField_36 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813_inline (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, const RuntimeMethod* method) 
{
	{
		// return m_Texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___m_Texture_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CropResult_Invoke_mAE2B7E0A2A52A7E221E695001C760FF018F36970_inline (CropResult_t7ED9EC9E26E25367B3637DAC0EE16718CDF58E60* __this, bool ___result0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___originalImage1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___croppedImage2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___result0, ___originalImage1, ___croppedImage2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResizePolicy_Invoke_m341ACAE059981DEA0DC94A356814501C496D386E_inline (ImageResizePolicy_tF0D4FF891A3196521ABA649DBB7B81C9558B4D63* __this, int32_t* ___width0, int32_t* ___height1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t*, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___width0, ___height1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ImageCropper_get_ImageBackground_m753EC4DD5F1C68FCC34E67FBF935947C3FFF623B_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public Color ImageBackground { get; set; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CImageBackgroundU3Ek__BackingField_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ImageCropper_get_MarkTextureNonReadable_mEFF3600F631486EC373C0CB8CDD1692F8E5BEA20_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public bool MarkTextureNonReadable { get; set; }
		bool L_0 = __this->___U3CMarkTextureNonReadableU3Ek__BackingField_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___c0;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___c0;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ImageCropper_get_Viewport_mA3410F26F2F2AFF7C2BEF68B3B70C06B9CC1FED3_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform Viewport { get { return m_viewport; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_viewport_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ImageCropper_get_SelectionGraphics_m64A007CB7FF756C6F2592A1644E0A8717B67B871_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform SelectionGraphics { get { return m_selectionGraphics; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_selectionGraphics_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ImageCropper_get_Selection_mC538C5B65CDD6980DEAAD6DE113FCAA53AA8A828_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform Selection { get { return m_selection; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_selection_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerDrag { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CpointerDragU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpointerDragU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public int pointerId { get; set; }
		int32_t L_0 = __this->___U3CpointerIdU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpressPositionU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ImageCropper_get_ImageHolder_mED261B36450556B6C346A656B4538C022FC6E46C_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform ImageHolder { get { return m_imageHolder; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_imageHolder_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropper_get_ViewportSize_m7DD5EF86737B7A14C95C69FF5EB754631EF9340B_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 ViewportSize { get { return m_viewportSize; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_viewportSize_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ImageCropper_get_SelectionSnapToEdgeThreshold_m70652C503410616AC6177CDB948E379D5C3DE5B5_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public float SelectionSnapToEdgeThreshold { get { return m_selectionSnapToEdgeThreshold; } }
		float L_0 = __this->___m_selectionSnapToEdgeThreshold_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageCropper_get_OrientedImageSize_m40649E191CA14B9FE480249553B817521D9CBAB1_inline (ImageCropper_t452FB34AB54839B425DCE5BE47EC1EB2E1510596* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 OrientedImageSize { get { return m_orientedImageSize; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_orientedImageSize_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_gshared_inline (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
