﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
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

// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Action_1_tE3E694A2F100A2CF4074391F82A671EDA972F099;
// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget>>
struct Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Vuforia.ObserverBehaviour>
struct Action_1_t49AD19663F9D6070EBF5FD37F8BEA43810805799;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<Vuforia.VuforiaInitError>
struct Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43;
// System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus>
struct Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF;
// System.Collections.Generic.Dictionary`2<System.String,ImageTarget>
struct Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>
struct IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,ImageTarget>
struct KeyCollection_t1C9F412FCBBFE3D519766F8D93695A08239FDE43;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildMarkup>
struct List_1_t8B9DB0A01D774511439B01CEE9DFFF358640164F;
// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>
struct List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3;
// System.Collections.Generic.List`1<Unity.AI.Navigation.NavMeshSurface>
struct List_1_t66CB785B72698BF8F0678AE256477DC34C9292D0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Vuforia.VirtualButtonBehaviour>
struct List_1_t7F11ABA4A96E2842FB0A540B2DB6A4A521CAB024;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem>
struct List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>
struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<Firebase.Database.DataSnapshot>
struct TaskFactory_1_tD6D69737A2AED7131413D9284A8170289D59D0B1;
// System.Threading.Tasks.TaskFactory`1<Firebase.Auth.FirebaseUser>
struct TaskFactory_1_t7C8300A7F1C0B035B03E4868A6198B7D12FEA84F;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// TMPro.TweenRunner`1<TMPro.FloatTween>
struct TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,ImageTarget>
struct ValueCollection_t9AF32A1C1ECE9976F08DCAEBB28E21D5D9662D2D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,ImageTarget>[]
struct EntryU5BU5D_t99A7A593FE467A28A6FCCE1B44D7BA70A78C1A99;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// Building[]
struct BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// FirebaseImageTarget[]
struct FirebaseImageTargetU5BU5D_tA25A78E7C1034E1134E04E12E86FE26F30E727E6;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Item[]
struct ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.AI.NavMeshBuildMarkup[]
struct NavMeshBuildMarkupU5BU5D_t3E25A22661EFA754FA8AA02D612EF94E51A5B727;
// UnityEngine.AI.NavMeshBuildSource[]
struct NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Wall[]
struct WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Dropdown/OptionData[]
struct OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// Building
struct Building_t950D5394E080624D7E96B158EF852EA16ADB3650;
// BuildingCreator
struct BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524;
// BuildingSelector
struct BuildingSelector_t1AC2812062DAB3D4B6763834547CF7517EC1EC88;
// BuildingViewModel
struct BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436;
// Vuforia.CameraDevice
struct CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27;
// CameraImageAccess
struct CameraImageAccess_t57DEFBCE790B5BB36FA653DD5A23463B4CF007DD;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Firebase.Database.DataSnapshot
struct DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A;
// DatabaseObject
struct DatabaseObject_t1196001559FD7BD1D56B995A6BCD1681AFDF8027;
// Firebase.Database.DatabaseReference
struct DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// DefaultObserverEventHandler
struct DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Vuforia.DevicePoseBehaviour
struct DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// DropdownWrapper
struct DropdownWrapper_t2B8B735C169F927DE94408005160FB905E00CBB1;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960;
// FirebaseImageTarget
struct FirebaseImageTarget_t08AFECF4D76C5C8A6BB8C4EF36FB43FF5356C04B;
// FirebaseRepository
struct FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Security.Cryptography.HMACSHA1
struct HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// Vuforia.IAnchorProvider
struct IAnchorProvider_tA9B4CA01ECE6B5B05C97148D717B4FEA6FE351E8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Vuforia.ICameraController
struct ICameraController_t6576ED49C739594B6EDCA46C654048F5008B3BE4;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Vuforia.Internal.Core.IEngine
struct IEngine_t1840136F87C8826E605686CEB7FDA35D257A8C0C;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Vuforia.IHitTestProvider
struct IHitTestProvider_tF44E562823A50A24916C1F67EE3464366541DA01;
// Vuforia.Internal.Observers.IObserver
struct IObserver_tF96DF70DC62190F4AAF66B7DA6053BB7C714503C;
// Vuforia.Internal.Core.IObserverFactory
struct IObserverFactory_t817D72A8AB0E280B1317315BB7AB98C8A43DB8B3;
// Vuforia.IObserverRegistry
struct IObserverRegistry_tF348538635CECA2D834952442BB63123A2C411A1;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// IWorldObject
struct IWorldObject_t184D5AD5E56EFFE4AB33E345710E3F29E45ACCE9;
// Vuforia.IlluminationData
struct IlluminationData_t907CE8A9106AC295312099ACA9EF74970E3AE7D4;
// Vuforia.Internal.Observers.IlluminationObserver
struct IlluminationObserver_tA729E3319116926147EBF12E4BD612A190A81BC4;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Vuforia.Image
struct Image_tC8F1E47959853F15CF7B56529F313496B2DD740B;
// Vuforia.ImageDescription
struct ImageDescription_t7AD8291D09910BE56F4441B19AA77433CE010B3B;
// ImageTarget
struct ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1;
// Vuforia.ImageTargetBehaviour
struct ImageTargetBehaviour_t014481FC6A8B819C2BCE7922BA6BD53E1B23F120;
// Vuforia.Internal.Observers.ImageTargetObserver
struct ImageTargetObserver_t37CA9AEAE11535DFD06CD5C9D7D2F356A5D20252;
// Vuforia.ImageTargetPreview
struct ImageTargetPreview_tC3CEEA7E57439F3D488B9F24D2DA2E2C07BD4AF2;
// ImageUploader
struct ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8;
// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569;
// Firebase.Database.InternalDataSnapshot
struct InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D;
// Firebase.Database.InternalDatabaseReference
struct InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1;
// Firebase.Database.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F;
// Firebase.Database.InternalQuery
struct InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056;
// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// ItemSelector
struct ItemSelector_tFBB12E0A90940295A23AFFD179539EB1C0C1925E;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616;
// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MobileLogger
struct MobileLogger_t68F043E3DC35D9604F34ADF1B5CE3F633F61A008;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NavBaker
struct NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2;
// UnityEngine.AI.NavMeshData
struct NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7;
// Unity.AI.Navigation.NavMeshSurface
struct NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8;
// NavPath
struct NavPath_tFEE0E9DAF3B58D1309422507CB92F35E2289B412;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Vuforia.ObserverBehaviour
struct ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB;
// Vuforia.ObserverFactory
struct ObserverFactory_t15303B50E9714D21517E15020805420A68418285;
// PatchImageTarget
struct PatchImageTarget_tA48F50DFD12C321D3CDA22622FCA247829F0207B;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD;
// Firebase.Database.Query
struct Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SimpleRotation
struct SimpleRotation_t3EC38818F3C88BEC2C80E1DB76C40B08C440020E;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// TestScript
struct TestScript_t6D759E079BA3FEA034493A5F329125444C6E8F1A;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Vuforia.VideoBackground
struct VideoBackground_tC65F4B5FBE6A45691D21DBA8F7C5DB23CC4ED7F1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Vuforia.VuforiaApplication
struct VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6;
// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Wall
struct Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334;
// Vuforia.World
struct World_t0332C3F77BBFBA826A13D263DAED199D01BCE050;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// BuildingCreator/WallsUpdatedEventHandler
struct WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190;
// BuildingViewModel/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8;
// Vuforia.CameraDevice/AndroidDevice
struct AndroidDevice_t46CFCDADC9E4C1BB0381CB01CC937C56F22BE38C;
// Vuforia.CameraDevice/HoloLensDevice
struct HoloLensDevice_t64E77B11602EA8DEDFB6E49EF2F71D93ECFD3572;
// Vuforia.CameraDevice/WebCamDevice
struct WebCamDevice_tAD3DDAC0FD5EBE24AA0F9203641E8ED80342CB59;
// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7;
// DefaultObserverEventHandler/PoseSmoother
struct PoseSmoother_t0FFFF1978A09252AD89E6E444613B95F9E1D59E8;
// FirebaseRepository/<>c
struct U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0;
// FirebaseRepository/<SignInUser>d__12
struct U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB;
// FirebaseRepository/<UploadImageTarget>d__13
struct U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840;
// IRepository/BuildingsUpdatedEventHandler
struct BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49;
// ImageUploader/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445;
// ImageUploader/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F;
// ImageUploader/<TryGetRating>d__7
struct U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// NativeCamera/CameraCallback
struct CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771;
// NavBaker/<BuildNavMeshCor>d__8
struct U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3;
// TMPro.TMP_Dropdown/DropdownEvent
struct DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91;
// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E;
// TMPro.TMP_Dropdown/OptionDataList
struct OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// TestScript/<RetrieveTextureFromWeb>d__6
struct U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090;
// VuforiaRepository/<CreateImageTarget>d__6
struct U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE;
// VuforiaRepository/<DeleteImageTarget>d__4
struct U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E;
// VuforiaRepository/<GetImageTargetRating>d__5
struct U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81;
// VuforiaRepository/<UpdateImageTargetDimensions>d__3
struct U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Building_t950D5394E080624D7E96B158EF852EA16ADB3650_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t89D6D9FAD8F93015339F011596FA51B8F53D3248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWorldObject_t184D5AD5E56EFFE4AB33E345710E3F29E45ACCE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8B9DB0A01D774511439B01CEE9DFFF358640164F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PatchImageTarget_tA48F50DFD12C321D3CDA22622FCA247829F0207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PixelFormat_t869ADFBEA645F6791AB1D62DAB0164965E279156_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03231398100983497E8A3A9BA34D49B8B6AECC95;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97;
IL2CPP_EXTERN_C String_t* _stringLiteral10F2F2837CFD9B3F053F697E215765329BE0EEA6;
IL2CPP_EXTERN_C String_t* _stringLiteral12B5BBD6E325F7831D54BD41218B9B8018863F71;
IL2CPP_EXTERN_C String_t* _stringLiteral14421058D3E2462B1FF8DB46E652DAA2C169B7CD;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral174ED8386002338D41311EA8103201765BC2ED20;
IL2CPP_EXTERN_C String_t* _stringLiteral1D799F5CCF4177DBD5B0211092936B886613A65A;
IL2CPP_EXTERN_C String_t* _stringLiteral214549AF147CB94BAB78407B0E3082FEC9DA1AC6;
IL2CPP_EXTERN_C String_t* _stringLiteral24E44E9BEBD26B4D54643A87E01870D7B3EB4386;
IL2CPP_EXTERN_C String_t* _stringLiteral27E448D585A6F8F5B979D5BC0372C487BB2268E9;
IL2CPP_EXTERN_C String_t* _stringLiteral2886387B11CFFC71ECF9EFF9CECC0B003CFAD505;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03;
IL2CPP_EXTERN_C String_t* _stringLiteral3AC28C6D19A375187276904D61039C20D427BA32;
IL2CPP_EXTERN_C String_t* _stringLiteral3B05BA3AF9971B71E952BCD1DB84CF25D895395C;
IL2CPP_EXTERN_C String_t* _stringLiteral3F6807B3C21CE1E40CD4C2F04D1F35272D874A95;
IL2CPP_EXTERN_C String_t* _stringLiteral4373A9E757DE805F896E277AA78684157388969E;
IL2CPP_EXTERN_C String_t* _stringLiteral43772496A8425310102AB6842A8DF95A40CBE489;
IL2CPP_EXTERN_C String_t* _stringLiteral438095AAD6F94182BE6B5ABD3C540AB80840ADF2;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral52AE6CA3F44DAEE1589E24134950B40011440605;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral6E18D43E8177562043B97E5C12804AA56C7FFD09;
IL2CPP_EXTERN_C String_t* _stringLiteral71793D063A6C7D6207E0289CCAE29DA9DA4B6B26;
IL2CPP_EXTERN_C String_t* _stringLiteral73D03079E45B3F36B90943F4A53A917569339F52;
IL2CPP_EXTERN_C String_t* _stringLiteral77C2E4D86E25AB2A6789BC4D287B25254CE6204E;
IL2CPP_EXTERN_C String_t* _stringLiteral92DA6CEE917F1CD170A41C45409C50E05C6AA3DA;
IL2CPP_EXTERN_C String_t* _stringLiteral944CBBAA2B71AFBB04AEDE40F86DC1C60E7D7F60;
IL2CPP_EXTERN_C String_t* _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9;
IL2CPP_EXTERN_C String_t* _stringLiteral9B8A636FED687923E28D69542E3847323D850EDE;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteralA4A9D1AC64CC11F358698E30F1A31CE30F9D0C0E;
IL2CPP_EXTERN_C String_t* _stringLiteralA6C747AEB9AA9DA4CE5AED715510D654FEC8B311;
IL2CPP_EXTERN_C String_t* _stringLiteralAB9988F07BD7178E6E0441CC13149AA13F44BA7E;
IL2CPP_EXTERN_C String_t* _stringLiteralAF353257FB610A8C8D2E52526E8FE9F5287946B3;
IL2CPP_EXTERN_C String_t* _stringLiteralAF432166DF5D1D96A7A93C521BA6543EA79619D8;
IL2CPP_EXTERN_C String_t* _stringLiteralAF4CEB041499939796C43CDDD97FC260C4CA738F;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB77D55F948CD86B3B7D2AD0730A129575FE8BD5F;
IL2CPP_EXTERN_C String_t* _stringLiteralC0BBEA1F2410381240F6A7B6DC30DBD53115450C;
IL2CPP_EXTERN_C String_t* _stringLiteralC38A64A8630F9E40C8641D25571BA212263DC23D;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE45786161ABBA491B2EDCBE328D7553B1A93EE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38;
IL2CPP_EXTERN_C String_t* _stringLiteralDD823CDDE27A8530C6A8EFF7B8B8E99A4B8F1B45;
IL2CPP_EXTERN_C String_t* _stringLiteralE607EECF2DD996D5B52019F099885B017CC96437;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73;
IL2CPP_EXTERN_C String_t* _stringLiteralE9D7A6E96A22CDB584063589D5EF1A7796C3D3D8;
IL2CPP_EXTERN_C String_t* _stringLiteralEE8E21EC40707CD6ED8B4678234920AE4C89C331;
IL2CPP_EXTERN_C const RuntimeMethod* BuildingCreator_U3CAwakeU3Eb__13_0_mEC8C973F928E0433E54D51D0BAE48E5101B7DE11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BuildingSelector_U3CStartU3Eb__2_0_mD6FEE73FAAA21D968302C455E134AAB2D570EA58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraImageAccess_OnPause_mCF59395AD642374085F0FACAF112D119B8757342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraImageAccess_OnVuforiaUpdated_m3D00BEB24FDFFF2833101AFDC17C2897D33E5EA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraImageAccess_RegisterFormat_m2CCE0BE3E7CB9CA726D8827114C18C06274A2226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8_mDAFE31CD98EDC75F0630DDB68F748F84CF5316D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m642D95DC21FCB4D659C1CEC8A2CC271AACB3E869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m201DB66BA6FD6B104604CB8AE9DDF1432F3297E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mCD3E5F4E44EECB46398E35C4821E3BE80BFBDCE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE4AA7A74E351588144E95579F7AB508CED27DC3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC2958A78469D10C6E71BBA5EAF972A962F725F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1171AD313F48A4B91912FB5F6989891BDAC99FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseRepository_U3CFetchBuildingCollectionU3Eb__14_0_m616B4F6DC8C80105CC55D0206AB3324A3B9DDD6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisDefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0_m55DBAFA25D3E78827B9F1395D9C33E63C4A09C37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisTMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_m3E70D234E806B9EC31E4E572CB72CE14733F52C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageUploader_U3CCaptureAndUploadImageU3Eb__5_0_m1BA49A9DAA1484C3D0DBBF663BC46E94F517D0AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageUploader_U3CTryUploadTextureU3Eb__6_0_m03491CD29B077B40D680CF634043EAEDCD76F336_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ItemSelector_U3CStartU3Eb__2_0_m2D0121C8F12D229DCE31DB78DEA120B777256A60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_ToObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DFE617439C21A755062578D82CB788A379344B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_ToObject_TisString_t_m24A2444CF94E8759ECB9DA2C94349E16C95CFE48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m5ABBD3A8519075375F31B4EF37E1D4ECD25E909C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mD288650659CF2C6F2AE39C709B535092E5CF182C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m0DA356BA69EC473C569F82A2F4BD59971C49B6D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD330AE904D9B8C6FA57A125CD4DF59CD2A8924F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE80F02484ED836571C16C2A0C39181A5E707536B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEEDC2AB1698F53638F4F021C54FE68E9F6CCE675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MobileLogger_LogToText_m7017BCF3D726137E83488EE131A166E9C81E9051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavBaker_UpdateNavMesh_m1B312D4FCBE33A3AA11B51524CC7B998377C5E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBuildNavMeshCorU3Ed__8_System_Collections_IEnumerator_Reset_m17E210F5B81AFEAA8D83BEFD37578D120A6970F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateImageTargetU3Ed__6_System_Collections_IEnumerator_Reset_mB9F44F8F95A7629022BD67578566F0DB1B352523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeleteImageTargetU3Ed__4_System_Collections_IEnumerator_Reset_mA142D8E341E5E61047965CB45226A0860D19DC81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetImageTargetRatingU3Ed__5_System_Collections_IEnumerator_Reset_m50C824923AE46C7833FF648230431B6347E59D5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRetrieveTextureFromWebU3Ed__6_System_Collections_IEnumerator_Reset_m386295269EEDEEDC79F8EAEC2CA639C194E76859_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSignInUserU3Ed__12_System_Collections_IEnumerator_Reset_m486410A6DE6BCC081F603693D21E67C2943EA12B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTryGetRatingU3Ed__7_System_Collections_IEnumerator_Reset_m5EA6E0798ECC90FE29E3D29BDE53864895C0C190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSignInUserU3Eb__12_0_mACD4E6AB5456A521E727EACB38A9A96923A74B1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CTryUploadTextureU3Eb__1_mD87A0F04484595BEA0DCED634F4DE5D1BB3C7CAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CTryGetRatingU3Eb__0_mBCE59404FE1FA2674FD7DE019488C93FA5FB4D21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_mEADA1AF1B122BE1405E743E2E419B1C716A1CD81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateImageTargetDimensionsU3Ed__3_System_Collections_IEnumerator_Reset_mB636A6A7ABC67D334D032B72F1559DEE14B42D25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUploadImageTargetU3Ed__13_System_Collections_IEnumerator_Reset_m88141D1DD49BD3D85666FB50AEBADA7A18DC2837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mDC0CD446FBA484D41C930B586C8C7F2DC707555E_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,ImageTarget>
struct Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t99A7A593FE467A28A6FCCE1B44D7BA70A78C1A99* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t1C9F412FCBBFE3D519766F8D93695A08239FDE43* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9AF32A1C1ECE9976F08DCAEBB28E21D5D9662D2D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildMarkup>
struct List_1_t8B9DB0A01D774511439B01CEE9DFFF358640164F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NavMeshBuildMarkupU5BU5D_t3E25A22661EFA754FA8AA02D612EF94E51A5B727* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8B9DB0A01D774511439B01CEE9DFFF358640164F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NavMeshBuildMarkupU5BU5D_t3E25A22661EFA754FA8AA02D612EF94E51A5B727* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>
struct List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NavMeshBuildSourceU5BU5D_t3AFA45202A8DDA5FDCB05E75CD394FA1BEC84A5A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>
struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,ImageTarget>
struct ValueCollection_t9AF32A1C1ECE9976F08DCAEBB28E21D5D9662D2D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF* ____dictionary_0;
};
struct Il2CppArrayBounds;

// Vuforia.CameraDevice
struct CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27  : public RuntimeObject
{
	// Vuforia.Internal.Core.IEngine Vuforia.CameraDevice::mEngine
	RuntimeObject* ___mEngine_1;
	// Vuforia.ICameraController Vuforia.CameraDevice::mCameraController
	RuntimeObject* ___mCameraController_2;
	// Vuforia.CameraDevice/HoloLensDevice Vuforia.CameraDevice::<HoloLens>k__BackingField
	HoloLensDevice_t64E77B11602EA8DEDFB6E49EF2F71D93ECFD3572* ___U3CHoloLensU3Ek__BackingField_3;
	// Vuforia.CameraDevice/AndroidDevice Vuforia.CameraDevice::<Android>k__BackingField
	AndroidDevice_t46CFCDADC9E4C1BB0381CB01CC937C56F22BE38C* ___U3CAndroidU3Ek__BackingField_4;
	// Vuforia.CameraDevice/WebCamDevice Vuforia.CameraDevice::<WebCam>k__BackingField
	WebCamDevice_tAD3DDAC0FD5EBE24AA0F9203641E8ED80342CB59* ___U3CWebCamU3Ek__BackingField_5;
};

struct CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27_StaticFields
{
	// Vuforia.CameraDevice Vuforia.CameraDevice::sLocalCameraDevice
	CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* ___sLocalCameraDevice_0;
};

// Firebase.Database.DataSnapshot
struct DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A  : public RuntimeObject
{
	// Firebase.Database.InternalDataSnapshot Firebase.Database.DataSnapshot::internalSnapshot
	InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* ___internalSnapshot_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_1;
	// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::parentSnapshot
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___parentSnapshot_2;
	// Firebase.Database.DataSnapshot/DataSnapshotList Firebase.Database.DataSnapshot::parentList
	DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7* ___parentList_3;
};

// DatabaseObject
struct DatabaseObject_t1196001559FD7BD1D56B995A6BCD1681AFDF8027  : public RuntimeObject
{
	// System.String DatabaseObject::_id
	String_t* ____id_0;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960  : public RuntimeObject
{
	// Firebase.Database.InternalFirebaseDatabase Firebase.Database.FirebaseDatabase::internalDatabase
	InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* ___internalDatabase_2;
	// System.String Firebase.Database.FirebaseDatabase::name
	String_t* ___name_3;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___U3CAppU3Ek__BackingField_4;
};

struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase> Firebase.Database.FirebaseDatabase::databases
	Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* ___databases_5;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// ImageTarget
struct ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1  : public RuntimeObject
{
	// System.String ImageTarget::name
	String_t* ___name_0;
	// System.Single ImageTarget::width
	float ___width_1;
	// System.String ImageTarget::image
	String_t* ___image_2;
};

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_4;
};

struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46* ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BigIntegerTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_13;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_14;
};

// JsonHelper
struct JsonHelper_t74F181470A256BAED8E585DCE6B11850EEAA0504  : public RuntimeObject
{
};

// Vuforia.ObserverFactory
struct ObserverFactory_t15303B50E9714D21517E15020805420A68418285  : public RuntimeObject
{
	// Vuforia.VuforiaBehaviour Vuforia.ObserverFactory::mVuforiaBehaviour
	VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* ___mVuforiaBehaviour_0;
	// Vuforia.Internal.Core.IEngine Vuforia.ObserverFactory::mEngine
	RuntimeObject* ___mEngine_1;
	// Vuforia.Internal.Core.IObserverFactory Vuforia.ObserverFactory::mFactory
	RuntimeObject* ___mFactory_2;
};

// PatchImageTarget
struct PatchImageTarget_tA48F50DFD12C321D3CDA22622FCA247829F0207B  : public RuntimeObject
{
	// System.Single PatchImageTarget::width
	float ___width_0;
};

// Firebase.Database.Query
struct Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED  : public RuntimeObject
{
	// Firebase.Database.InternalQuery Firebase.Database.Query::internalQuery
	InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* ___internalQuery_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Query::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_1;
	// Firebase.Database.Internal.InternalValueListener Firebase.Database.Query::valueListener
	InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* ___valueListener_2;
	// Firebase.Database.Internal.InternalChildListener Firebase.Database.Query::childListener
	InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* ___childListener_3;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// ExtensionMethods.TransormExtensions
struct TransormExtensions_tA12BAE880D57D7ABDAEAE7AAA78D617DF3461171  : public RuntimeObject
{
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Vuforia.VuforiaApplication
struct VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46  : public RuntimeObject
{
	// Vuforia.VuforiaInitError Vuforia.VuforiaApplication::mInitError
	int32_t ___mInitError_1;
	// System.Action Vuforia.VuforiaApplication::mOnBeforeVuforiaInitialized
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___mOnBeforeVuforiaInitialized_2;
	// System.Action`1<Vuforia.VuforiaInitError> Vuforia.VuforiaApplication::mOnVuforiaInitialized
	Action_1_tF4CAAB52A69FEBB4D629E2D59C8EE77A263FEE43* ___mOnVuforiaInitialized_3;
	// System.Action Vuforia.VuforiaApplication::mOnVuforiaStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___mOnVuforiaStarted_4;
	// System.Action`1<System.Boolean> Vuforia.VuforiaApplication::OnVuforiaPaused
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnVuforiaPaused_5;
	// System.Action Vuforia.VuforiaApplication::OnVuforiaStopped
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnVuforiaStopped_6;
	// System.Action Vuforia.VuforiaApplication::OnVuforiaDeinitialized
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnVuforiaDeinitialized_7;
};

struct VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46_StaticFields
{
	// Vuforia.VuforiaApplication Vuforia.VuforiaApplication::sInstance
	VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* ___sInstance_0;
};

// VuforiaRepository
struct VuforiaRepository_t4687DA016681F6694B8FC5FECD439BD69052A984  : public RuntimeObject
{
};

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;
};

struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	// System.Byte[] UnityEngine.WWWForm::dDash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash_6;
	// System.Byte[] UnityEngine.WWWForm::crlf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf_7;
	// System.Byte[] UnityEngine.WWWForm::contentTypeHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader_8;
	// System.Byte[] UnityEngine.WWWForm::dispositionHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader_9;
	// System.Byte[] UnityEngine.WWWForm::endQuote
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote_10;
	// System.Byte[] UnityEngine.WWWForm::fileNameField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField_11;
	// System.Byte[] UnityEngine.WWWForm::ampersand
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand_12;
	// System.Byte[] UnityEngine.WWWForm::equal
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal_13;
};

// Wall
struct Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334  : public RuntimeObject
{
	// System.Single Wall::x1
	float ___x1_0;
	// System.Single Wall::x2
	float ___x2_1;
	// System.Single Wall::y1
	float ___y1_2;
	// System.Single Wall::y2
	float ___y2_3;
};

// Vuforia.World
struct World_t0332C3F77BBFBA826A13D263DAED199D01BCE050  : public RuntimeObject
{
	// Vuforia.Internal.Core.IEngine Vuforia.World::mEngine
	RuntimeObject* ___mEngine_0;
	// Vuforia.IObserverRegistry Vuforia.World::mObserverRegistry
	RuntimeObject* ___mObserverRegistry_1;
	// Vuforia.Internal.Observers.IlluminationObserver Vuforia.World::mIlluminationObserver
	IlluminationObserver_tA729E3319116926147EBF12E4BD612A190A81BC4* ___mIlluminationObserver_2;
	// Vuforia.IAnchorProvider Vuforia.World::<AnchorProvider>k__BackingField
	RuntimeObject* ___U3CAnchorProviderU3Ek__BackingField_3;
	// Vuforia.IHitTestProvider Vuforia.World::<HitTestProvider>k__BackingField
	RuntimeObject* ___U3CHitTestProviderU3Ek__BackingField_4;
	// System.Action Vuforia.World::OnStateUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnStateUpdated_5;
	// System.Action`1<Vuforia.ObserverBehaviour> Vuforia.World::OnObserverCreated
	Action_1_t49AD19663F9D6070EBF5FD37F8BEA43810805799* ___OnObserverCreated_6;
	// System.Action`1<Vuforia.ObserverBehaviour> Vuforia.World::OnObserverDestroyed
	Action_1_t49AD19663F9D6070EBF5FD37F8BEA43810805799* ___OnObserverDestroyed_7;
	// Vuforia.IlluminationData Vuforia.World::<IlluminationData>k__BackingField
	IlluminationData_t907CE8A9106AC295312099ACA9EF74970E3AE7D4* ___U3CIlluminationDataU3Ek__BackingField_8;
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

// BuildingViewModel/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8  : public RuntimeObject
{
	// BuildingViewModel BuildingViewModel/<>c__DisplayClass8_0::<>4__this
	BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* ___U3CU3E4__this_0;
	// System.EventHandler BuildingViewModel/<>c__DisplayClass8_0::handler
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___handler_1;
};

// FirebaseRepository/<>c
struct U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0  : public RuntimeObject
{
};

struct U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_StaticFields
{
	// FirebaseRepository/<>c FirebaseRepository/<>c::<>9
	U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0* ___U3CU3E9_0;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>> FirebaseRepository/<>c::<>9__12_0
	Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* ___U3CU3E9__12_0_1;
};

// FirebaseRepository/<SignInUser>d__12
struct U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB  : public RuntimeObject
{
	// System.Int32 FirebaseRepository/<SignInUser>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FirebaseRepository/<SignInUser>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FirebaseRepository FirebaseRepository/<SignInUser>d__12::<>4__this
	FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* ___U3CU3E4__this_2;
};

// ImageUploader/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F  : public RuntimeObject
{
	// System.Int32 ImageUploader/<>c__DisplayClass7_0::imageRating
	int32_t ___imageRating_0;
	// System.Int32 ImageUploader/<>c__DisplayClass7_0::tries
	int32_t ___tries_1;
};

// ImageUploader/<TryGetRating>d__7
struct U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799  : public RuntimeObject
{
	// System.Int32 ImageUploader/<TryGetRating>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ImageUploader/<TryGetRating>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String ImageUploader/<TryGetRating>d__7::targetId
	String_t* ___targetId_2;
	// System.Action`1<System.Int32> ImageUploader/<TryGetRating>d__7::callback
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___callback_3;
	// ImageUploader ImageUploader/<TryGetRating>d__7::<>4__this
	ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8* ___U3CU3E4__this_4;
	// ImageUploader/<>c__DisplayClass7_0 ImageUploader/<TryGetRating>d__7::<>8__1
	U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F* ___U3CU3E8__1_5;
};

// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E  : public RuntimeObject
{
	// System.String TMPro.TMP_Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite TMPro.TMP_Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
};

// TestScript/<RetrieveTextureFromWeb>d__6
struct U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090  : public RuntimeObject
{
	// System.Int32 TestScript/<RetrieveTextureFromWeb>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TestScript/<RetrieveTextureFromWeb>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String TestScript/<RetrieveTextureFromWeb>d__6::url
	String_t* ___url_2;
	// TestScript TestScript/<RetrieveTextureFromWeb>d__6::<>4__this
	TestScript_t6D759E079BA3FEA034493A5F329125444C6E8F1A* ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest TestScript/<RetrieveTextureFromWeb>d__6::<uwr>5__1
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CuwrU3E5__1_4;
	// UnityEngine.Texture2D TestScript/<RetrieveTextureFromWeb>d__6::<texture>5__2
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3E5__2_5;
};

// VuforiaRepository/<CreateImageTarget>d__6
struct U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE  : public RuntimeObject
{
	// System.Int32 VuforiaRepository/<CreateImageTarget>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VuforiaRepository/<CreateImageTarget>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Texture2D VuforiaRepository/<CreateImageTarget>d__6::texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture_2;
	// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget>> VuforiaRepository/<CreateImageTarget>d__6::callback
	Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB* ___callback_3;
	// UnityEngine.Texture2D VuforiaRepository/<CreateImageTarget>d__6::<tex24>5__1
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3Ctex24U3E5__1_4;
	// System.Byte[] VuforiaRepository/<CreateImageTarget>d__6::<imageBytes>5__2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CimageBytesU3E5__2_5;
	// System.String VuforiaRepository/<CreateImageTarget>d__6::<imageString>5__3
	String_t* ___U3CimageStringU3E5__3_6;
	// ImageTarget VuforiaRepository/<CreateImageTarget>d__6::<target>5__4
	ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* ___U3CtargetU3E5__4_7;
	// System.String VuforiaRepository/<CreateImageTarget>d__6::<http_verb>5__5
	String_t* ___U3Chttp_verbU3E5__5_8;
	// System.String VuforiaRepository/<CreateImageTarget>d__6::<content>5__6
	String_t* ___U3CcontentU3E5__6_9;
	// System.String VuforiaRepository/<CreateImageTarget>d__6::<contentType>5__7
	String_t* ___U3CcontentTypeU3E5__7_10;
	// System.String VuforiaRepository/<CreateImageTarget>d__6::<requestPath>5__8
	String_t* ___U3CrequestPathU3E5__8_11;
	// System.String VuforiaRepository/<CreateImageTarget>d__6::<date>5__9
	String_t* ___U3CdateU3E5__9_12;
	// System.String VuforiaRepository/<CreateImageTarget>d__6::<auth>5__10
	String_t* ___U3CauthU3E5__10_13;
	// UnityEngine.Networking.UnityWebRequest VuforiaRepository/<CreateImageTarget>d__6::<webRequest>5__11
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3E5__11_14;
	// System.Byte[] VuforiaRepository/<CreateImageTarget>d__6::<contentBytes>5__12
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CcontentBytesU3E5__12_15;
	// Newtonsoft.Json.Linq.JObject VuforiaRepository/<CreateImageTarget>d__6::<json>5__13
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___U3CjsonU3E5__13_16;
	// Newtonsoft.Json.Linq.JToken VuforiaRepository/<CreateImageTarget>d__6::<targetId>5__14
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CtargetIdU3E5__14_17;
};

// VuforiaRepository/<DeleteImageTarget>d__4
struct U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E  : public RuntimeObject
{
	// System.Int32 VuforiaRepository/<DeleteImageTarget>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VuforiaRepository/<DeleteImageTarget>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String VuforiaRepository/<DeleteImageTarget>d__4::targetId
	String_t* ___targetId_2;
	// System.Action`1<System.Boolean> VuforiaRepository/<DeleteImageTarget>d__4::callback
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback_3;
	// System.String VuforiaRepository/<DeleteImageTarget>d__4::<http_verb>5__1
	String_t* ___U3Chttp_verbU3E5__1_4;
	// System.String VuforiaRepository/<DeleteImageTarget>d__4::<content>5__2
	String_t* ___U3CcontentU3E5__2_5;
	// System.String VuforiaRepository/<DeleteImageTarget>d__4::<contentType>5__3
	String_t* ___U3CcontentTypeU3E5__3_6;
	// System.String VuforiaRepository/<DeleteImageTarget>d__4::<requestPath>5__4
	String_t* ___U3CrequestPathU3E5__4_7;
	// System.String VuforiaRepository/<DeleteImageTarget>d__4::<date>5__5
	String_t* ___U3CdateU3E5__5_8;
	// System.String VuforiaRepository/<DeleteImageTarget>d__4::<auth>5__6
	String_t* ___U3CauthU3E5__6_9;
	// UnityEngine.Networking.UnityWebRequest VuforiaRepository/<DeleteImageTarget>d__4::<webRequest>5__7
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3E5__7_10;
};

// VuforiaRepository/<GetImageTargetRating>d__5
struct U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81  : public RuntimeObject
{
	// System.Int32 VuforiaRepository/<GetImageTargetRating>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VuforiaRepository/<GetImageTargetRating>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String VuforiaRepository/<GetImageTargetRating>d__5::targetId
	String_t* ___targetId_2;
	// System.Action`1<System.Int32> VuforiaRepository/<GetImageTargetRating>d__5::callback
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___callback_3;
	// System.String VuforiaRepository/<GetImageTargetRating>d__5::<http_verb>5__1
	String_t* ___U3Chttp_verbU3E5__1_4;
	// System.String VuforiaRepository/<GetImageTargetRating>d__5::<content>5__2
	String_t* ___U3CcontentU3E5__2_5;
	// System.String VuforiaRepository/<GetImageTargetRating>d__5::<contentType>5__3
	String_t* ___U3CcontentTypeU3E5__3_6;
	// System.String VuforiaRepository/<GetImageTargetRating>d__5::<requestPath>5__4
	String_t* ___U3CrequestPathU3E5__4_7;
	// System.String VuforiaRepository/<GetImageTargetRating>d__5::<date>5__5
	String_t* ___U3CdateU3E5__5_8;
	// System.String VuforiaRepository/<GetImageTargetRating>d__5::<auth>5__6
	String_t* ___U3CauthU3E5__6_9;
	// UnityEngine.Networking.UnityWebRequest VuforiaRepository/<GetImageTargetRating>d__5::<webRequest>5__7
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3E5__7_10;
	// Newtonsoft.Json.Linq.JObject VuforiaRepository/<GetImageTargetRating>d__5::<json>5__8
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___U3CjsonU3E5__8_11;
	// System.Int32 VuforiaRepository/<GetImageTargetRating>d__5::<trackingRating>5__9
	int32_t ___U3CtrackingRatingU3E5__9_12;
};

// VuforiaRepository/<UpdateImageTargetDimensions>d__3
struct U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39  : public RuntimeObject
{
	// System.Int32 VuforiaRepository/<UpdateImageTargetDimensions>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VuforiaRepository/<UpdateImageTargetDimensions>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String VuforiaRepository/<UpdateImageTargetDimensions>d__3::targetId
	String_t* ___targetId_2;
	// System.Single VuforiaRepository/<UpdateImageTargetDimensions>d__3::width
	float ___width_3;
	// System.Action`1<System.Boolean> VuforiaRepository/<UpdateImageTargetDimensions>d__3::callback
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback_4;
	// PatchImageTarget VuforiaRepository/<UpdateImageTargetDimensions>d__3::<target>5__1
	PatchImageTarget_tA48F50DFD12C321D3CDA22622FCA247829F0207B* ___U3CtargetU3E5__1_5;
	// System.String VuforiaRepository/<UpdateImageTargetDimensions>d__3::<http_verb>5__2
	String_t* ___U3Chttp_verbU3E5__2_6;
	// System.String VuforiaRepository/<UpdateImageTargetDimensions>d__3::<content>5__3
	String_t* ___U3CcontentU3E5__3_7;
	// System.String VuforiaRepository/<UpdateImageTargetDimensions>d__3::<contentType>5__4
	String_t* ___U3CcontentTypeU3E5__4_8;
	// System.String VuforiaRepository/<UpdateImageTargetDimensions>d__3::<requestPath>5__5
	String_t* ___U3CrequestPathU3E5__5_9;
	// System.String VuforiaRepository/<UpdateImageTargetDimensions>d__3::<date>5__6
	String_t* ___U3CdateU3E5__6_10;
	// System.String VuforiaRepository/<UpdateImageTargetDimensions>d__3::<auth>5__7
	String_t* ___U3CauthU3E5__7_11;
	// System.Byte[] VuforiaRepository/<UpdateImageTargetDimensions>d__3::<contentBytes>5__8
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CcontentBytesU3E5__8_12;
	// UnityEngine.Networking.UnityWebRequest VuforiaRepository/<UpdateImageTargetDimensions>d__3::<webRequest>5__9
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3E5__9_13;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,ImageTarget>
struct Enumerator_tF9A9B43BBD2454FB4753D5CEBEBF0C6E068FEEC7 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* ____currentValue_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget>
struct KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* ___value_1;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___m_result_38;
};

struct Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tD6D69737A2AED7131413D9284A8170289D59D0B1* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___m_result_38;
};

struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7C8300A7F1C0B035B03E4868A6198B7D12FEA84F* ___s_defaultFactory_39;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// Building
struct Building_t950D5394E080624D7E96B158EF852EA16ADB3650  : public DatabaseObject_t1196001559FD7BD1D56B995A6BCD1681AFDF8027
{
	// Wall[] Building::walls
	WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls_1;
	// Item[] Building::items
	ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* ___items_2;
	// FirebaseImageTarget[] Building::targets
	FirebaseImageTargetU5BU5D_tA25A78E7C1034E1134E04E12E86FE26F30E727E6* ___targets_3;
	// System.Collections.Generic.Dictionary`2<System.String,ImageTarget> Building::image_targets
	Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF* ___image_targets_4;
	// System.String Building::name
	String_t* ___name_5;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// Firebase.Database.DatabaseReference
struct DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D  : public Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED
{
	// Firebase.Database.InternalDatabaseReference Firebase.Database.DatabaseReference::internalReference
	InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* ___internalReference_4;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::<Database>k__BackingField
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___U3CDatabaseU3Ek__BackingField_5;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// FirebaseImageTarget
struct FirebaseImageTarget_t08AFECF4D76C5C8A6BB8C4EF36FB43FF5356C04B  : public ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1
{
	// System.Single FirebaseImageTarget::euler_x
	float ___euler_x_3;
	// System.Single FirebaseImageTarget::euler_y
	float ___euler_y_4;
	// System.Single FirebaseImageTarget::euler_z
	float ___euler_z_5;
	// System.Single FirebaseImageTarget::x
	float ___x_6;
	// System.Single FirebaseImageTarget::y
	float ___y_7;
	// System.Single FirebaseImageTarget::z
	float ___z_8;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95 
{
	// System.String Item::name
	String_t* ___name_0;
	// System.Single Item::x
	float ___x_1;
	// System.Single Item::y
	float ___y_2;
	// System.Single Item::z
	float ___z_3;
};
// Native definition for P/Invoke marshalling of Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_marshaled_pinvoke
{
	char* ___name_0;
	float ___x_1;
	float ___y_2;
	float ___z_3;
};
// Native definition for COM marshalling of Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_marshaled_com
{
	Il2CppChar* ___name_0;
	float ___x_1;
	float ___y_2;
	float ___z_3;
};

// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A  : public JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3
{
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616* ____listChanged_15;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701* ____addingNew_16;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* ____collectionChanged_17;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject* ____syncRoot_18;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_19;
};

// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_4;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.AI.NavMeshBuildDebugSettings
struct NavMeshBuildDebugSettings_tF9DF93A5E99DFE4851A9B687B8870ADADE1A0621 
{
	// System.Byte UnityEngine.AI.NavMeshBuildDebugSettings::m_Flags
	uint8_t ___m_Flags_0;
};

// UnityEngine.AI.NavMeshDataInstance
struct NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 
{
	// System.Int32 UnityEngine.AI.NavMeshDataInstance::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// Vuforia.TargetStatus
struct TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 
{
	// Vuforia.Status Vuforia.TargetStatus::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_0;
	// Vuforia.StatusInfo Vuforia.TargetStatus::<StatusInfo>k__BackingField
	int32_t ___U3CStatusInfoU3Ek__BackingField_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// System.Security.Cryptography.HMAC
struct HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684  : public KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263
{
	// System.Int32 System.Security.Cryptography.HMAC::blockSizeValue
	int32_t ___blockSizeValue_5;
	// System.String System.Security.Cryptography.HMAC::m_hashName
	String_t* ___m_hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash1
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash1_7;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash2
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash2_8;
	// System.Byte[] System.Security.Cryptography.HMAC::m_inner
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_inner_9;
	// System.Byte[] System.Security.Cryptography.HMAC::m_outer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_outer_10;
	// System.Boolean System.Security.Cryptography.HMAC::m_hashing
	bool ___m_hashing_11;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// Vuforia.Image
struct Image_tC8F1E47959853F15CF7B56529F313496B2DD740B  : public RuntimeObject
{
	// System.IntPtr Vuforia.Image::mData
	intptr_t ___mData_0;
	// System.Byte[] Vuforia.Image::mDataArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mDataArray_1;
	// Vuforia.ImageDescription Vuforia.Image::<Description>k__BackingField
	ImageDescription_t7AD8291D09910BE56F4441B19AA77433CE010B3B* ___U3CDescriptionU3Ek__BackingField_2;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632* ____properties_20;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_21;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD* ___PropertyChanging_22;
};

// UnityEngine.AI.NavMeshBuildSettings
struct NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D 
{
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_AgentTypeID
	int32_t ___m_AgentTypeID_0;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentRadius
	float ___m_AgentRadius_1;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentHeight
	float ___m_AgentHeight_2;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentSlope
	float ___m_AgentSlope_3;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_AgentClimb
	float ___m_AgentClimb_4;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_LedgeDropHeight
	float ___m_LedgeDropHeight_5;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_MaxJumpAcrossDistance
	float ___m_MaxJumpAcrossDistance_6;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_MinRegionArea
	float ___m_MinRegionArea_7;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_OverrideVoxelSize
	int32_t ___m_OverrideVoxelSize_8;
	// System.Single UnityEngine.AI.NavMeshBuildSettings::m_VoxelSize
	float ___m_VoxelSize_9;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_OverrideTileSize
	int32_t ___m_OverrideTileSize_10;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_TileSize
	int32_t ___m_TileSize_11;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_AccuratePlacement
	int32_t ___m_AccuratePlacement_12;
	// System.UInt32 UnityEngine.AI.NavMeshBuildSettings::m_MaxJobWorkers
	uint32_t ___m_MaxJobWorkers_13;
	// System.Int32 UnityEngine.AI.NavMeshBuildSettings::m_PreserveTilesOutsideBounds
	int32_t ___m_PreserveTilesOutsideBounds_14;
	// UnityEngine.AI.NavMeshBuildDebugSettings UnityEngine.AI.NavMeshBuildSettings::m_Debug
	NavMeshBuildDebugSettings_tF9DF93A5E99DFE4851A9B687B8870ADADE1A0621 ___m_Debug_15;
};

// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// FirebaseRepository/<UploadImageTarget>d__13
struct U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840  : public RuntimeObject
{
	// System.Int32 FirebaseRepository/<UploadImageTarget>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FirebaseRepository/<UploadImageTarget>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String FirebaseRepository/<UploadImageTarget>d__13::buildingId
	String_t* ___buildingId_2;
	// System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget> FirebaseRepository/<UploadImageTarget>d__13::imageTarget
	KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C ___imageTarget_3;
	// FirebaseRepository FirebaseRepository/<UploadImageTarget>d__13::<>4__this
	FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* ___U3CU3E4__this_4;
	// System.String FirebaseRepository/<UploadImageTarget>d__13::<targetId>5__1
	String_t* ___U3CtargetIdU3E5__1_5;
	// System.String FirebaseRepository/<UploadImageTarget>d__13::<json>5__2
	String_t* ___U3CjsonU3E5__2_6;
	// System.Threading.Tasks.Task FirebaseRepository/<UploadImageTarget>d__13::<task>5__3
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CtaskU3E5__3_7;
};

// ImageUploader/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445  : public RuntimeObject
{
	// System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget> ImageUploader/<>c__DisplayClass6_0::target
	KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C ___target_0;
	// ImageUploader ImageUploader/<>c__DisplayClass6_0::<>4__this
	ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8* ___U3CU3E4__this_1;
};

// TMPro.TMP_Dropdown/DropdownEvent
struct DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FirebaseAuth::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::appProxy
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___appProxy_2;
	// System.IntPtr Firebase.Auth.FirebaseAuth::appCPtr
	intptr_t ___appCPtr_3;
	// System.IntPtr Firebase.Auth.FirebaseAuth::authStateListener
	intptr_t ___authStateListener_4;
	// System.IntPtr Firebase.Auth.FirebaseAuth::idTokenListener
	intptr_t ___idTokenListener_5;
	// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::currentUser
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___currentUser_6;
	// System.EventHandler Firebase.Auth.FirebaseAuth::stateChangedImpl
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___stateChangedImpl_7;
	// System.EventHandler Firebase.Auth.FirebaseAuth::idTokenChangedImpl
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___idTokenChangedImpl_8;
	// System.Boolean Firebase.Auth.FirebaseAuth::persistentLoaded
	bool ___persistentLoaded_9;
};

struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::appCPtrToAuth
	Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* ___appCPtrToAuth_10;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Security.Cryptography.HMACSHA1
struct HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030  : public HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.AI.NavMeshData
struct NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
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

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// Firebase.Auth.UserInfoInterface
struct UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.UserInfoInterface::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.UserInfoInterface::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// NavBaker/<BuildNavMeshCor>d__8
struct U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3  : public RuntimeObject
{
	// System.Int32 NavBaker/<BuildNavMeshCor>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NavBaker/<BuildNavMeshCor>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// NavBaker NavBaker/<BuildNavMeshCor>d__8::<>4__this
	NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* ___U3CU3E4__this_2;
	// UnityEngine.AI.NavMeshBuildSettings NavBaker/<BuildNavMeshCor>d__8::<buildSettings>5__1
	NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D ___U3CbuildSettingsU3E5__1_3;
	// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource> NavBaker/<BuildNavMeshCor>d__8::<buildSources>5__2
	List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* ___U3CbuildSourcesU3E5__2_4;
	// System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildMarkup> NavBaker/<BuildNavMeshCor>d__8::<markups>5__3
	List_1_t8B9DB0A01D774511439B01CEE9DFFF358640164F* ___U3CmarkupsU3E5__3_5;
	// UnityEngine.Bounds NavBaker/<BuildNavMeshCor>d__8::<bounds>5__4
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___U3CboundsU3E5__4_6;
	// UnityEngine.AI.NavMeshData NavBaker/<BuildNavMeshCor>d__8::<data>5__5
	NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___U3CdataU3E5__5_7;
	// UnityEngine.AsyncOperation NavBaker/<BuildNavMeshCor>d__8::<operation>5__6
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CoperationU3E5__6_8;
};

// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Action_1_tE3E694A2F100A2CF4074391F82A671EDA972F099  : public MulticastDelegate_t
{
};

// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget>>
struct Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9  : public MulticastDelegate_t
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
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

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A  : public UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseUser::authProxy
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___authProxy_3;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// BuildingCreator/WallsUpdatedEventHandler
struct WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190  : public MulticastDelegate_t
{
};

// IRepository/BuildingsUpdatedEventHandler
struct BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49  : public MulticastDelegate_t
{
};

// NativeCamera/CameraCallback
struct CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BuildingCreator
struct BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BuildingViewModel BuildingCreator::buildingVM
	BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* ___buildingVM_4;
	// BuildingCreator/WallsUpdatedEventHandler BuildingCreator::WallsUpdated
	WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* ___WallsUpdated_5;
	// System.Single BuildingCreator::wallWidth
	float ___wallWidth_6;
	// System.Single BuildingCreator::wallHeight
	float ___wallHeight_7;
	// System.UInt32 BuildingCreator::initialWallCount
	uint32_t ___initialWallCount_8;
	// Wall[] BuildingCreator::_walls
	WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ____walls_9;
	// System.Collections.Generic.Dictionary`2<System.String,ImageTarget> BuildingCreator::_imageTargets
	Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF* ____imageTargets_10;
	// UnityEngine.GameObject BuildingCreator::wallObjectPool
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wallObjectPool_11;
	// UnityEngine.GameObject BuildingCreator::floor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___floor_12;
	// UnityEngine.GameObject BuildingCreator::wallCollection
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wallCollection_13;
	// UnityEngine.Texture2D BuildingCreator::tex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex_14;
	// System.Int32 BuildingCreator::wallCounter
	int32_t ___wallCounter_15;
};

// BuildingViewModel
struct BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FirebaseRepository BuildingViewModel::repository
	FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* ___repository_4;
	// Building BuildingViewModel::_currentBuilding
	Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ____currentBuilding_5;
	// System.EventHandler BuildingViewModel::CurrentBuildingChanged
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___CurrentBuildingChanged_6;
};

// CameraImageAccess
struct CameraImageAccess_t57DEFBCE790B5BB36FA653DD5A23463B4CF007DD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.RawImage CameraImageAccess::rawImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___rawImage_4;
	// UnityEngine.Texture2D CameraImageAccess::texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture_5;
	// Vuforia.PixelFormat CameraImageAccess::mPixelFormat
	int32_t ___mPixelFormat_6;
	// System.Boolean CameraImageAccess::mFormatRegistered
	bool ___mFormatRegistered_7;
	// System.Int32 CameraImageAccess::width
	int32_t ___width_8;
	// System.Int32 CameraImageAccess::height
	int32_t ___height_9;
};

// DefaultObserverEventHandler
struct DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DefaultObserverEventHandler/TrackingStatusFilter DefaultObserverEventHandler::StatusFilter
	int32_t ___StatusFilter_4;
	// System.Boolean DefaultObserverEventHandler::UsePoseSmoothing
	bool ___UsePoseSmoothing_5;
	// UnityEngine.AnimationCurve DefaultObserverEventHandler::AnimationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___AnimationCurve_6;
	// UnityEngine.Events.UnityEvent DefaultObserverEventHandler::OnTargetFound
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnTargetFound_7;
	// UnityEngine.Events.UnityEvent DefaultObserverEventHandler::OnTargetLost
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnTargetLost_8;
	// Vuforia.ObserverBehaviour DefaultObserverEventHandler::mObserverBehaviour
	ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB* ___mObserverBehaviour_9;
	// Vuforia.TargetStatus DefaultObserverEventHandler::mPreviousTargetStatus
	TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ___mPreviousTargetStatus_10;
	// System.Boolean DefaultObserverEventHandler::mCallbackReceivedOnce
	bool ___mCallbackReceivedOnce_11;
	// DefaultObserverEventHandler/PoseSmoother DefaultObserverEventHandler::mPoseSmoother
	PoseSmoother_t0FFFF1978A09252AD89E6E444613B95F9E1D59E8* ___mPoseSmoother_13;
};

// DropdownWrapper
struct DropdownWrapper_t2B8B735C169F927DE94408005160FB905E00CBB1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Dropdown DropdownWrapper::dropdown
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___dropdown_4;
};

// FirebaseRepository
struct FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Firebase.Database.DatabaseReference FirebaseRepository::db
	DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* ___db_4;
	// Firebase.Auth.FirebaseAuth FirebaseRepository::auth
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___auth_5;
	// System.EventHandler FirebaseRepository::BuildingsUpdated
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___BuildingsUpdated_6;
	// System.Boolean FirebaseRepository::_mustCallBuildingsUpdatedListener
	bool ____mustCallBuildingsUpdatedListener_7;
	// Building[] FirebaseRepository::_buildings
	BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* ____buildings_8;
};

// ImageUploader
struct ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FirebaseRepository ImageUploader::firebaseRepo
	FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* ___firebaseRepo_4;
	// CameraImageAccess ImageUploader::imageAccess
	CameraImageAccess_t57DEFBCE790B5BB36FA653DD5A23463B4CF007DD* ___imageAccess_5;
	// System.Int32 ImageUploader::maxTries
	int32_t ___maxTries_6;
	// System.Single ImageUploader::waitTime
	float ___waitTime_7;
	// UnityEngine.Texture2D ImageUploader::_textureToUpload
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____textureToUpload_8;
};

// MobileLogger
struct MobileLogger_t68F043E3DC35D9604F34ADF1B5CE3F633F61A008  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text MobileLogger::tmp_text
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___tmp_text_4;
};

// NavBaker
struct NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.AI.Navigation.NavMeshSurface NavBaker::surface
	NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* ___surface_4;
	// BuildingCreator NavBaker::buildingCreator
	BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* ___buildingCreator_5;
	// System.Object NavBaker::<NavMeshComponents>k__BackingField
	RuntimeObject* ___U3CNavMeshComponentsU3Ek__BackingField_6;
};

// Unity.AI.Navigation.NavMeshSurface
struct NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Unity.AI.Navigation.NavMeshSurface::m_AgentTypeID
	int32_t ___m_AgentTypeID_4;
	// Unity.AI.Navigation.CollectObjects Unity.AI.Navigation.NavMeshSurface::m_CollectObjects
	int32_t ___m_CollectObjects_5;
	// UnityEngine.Vector3 Unity.AI.Navigation.NavMeshSurface::m_Size
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Size_6;
	// UnityEngine.Vector3 Unity.AI.Navigation.NavMeshSurface::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_7;
	// UnityEngine.LayerMask Unity.AI.Navigation.NavMeshSurface::m_LayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_LayerMask_8;
	// UnityEngine.AI.NavMeshCollectGeometry Unity.AI.Navigation.NavMeshSurface::m_UseGeometry
	int32_t ___m_UseGeometry_9;
	// System.Int32 Unity.AI.Navigation.NavMeshSurface::m_DefaultArea
	int32_t ___m_DefaultArea_10;
	// System.Boolean Unity.AI.Navigation.NavMeshSurface::m_IgnoreNavMeshAgent
	bool ___m_IgnoreNavMeshAgent_11;
	// System.Boolean Unity.AI.Navigation.NavMeshSurface::m_IgnoreNavMeshObstacle
	bool ___m_IgnoreNavMeshObstacle_12;
	// System.Boolean Unity.AI.Navigation.NavMeshSurface::m_OverrideTileSize
	bool ___m_OverrideTileSize_13;
	// System.Int32 Unity.AI.Navigation.NavMeshSurface::m_TileSize
	int32_t ___m_TileSize_14;
	// System.Boolean Unity.AI.Navigation.NavMeshSurface::m_OverrideVoxelSize
	bool ___m_OverrideVoxelSize_15;
	// System.Single Unity.AI.Navigation.NavMeshSurface::m_VoxelSize
	float ___m_VoxelSize_16;
	// System.Single Unity.AI.Navigation.NavMeshSurface::m_MinRegionArea
	float ___m_MinRegionArea_17;
	// UnityEngine.AI.NavMeshData Unity.AI.Navigation.NavMeshSurface::m_NavMeshData
	NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___m_NavMeshData_18;
	// System.Boolean Unity.AI.Navigation.NavMeshSurface::m_BuildHeightMesh
	bool ___m_BuildHeightMesh_19;
	// UnityEngine.AI.NavMeshDataInstance Unity.AI.Navigation.NavMeshSurface::m_NavMeshDataInstance
	NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 ___m_NavMeshDataInstance_20;
	// UnityEngine.Vector3 Unity.AI.Navigation.NavMeshSurface::m_LastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LastPosition_21;
	// UnityEngine.Quaternion Unity.AI.Navigation.NavMeshSurface::m_LastRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_LastRotation_22;
};

struct NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8_StaticFields
{
	// System.Collections.Generic.List`1<Unity.AI.Navigation.NavMeshSurface> Unity.AI.Navigation.NavMeshSurface::s_NavMeshSurfaces
	List_1_t66CB785B72698BF8F0678AE256477DC34C9292D0* ___s_NavMeshSurfaces_23;
};

// NavPath
struct NavPath_tFEE0E9DAF3B58D1309422507CB92F35E2289B412  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform NavPath::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// UnityEngine.LineRenderer NavPath::pathLine
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___pathLine_5;
	// UnityEngine.AI.NavMeshPath NavPath::path
	NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path_6;
	// System.Single NavPath::refreshTime
	float ___refreshTime_7;
	// System.Single NavPath::elapsed
	float ___elapsed_8;
};

// SimpleRotation
struct SimpleRotation_t3EC38818F3C88BEC2C80E1DB76C40B08C440020E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 SimpleRotation::rotSpeed
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotSpeed_4;
};

// TestScript
struct TestScript_t6D759E079BA3FEA034493A5F329125444C6E8F1A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Texture2D TestScript::textureFile
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___textureFile_4;
	// System.Single TestScript::printedTargetSize
	float ___printedTargetSize_5;
	// System.String TestScript::targetName
	String_t* ___targetName_6;
	// System.Boolean TestScript::hasRun
	bool ___hasRun_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Vuforia.VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_tA15D7FADFFC01834965106EC085F8D90177AB89D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// BuildingSelector
struct BuildingSelector_t1AC2812062DAB3D4B6763834547CF7517EC1EC88  : public DropdownWrapper_t2B8B735C169F927DE94408005160FB905E00CBB1
{
	// FirebaseRepository BuildingSelector::repository
	FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* ___repository_5;
	// BuildingViewModel BuildingSelector::buildingVM
	BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* ___buildingVM_6;
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

// ItemSelector
struct ItemSelector_tFBB12E0A90940295A23AFFD179539EB1C0C1925E  : public DropdownWrapper_t2B8B735C169F927DE94408005160FB905E00CBB1
{
	// BuildingViewModel ItemSelector::buildingVM
	BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* ___buildingVM_5;
	// UnityEngine.Transform ItemSelector::itemTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___itemTarget_6;
};

// Vuforia.ObserverBehaviour
struct ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB  : public VuforiaMonoBehaviour_tA15D7FADFFC01834965106EC085F8D90177AB89D
{
	// System.Boolean Vuforia.ObserverBehaviour::PreviewVisible
	bool ___PreviewVisible_4;
	// System.Boolean Vuforia.ObserverBehaviour::RuntimeOcclusion
	bool ___RuntimeOcclusion_5;
	// System.String Vuforia.ObserverBehaviour::mTrackableName
	String_t* ___mTrackableName_6;
	// System.Boolean Vuforia.ObserverBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_7;
	// System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus> Vuforia.ObserverBehaviour::OnTargetStatusChanged
	Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F* ___OnTargetStatusChanged_8;
	// System.Action`1<Vuforia.ObserverBehaviour> Vuforia.ObserverBehaviour::OnBehaviourDestroyed
	Action_1_t49AD19663F9D6070EBF5FD37F8BEA43810805799* ___OnBehaviourDestroyed_9;
	// Vuforia.Internal.Observers.IObserver Vuforia.ObserverBehaviour::mObserver
	RuntimeObject* ___mObserver_10;
	// Vuforia.TargetStatus Vuforia.ObserverBehaviour::<TargetStatus>k__BackingField
	TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ___U3CTargetStatusU3Ek__BackingField_11;
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

// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6  : public VuforiaMonoBehaviour_tA15D7FADFFC01834965106EC085F8D90177AB89D
{
	// Vuforia.Internal.Core.IEngine Vuforia.VuforiaBehaviour::mEngine
	RuntimeObject* ___mEngine_5;
	// Vuforia.IObserverRegistry Vuforia.VuforiaBehaviour::mObserversRegistry
	RuntimeObject* ___mObserversRegistry_6;
	// Vuforia.WorldCenterMode Vuforia.VuforiaBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_7;
	// Vuforia.ObserverBehaviour Vuforia.VuforiaBehaviour::mWorldCenter
	ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB* ___mWorldCenter_8;
	// Vuforia.CameraDevice Vuforia.VuforiaBehaviour::<CameraDevice>k__BackingField
	CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* ___U3CCameraDeviceU3Ek__BackingField_9;
	// Vuforia.ObserverFactory Vuforia.VuforiaBehaviour::<ObserverFactory>k__BackingField
	ObserverFactory_t15303B50E9714D21517E15020805420A68418285* ___U3CObserverFactoryU3Ek__BackingField_10;
	// Vuforia.DevicePoseBehaviour Vuforia.VuforiaBehaviour::<DevicePoseBehaviour>k__BackingField
	DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642* ___U3CDevicePoseBehaviourU3Ek__BackingField_11;
	// Vuforia.VideoBackground Vuforia.VuforiaBehaviour::<VideoBackground>k__BackingField
	VideoBackground_tC65F4B5FBE6A45691D21DBA8F7C5DB23CC4ED7F1* ___U3CVideoBackgroundU3Ek__BackingField_12;
	// Vuforia.World Vuforia.VuforiaBehaviour::<World>k__BackingField
	World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* ___U3CWorldU3Ek__BackingField_13;
};

struct VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6_StaticFields
{
	// Vuforia.VuforiaBehaviour Vuforia.VuforiaBehaviour::sInstance
	VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* ___sInstance_4;
};

// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_tC09F7225D59E476738430EC99104A6455579452F  : public ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB
{
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_13;
};

struct DataSetTrackableBehaviour_tC09F7225D59E476738430EC99104A6455579452F_StaticFields
{
	// System.Single Vuforia.DataSetTrackableBehaviour::VirtualSceneScaleFactor
	float ___VirtualSceneScaleFactor_12;
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

// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform TMPro.TMP_Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_CaptionText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_CaptionText_21;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Graphic TMPro.TMP_Dropdown::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_ItemText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_ItemText_24;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_25;
	// System.Int32 TMPro.TMP_Dropdown::m_Value
	int32_t ___m_Value_26;
	// TMPro.TMP_Dropdown/OptionDataList TMPro.TMP_Dropdown::m_Options
	OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1* ___m_Options_27;
	// TMPro.TMP_Dropdown/DropdownEvent TMPro.TMP_Dropdown::m_OnValueChanged
	DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* ___m_OnValueChanged_28;
	// System.Single TMPro.TMP_Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_29;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_30;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_31;
	// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> TMPro.TMP_Dropdown::m_Items
	List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97* ___m_Items_32;
	// TMPro.TweenRunner`1<TMPro.FloatTween> TMPro.TMP_Dropdown::m_AlphaTweenRunner
	TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* ___m_AlphaTweenRunner_33;
	// System.Boolean TMPro.TMP_Dropdown::validTemplate
	bool ___validTemplate_34;
	// UnityEngine.Coroutine TMPro.TMP_Dropdown::m_Coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_Coroutine_35;
};

struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_StaticFields
{
	// TMPro.TMP_Dropdown/OptionData TMPro.TMP_Dropdown::s_NoOptionData
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* ___s_NoOptionData_36;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};

// Vuforia.ScalableDataSetTrackableBehaviour
struct ScalableDataSetTrackableBehaviour_tC0985C18F93D61F367025B09CA45401C82592B8A  : public DataSetTrackableBehaviour_tC09F7225D59E476738430EC99104A6455579452F
{
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// Vuforia.ImageTargetBehaviour
struct ImageTargetBehaviour_t014481FC6A8B819C2BCE7922BA6BD53E1B23F120  : public ScalableDataSetTrackableBehaviour_tC0985C18F93D61F367025B09CA45401C82592B8A
{
	// System.Single Vuforia.ImageTargetBehaviour::mAspectRatio
	float ___mAspectRatio_14;
	// Vuforia.ImageTargetType Vuforia.ImageTargetBehaviour::mImageTargetType
	int32_t ___mImageTargetType_15;
	// System.Single Vuforia.ImageTargetBehaviour::mWidth
	float ___mWidth_16;
	// System.Single Vuforia.ImageTargetBehaviour::mHeight
	float ___mHeight_17;
	// UnityEngine.Texture2D Vuforia.ImageTargetBehaviour::mRuntimeTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mRuntimeTexture_18;
	// Vuforia.DataSetTrackableBehaviour/TargetMotionHint Vuforia.ImageTargetBehaviour::mMotionHint
	int32_t ___mMotionHint_19;
	// Vuforia.TrackingOptimization Vuforia.ImageTargetBehaviour::mTrackingOptimization
	int32_t ___mTrackingOptimization_20;
	// System.Boolean Vuforia.ImageTargetBehaviour::mTrackingOptimizationNeedsUpgrade
	bool ___mTrackingOptimizationNeedsUpgrade_21;
	// Vuforia.ImageTargetPreview Vuforia.ImageTargetBehaviour::mPreview
	ImageTargetPreview_tC3CEEA7E57439F3D488B9F24D2DA2E2C07BD4AF2* ___mPreview_22;
	// UnityEngine.Vector2 Vuforia.ImageTargetBehaviour::mLastSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___mLastSize_23;
	// System.Collections.Generic.List`1<Vuforia.VirtualButtonBehaviour> Vuforia.ImageTargetBehaviour::mVirtualButtonBehaviours
	List_1_t7F11ABA4A96E2842FB0A540B2DB6A4A521CAB024* ___mVirtualButtonBehaviours_24;
	// Vuforia.Internal.Observers.ImageTargetObserver Vuforia.ImageTargetBehaviour::mImageTargetObserver
	ImageTargetObserver_t37CA9AEAE11535DFD06CD5C9D7D2F356A5D20252* ___mImageTargetObserver_25;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Wall[]
struct WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A  : public RuntimeArray
{
	ALIGN_FIELD (8) Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* m_Items[1];

	inline Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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
// Building[]
struct BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923  : public RuntimeArray
{
	ALIGN_FIELD (8) Building_t950D5394E080624D7E96B158EF852EA16ADB3650* m_Items[1];

	inline Building_t950D5394E080624D7E96B158EF852EA16ADB3650* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Building_t950D5394E080624D7E96B158EF852EA16ADB3650** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Building_t950D5394E080624D7E96B158EF852EA16ADB3650* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Building_t950D5394E080624D7E96B158EF852EA16ADB3650** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Item[]
struct ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_tFAF77888D49883A321EB596A7D93CB5615D37E95 m_Items[1];

	inline Item_tFAF77888D49883A321EB596A7D93CB5615D37E95 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
	}
	inline Item_tFAF77888D49883A321EB596A7D93CB5615D37E95 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
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
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<System.Object>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisRuntimeObject_m8F426832790ADC614F3A870ECFAB11ABBBDDDC43_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___task0, Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678* ___continuation1, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEEDC2AB1698F53638F4F021C54FE68E9F6CCE675_gshared (List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildMarkup>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD330AE904D9B8C6FA57A125CD4DF59CD2A8924F6_gshared (List_1_t8B9DB0A01D774511439B01CEE9DFFF358640164F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m837E368441DD3CCBE12F2CF8D11983926A999A28_gshared (Action_1_tE3E694A2F100A2CF4074391F82A671EDA972F099* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.Linq.JToken::ToObject<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JToken_ToObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DFE617439C21A755062578D82CB788A379344B7_gshared (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* __this, const RuntimeMethod* method) ;
// T Newtonsoft.Json.Linq.JToken::ToObject<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JToken_ToObject_TisRuntimeObject_m60590FEF9C8FE15CB8D077C39B8E852F4C34E872_gshared (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mCFA770E39C25CD56F9F1DAFFD3D511898715E91F_gshared_inline (Action_1_tE3E694A2F100A2CF4074391F82A671EDA972F099* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___obj0, const RuntimeMethod* method) ;

// System.Void DatabaseObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseObject__ctor_m3956E795269A15C7240827FDF65BEE351B08E37A (DatabaseObject_t1196001559FD7BD1D56B995A6BCD1681AFDF8027* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void BuildingCreator::InstantiateWallObjectPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_InstantiateWallObjectPool_m87364E4D8128D8601C6D50FA83D150F6C92AF5BA (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B (int32_t ___type0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void BuildingViewModel::add_CurrentBuildingChanged(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingViewModel_add_CurrentBuildingChanged_mD683148A64540FA5F9FC94CC7D15060A6304572F (BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// Building BuildingViewModel::get_CurrentBuilding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Building_t950D5394E080624D7E96B158EF852EA16ADB3650* BuildingViewModel_get_CurrentBuilding_m74AA67A13FD2C4D31D0F8AB2D16EA6B8028F8016 (BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* __this, const RuntimeMethod* method) ;
// System.Void BuildingCreator::LoadWalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_LoadWalls_m5877C2D30A1289DED21147170127145C2409B68A (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) ;
// System.Void BuildingCreator::LoadFloor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_LoadFloor_m63A389ED219A1B3B6508934F6D11C922CB95C8AC (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) ;
// System.Void BuildingCreator::LoadImageTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_LoadImageTargets_mAA3BD70A1B1B4513CF7E484464EA11C1F65B11C5 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) ;
// System.Void BuildingCreator/WallsUpdatedEventHandler::Invoke(Wall[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_inline (WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,ImageTarget>::get_Values()
inline ValueCollection_t9AF32A1C1ECE9976F08DCAEBB28E21D5D9662D2D* Dictionary_2_get_Values_mCD3E5F4E44EECB46398E35C4821E3BE80BFBDCE5 (Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t9AF32A1C1ECE9976F08DCAEBB28E21D5D9662D2D* (*) (Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,ImageTarget>::GetEnumerator()
inline Enumerator_tF9A9B43BBD2454FB4753D5CEBEBF0C6E068FEEC7 ValueCollection_GetEnumerator_mDC0CD446FBA484D41C930B586C8C7F2DC707555E (ValueCollection_t9AF32A1C1ECE9976F08DCAEBB28E21D5D9662D2D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF9A9B43BBD2454FB4753D5CEBEBF0C6E068FEEC7 (*) (ValueCollection_t9AF32A1C1ECE9976F08DCAEBB28E21D5D9662D2D*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,ImageTarget>::Dispose()
inline void Enumerator_Dispose_mE4AA7A74E351588144E95579F7AB508CED27DC3F (Enumerator_tF9A9B43BBD2454FB4753D5CEBEBF0C6E068FEEC7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF9A9B43BBD2454FB4753D5CEBEBF0C6E068FEEC7*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,ImageTarget>::get_Current()
inline ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* Enumerator_get_Current_m1171AD313F48A4B91912FB5F6989891BDAC99FFD_inline (Enumerator_tF9A9B43BBD2454FB4753D5CEBEBF0C6E068FEEC7* __this, const RuntimeMethod* method)
{
	return ((  ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* (*) (Enumerator_tF9A9B43BBD2454FB4753D5CEBEBF0C6E068FEEC7*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m1797365F78319B68638DE8BB02836F8D60760041 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) ;
// Vuforia.VuforiaBehaviour Vuforia.VuforiaBehaviour::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0 (const RuntimeMethod* method) ;
// Vuforia.ObserverFactory Vuforia.VuforiaBehaviour::get_ObserverFactory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObserverFactory_t15303B50E9714D21517E15020805420A68418285* VuforiaBehaviour_get_ObserverFactory_m58CBBB055DA900E6F04BC2605833C687C1C38B0F_inline (VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* __this, const RuntimeMethod* method) ;
// Vuforia.ImageTargetBehaviour Vuforia.ObserverFactory::CreateImageTarget(UnityEngine.Texture2D,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageTargetBehaviour_t014481FC6A8B819C2BCE7922BA6BD53E1B23F120* ObserverFactory_CreateImageTarget_m8C7C9E66AB49D825DAAE276DE9E56A60D898294B (ObserverFactory_t15303B50E9714D21517E15020805420A68418285* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, float ___widthInMeters1, String_t* ___targetName2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<DefaultObserverEventHandler>()
inline DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0* GameObject_AddComponent_TisDefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0_m55DBAFA25D3E78827B9F1395D9C33E63C4A09C37 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,ImageTarget>::MoveNext()
inline bool Enumerator_MoveNext_mC2958A78469D10C6E71BBA5EAF972A962F725F9B (Enumerator_tF9A9B43BBD2454FB4753D5CEBEBF0C6E068FEEC7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF9A9B43BBD2454FB4753D5CEBEBF0C6E068FEEC7*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform BuildingCreator::CreateWall(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BuildingCreator_CreateWall_mC873FF7A34D80EAC5DA7CAE7375827503F532E13 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single Wall::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Wall_get_Length_mB8AB6207AEB4D490DBD378466DC4A463464350E1 (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void ExtensionMethods.TransormExtensions::SetPositionAndRotation(UnityEngine.Transform,IWorldObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransormExtensions_SetPositionAndRotation_mA01C31412B17250D9C8D7116D8C1CF8888BC5FE5 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, RuntimeObject* ___worldObject1, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Single BuildingCreator::MaxOfThree(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BuildingCreator_MaxOfThree_m724F033A62CC5DF256626D3689CA7B36DE384D2E (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, float ___a0, float ___b1, float ___c2, const RuntimeMethod* method) ;
// System.Single BuildingCreator::MinOfThree(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BuildingCreator_MinOfThree_m7EB41EF72CBC2CB2AB9FEBD91A37F654C1664600 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, float ___a0, float ___b1, float ___c2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void BuildingCreator::LoadNewBuilding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_LoadNewBuilding_mD154CFD0C2242B004A0FD3089FA66F123DBC0435 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) ;
// System.Void FirebaseRepository::add_BuildingsUpdated(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRepository_add_BuildingsUpdated_m4928A3317EAD405D5D7076DAD6E9E3CC6B6C7949 (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// Building[] FirebaseRepository::get_Buildings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* FirebaseRepository_get_Buildings_m327A472EEEB930B104751BBE9BFCE14C0289A63D (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, const RuntimeMethod* method) ;
// System.Void BuildingViewModel::set_CurrentBuilding(Building)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingViewModel_set_CurrentBuilding_mF38C5360C9F1F927939F44BA109FFBC131DD0E04 (BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___value0, const RuntimeMethod* method) ;
// System.Void DropdownWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropdownWrapper__ctor_mCA6963896980B7E70AFCB25DD25582A1A268FB9C (DropdownWrapper_t2B8B735C169F927DE94408005160FB905E00CBB1* __this, const RuntimeMethod* method) ;
// System.Void DropdownWrapper::UpdateDropdownOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropdownWrapper_UpdateDropdownOptions_m362E9A81EEFD1AE79DC84713FFC590C277AF4720 (DropdownWrapper_t2B8B735C169F927DE94408005160FB905E00CBB1* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) ;
// System.Void BuildingViewModel/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mC0FFC1556940E89E3EC7421402AF0475E97ED604 (U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void FirebaseRepository::remove_BuildingsUpdated(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRepository_remove_BuildingsUpdated_mD930E7082D8875DAF82384BF6D90B2F6B0644049 (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<TMPro.TMP_Dropdown>(T&)
inline bool GameObject_TryGetComponent_TisTMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_m3E70D234E806B9EC31E4E572CB72CE14733F52C0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// TMPro.TMP_Dropdown/DropdownEvent TMPro.TMP_Dropdown::get_onValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* TMP_Dropdown_get_onValueChanged_mC5A65068BFDC48C26FAC4B6FB2C0983633168BFF (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, const RuntimeMethod*))UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared)(__this, ___call0, method);
}
// System.Void System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>::.ctor()
inline void List_1__ctor_mE80F02484ED836571C16C2A0C39181A5E707536B (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void TMPro.TMP_Dropdown::set_options(System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_set_options_m4CD66EEEFDF53BAD9862AA2768F6048B2CA5B2AD (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown/OptionData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m5B8E6B683070AB406FA738E689E2FD4055697FB6 (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown/OptionData::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData_set_text_mFF1E8A215A399CB9EA9DDFB0C6F3B9F068837226 (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> TMPro.TMP_Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5 (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>::Add(T)
inline void List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* __this, OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52*, OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void ImageTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTarget__ctor_m33BD0D6EA7CD4146FD8D8A9E47987C03CACBDF5D (ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Item::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Item_get_Position_mCDB77F22D214AA79575FA7407EB97E90FEA3D9EC (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Item::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Item_get_Rotation_m189F56622D76679932945D4199BD63B543FC7B09 (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* FirebaseDatabase_get_DefaultInstance_m5D2694D707EAE163776CC0FF92B92537BDD59118 (const RuntimeMethod* method) ;
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434 (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) ;
// System.Void FirebaseRepository::FetchBuildingCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRepository_FetchBuildingCollection_m370EA8C6E300DE7E30F923BA9B887A6593B361AE (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void FirebaseRepository/<SignInUser>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInUserU3Ed__12__ctor_m4A32BBCA3EFFCA9965FBFC82187A4771EFB8FAF2 (U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void FirebaseRepository/<UploadImageTarget>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadImageTargetU3Ed__13__ctor_m8083448B1958DE74FFCDCF04C30A89DD10E90286 (U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, String_t* ___pathString0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* Query_GetValueAsync_mFEB57CCE078D10FC3A6DA6DA2A7DCD16CC4673F5 (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m47FFCA5D7CA1940EDC58E9D6F823C7710794F537 (Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<Firebase.Database.DataSnapshot>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663 (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* ___task0, Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* ___continuation1, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50*, Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756*, const RuntimeMethod*))TaskExtension_ContinueWithOnMainThread_TisRuntimeObject_m8F426832790ADC614F3A870ECFAB11ABBBDDDC43_gshared)(___task0, ___continuation1, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>::get_Result()
inline DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* __this, const RuntimeMethod* method)
{
	return ((  DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* (*) (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.Int64 Firebase.Database.DataSnapshot::get_ChildrenCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DataSnapshot_get_ChildrenCount_m11A46B8917211A241820AF7DA99028E05261351C (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot> Firebase.Database.DataSnapshot::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_get_Children_m5A77ABE26BB1750F85677DF6E03D02560F6F6632 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) ;
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_m71F6DF80BFBCFA8C9C2F2368AD5F6A44F5E70908 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) ;
// System.Void Building::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building__ctor_mFA4E6FF1B808B600BA046726206734FA40C5EE14 (Building_t950D5394E080624D7E96B158EF852EA16ADB3650* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.String Firebase.Database.DataSnapshot::GetRawJsonValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_GetRawJsonValue_m1C68374C193D549348050EC403C01F68AB3A1591 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.JsonUtility::FromJsonOverwrite(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_FromJsonOverwrite_mF60C8238431C1A42F7F482BB717757B281570D56 (String_t* ___json0, RuntimeObject* ___objectToOverwrite1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,ImageTarget>::.ctor()
inline void Dictionary_2__ctor_m201DB66BA6FD6B104604CB8AE9DDF1432F3297E1 (Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* DataSnapshot_Child_m308ABEC425ADE01909B1A318D61DC965802EF64C (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,ImageTarget>::Add(TKey,TValue)
inline void Dictionary_2_Add_m642D95DC21FCB4D659C1CEC8A2CC271AACB3E869 (Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF* __this, String_t* ___key0, ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF*, String_t*, ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void FirebaseRepository/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m011807B3ABD0050C2B029223103F0311F5BED357 (U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::get_Result()
inline FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* __this, const RuntimeMethod* method)
{
	return ((  FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* (*) (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.String Firebase.Auth.FirebaseUser::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0 (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* FirebaseAuth_get_DefaultInstance_m86A4E32D8DCDB80079317B58210090F3D3B1711F (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithEmailAndPasswordAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* FirebaseAuth_SignInWithEmailAndPasswordAsync_mAA4074C7F5BC11678AF9FCAFB7BE86F751072E5E (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007 (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<Firebase.Auth.FirebaseUser>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___task0, Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* ___continuation1, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B*, Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*, const RuntimeMethod*))TaskExtension_ContinueWithOnMainThread_TisRuntimeObject_m8F426832790ADC614F3A870ECFAB11ABBBDDDC43_gshared)(___task0, ___continuation1, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mD288650659CF2C6F2AE39C709B535092E5CF182C_inline (KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget>::get_Value()
inline ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* KeyValuePair_2_get_Value_m0DA356BA69EC473C569F82A2F4BD59971C49B6D5_inline (KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C* __this, const RuntimeMethod* method)
{
	return ((  ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* (*) (KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetRawJsonValueAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DatabaseReference_SetRawJsonValueAsync_m9490E9CAA051A1E371954DF33B34505FC09AA080 (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, String_t* ___jsonValue0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.AI.Navigation.NavMeshSurface>()
inline NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* Component_GetComponent_TisNavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8_mDAFE31CD98EDC75F0630DDB68F748F84CF5316D0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void BuildingCreator/WallsUpdatedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallsUpdatedEventHandler__ctor_mAB8C00748AE7E8B0DDC77B7D06ED8A35750C44DF (WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void BuildingCreator::add_WallsUpdated(BuildingCreator/WallsUpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_add_WallsUpdated_m9C85A5AEF04E1BEE7423FE20DE92AA837DC5BE32 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator NavBaker::BuildNavMeshCor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavBaker_BuildNavMeshCor_mD7CCFC55BAAD109DD081533FDC698D0D95193BAA (NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void NavBaker/<BuildNavMeshCor>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildNavMeshCorU3Ed__8__ctor_m0A874B13FC8ED8A98EAA94D9C24644F36938551F (U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.AI.NavMeshBuildSettings Unity.AI.Navigation.NavMeshSurface::GetBuildSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D NavMeshSurface_GetBuildSettings_mF3CF542BB01AF3C6C6A6892A5D0A4C61C2FFF4F9 (NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>::.ctor()
inline void List_1__ctor_mEEDC2AB1698F53638F4F021C54FE68E9F6CCE675 (List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3*, const RuntimeMethod*))List_1__ctor_mEEDC2AB1698F53638F4F021C54FE68E9F6CCE675_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildMarkup>::.ctor()
inline void List_1__ctor_mD330AE904D9B8C6FA57A125CD4DF59CD2A8924F6 (List_1_t8B9DB0A01D774511439B01CEE9DFFF358640164F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B9DB0A01D774511439B01CEE9DFFF358640164F*, const RuntimeMethod*))List_1__ctor_mD330AE904D9B8C6FA57A125CD4DF59CD2A8924F6_gshared)(__this, method);
}
// UnityEngine.LayerMask Unity.AI.Navigation.NavMeshSurface::get_layerMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB NavMeshSurface_get_layerMask_m7F1AD8AF594B9939BC4710C6D125FECACA3CA3AC (NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.AI.NavMeshCollectGeometry Unity.AI.Navigation.NavMeshSurface::get_useGeometry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshSurface_get_useGeometry_m72C055217C16DC4A6850627E98DB51CCABA5538B (NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.AI.Navigation.NavMeshSurface::get_defaultArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshSurface_get_defaultArea_m9763C2DF8366180B1162CA247504E1CD4EA4F404 (NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshBuilder::CollectSources(UnityEngine.Transform,System.Int32,UnityEngine.AI.NavMeshCollectGeometry,System.Int32,System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildMarkup>,System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshBuilder_CollectSources_m0C96E1DB13DCEFE45CDF53F044B1D5B1CB51313E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root0, int32_t ___includedLayerMask1, int32_t ___geometry2, int32_t ___defaultArea3, List_1_t8B9DB0A01D774511439B01CEE9DFFF358640164F* ___markups4, List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* ___results5, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshData__ctor_m2C0DE2AACB529EE0ABB27F514E4968F62BE97C72 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* __this, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.AI.NavMeshBuilder::UpdateNavMeshDataAsync(UnityEngine.AI.NavMeshData,UnityEngine.AI.NavMeshBuildSettings,System.Collections.Generic.List`1<UnityEngine.AI.NavMeshBuildSource>,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* NavMeshBuilder_UpdateNavMeshDataAsync_mE11626461F878CE8C00462DC1FA13736D6B28D52 (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___data0, NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D ___buildSettings1, List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* ___sources2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___localBounds3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMesh::RemoveAllNavMeshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMesh_RemoveAllNavMeshData_m02AE3C675DA1B315CB6B47969B7633B920A9FCAF (const RuntimeMethod* method) ;
// UnityEngine.AI.NavMeshDataInstance UnityEngine.AI.NavMesh::AddNavMeshData(UnityEngine.AI.NavMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 NavMesh_AddNavMeshData_mF8AA70956909F02883A0D11E4052D4783604884A (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* ___navMeshData0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sourcePosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition1, int32_t ___areaMask2, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path3, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void TestScript/<RetrieveTextureFromWeb>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetrieveTextureFromWebU3Ed__6__ctor_mFF7CDE36384581D13DB03FDF07719CCA8BCA09C8 (U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String Vuforia.ObserverBehaviour::get_TargetName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ObserverBehaviour_get_TargetName_mFB6FC5459068E0E9800E2C8AFFEF6F8F48297AB1_inline (ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void TestScript/<RetrieveTextureFromWeb>d__6::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetrieveTextureFromWebU3Ed__6_U3CU3Em__Finally1_mD82E12F44D32370AF15B47C39098149F30E31DBB (U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090* __this, const RuntimeMethod* method) ;
// System.Void TestScript/<RetrieveTextureFromWeb>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetrieveTextureFromWebU3Ed__6_System_IDisposable_Dispose_m35EB38CA24C5B3A9C922F0ECB62F2EEC98086A52 (U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestTexture_GetTexture_mEEC74BBC5190D4012A0B87C5D439AF59E22EF2EF (String_t* ___uri0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_GetContent_m86BC88F58305A1B21C21CE7D82658197932EFB18 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www0, const RuntimeMethod* method) ;
// System.Void TestScript::CreateImageTargetFromTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestScript_CreateImageTargetFromTexture_mC4374FD8C340CC2BFCA912047AE477D1F644F707 (TestScript_t6D759E079BA3FEA034493A5F329125444C6E8F1A* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, const RuntimeMethod* method) ;
// Vuforia.VuforiaApplication Vuforia.VuforiaApplication::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* VuforiaApplication_get_Instance_mAD5B1238C27A229C127BD1E44677713D1CE0FC03 (const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Vuforia.VuforiaApplication::add_OnVuforiaStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaApplication_add_OnVuforiaStarted_mE13713AD839E4F3A635FF321BF28BE990F6E49CE (VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Vuforia.VuforiaApplication::add_OnVuforiaPaused(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaApplication_add_OnVuforiaPaused_m56715B6BF9C247D34A3563D93045F91BC9DC0517 (VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) ;
// Vuforia.World Vuforia.VuforiaBehaviour::get_World()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* VuforiaBehaviour_get_World_m14A8271B023273D49C261BE6EC1378C16EB7B900_inline (VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* __this, const RuntimeMethod* method) ;
// System.Void Vuforia.World::add_OnStateUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_add_OnStateUpdated_mA376BD9928E49474C1A020C81AC8C2A9C0D04BC9 (World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Vuforia.VuforiaApplication::remove_OnVuforiaStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaApplication_remove_OnVuforiaStarted_m5D03D7619DABF168B877F079AEA48AEB98104B7D (VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Vuforia.VuforiaApplication::remove_OnVuforiaPaused(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaApplication_remove_OnVuforiaPaused_mFC1B8A942A8E8C31DBA07FBD71C41773A2C8631A (VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) ;
// System.Void Vuforia.World::remove_OnStateUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_remove_OnStateUpdated_mD87D14C47D5D5B6E38EEA3370E04258FC58FFD8A (World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// Vuforia.CameraDevice Vuforia.VuforiaBehaviour::get_CameraDevice()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* VuforiaBehaviour_get_CameraDevice_m2B852D0BE38060B0B933A903E97F2278EE97BEEA_inline (VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* __this, const RuntimeMethod* method) ;
// Vuforia.Image Vuforia.CameraDevice::GetCameraImage(Vuforia.PixelFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tC8F1E47959853F15CF7B56529F313496B2DD740B* CameraDevice_GetCameraImage_mEAFCDA913F72B58D9C1B88C73B2F3722540076F4 (CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* __this, int32_t ___format0, const RuntimeMethod* method) ;
// System.Void Vuforia.Image::CopyBufferToTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_CopyBufferToTexture_m36F41725E7564CC7CC9D9FEE6C76E52746B4FF18 (Image_tC8F1E47959853F15CF7B56529F313496B2DD740B* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void CameraImageAccess::UnregisterFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageAccess_UnregisterFormat_m9DE847283139BE3292766142E29F081D764F4957 (CameraImageAccess_t57DEFBCE790B5BB36FA653DD5A23463B4CF007DD* __this, const RuntimeMethod* method) ;
// System.Void CameraImageAccess::RegisterFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageAccess_RegisterFormat_m2CCE0BE3E7CB9CA726D8827114C18C06274A2226 (CameraImageAccess_t57DEFBCE790B5BB36FA653DD5A23463B4CF007DD* __this, const RuntimeMethod* method) ;
// System.Boolean Vuforia.CameraDevice::SetFrameFormat(Vuforia.PixelFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraDevice_SetFrameFormat_m42A7D34E97602FFAB10DB1ACAC7736EE026A2B6E (CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* __this, int32_t ___format0, bool ___enabled1, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void NativeCamera/CameraCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback__ctor_m39376148047C9B1A537BC5DB202E142431A77AFE (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// NativeCamera/Permission NativeCamera::TakePicture(NativeCamera/CameraCallback,System.Int32,System.Boolean,NativeCamera/PreferredCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera_TakePicture_mC2A748E023DC5C34D19AF571325AF952A714AAD4 (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* ___callback0, int32_t ___maxSize1, bool ___saveAsJPEG2, int32_t ___preferredCamera3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mAC8E9144DB5AC0712B8E6649B0E4112F6188CDB2 (Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m837E368441DD3CCBE12F2CF8D11983926A999A28_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.IEnumerator VuforiaRepository::CreateImageTarget(UnityEngine.Texture2D,System.Action`1<System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuforiaRepository_CreateImageTarget_mC77E3809FBD901BE7CC97F33836C47FFEA902E71 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB* ___callback1, const RuntimeMethod* method) ;
// System.Void ImageUploader/<TryGetRating>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGetRatingU3Ed__7__ctor_m5F1A521B121881115978521A7A30C0A26691383F (U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Texture2D NativeCamera::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeCamera_LoadImageAtPath_m0F2B227CF63FE99A67155B8C52A719AF5949C747 (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method) ;
// System.Void ImageUploader::TryUploadTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageUploader_TryUploadTexture_m49882DF77EB8F124D3DDCE56EF3863E22C5CBBCA (ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8* __this, const RuntimeMethod* method) ;
// System.Void ImageUploader/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m63A1A46D2EA583CBEED6826B55288222D480444A (U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445* __this, const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.IEnumerator ImageUploader::TryGetRating(System.String,System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageUploader_TryGetRating_m0375D17DD9317E94770C7E628FBF462E35A84CF7 (ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8* __this, String_t* ___targetId0, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___callback1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FirebaseRepository::UploadImageTarget(System.String,System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseRepository_UploadImageTarget_m22DF19AC205C17BCB7F12B4B7ECDBCDA714D3E83 (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, String_t* ___buildingId0, KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C ___imageTarget1, const RuntimeMethod* method) ;
// System.Void ImageUploader/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mFC7F11C8D7D8C786EAD8BBE408DDDCFD1DE3D3FC (U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VuforiaRepository::GetImageTargetRating(System.String,System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuforiaRepository_GetImageTargetRating_mB6966EE6E80C33DE38C892D6CF818C348032291C (String_t* ___targetId0, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___callback1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___obj0, method);
}
// System.Void VuforiaRepository/<UpdateImageTargetDimensions>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateImageTargetDimensionsU3Ed__3__ctor_mBAFC75AC667418EF68AEFB34D93720EE360F222F (U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void VuforiaRepository/<DeleteImageTarget>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteImageTargetU3Ed__4__ctor_mCA6233372207329675DC1D824D61D3F0F99772DC (U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void VuforiaRepository/<GetImageTargetRating>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetImageTargetRatingU3Ed__5__ctor_mD2591FDB293D68B0F410A33260AF88FC86B2A15F (U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void VuforiaRepository/<CreateImageTarget>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateImageTargetU3Ed__6__ctor_m358174F15127A54C36D3EB9B8C61BB3650684AFC (U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Security.Cryptography.MD5 System.Security.Cryptography.MD5::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* MD5_Create_mD7AEBE7A752D163971C764A9A8CC0029C865F223 (const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.HMACSHA1::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMACSHA1__ctor_mC50ADF9333EE40240D96377069CD32E0D373ECCE (HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inArray0, const RuntimeMethod* method) ;
// System.Void VuforiaRepository/<UpdateImageTargetDimensions>d__3::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateImageTargetDimensionsU3Ed__3_U3CU3Em__Finally1_m129B034C1DCDF05B14ED0E810BAC6522263A2BAD (U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39* __this, const RuntimeMethod* method) ;
// System.Void VuforiaRepository/<UpdateImageTargetDimensions>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateImageTargetDimensionsU3Ed__3_System_IDisposable_Dispose_m0F3A7DC70E7B5768213508C9CA9CED26FC3DF613 (U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39* __this, const RuntimeMethod* method) ;
// System.Void PatchImageTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PatchImageTarget__ctor_m418833AAAF50EB493ADD102BF77166FB2E35A902 (PatchImageTarget_tA48F50DFD12C321D3CDA22622FCA247829F0207B* __this, const RuntimeMethod* method) ;
// System.String VuforiaRepository::GetDateNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VuforiaRepository_GetDateNow_m9909DB641278DE815A6552352106FBF2A519FEDD (const RuntimeMethod* method) ;
// System.String VuforiaRepository::GetVWSAuth(System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VuforiaRepository_GetVWSAuth_mE596C73ED6191272068D9C03B768B78EB5A69E23 (String_t* ___http_verb0, String_t* ___content1, String_t* ___content_type2, String_t* ___date3, String_t* ___requestPath4, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Put_mC7DF84F2C091ABB8D930BFEC5F648DB90AFD842F (String_t* ___uri0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bodyData1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.Void VuforiaRepository/<DeleteImageTarget>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteImageTargetU3Ed__4_U3CU3Em__Finally1_m1943F53017E2E3EFE3E617C8AC776C74021E831D (U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E* __this, const RuntimeMethod* method) ;
// System.Void VuforiaRepository/<DeleteImageTarget>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteImageTargetU3Ed__4_System_IDisposable_Dispose_mFAE0D2C63BCDACC6947BEFE994D6338F2777443E (U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Delete_mB86F20E8BF883C7F5831ED29A9ADF2A54E7F7021 (String_t* ___uri0, const RuntimeMethod* method) ;
// System.Void VuforiaRepository/<GetImageTargetRating>d__5::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetImageTargetRatingU3Ed__5_U3CU3Em__Finally1_mBC583F8BDF59C5087BC015970BFEE3F8BAD033B5 (U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81* __this, const RuntimeMethod* method) ;
// System.Void VuforiaRepository/<GetImageTargetRating>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetImageTargetRatingU3Ed__5_System_IDisposable_Dispose_m9BD281E3897480E001BC94ACBB4D8979B5470989 (U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86 (String_t* ___uri0, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43 (String_t* ___json0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JObject_get_Item_m889A29E8FCEA531AF829407F208DD05F0108C50B (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.Linq.JToken::ToObject<System.Int32>()
inline int32_t JToken_ToObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DFE617439C21A755062578D82CB788A379344B7 (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3*, const RuntimeMethod*))JToken_ToObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DFE617439C21A755062578D82CB788A379344B7_gshared)(__this, method);
}
// System.Void VuforiaRepository/<CreateImageTarget>d__6::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateImageTargetU3Ed__6_U3CU3Em__Finally1_mECD0D11DFEA98BA68BC45E71F7E4A4388BCE7C5F (U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE* __this, const RuntimeMethod* method) ;
// System.Void VuforiaRepository/<CreateImageTarget>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateImageTargetU3Ed__6_System_IDisposable_Dispose_m3F72879825F6C3836336A624EF174B8EA3E5261A (U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE* __this, const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors0, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToJPG_mD3B358B8645CF85EBAD979554FFDE05A54A99804 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, const RuntimeMethod* method) ;
// System.String VuforiaRepository::GetRandomString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VuforiaRepository_GetRandomString_m6EE6A917D2FDE3BE6C31979D5763D03D1E55DFFA (int32_t ___length0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373 (String_t* ___uri0, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___formData1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___value0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.Linq.JToken::ToObject<System.String>()
inline String_t* JToken_ToObject_TisString_t_m24A2444CF94E8759ECB9DA2C94349E16C95CFE48 (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3*, const RuntimeMethod*))JToken_ToObject_TisRuntimeObject_m60590FEF9C8FE15CB8D077C39B8E852F4C34E872_gshared)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m5ABBD3A8519075375F31B4EF37E1D4ECD25E909C (KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C* __this, String_t* ___key0, ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C*, String_t*, ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget>>::Invoke(T)
inline void Action_1_Invoke_mC1B314AE030CD140BC556A0DD6FEBEE9D96BA995_inline (Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB* __this, KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB*, KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C, const RuntimeMethod*))Action_1_Invoke_mCFA770E39C25CD56F9F1DAFFD3D511898715E91F_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void Building::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building__ctor_mFA4E6FF1B808B600BA046726206734FA40C5EE14 (Building_t950D5394E080624D7E96B158EF852EA16ADB3650* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	{
		// public Building(string id) : base(id) { }
		String_t* L_0 = ___id0;
		DatabaseObject__ctor_m3956E795269A15C7240827FDF65BEE351B08E37A(__this, L_0, NULL);
		// public Building(string id) : base(id) { }
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
// System.Void BuildingCreator::add_WallsUpdated(BuildingCreator/WallsUpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_add_WallsUpdated_m9C85A5AEF04E1BEE7423FE20DE92AA837DC5BE32 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* V_0 = NULL;
	WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* V_1 = NULL;
	WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* V_2 = NULL;
	{
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_0 = __this->___WallsUpdated_5;
		V_0 = L_0;
	}

IL_0007:
	{
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_1 = V_0;
		V_1 = L_1;
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_2 = V_1;
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190*)CastclassSealed((RuntimeObject*)L_4, WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190_il2cpp_TypeInfo_var));
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190** L_5 = (&__this->___WallsUpdated_5);
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_6 = V_2;
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_7 = V_1;
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_8;
		L_8 = InterlockedCompareExchangeImpl<WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190*>(L_5, L_6, L_7);
		V_0 = L_8;
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_9 = V_0;
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_10 = V_1;
		if ((!(((RuntimeObject*)(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190*)L_9) == ((RuntimeObject*)(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void BuildingCreator::remove_WallsUpdated(BuildingCreator/WallsUpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_remove_WallsUpdated_m2BF030F5FBD35C639FA3F0D5F36410CEAC177F20 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* V_0 = NULL;
	WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* V_1 = NULL;
	WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* V_2 = NULL;
	{
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_0 = __this->___WallsUpdated_5;
		V_0 = L_0;
	}

IL_0007:
	{
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_1 = V_0;
		V_1 = L_1;
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_2 = V_1;
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190*)CastclassSealed((RuntimeObject*)L_4, WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190_il2cpp_TypeInfo_var));
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190** L_5 = (&__this->___WallsUpdated_5);
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_6 = V_2;
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_7 = V_1;
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_8;
		L_8 = InterlockedCompareExchangeImpl<WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190*>(L_5, L_6, L_7);
		V_0 = L_8;
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_9 = V_0;
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_10 = V_1;
		if ((!(((RuntimeObject*)(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190*)L_9) == ((RuntimeObject*)(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void BuildingCreator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_Awake_m5A3795B3859FD20A8005387153243A3836616AC4 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingCreator_U3CAwakeU3Eb__13_0_mEC8C973F928E0433E54D51D0BAE48E5101B7DE11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2886387B11CFFC71ECF9EFF9CECC0B003CFAD505);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B8A636FED687923E28D69542E3847323D850EDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InstantiateWallObjectPool();
		BuildingCreator_InstantiateWallObjectPool_m87364E4D8128D8601C6D50FA83D150F6C92AF5BA(__this, NULL);
		// floor = GameObject.CreatePrimitive(PrimitiveType.Plane);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(4, NULL);
		__this->___floor_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___floor_12), (void*)L_0);
		// floor.gameObject.name = "Floor";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___floor_12;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_1, NULL);
		NullCheck(L_2);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_2, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		// floor.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___floor_12;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_4, L_5, NULL);
		// floor.layer = LayerMask.NameToLayer("Geometry");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___floor_12;
		int32_t L_7;
		L_7 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral2886387B11CFFC71ECF9EFF9CECC0B003CFAD505, NULL);
		NullCheck(L_6);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_6, L_7, NULL);
		// wallCollection = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_8, NULL);
		__this->___wallCollection_13 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wallCollection_13), (void*)L_8);
		// wallCollection.gameObject.name = "Walls";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___wallCollection_13;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_9, NULL);
		NullCheck(L_10);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_10, _stringLiteral9B8A636FED687923E28D69542E3847323D850EDE, NULL);
		// wallCollection.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___wallCollection_13;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_12, L_13, NULL);
		// buildingVM.CurrentBuildingChanged += new EventHandler((object sender, EventArgs args) => LoadNewBuilding());
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_14 = __this->___buildingVM_4;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_15 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_15, __this, (intptr_t)((void*)BuildingCreator_U3CAwakeU3Eb__13_0_mEC8C973F928E0433E54D51D0BAE48E5101B7DE11_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		BuildingViewModel_add_CurrentBuildingChanged_mD683148A64540FA5F9FC94CC7D15060A6304572F(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void BuildingCreator::LoadNewBuilding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_LoadNewBuilding_mD154CFD0C2242B004A0FD3089FA66F123DBC0435 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) 
{
	{
		// _walls = buildingVM.CurrentBuilding.walls;
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_0 = __this->___buildingVM_4;
		NullCheck(L_0);
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_1;
		L_1 = BuildingViewModel_get_CurrentBuilding_m74AA67A13FD2C4D31D0F8AB2D16EA6B8028F8016(L_0, NULL);
		NullCheck(L_1);
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_2 = L_1->___walls_1;
		__this->____walls_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____walls_9), (void*)L_2);
		// _imageTargets = buildingVM.CurrentBuilding.image_targets;
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_3 = __this->___buildingVM_4;
		NullCheck(L_3);
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_4;
		L_4 = BuildingViewModel_get_CurrentBuilding_m74AA67A13FD2C4D31D0F8AB2D16EA6B8028F8016(L_3, NULL);
		NullCheck(L_4);
		Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF* L_5 = L_4->___image_targets_4;
		__this->____imageTargets_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____imageTargets_10), (void*)L_5);
		// LoadWalls();
		BuildingCreator_LoadWalls_m5877C2D30A1289DED21147170127145C2409B68A(__this, NULL);
		// LoadFloor();
		BuildingCreator_LoadFloor_m63A389ED219A1B3B6508934F6D11C922CB95C8AC(__this, NULL);
		// LoadImageTargets();
		BuildingCreator_LoadImageTargets_mAA3BD70A1B1B4513CF7E484464EA11C1F65B11C5(__this, NULL);
		// WallsUpdated(_walls);
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_6 = __this->___WallsUpdated_5;
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_7 = __this->____walls_9;
		NullCheck(L_6);
		WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_inline(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void BuildingCreator::LoadImageTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_LoadImageTargets_mAA3BD70A1B1B4513CF7E484464EA11C1F65B11C5 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mCD3E5F4E44EECB46398E35C4821E3BE80BFBDCE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE4AA7A74E351588144E95579F7AB508CED27DC3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC2958A78469D10C6E71BBA5EAF972A962F725F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1171AD313F48A4B91912FB5F6989891BDAC99FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisDefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0_m55DBAFA25D3E78827B9F1395D9C33E63C4A09C37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mDC0CD446FBA484D41C930B586C8C7F2DC707555E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF9A9B43BBD2454FB4753D5CEBEBF0C6E068FEEC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* V_1 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ImageTargetBehaviour_t014481FC6A8B819C2BCE7922BA6BD53E1B23F120* V_4 = NULL;
	{
		// foreach (ImageTarget target in _imageTargets.Values)
		Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF* L_0 = __this->____imageTargets_10;
		NullCheck(L_0);
		ValueCollection_t9AF32A1C1ECE9976F08DCAEBB28E21D5D9662D2D* L_1;
		L_1 = Dictionary_2_get_Values_mCD3E5F4E44EECB46398E35C4821E3BE80BFBDCE5(L_0, Dictionary_2_get_Values_mCD3E5F4E44EECB46398E35C4821E3BE80BFBDCE5_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_tF9A9B43BBD2454FB4753D5CEBEBF0C6E068FEEC7 L_2;
		L_2 = ValueCollection_GetEnumerator_mDC0CD446FBA484D41C930B586C8C7F2DC707555E(L_1, ValueCollection_GetEnumerator_mDC0CD446FBA484D41C930B586C8C7F2DC707555E_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE4AA7A74E351588144E95579F7AB508CED27DC3F((&V_0), Enumerator_Dispose_mE4AA7A74E351588144E95579F7AB508CED27DC3F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_0015_1:
			{
				// foreach (ImageTarget target in _imageTargets.Values)
				ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* L_3;
				L_3 = Enumerator_get_Current_m1171AD313F48A4B91912FB5F6989891BDAC99FFD_inline((&V_0), Enumerator_get_Current_m1171AD313F48A4B91912FB5F6989891BDAC99FFD_RuntimeMethod_var);
				V_1 = L_3;
				// var texture = new Texture2D(new int(), new int(), TextureFormat.RGB24, false);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_4, 0, 0, 3, (bool)0, NULL);
				V_2 = L_4;
				// var bytes = Convert.FromBase64String(target.image);
				ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* L_5 = V_1;
				NullCheck(L_5);
				String_t* L_6 = L_5->___image_2;
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
				L_7 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_6, NULL);
				V_3 = L_7;
				// ImageConversion.LoadImage(texture, bytes);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_3;
				bool L_10;
				L_10 = ImageConversion_LoadImage_m1797365F78319B68638DE8BB02836F8D60760041(L_8, L_9, NULL);
				// tex = texture;
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = V_2;
				__this->___tex_14 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___tex_14), (void*)L_11);
				// var vuTarget = VuforiaBehaviour.Instance.ObserverFactory.CreateImageTarget(texture, target.width, target.name);
				VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_12;
				L_12 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
				NullCheck(L_12);
				ObserverFactory_t15303B50E9714D21517E15020805420A68418285* L_13;
				L_13 = VuforiaBehaviour_get_ObserverFactory_m58CBBB055DA900E6F04BC2605833C687C1C38B0F_inline(L_12, NULL);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = V_2;
				ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* L_15 = V_1;
				NullCheck(L_15);
				float L_16 = L_15->___width_1;
				ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* L_17 = V_1;
				NullCheck(L_17);
				String_t* L_18 = L_17->___name_0;
				NullCheck(L_13);
				ImageTargetBehaviour_t014481FC6A8B819C2BCE7922BA6BD53E1B23F120* L_19;
				L_19 = ObserverFactory_CreateImageTarget_m8C7C9E66AB49D825DAAE276DE9E56A60D898294B(L_13, L_14, L_16, L_18, NULL);
				V_4 = L_19;
				// vuTarget.gameObject.AddComponent<DefaultObserverEventHandler>();
				ImageTargetBehaviour_t014481FC6A8B819C2BCE7922BA6BD53E1B23F120* L_20 = V_4;
				NullCheck(L_20);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
				L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
				NullCheck(L_21);
				DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0* L_22;
				L_22 = GameObject_AddComponent_TisDefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0_m55DBAFA25D3E78827B9F1395D9C33E63C4A09C37(L_21, GameObject_AddComponent_TisDefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0_m55DBAFA25D3E78827B9F1395D9C33E63C4A09C37_RuntimeMethod_var);
			}

IL_006f_1:
			{
				// foreach (ImageTarget target in _imageTargets.Values)
				bool L_23;
				L_23 = Enumerator_MoveNext_mC2958A78469D10C6E71BBA5EAF972A962F725F9B((&V_0), Enumerator_MoveNext_mC2958A78469D10C6E71BBA5EAF972A962F725F9B_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0089;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void BuildingCreator::InstantiateWallObjectPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_InstantiateWallObjectPool_m87364E4D8128D8601C6D50FA83D150F6C92AF5BA (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B5BBD6E325F7831D54BD41218B9B8018863F71);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// wallObjectPool = new GameObject("Wall Object Pool");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral12B5BBD6E325F7831D54BD41218B9B8018863F71, NULL);
		__this->___wallObjectPool_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wallObjectPool_11), (void*)L_0);
		// wallObjectPool.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___wallObjectPool_11;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_2, L_3, NULL);
		// wallObjectPool.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___wallObjectPool_11;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// for (int i = 0; i < initialWallCount; i++)
		V_0 = 0;
		goto IL_0051;
	}

IL_0039:
	{
		// CreateWall(wallObjectPool.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___wallObjectPool_11;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = BuildingCreator_CreateWall_mC873FF7A34D80EAC5DA7CAE7375827503F532E13(__this, L_6, NULL);
		// for (int i = 0; i < initialWallCount; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0051:
	{
		// for (int i = 0; i < initialWallCount; i++)
		int32_t L_9 = V_0;
		uint32_t L_10 = __this->___initialWallCount_8;
		V_1 = (bool)((((int64_t)((int64_t)L_9)) < ((int64_t)((int64_t)(uint64_t)L_10)))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BuildingCreator::LoadWalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_LoadWalls_m5877C2D30A1289DED21147170127145C2409B68A (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		// int activeWallCount = wallCollection.transform.childCount;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___wallCollection_13;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		V_0 = L_2;
		// if (activeWallCount > _walls.Length)
		int32_t L_3 = V_0;
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_4 = __this->____walls_9;
		NullCheck(L_4);
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_005e;
		}
	}
	{
		// for (int i = 0; i < activeWallCount - _walls.Length; i++)
		V_2 = 0;
		goto IL_004c;
	}

IL_0026:
	{
		// wallCollection.transform.GetChild(0).parent = wallObjectPool.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___wallCollection_13;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_7, 0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___wallObjectPool_11;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_8);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_8, L_10, NULL);
		// for (int i = 0; i < activeWallCount - _walls.Length; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		// for (int i = 0; i < activeWallCount - _walls.Length; i++)
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_14 = __this->____walls_9;
		NullCheck(L_14);
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(((RuntimeArray*)L_14)->max_length))))))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0026;
		}
	}
	{
	}

IL_005e:
	{
		// for (int i = 0; i < _walls.Length; i++)
		V_4 = 0;
		goto IL_0121;
	}

IL_0066:
	{
		// if (i < activeWallCount)
		int32_t L_16 = V_4;
		int32_t L_17 = V_0;
		V_6 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_008a;
		}
	}
	{
		// wallTransform = wallCollection.transform.GetChild(i);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___wallCollection_13;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		int32_t L_21 = V_4;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_20, L_21, NULL);
		V_5 = L_22;
		goto IL_00e2;
	}

IL_008a:
	{
		// else if (wallObjectPool.transform.childCount > 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___wallObjectPool_11;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_24, NULL);
		V_7 = (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_00cd;
		}
	}
	{
		// wallTransform = wallObjectPool.transform.GetChild(0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___wallObjectPool_11;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_28, 0, NULL);
		V_5 = L_29;
		// wallTransform.parent = wallCollection.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = V_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___wallCollection_13;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		NullCheck(L_30);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_30, L_32, NULL);
		goto IL_00e2;
	}

IL_00cd:
	{
		// wallTransform = CreateWall(wallCollection.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___wallCollection_13;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = BuildingCreator_CreateWall_mC873FF7A34D80EAC5DA7CAE7375827503F532E13(__this, L_34, NULL);
		V_5 = L_35;
	}

IL_00e2:
	{
		// wallTransform.localScale = new Vector3(_walls[i].Length, wallHeight, wallWidth);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = V_5;
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_37 = __this->____walls_9;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		float L_41;
		L_41 = Wall_get_Length_mB8AB6207AEB4D490DBD378466DC4A463464350E1(L_40, NULL);
		float L_42 = __this->___wallHeight_7;
		float L_43 = __this->___wallWidth_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_44), L_41, L_42, L_43, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_36, L_44, NULL);
		// wallTransform.SetPositionAndRotation(_walls[i]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = V_5;
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_46 = __this->____walls_9;
		int32_t L_47 = V_4;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		TransormExtensions_SetPositionAndRotation_mA01C31412B17250D9C8D7116D8C1CF8888BC5FE5(L_45, L_49, NULL);
		// for (int i = 0; i < _walls.Length; i++)
		int32_t L_50 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0121:
	{
		// for (int i = 0; i < _walls.Length; i++)
		int32_t L_51 = V_4;
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_52 = __this->____walls_9;
		NullCheck(L_52);
		V_8 = (bool)((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))))? 1 : 0);
		bool L_53 = V_8;
		if (L_53)
		{
			goto IL_0066;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BuildingCreator::LoadFloor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_LoadFloor_m63A389ED219A1B3B6508934F6D11C922CB95C8AC (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	{
		// float maxX = 0;
		V_0 = (0.0f);
		// float minX = 0;
		V_1 = (0.0f);
		// float maxY = 0;
		V_2 = (0.0f);
		// float minY = 0;
		V_3 = (0.0f);
		// for (int i = 0; i < _walls.Length; i++)
		V_4 = 0;
		goto IL_00ed;
	}

IL_0021:
	{
		// Wall wall = _walls[i];
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_0 = __this->____walls_9;
		int32_t L_1 = V_4;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_5 = L_3;
		// if (i == 0)
		int32_t L_4 = V_4;
		V_6 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_6;
		if (!L_5)
		{
			goto IL_008c;
		}
	}
	{
		// maxX = Max(wall.x1, wall.x2);
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_6 = V_5;
		NullCheck(L_6);
		float L_7 = L_6->___x1_0;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_8 = V_5;
		NullCheck(L_8);
		float L_9 = L_8->___x2_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_10;
		L_10 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_7, L_9, NULL);
		V_0 = L_10;
		// minX = Min(wall.x1, wall.x2);
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_11 = V_5;
		NullCheck(L_11);
		float L_12 = L_11->___x1_0;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_13 = V_5;
		NullCheck(L_13);
		float L_14 = L_13->___x2_1;
		float L_15;
		L_15 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_12, L_14, NULL);
		V_1 = L_15;
		// maxY = Max(wall.y1, wall.y2);
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_16 = V_5;
		NullCheck(L_16);
		float L_17 = L_16->___y1_2;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_18 = V_5;
		NullCheck(L_18);
		float L_19 = L_18->___y2_3;
		float L_20;
		L_20 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_17, L_19, NULL);
		V_2 = L_20;
		// minY = Min(wall.y1, wall.y2);
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_21 = V_5;
		NullCheck(L_21);
		float L_22 = L_21->___y1_2;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_23 = V_5;
		NullCheck(L_23);
		float L_24 = L_23->___y2_3;
		float L_25;
		L_25 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_22, L_24, NULL);
		V_3 = L_25;
		goto IL_00e6;
	}

IL_008c:
	{
		// maxX = MaxOfThree(maxX, wall.x1, wall.x2);
		float L_26 = V_0;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_27 = V_5;
		NullCheck(L_27);
		float L_28 = L_27->___x1_0;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_29 = V_5;
		NullCheck(L_29);
		float L_30 = L_29->___x2_1;
		float L_31;
		L_31 = BuildingCreator_MaxOfThree_m724F033A62CC5DF256626D3689CA7B36DE384D2E(__this, L_26, L_28, L_30, NULL);
		V_0 = L_31;
		// minX = MinOfThree(minX, wall.x1, wall.x2);
		float L_32 = V_1;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_33 = V_5;
		NullCheck(L_33);
		float L_34 = L_33->___x1_0;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_35 = V_5;
		NullCheck(L_35);
		float L_36 = L_35->___x2_1;
		float L_37;
		L_37 = BuildingCreator_MinOfThree_m7EB41EF72CBC2CB2AB9FEBD91A37F654C1664600(__this, L_32, L_34, L_36, NULL);
		V_1 = L_37;
		// maxY = MaxOfThree(maxY, wall.y1, wall.y2);
		float L_38 = V_2;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_39 = V_5;
		NullCheck(L_39);
		float L_40 = L_39->___y1_2;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_41 = V_5;
		NullCheck(L_41);
		float L_42 = L_41->___y2_3;
		float L_43;
		L_43 = BuildingCreator_MaxOfThree_m724F033A62CC5DF256626D3689CA7B36DE384D2E(__this, L_38, L_40, L_42, NULL);
		V_2 = L_43;
		// minY = MinOfThree(minY, wall.y1, wall.y2);
		float L_44 = V_3;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_45 = V_5;
		NullCheck(L_45);
		float L_46 = L_45->___y1_2;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_47 = V_5;
		NullCheck(L_47);
		float L_48 = L_47->___y2_3;
		float L_49;
		L_49 = BuildingCreator_MinOfThree_m7EB41EF72CBC2CB2AB9FEBD91A37F654C1664600(__this, L_44, L_46, L_48, NULL);
		V_3 = L_49;
	}

IL_00e6:
	{
		// for (int i = 0; i < _walls.Length; i++)
		int32_t L_50 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00ed:
	{
		// for (int i = 0; i < _walls.Length; i++)
		int32_t L_51 = V_4;
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_52 = __this->____walls_9;
		NullCheck(L_52);
		V_7 = (bool)((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))))? 1 : 0);
		bool L_53 = V_7;
		if (L_53)
		{
			goto IL_0021;
		}
	}
	{
		// floor.transform.position = new Vector3((maxX + minX) / 2, 0, (maxY + minY) / 2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___floor_12;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		float L_56 = V_0;
		float L_57 = V_1;
		float L_58 = V_2;
		float L_59 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_60), ((float)(((float)il2cpp_codegen_add(L_56, L_57))/(2.0f))), (0.0f), ((float)(((float)il2cpp_codegen_add(L_58, L_59))/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_55);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_55, L_60, NULL);
		// floor.transform.localScale = new Vector3(Abs(maxX - minX) / 10, 0, Abs(maxY - minY) / 10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = __this->___floor_12;
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_61, NULL);
		float L_63 = V_0;
		float L_64 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_65;
		L_65 = fabsf(((float)il2cpp_codegen_subtract(L_63, L_64)));
		float L_66 = V_2;
		float L_67 = V_3;
		float L_68;
		L_68 = fabsf(((float)il2cpp_codegen_subtract(L_66, L_67)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_69), ((float)(L_65/(10.0f))), (0.0f), ((float)(L_68/(10.0f))), /*hidden argument*/NULL);
		NullCheck(L_62);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_62, L_69, NULL);
		// }
		return;
	}
}
// UnityEngine.Transform BuildingCreator::CreateWall(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BuildingCreator_CreateWall_mC873FF7A34D80EAC5DA7CAE7375827503F532E13 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2886387B11CFFC71ECF9EFF9CECC0B003CFAD505);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52AE6CA3F44DAEE1589E24134950B40011440605);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		// GameObject wall = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(3, NULL);
		V_0 = L_0;
		// wall.transform.parent = parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___parent0;
		NullCheck(L_2);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_2, L_3, NULL);
		// wall.name = "Wall (" + wallCounter.ToString() + ")";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		int32_t* L_5 = (&__this->___wallCounter_15);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral52AE6CA3F44DAEE1589E24134950B40011440605, L_6, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_4);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_4, L_7, NULL);
		// wall.gameObject.layer = LayerMask.NameToLayer("Geometry");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_8, NULL);
		int32_t L_10;
		L_10 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral2886387B11CFFC71ECF9EFF9CECC0B003CFAD505, NULL);
		NullCheck(L_9);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_9, L_10, NULL);
		// wallCounter++;
		int32_t L_11 = __this->___wallCounter_15;
		__this->___wallCounter_15 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// return wall.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		V_1 = L_13;
		goto IL_0063;
	}

IL_0063:
	{
		// }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_1;
		return L_14;
	}
}
// System.Single BuildingCreator::MaxOfThree(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BuildingCreator_MaxOfThree_m724F033A62CC5DF256626D3689CA7B36DE384D2E (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, float ___a0, float ___b1, float ___c2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float result = a;
		float L_0 = ___a0;
		V_0 = L_0;
		// result = Max(result, b);
		float L_1 = V_0;
		float L_2 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_1, L_2, NULL);
		V_0 = L_3;
		// result = Max(result, c);
		float L_4 = V_0;
		float L_5 = ___c2;
		float L_6;
		L_6 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_4, L_5, NULL);
		V_0 = L_6;
		// return result;
		float L_7 = V_0;
		V_1 = L_7;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_8 = V_1;
		return L_8;
	}
}
// System.Single BuildingCreator::MinOfThree(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BuildingCreator_MinOfThree_m7EB41EF72CBC2CB2AB9FEBD91A37F654C1664600 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, float ___a0, float ___b1, float ___c2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float result = a;
		float L_0 = ___a0;
		V_0 = L_0;
		// result = Min(result, b);
		float L_1 = V_0;
		float L_2 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_1, L_2, NULL);
		V_0 = L_3;
		// result = Min(result, c);
		float L_4 = V_0;
		float L_5 = ___c2;
		float L_6;
		L_6 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_4, L_5, NULL);
		V_0 = L_6;
		// return result;
		float L_7 = V_0;
		V_1 = L_7;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_8 = V_1;
		return L_8;
	}
}
// System.Void BuildingCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator__ctor_mEC87198F16C9F080161606CCE72745224C7B467B (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) 
{
	{
		// private int wallCounter = 0;
		__this->___wallCounter_15 = 0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void BuildingCreator::<Awake>b__13_0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_U3CAwakeU3Eb__13_0_mEC8C973F928E0433E54D51D0BAE48E5101B7DE11 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		// buildingVM.CurrentBuildingChanged += new EventHandler((object sender, EventArgs args) => LoadNewBuilding());
		BuildingCreator_LoadNewBuilding_mD154CFD0C2242B004A0FD3089FA66F123DBC0435(__this, NULL);
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
void WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_Multicast(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* currentDelegate = reinterpret_cast<WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___walls0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_OpenInst(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method)
{
	NullCheck(___walls0);
	typedef void (*FunctionPointerType) (WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___walls0, method);
}
void WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_OpenStatic(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___walls0, method);
}
void WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_OpenStaticInvoker(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* >::Invoke(__this->___method_ptr_0, method, NULL, ___walls0);
}
void WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_ClosedStaticInvoker(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___walls0);
}
void WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_OpenVirtual(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method)
{
	NullCheck(___walls0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___walls0);
}
void WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_OpenInterface(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method)
{
	NullCheck(___walls0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___walls0);
}
void WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_OpenGenericVirtual(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method)
{
	NullCheck(___walls0);
	GenericVirtualActionInvoker0::Invoke(method, ___walls0);
}
void WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_OpenGenericInterface(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method)
{
	NullCheck(___walls0);
	GenericInterfaceActionInvoker0::Invoke(method, ___walls0);
}
// System.Void BuildingCreator/WallsUpdatedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallsUpdatedEventHandler__ctor_mAB8C00748AE7E8B0DDC77B7D06ED8A35750C44DF (WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_Multicast;
}
// System.Void BuildingCreator/WallsUpdatedEventHandler::Invoke(Wall[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C (WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___walls0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult BuildingCreator/WallsUpdatedEventHandler::BeginInvoke(Wall[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WallsUpdatedEventHandler_BeginInvoke_mB895004934783328B153C3A46376C571540334A8 (WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___walls0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void BuildingCreator/WallsUpdatedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallsUpdatedEventHandler_EndInvoke_m0F948B7EC4D39C34CAA9A8142C129B4B6B1CC551 (WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void BuildingSelector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingSelector_Start_mC34D0BCF3467F270615EFF65C133978576218B63 (BuildingSelector_t1AC2812062DAB3D4B6763834547CF7517EC1EC88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingSelector_U3CStartU3Eb__2_0_mD6FEE73FAAA21D968302C455E134AAB2D570EA58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// repository.BuildingsUpdated += new EventHandler((object sender, EventArgs args) => UpdateDropdownOptions());
		FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* L_0 = __this->___repository_5;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_1, __this, (intptr_t)((void*)BuildingSelector_U3CStartU3Eb__2_0_mD6FEE73FAAA21D968302C455E134AAB2D570EA58_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		FirebaseRepository_add_BuildingsUpdated_m4928A3317EAD405D5D7076DAD6E9E3CC6B6C7949(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void BuildingSelector::OnItemSelected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingSelector_OnItemSelected_m2C1A389BC774EED15F3DF265CFF841855886906E (BuildingSelector_t1AC2812062DAB3D4B6763834547CF7517EC1EC88* __this, int32_t ___optionIndex0, const RuntimeMethod* method) 
{
	{
		// buildingVM.CurrentBuilding = repository.Buildings[optionIndex];
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_0 = __this->___buildingVM_6;
		FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* L_1 = __this->___repository_5;
		NullCheck(L_1);
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_2;
		L_2 = FirebaseRepository_get_Buildings_m327A472EEEB930B104751BBE9BFCE14C0289A63D(L_1, NULL);
		int32_t L_3 = ___optionIndex0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		BuildingViewModel_set_CurrentBuilding_mF38C5360C9F1F927939F44BA109FFBC131DD0E04(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.String[] BuildingSelector::GetDropdownNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* BuildingSelector_GetDropdownNames_m9AF1E5335C6735064E864F0E84F0EDB57BF8AEE3 (BuildingSelector_t1AC2812062DAB3D4B6763834547CF7517EC1EC88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	{
		// Building[] buildings = repository.Buildings;
		FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* L_0 = __this->___repository_5;
		NullCheck(L_0);
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_1;
		L_1 = FirebaseRepository_get_Buildings_m327A472EEEB930B104751BBE9BFCE14C0289A63D(L_0, NULL);
		V_0 = L_1;
		// string[] names = new string[buildings.Length];
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_2 = V_0;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		// for (int i = 0; i < buildings.Length; i++)
		V_2 = 0;
		goto IL_0029;
	}

IL_001a:
	{
		// names[i] = buildings[i].name;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_1;
		int32_t L_5 = V_2;
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		String_t* L_10 = L_9->___name_5;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_10);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (String_t*)L_10);
		// for (int i = 0; i < buildings.Length; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0029:
	{
		// for (int i = 0; i < buildings.Length; i++)
		int32_t L_12 = V_2;
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_13 = V_0;
		NullCheck(L_13);
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_001a;
		}
	}
	{
		// return names;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_1;
		V_4 = L_15;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_4;
		return L_16;
	}
}
// System.Void BuildingSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingSelector__ctor_m379EF3C874F539D8A0E4F613D5EC0B02519EA378 (BuildingSelector_t1AC2812062DAB3D4B6763834547CF7517EC1EC88* __this, const RuntimeMethod* method) 
{
	{
		DropdownWrapper__ctor_mCA6963896980B7E70AFCB25DD25582A1A268FB9C(__this, NULL);
		return;
	}
}
// System.Void BuildingSelector::<Start>b__2_0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingSelector_U3CStartU3Eb__2_0_mD6FEE73FAAA21D968302C455E134AAB2D570EA58 (BuildingSelector_t1AC2812062DAB3D4B6763834547CF7517EC1EC88* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		// repository.BuildingsUpdated += new EventHandler((object sender, EventArgs args) => UpdateDropdownOptions());
		DropdownWrapper_UpdateDropdownOptions_m362E9A81EEFD1AE79DC84713FFC590C277AF4720(__this, NULL);
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
// Building BuildingViewModel::get_CurrentBuilding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Building_t950D5394E080624D7E96B158EF852EA16ADB3650* BuildingViewModel_get_CurrentBuilding_m74AA67A13FD2C4D31D0F8AB2D16EA6B8028F8016 (BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* __this, const RuntimeMethod* method) 
{
	Building_t950D5394E080624D7E96B158EF852EA16ADB3650* V_0 = NULL;
	{
		// get { return _currentBuilding; }
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_0 = __this->____currentBuilding_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _currentBuilding; }
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_1 = V_0;
		return L_1;
	}
}
// System.Void BuildingViewModel::set_CurrentBuilding(Building)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingViewModel_set_CurrentBuilding_mF38C5360C9F1F927939F44BA109FFBC131DD0E04 (BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___value0, const RuntimeMethod* method) 
{
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		// _currentBuilding = value;
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_0 = ___value0;
		__this->____currentBuilding_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentBuilding_5), (void*)L_0);
		// CurrentBuildingChanged?.Invoke(this, null);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = __this->___CurrentBuildingChanged_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_001c;
	}

IL_0014:
	{
		NullCheck(G_B2_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*)NULL, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void BuildingViewModel::add_CurrentBuildingChanged(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingViewModel_add_CurrentBuildingChanged_mD683148A64540FA5F9FC94CC7D15060A6304572F (BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___CurrentBuildingChanged_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___CurrentBuildingChanged_6);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void BuildingViewModel::remove_CurrentBuildingChanged(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingViewModel_remove_CurrentBuildingChanged_m4643098CB2A4EEAFAFC77083F69FBDE384290C95 (BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___CurrentBuildingChanged_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___CurrentBuildingChanged_6);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void BuildingViewModel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingViewModel_Start_m60C39998DC44F74A7D1930218B801414FD9F9CDE (BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_mEADA1AF1B122BE1405E743E2E419B1C716A1CD81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8* L_0 = (U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_mC0FFC1556940E89E3EC7421402AF0475E97ED604(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// EventHandler handler = null;
		U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8* L_2 = V_0;
		NullCheck(L_2);
		L_2->___handler_1 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___handler_1), (void*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)NULL);
		// handler = new EventHandler((object sender, EventArgs args) =>
		// {
		//     CurrentBuilding = repository.Buildings[0];
		//     repository.BuildingsUpdated -= handler;
		// });
		U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8* L_3 = V_0;
		U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8* L_4 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_5 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_mEADA1AF1B122BE1405E743E2E419B1C716A1CD81_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		L_3->___handler_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___handler_1), (void*)L_5);
		// repository.BuildingsUpdated += handler;
		FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* L_6 = __this->___repository_4;
		U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8* L_7 = V_0;
		NullCheck(L_7);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = L_7->___handler_1;
		NullCheck(L_6);
		FirebaseRepository_add_BuildingsUpdated_m4928A3317EAD405D5D7076DAD6E9E3CC6B6C7949(L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void BuildingViewModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingViewModel__ctor_m125869226D661384B692F9E2440E687616E8D373 (BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* __this, const RuntimeMethod* method) 
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
// System.Void BuildingViewModel/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mC0FFC1556940E89E3EC7421402AF0475E97ED604 (U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BuildingViewModel/<>c__DisplayClass8_0::<Start>b__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_mEADA1AF1B122BE1405E743E2E419B1C716A1CD81 (U3CU3Ec__DisplayClass8_0_t89700B1F0DD6DB83C49E6FE2F6EFB2CA29FDEDB8* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		// CurrentBuilding = repository.Buildings[0];
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_0 = __this->___U3CU3E4__this_0;
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_1 = __this->___U3CU3E4__this_0;
		NullCheck(L_1);
		FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* L_2 = L_1->___repository_4;
		NullCheck(L_2);
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_3;
		L_3 = FirebaseRepository_get_Buildings_m327A472EEEB930B104751BBE9BFCE14C0289A63D(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4 = 0;
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		BuildingViewModel_set_CurrentBuilding_mF38C5360C9F1F927939F44BA109FFBC131DD0E04(L_0, L_5, NULL);
		// repository.BuildingsUpdated -= handler;
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_6 = __this->___U3CU3E4__this_0;
		NullCheck(L_6);
		FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* L_7 = L_6->___repository_4;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = __this->___handler_1;
		NullCheck(L_7);
		FirebaseRepository_remove_BuildingsUpdated_mD930E7082D8875DAF82384BF6D90B2F6B0644049(L_7, L_8, NULL);
		// });
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
// System.Void DropdownWrapper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropdownWrapper_Awake_mACDE931401601C84C0DFCC16E0E11245D536E864 (DropdownWrapper_t2B8B735C169F927DE94408005160FB905E00CBB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisTMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_m3E70D234E806B9EC31E4E572CB72CE14733F52C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.TryGetComponent(out dropdown);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504** L_1 = (&__this->___dropdown_4);
		NullCheck(L_0);
		bool L_2;
		L_2 = GameObject_TryGetComponent_TisTMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_m3E70D234E806B9EC31E4E572CB72CE14733F52C0(L_0, L_1, GameObject_TryGetComponent_TisTMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_m3E70D234E806B9EC31E4E572CB72CE14733F52C0_RuntimeMethod_var);
		// UpdateDropdownOptions();
		DropdownWrapper_UpdateDropdownOptions_m362E9A81EEFD1AE79DC84713FFC590C277AF4720(__this, NULL);
		// dropdown.onValueChanged.AddListener(OnItemSelected);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_3 = __this->___dropdown_4;
		NullCheck(L_3);
		DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* L_4;
		L_4 = TMP_Dropdown_get_onValueChanged_mC5A65068BFDC48C26FAC4B6FB2C0983633168BFF(L_3, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_5 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 4)), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_4, L_5, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DropdownWrapper::UpdateDropdownOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropdownWrapper_UpdateDropdownOptions_m362E9A81EEFD1AE79DC84713FFC590C277AF4720 (DropdownWrapper_t2B8B735C169F927DE94408005160FB905E00CBB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE80F02484ED836571C16C2A0C39181A5E707536B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* V_3 = NULL;
	{
		// dropdown.options = new();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___dropdown_4;
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_1 = (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52*)il2cpp_codegen_object_new(List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mE80F02484ED836571C16C2A0C39181A5E707536B(L_1, List_1__ctor_mE80F02484ED836571C16C2A0C39181A5E707536B_RuntimeMethod_var);
		NullCheck(L_0);
		TMP_Dropdown_set_options_m4CD66EEEFDF53BAD9862AA2768F6048B2CA5B2AD(L_0, L_1, NULL);
		// foreach (string name in GetDropdownNames())
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = VirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(5 /* System.String[] DropdownWrapper::GetDropdownNames() */, __this);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0048;
	}

IL_001e:
	{
		// foreach (string name in GetDropdownNames())
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// TMP_Dropdown.OptionData optionData = new TMP_Dropdown.OptionData
		// {
		//     text = name
		// };
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_7 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		OptionData__ctor_m5B8E6B683070AB406FA738E689E2FD4055697FB6(L_7, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_8 = L_7;
		String_t* L_9 = V_2;
		NullCheck(L_8);
		OptionData_set_text_mFF1E8A215A399CB9EA9DDFB0C6F3B9F068837226(L_8, L_9, NULL);
		V_3 = L_8;
		// dropdown.options.Add(optionData);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_10 = __this->___dropdown_4;
		NullCheck(L_10);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_11;
		L_11 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_10, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_12 = V_3;
		NullCheck(L_11);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_11, L_12, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0048:
	{
		// foreach (string name in GetDropdownNames())
		int32_t L_14 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DropdownWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropdownWrapper__ctor_mCA6963896980B7E70AFCB25DD25582A1A268FB9C (DropdownWrapper_t2B8B735C169F927DE94408005160FB905E00CBB1* __this, const RuntimeMethod* method) 
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
// UnityEngine.Vector3 FirebaseImageTarget::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FirebaseImageTarget_get_Position_m0AB730C0AF9C56C73E1E8338143BF5206FA5314A (FirebaseImageTarget_t08AFECF4D76C5C8A6BB8C4EF36FB43FF5356C04B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector3 Position { get { return new Vector3(x, z, y); } }
		float L_0 = __this->___x_6;
		float L_1 = __this->___z_8;
		float L_2 = __this->___y_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		// public Vector3 Position { get { return new Vector3(x, z, y); } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 FirebaseImageTarget::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FirebaseImageTarget_get_Rotation_m059DEC40E81FACB81E488400DB2F7233FCE1B0E5 (FirebaseImageTarget_t08AFECF4D76C5C8A6BB8C4EF36FB43FF5356C04B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector3 Rotation { get { return new Vector3(euler_x, euler_y, euler_z); } }
		float L_0 = __this->___euler_x_3;
		float L_1 = __this->___euler_y_4;
		float L_2 = __this->___euler_z_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		// public Vector3 Rotation { get { return new Vector3(euler_x, euler_y, euler_z); } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
// System.Void FirebaseImageTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseImageTarget__ctor_mB76E7A05AE692C9B43DE5E7D5F5D818ABFC3386B (FirebaseImageTarget_t08AFECF4D76C5C8A6BB8C4EF36FB43FF5356C04B* __this, const RuntimeMethod* method) 
{
	{
		ImageTarget__ctor_m33BD0D6EA7CD4146FD8D8A9E47987C03CACBDF5D(__this, NULL);
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
// Conversion methods for marshalling of: Item
IL2CPP_EXTERN_C void Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_marshal_pinvoke(const Item_tFAF77888D49883A321EB596A7D93CB5615D37E95& unmarshaled, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___x_1 = unmarshaled.___x_1;
	marshaled.___y_2 = unmarshaled.___y_2;
	marshaled.___z_3 = unmarshaled.___z_3;
}
IL2CPP_EXTERN_C void Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_marshal_pinvoke_back(const Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_marshaled_pinvoke& marshaled, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	float unmarshaledx_temp_1 = 0.0f;
	unmarshaledx_temp_1 = marshaled.___x_1;
	unmarshaled.___x_1 = unmarshaledx_temp_1;
	float unmarshaledy_temp_2 = 0.0f;
	unmarshaledy_temp_2 = marshaled.___y_2;
	unmarshaled.___y_2 = unmarshaledy_temp_2;
	float unmarshaledz_temp_3 = 0.0f;
	unmarshaledz_temp_3 = marshaled.___z_3;
	unmarshaled.___z_3 = unmarshaledz_temp_3;
}
// Conversion method for clean up from marshalling of: Item
IL2CPP_EXTERN_C void Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_marshal_pinvoke_cleanup(Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// Conversion methods for marshalling of: Item
IL2CPP_EXTERN_C void Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_marshal_com(const Item_tFAF77888D49883A321EB596A7D93CB5615D37E95& unmarshaled, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
	marshaled.___x_1 = unmarshaled.___x_1;
	marshaled.___y_2 = unmarshaled.___y_2;
	marshaled.___z_3 = unmarshaled.___z_3;
}
IL2CPP_EXTERN_C void Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_marshal_com_back(const Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_marshaled_com& marshaled, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	float unmarshaledx_temp_1 = 0.0f;
	unmarshaledx_temp_1 = marshaled.___x_1;
	unmarshaled.___x_1 = unmarshaledx_temp_1;
	float unmarshaledy_temp_2 = 0.0f;
	unmarshaledy_temp_2 = marshaled.___y_2;
	unmarshaled.___y_2 = unmarshaledy_temp_2;
	float unmarshaledz_temp_3 = 0.0f;
	unmarshaledz_temp_3 = marshaled.___z_3;
	unmarshaled.___z_3 = unmarshaledz_temp_3;
}
// Conversion method for clean up from marshalling of: Item
IL2CPP_EXTERN_C void Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_marshal_com_cleanup(Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.Vector3 Item::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Item_get_Position_mCDB77F22D214AA79575FA7407EB97E90FEA3D9EC (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position => new(x, z, y);
		float L_0 = __this->___x_1;
		float L_1 = __this->___z_3;
		float L_2 = __this->___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Item_get_Position_mCDB77F22D214AA79575FA7407EB97E90FEA3D9EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Item_get_Position_mCDB77F22D214AA79575FA7407EB97E90FEA3D9EC(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Item::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Item_get_Rotation_m189F56622D76679932945D4199BD63B543FC7B09 (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Rotation => new(0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Item_get_Rotation_m189F56622D76679932945D4199BD63B543FC7B09_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Item_get_Rotation_m189F56622D76679932945D4199BD63B543FC7B09(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ItemSelector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemSelector_Start_m9392F5C1A913F993EA92BB2BA3D781E3A45A95CA (ItemSelector_tFBB12E0A90940295A23AFFD179539EB1C0C1925E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ItemSelector_U3CStartU3Eb__2_0_m2D0121C8F12D229DCE31DB78DEA120B777256A60_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buildingVM.CurrentBuildingChanged += new EventHandler((object sender, EventArgs args) => UpdateDropdownOptions());
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_0 = __this->___buildingVM_5;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_1, __this, (intptr_t)((void*)ItemSelector_U3CStartU3Eb__2_0_m2D0121C8F12D229DCE31DB78DEA120B777256A60_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		BuildingViewModel_add_CurrentBuildingChanged_mD683148A64540FA5F9FC94CC7D15060A6304572F(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String[] ItemSelector::GetDropdownNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ItemSelector_GetDropdownNames_m82F3C2C4F91A3EEA9129C329FCA834BF616CAFB3 (ItemSelector_tFBB12E0A90940295A23AFFD179539EB1C0C1925E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	{
		// Item[] items = buildingVM.CurrentBuilding.items;
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_0 = __this->___buildingVM_5;
		NullCheck(L_0);
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_1;
		L_1 = BuildingViewModel_get_CurrentBuilding_m74AA67A13FD2C4D31D0F8AB2D16EA6B8028F8016(L_0, NULL);
		NullCheck(L_1);
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_2 = L_1->___items_2;
		V_0 = L_2;
		// string[] names = new string[items.Length];
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_3 = V_0;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_1 = L_4;
		// for (int i = 0; i < items.Length; i++)
		V_2 = 0;
		goto IL_0032;
	}

IL_001f:
	{
		// names[i] = items[i].name;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		int32_t L_6 = V_2;
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		String_t* L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___name_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (String_t*)L_9);
		// for (int i = 0; i < items.Length; i++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0032:
	{
		// for (int i = 0; i < items.Length; i++)
		int32_t L_11 = V_2;
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_12 = V_0;
		NullCheck(L_12);
		V_3 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_001f;
		}
	}
	{
		// return names;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_1;
		V_4 = L_14;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_4;
		return L_15;
	}
}
// System.Void ItemSelector::OnItemSelected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemSelector_OnItemSelected_mDF91DFBBC8219289B24CA94F3B918E4151F30BB1 (ItemSelector_tFBB12E0A90940295A23AFFD179539EB1C0C1925E* __this, int32_t ___optionIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Item selectedItem = buildingVM.CurrentBuilding.items[optionIndex];
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_0 = __this->___buildingVM_5;
		NullCheck(L_0);
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_1;
		L_1 = BuildingViewModel_get_CurrentBuilding_m74AA67A13FD2C4D31D0F8AB2D16EA6B8028F8016(L_0, NULL);
		NullCheck(L_1);
		ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* L_2 = L_1->___items_2;
		int32_t L_3 = ___optionIndex0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// itemTarget.SetPositionAndRotation(selectedItem);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___itemTarget_6;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95 L_7 = V_0;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95 L_8 = L_7;
		RuntimeObject* L_9 = Box(Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var, &L_8);
		TransormExtensions_SetPositionAndRotation_mA01C31412B17250D9C8D7116D8C1CF8888BC5FE5(L_6, (RuntimeObject*)L_9, NULL);
		// }
		return;
	}
}
// System.Void ItemSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemSelector__ctor_mD26CECC5B3D8B45C202A280B7D61A54569092DF2 (ItemSelector_tFBB12E0A90940295A23AFFD179539EB1C0C1925E* __this, const RuntimeMethod* method) 
{
	{
		DropdownWrapper__ctor_mCA6963896980B7E70AFCB25DD25582A1A268FB9C(__this, NULL);
		return;
	}
}
// System.Void ItemSelector::<Start>b__2_0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemSelector_U3CStartU3Eb__2_0_m2D0121C8F12D229DCE31DB78DEA120B777256A60 (ItemSelector_tFBB12E0A90940295A23AFFD179539EB1C0C1925E* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		// buildingVM.CurrentBuildingChanged += new EventHandler((object sender, EventArgs args) => UpdateDropdownOptions());
		DropdownWrapper_UpdateDropdownOptions_m362E9A81EEFD1AE79DC84713FFC590C277AF4720(__this, NULL);
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
// System.Single Wall::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Wall_get_Length_mB8AB6207AEB4D490DBD378466DC4A463464350E1 (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Length { get { return Vector2.Distance(new Vector2(x1, y1), new Vector2(x2, y2)); } }
		float L_0 = __this->___x1_0;
		float L_1 = __this->___y1_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		float L_3 = __this->___x2_1;
		float L_4 = __this->___y2_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_3, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_2, L_5, NULL);
		V_0 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		// public float Length { get { return Vector2.Distance(new Vector2(x1, y1), new Vector2(x2, y2)); } }
		float L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 Wall::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Wall_get_Position_m8EE5986FDA7CDBAE92966D9FCC6C8507581935DC (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector3 Position { get { return new Vector3((x1 + x2)/2, 0, (y1 + y2)/2); } }
		float L_0 = __this->___x1_0;
		float L_1 = __this->___x2_1;
		float L_2 = __this->___y1_2;
		float L_3 = __this->___y2_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), ((float)(((float)il2cpp_codegen_add(L_0, L_1))/(2.0f))), (0.0f), ((float)(((float)il2cpp_codegen_add(L_2, L_3))/(2.0f))), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0034;
	}

IL_0034:
	{
		// public Vector3 Position { get { return new Vector3((x1 + x2)/2, 0, (y1 + y2)/2); } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector3 Wall::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Wall_get_Rotation_m52325AB38217763EFD1C31D26BF698B0DBD7FAE3 (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector2 aVector = new Vector2(x1, y1) - new Vector2(x2, y2);
		float L_0 = __this->___x1_0;
		float L_1 = __this->___y1_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		float L_3 = __this->___x2_1;
		float L_4 = __this->___y2_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_3, L_4, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_2, L_5, NULL);
		V_0 = L_6;
		// float radians = Mathf.Atan2(aVector.y, aVector.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10 = L_9.___x_0;
		float L_11;
		L_11 = atan2f(L_8, L_10);
		V_1 = L_11;
		// float y = -radians * Mathf.Rad2Deg;
		float L_12 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(((-L_12)), (57.2957802f)));
		// return new Vector3(0, y, 0);
		float L_13 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (0.0f), L_13, (0.0f), /*hidden argument*/NULL);
		V_3 = L_14;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_3;
		return L_15;
	}
}
// System.Void Wall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall__ctor_m04126D2E920BD90F76660E756CDC65BCFEF2711B (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, const RuntimeMethod* method) 
{
	{
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
// System.String DatabaseObject::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseObject_get_Id_mCD74C96D4CEF612EAA577D38F9EF9833F211AA66 (DatabaseObject_t1196001559FD7BD1D56B995A6BCD1681AFDF8027* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// public string Id { get { return _id;  } }
		String_t* L_0 = __this->____id_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string Id { get { return _id;  } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void DatabaseObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseObject__ctor_m3956E795269A15C7240827FDF65BEE351B08E37A (DatabaseObject_t1196001559FD7BD1D56B995A6BCD1681AFDF8027* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	{
		// public DatabaseObject(string id)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _id = id;
		String_t* L_0 = ___id0;
		__this->____id_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____id_0), (void*)L_0);
		// }
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
// System.Void FirebaseRepository::add_BuildingsUpdated(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRepository_add_BuildingsUpdated_m4928A3317EAD405D5D7076DAD6E9E3CC6B6C7949 (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___BuildingsUpdated_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___BuildingsUpdated_6);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FirebaseRepository::remove_BuildingsUpdated(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRepository_remove_BuildingsUpdated_mD930E7082D8875DAF82384BF6D90B2F6B0644049 (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___BuildingsUpdated_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___BuildingsUpdated_6);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Building[] FirebaseRepository::get_Buildings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* FirebaseRepository_get_Buildings_m327A472EEEB930B104751BBE9BFCE14C0289A63D (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, const RuntimeMethod* method) 
{
	BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* V_0 = NULL;
	{
		// public Building[] Buildings { get { return _buildings; } }
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_0 = __this->____buildings_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Building[] Buildings { get { return _buildings; } }
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_1 = V_0;
		return L_1;
	}
}
// System.Void FirebaseRepository::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRepository_Awake_m3CE912382FF4E047925AA0E856CC761D8D2F7A8E (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db = FirebaseDatabase.DefaultInstance.RootReference;
		il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_0;
		L_0 = FirebaseDatabase_get_DefaultInstance_m5D2694D707EAE163776CC0FF92B92537BDD59118(NULL);
		NullCheck(L_0);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_1;
		L_1 = FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434(L_0, NULL);
		__this->___db_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___db_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void FirebaseRepository::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRepository_Start_mA5BA8294898F4639FCE8FF2D7ABBA7742CC18326 (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, const RuntimeMethod* method) 
{
	{
		// FetchBuildingCollection();
		FirebaseRepository_FetchBuildingCollection_m370EA8C6E300DE7E30F923BA9B887A6593B361AE(__this, NULL);
		// }
		return;
	}
}
// System.Void FirebaseRepository::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRepository_Update_mA0F89171AAEE7AFB967BC48D75577D9B1B8BD8BC (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4A9D1AC64CC11F358698E30F1A31CE30F9D0C0E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B3_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	{
		// if (_mustCallBuildingsUpdatedListener)
		bool L_0 = __this->____mustCallBuildingsUpdatedListener_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// _mustCallBuildingsUpdatedListener = false;
		__this->____mustCallBuildingsUpdatedListener_7 = (bool)0;
		// BuildingsUpdated?.Invoke(this, null);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___BuildingsUpdated_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001f;
		}
	}
	{
		goto IL_0027;
	}

IL_001f:
	{
		NullCheck(G_B3_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B3_0, __this, (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*)NULL, NULL);
	}

IL_0027:
	{
		// Debug.Log("buildings updated");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA4A9D1AC64CC11F358698E30F1A31CE30F9D0C0E, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator FirebaseRepository::SignInUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseRepository_SignInUser_m5F453F58D71A7B4A543957109E95A2366D70EA00 (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB* L_0 = (U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB*)il2cpp_codegen_object_new(U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSignInUserU3Ed__12__ctor_m4A32BBCA3EFFCA9965FBFC82187A4771EFB8FAF2(L_0, 0, NULL);
		U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator FirebaseRepository::UploadImageTarget(System.String,System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseRepository_UploadImageTarget_m22DF19AC205C17BCB7F12B4B7ECDBCDA714D3E83 (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, String_t* ___buildingId0, KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C ___imageTarget1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840* L_0 = (U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840*)il2cpp_codegen_object_new(U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUploadImageTargetU3Ed__13__ctor_m8083448B1958DE74FFCDCF04C30A89DD10E90286(L_0, 0, NULL);
		U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840* L_2 = L_1;
		String_t* L_3 = ___buildingId0;
		NullCheck(L_2);
		L_2->___buildingId_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___buildingId_2), (void*)L_3);
		U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840* L_4 = L_2;
		KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C L_5 = ___imageTarget1;
		NullCheck(L_4);
		L_4->___imageTarget_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_4->___imageTarget_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_4->___imageTarget_3))->___value_1), (void*)NULL);
		#endif
		return L_4;
	}
}
// System.Void FirebaseRepository::FetchBuildingCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRepository_FetchBuildingCollection_m370EA8C6E300DE7E30F923BA9B887A6593B361AE (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRepository_U3CFetchBuildingCollectionU3Eb__14_0_m616B4F6DC8C80105CC55D0206AB3324A3B9DDD6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10F2F2837CFD9B3F053F697E215765329BE0EEA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE607EECF2DD996D5B52019F099885B017CC96437);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Fetching buildings collection");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral10F2F2837CFD9B3F053F697E215765329BE0EEA6, NULL);
		// db.Child("buildings").GetValueAsync().ContinueWithOnMainThread(task =>
		// {
		//     if (task.IsCompleted)
		//     {
		//         Debug.Log("Buildings collection successfully fetched");
		//         DataSnapshot snapshot = task.Result;
		// 
		//         int i = 0;
		//         _buildings = new Building[snapshot.ChildrenCount];
		// 
		//         foreach (DataSnapshot buildingSnapshot in snapshot.Children)
		//         {
		//             string buildingId = buildingSnapshot.Key;
		//             Building building = new Building(buildingId);
		// 
		//             string json = buildingSnapshot.GetRawJsonValue();
		//             JsonUtility.FromJsonOverwrite(json, building);
		// 
		//             // Convert json image target collection to dictionary
		//             Dictionary<string, ImageTarget> imageTargets = new();
		//             foreach (DataSnapshot imageTargetSnapshot in buildingSnapshot.Child("image_targets").Children)
		//             {
		//                 string targetJson = imageTargetSnapshot.GetRawJsonValue();
		//                 ImageTarget imageTarget = new();
		//                 JsonUtility.FromJsonOverwrite(targetJson, imageTarget);
		// 
		//                 imageTargets.Add(imageTargetSnapshot.Key, imageTarget);
		//             }
		//             building.image_targets = imageTargets;
		// 
		//             _buildings[i] = building;
		//             i++;
		//         }
		// 
		//         _mustCallBuildingsUpdatedListener = true;
		//     }
		//     else
		//         Debug.Log("Failed to fetch buildings collection");
		// });
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_0 = __this->___db_4;
		NullCheck(L_0);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_1;
		L_1 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_0, _stringLiteralE607EECF2DD996D5B52019F099885B017CC96437, NULL);
		NullCheck(L_1);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_2;
		L_2 = Query_GetValueAsync_mFEB57CCE078D10FC3A6DA6DA2A7DCD16CC4673F5(L_1, NULL);
		Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* L_3 = (Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756*)il2cpp_codegen_object_new(Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m47FFCA5D7CA1940EDC58E9D6F823C7710794F537(L_3, __this, (intptr_t)((void*)FirebaseRepository_U3CFetchBuildingCollectionU3Eb__14_0_m616B4F6DC8C80105CC55D0206AB3324A3B9DDD6B_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663(L_2, L_3, TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FirebaseRepository::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRepository__ctor_mB81927B633BE6448ADC17BB835A8748731DDAE42 (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, const RuntimeMethod* method) 
{
	{
		// private bool _mustCallBuildingsUpdatedListener = false;
		__this->____mustCallBuildingsUpdatedListener_7 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void FirebaseRepository::<FetchBuildingCollection>b__14_0(System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseRepository_U3CFetchBuildingCollectionU3Eb__14_0_m616B4F6DC8C80105CC55D0206AB3324A3B9DDD6B (FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* __this, Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Building_t950D5394E080624D7E96B158EF852EA16ADB3650_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m642D95DC21FCB4D659C1CEC8A2CC271AACB3E869_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m201DB66BA6FD6B104604CB8AE9DDF1432F3297E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseRepository_U3CFetchBuildingCollectionU3Eb__14_0_m616B4F6DC8C80105CC55D0206AB3324A3B9DDD6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t89D6D9FAD8F93015339F011596FA51B8F53D3248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43772496A8425310102AB6842A8DF95A40CBE489);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral438095AAD6F94182BE6B5ABD3C540AB80840ADF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0BBEA1F2410381240F6A7B6DC30DBD53115450C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* V_4 = NULL;
	String_t* V_5 = NULL;
	Building_t950D5394E080624D7E96B158EF852EA16ADB3650* V_6 = NULL;
	String_t* V_7 = NULL;
	Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* V_10 = NULL;
	String_t* V_11 = NULL;
	ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* V_12 = NULL;
	{
		// if (task.IsCompleted)
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_011f;
		}
	}
	{
		// Debug.Log("Buildings collection successfully fetched");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral438095AAD6F94182BE6B5ABD3C540AB80840ADF2, NULL);
		// DataSnapshot snapshot = task.Result;
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_3 = ___task0;
		NullCheck(L_3);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_4;
		L_4 = Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C(L_3, Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		V_1 = L_4;
		// int i = 0;
		V_2 = 0;
		// _buildings = new Building[snapshot.ChildrenCount];
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_5 = V_1;
		NullCheck(L_5);
		int64_t L_6;
		L_6 = DataSnapshot_get_ChildrenCount_m11A46B8917211A241820AF7DA99028E05261351C(L_5, NULL);
		if ((int64_t)(L_6) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), FirebaseRepository_U3CFetchBuildingCollectionU3Eb__14_0_m616B4F6DC8C80105CC55D0206AB3324A3B9DDD6B_RuntimeMethod_var);
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_7 = (BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923*)(BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923*)SZArrayNew(BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_6));
		__this->____buildings_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buildings_8), (void*)L_7);
		// foreach (DataSnapshot buildingSnapshot in snapshot.Children)
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = DataSnapshot_get_Children_m5A77ABE26BB1750F85677DF6E03D02560F6F6632(L_8, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>::GetEnumerator() */, IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70_il2cpp_TypeInfo_var, L_9);
		V_3 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_3;
					if (!L_11)
					{
						goto IL_0114;
					}
				}
				{
					RuntimeObject* L_12 = V_3;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0114:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00fd_1;
			}

IL_0047_1:
			{
				// foreach (DataSnapshot buildingSnapshot in snapshot.Children)
				RuntimeObject* L_13 = V_3;
				NullCheck(L_13);
				DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_14;
				L_14 = InterfaceFuncInvoker0< DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot>::get_Current() */, IEnumerator_1_t89D6D9FAD8F93015339F011596FA51B8F53D3248_il2cpp_TypeInfo_var, L_13);
				V_4 = L_14;
				// string buildingId = buildingSnapshot.Key;
				DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_15 = V_4;
				NullCheck(L_15);
				String_t* L_16;
				L_16 = DataSnapshot_get_Key_m71F6DF80BFBCFA8C9C2F2368AD5F6A44F5E70908(L_15, NULL);
				V_5 = L_16;
				// Building building = new Building(buildingId);
				String_t* L_17 = V_5;
				Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_18 = (Building_t950D5394E080624D7E96B158EF852EA16ADB3650*)il2cpp_codegen_object_new(Building_t950D5394E080624D7E96B158EF852EA16ADB3650_il2cpp_TypeInfo_var);
				NullCheck(L_18);
				Building__ctor_mFA4E6FF1B808B600BA046726206734FA40C5EE14(L_18, L_17, NULL);
				V_6 = L_18;
				// string json = buildingSnapshot.GetRawJsonValue();
				DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_19 = V_4;
				NullCheck(L_19);
				String_t* L_20;
				L_20 = DataSnapshot_GetRawJsonValue_m1C68374C193D549348050EC403C01F68AB3A1591(L_19, NULL);
				V_7 = L_20;
				// JsonUtility.FromJsonOverwrite(json, building);
				String_t* L_21 = V_7;
				Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_22 = V_6;
				JsonUtility_FromJsonOverwrite_mF60C8238431C1A42F7F482BB717757B281570D56(L_21, L_22, NULL);
				// Dictionary<string, ImageTarget> imageTargets = new();
				Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF* L_23 = (Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF*)il2cpp_codegen_object_new(Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF_il2cpp_TypeInfo_var);
				NullCheck(L_23);
				Dictionary_2__ctor_m201DB66BA6FD6B104604CB8AE9DDF1432F3297E1(L_23, Dictionary_2__ctor_m201DB66BA6FD6B104604CB8AE9DDF1432F3297E1_RuntimeMethod_var);
				V_8 = L_23;
				// foreach (DataSnapshot imageTargetSnapshot in buildingSnapshot.Child("image_targets").Children)
				DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_24 = V_4;
				NullCheck(L_24);
				DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_25;
				L_25 = DataSnapshot_Child_m308ABEC425ADE01909B1A318D61DC965802EF64C(L_24, _stringLiteralC0BBEA1F2410381240F6A7B6DC30DBD53115450C, NULL);
				NullCheck(L_25);
				RuntimeObject* L_26;
				L_26 = DataSnapshot_get_Children_m5A77ABE26BB1750F85677DF6E03D02560F6F6632(L_25, NULL);
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>::GetEnumerator() */, IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70_il2cpp_TypeInfo_var, L_26);
				V_9 = L_27;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00d8_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_28 = V_9;
							if (!L_28)
							{
								goto IL_00e4_1;
							}
						}
						{
							RuntimeObject* L_29 = V_9;
							NullCheck(L_29);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
						}

IL_00e4_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00cd_2;
					}

IL_0097_2:
					{
						// foreach (DataSnapshot imageTargetSnapshot in buildingSnapshot.Child("image_targets").Children)
						RuntimeObject* L_30 = V_9;
						NullCheck(L_30);
						DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_31;
						L_31 = InterfaceFuncInvoker0< DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot>::get_Current() */, IEnumerator_1_t89D6D9FAD8F93015339F011596FA51B8F53D3248_il2cpp_TypeInfo_var, L_30);
						V_10 = L_31;
						// string targetJson = imageTargetSnapshot.GetRawJsonValue();
						DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_32 = V_10;
						NullCheck(L_32);
						String_t* L_33;
						L_33 = DataSnapshot_GetRawJsonValue_m1C68374C193D549348050EC403C01F68AB3A1591(L_32, NULL);
						V_11 = L_33;
						// ImageTarget imageTarget = new();
						ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* L_34 = (ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1*)il2cpp_codegen_object_new(ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1_il2cpp_TypeInfo_var);
						NullCheck(L_34);
						ImageTarget__ctor_m33BD0D6EA7CD4146FD8D8A9E47987C03CACBDF5D(L_34, NULL);
						V_12 = L_34;
						// JsonUtility.FromJsonOverwrite(targetJson, imageTarget);
						String_t* L_35 = V_11;
						ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* L_36 = V_12;
						JsonUtility_FromJsonOverwrite_mF60C8238431C1A42F7F482BB717757B281570D56(L_35, L_36, NULL);
						// imageTargets.Add(imageTargetSnapshot.Key, imageTarget);
						Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF* L_37 = V_8;
						DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_38 = V_10;
						NullCheck(L_38);
						String_t* L_39;
						L_39 = DataSnapshot_get_Key_m71F6DF80BFBCFA8C9C2F2368AD5F6A44F5E70908(L_38, NULL);
						ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* L_40 = V_12;
						NullCheck(L_37);
						Dictionary_2_Add_m642D95DC21FCB4D659C1CEC8A2CC271AACB3E869(L_37, L_39, L_40, Dictionary_2_Add_m642D95DC21FCB4D659C1CEC8A2CC271AACB3E869_RuntimeMethod_var);
					}

IL_00cd_2:
					{
						// foreach (DataSnapshot imageTargetSnapshot in buildingSnapshot.Child("image_targets").Children)
						RuntimeObject* L_41 = V_9;
						NullCheck(L_41);
						bool L_42;
						L_42 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_41);
						if (L_42)
						{
							goto IL_0097_2;
						}
					}
					{
						goto IL_00e5_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00e5_1:
			{
				// building.image_targets = imageTargets;
				Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_43 = V_6;
				Dictionary_2_tCBD358611ACE5B1B5C501FC3485F33BD4FF369BF* L_44 = V_8;
				NullCheck(L_43);
				L_43->___image_targets_4 = L_44;
				Il2CppCodeGenWriteBarrier((void**)(&L_43->___image_targets_4), (void*)L_44);
				// _buildings[i] = building;
				BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_45 = __this->____buildings_8;
				int32_t L_46 = V_2;
				Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_47 = V_6;
				NullCheck(L_45);
				ArrayElementTypeCheck (L_45, L_47);
				(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Building_t950D5394E080624D7E96B158EF852EA16ADB3650*)L_47);
				// i++;
				int32_t L_48 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			}

IL_00fd_1:
			{
				// foreach (DataSnapshot buildingSnapshot in snapshot.Children)
				RuntimeObject* L_49 = V_3;
				NullCheck(L_49);
				bool L_50;
				L_50 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_49);
				if (L_50)
				{
					goto IL_0047_1;
				}
			}
			{
				goto IL_0115;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0115:
	{
		// _mustCallBuildingsUpdatedListener = true;
		__this->____mustCallBuildingsUpdatedListener_7 = (bool)1;
		goto IL_012a;
	}

IL_011f:
	{
		// Debug.Log("Failed to fetch buildings collection");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral43772496A8425310102AB6842A8DF95A40CBE489, NULL);
	}

IL_012a:
	{
		// });
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
// System.Void FirebaseRepository/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6416270513A14F0BB3F888E61C12B7A082773B04 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0* L_0 = (U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0*)il2cpp_codegen_object_new(U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m011807B3ABD0050C2B029223103F0311F5BED357(L_0, NULL);
		((U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void FirebaseRepository/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m011807B3ABD0050C2B029223103F0311F5BED357 (U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FirebaseRepository/<>c::<SignInUser>b__12_0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSignInUserU3Eb__12_0_mACD4E6AB5456A521E727EACB38A9A96923A74B1F (U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(task.Result.UserId.ToString());
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_0 = ___task0;
		NullCheck(L_0);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_1;
		L_1 = Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F(L_0, Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// });
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
// System.Void FirebaseRepository/<SignInUser>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInUserU3Ed__12__ctor_m4A32BBCA3EFFCA9965FBFC82187A4771EFB8FAF2 (U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FirebaseRepository/<SignInUser>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInUserU3Ed__12_System_IDisposable_Dispose_m6FD319B17C5C786826C729ACE8CF802D92BF1F13 (U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FirebaseRepository/<SignInUser>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSignInUserU3Ed__12_MoveNext_m518B4869D5A8A68E8AEE5278A48500306EFC84B0 (U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSignInUserU3Eb__12_0_mACD4E6AB5456A521E727EACB38A9A96923A74B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24E44E9BEBD26B4D54643A87E01870D7B3EB4386);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* G_B9_0 = NULL;
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* G_B9_1 = NULL;
	Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* G_B8_0 = NULL;
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* G_B8_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_007f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// auth = FirebaseAuth.DefaultInstance;
		FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* L_3 = __this->___U3CU3E4__this_2;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_4;
		L_4 = FirebaseAuth_get_DefaultInstance_m86A4E32D8DCDB80079317B58210090F3D3B1711F(NULL);
		NullCheck(L_3);
		L_3->___auth_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___auth_5), (void*)L_4);
		// auth.SignInWithEmailAndPasswordAsync("toliasj@yahoo.gr", "password").ContinueWithOnMainThread(task =>
		// {
		//     Debug.Log(task.Result.UserId.ToString());
		// });
		FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_6 = L_5->___auth_5;
		NullCheck(L_6);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_7;
		L_7 = FirebaseAuth_SignInWithEmailAndPasswordAsync_mAA4074C7F5BC11678AF9FCAFB7BE86F751072E5E(L_6, _stringLiteral24E44E9BEBD26B4D54643A87E01870D7B3EB4386, _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_il2cpp_TypeInfo_var);
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_8 = ((U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1;
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_9 = L_8;
		G_B8_0 = L_9;
		G_B8_1 = L_7;
		if (L_9)
		{
			G_B9_0 = L_9;
			G_B9_1 = L_7;
			goto IL_0069;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_il2cpp_TypeInfo_var);
		U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0* L_10 = ((U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_11 = (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*)il2cpp_codegen_object_new(Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CSignInUserU3Eb__12_0_mACD4E6AB5456A521E727EACB38A9A96923A74B1F_RuntimeMethod_var), NULL);
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_12 = L_11;
		((U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8CFDF83590E6BAA4A6568007C58E5C6B29CB6CA0_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1), (void*)L_12);
		G_B9_0 = L_12;
		G_B9_1 = G_B8_1;
	}

IL_0069:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_13;
		L_13 = TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D(G_B9_1, G_B9_0, TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D_RuntimeMethod_var);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object FirebaseRepository/<SignInUser>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSignInUserU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFC6F7BA2F99C4834A86DADC037474F0153B718F4 (U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FirebaseRepository/<SignInUser>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInUserU3Ed__12_System_Collections_IEnumerator_Reset_m486410A6DE6BCC081F603693D21E67C2943EA12B (U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSignInUserU3Ed__12_System_Collections_IEnumerator_Reset_m486410A6DE6BCC081F603693D21E67C2943EA12B_RuntimeMethod_var)));
	}
}
// System.Object FirebaseRepository/<SignInUser>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSignInUserU3Ed__12_System_Collections_IEnumerator_get_Current_m04B77D01C43FF96CD7E60AFEB6E9321E7A3AB827 (U3CSignInUserU3Ed__12_tFCD5BD2FF8BA44D0E2ABCEF7DB06BE7EEB59D5EB* __this, const RuntimeMethod* method) 
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
// System.Void FirebaseRepository/<UploadImageTarget>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadImageTargetU3Ed__13__ctor_m8083448B1958DE74FFCDCF04C30A89DD10E90286 (U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FirebaseRepository/<UploadImageTarget>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadImageTargetU3Ed__13_System_IDisposable_Dispose_m1AAEB59D0A8AFD97FC2EB7A5CCC275C62E30005B (U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FirebaseRepository/<UploadImageTarget>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUploadImageTargetU3Ed__13_MoveNext_m0F386D6FC4FF69DA0FBEA7D866AD977433C58533 (U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mD288650659CF2C6F2AE39C709B535092E5CF182C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m0DA356BA69EC473C569F82A2F4BD59971C49B6D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0BBEA1F2410381240F6A7B6DC30DBD53115450C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE607EECF2DD996D5B52019F099885B017CC96437);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_00b0;
	}

IL_0022:
	{
		goto IL_00d6;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// string targetId = imageTarget.Key;
		KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C* L_2 = (&__this->___imageTarget_3);
		String_t* L_3;
		L_3 = KeyValuePair_2_get_Key_mD288650659CF2C6F2AE39C709B535092E5CF182C_inline(L_2, KeyValuePair_2_get_Key_mD288650659CF2C6F2AE39C709B535092E5CF182C_RuntimeMethod_var);
		__this->___U3CtargetIdU3E5__1_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtargetIdU3E5__1_5), (void*)L_3);
		// string json = JsonUtility.ToJson(imageTarget.Value);
		KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C* L_4 = (&__this->___imageTarget_3);
		ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* L_5;
		L_5 = KeyValuePair_2_get_Value_m0DA356BA69EC473C569F82A2F4BD59971C49B6D5_inline(L_4, KeyValuePair_2_get_Value_m0DA356BA69EC473C569F82A2F4BD59971C49B6D5_RuntimeMethod_var);
		String_t* L_6;
		L_6 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_5, NULL);
		__this->___U3CjsonU3E5__2_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CjsonU3E5__2_6), (void*)L_6);
		// var task = db.Child("buildings").Child(buildingId).Child("image_targets").Child(targetId).SetRawJsonValueAsync(json);
		FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* L_7 = __this->___U3CU3E4__this_4;
		NullCheck(L_7);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_8 = L_7->___db_4;
		NullCheck(L_8);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_9;
		L_9 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_8, _stringLiteralE607EECF2DD996D5B52019F099885B017CC96437, NULL);
		String_t* L_10 = __this->___buildingId_2;
		NullCheck(L_9);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_11;
		L_11 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_9, L_10, NULL);
		NullCheck(L_11);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_12;
		L_12 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_11, _stringLiteralC0BBEA1F2410381240F6A7B6DC30DBD53115450C, NULL);
		String_t* L_13 = __this->___U3CtargetIdU3E5__1_5;
		NullCheck(L_12);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_14;
		L_14 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_12, L_13, NULL);
		String_t* L_15 = __this->___U3CjsonU3E5__2_6;
		NullCheck(L_14);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_16;
		L_16 = DatabaseReference_SetRawJsonValueAsync_m9490E9CAA051A1E371954DF33B34505FC09AA080(L_14, L_15, NULL);
		__this->___U3CtaskU3E5__3_7 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtaskU3E5__3_7), (void*)L_16);
		goto IL_00b7;
	}

IL_00a0:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b0:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00b7:
	{
		// while (task.IsCompleted)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_17 = __this->___U3CtaskU3E5__3_7;
		NullCheck(L_17);
		bool L_18;
		L_18 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_17, NULL);
		V_1 = L_18;
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_00a0;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00d6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object FirebaseRepository/<UploadImageTarget>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUploadImageTargetU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m50787CBB307951F78C4CA4A8E775496A7F25E04B (U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FirebaseRepository/<UploadImageTarget>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadImageTargetU3Ed__13_System_Collections_IEnumerator_Reset_m88141D1DD49BD3D85666FB50AEBADA7A18DC2837 (U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUploadImageTargetU3Ed__13_System_Collections_IEnumerator_Reset_m88141D1DD49BD3D85666FB50AEBADA7A18DC2837_RuntimeMethod_var)));
	}
}
// System.Object FirebaseRepository/<UploadImageTarget>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUploadImageTargetU3Ed__13_System_Collections_IEnumerator_get_Current_m8051560F3C7E163B66AD356EEFE701FD8BDE71A9 (U3CUploadImageTargetU3Ed__13_t1277937D695859694F87790382487790237BB840* __this, const RuntimeMethod* method) 
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
void BuildingsUpdatedEventHandler_Invoke_mD69A0AF58702707D5A6FC59B2AC7CCA1A044315E_Multicast(BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49* currentDelegate = reinterpret_cast<BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BuildingsUpdatedEventHandler_Invoke_mD69A0AF58702707D5A6FC59B2AC7CCA1A044315E_OpenInst(BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void BuildingsUpdatedEventHandler_Invoke_mD69A0AF58702707D5A6FC59B2AC7CCA1A044315E_OpenStatic(BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void BuildingsUpdatedEventHandler_Invoke_mD69A0AF58702707D5A6FC59B2AC7CCA1A044315E_OpenStaticInvoker(BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void BuildingsUpdatedEventHandler_Invoke_mD69A0AF58702707D5A6FC59B2AC7CCA1A044315E_ClosedStaticInvoker(BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49 (BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void IRepository/BuildingsUpdatedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsUpdatedEventHandler__ctor_m32490C18AA3FFC178FF9E2A6DAB9755C387907EC (BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BuildingsUpdatedEventHandler_Invoke_mD69A0AF58702707D5A6FC59B2AC7CCA1A044315E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BuildingsUpdatedEventHandler_Invoke_mD69A0AF58702707D5A6FC59B2AC7CCA1A044315E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BuildingsUpdatedEventHandler_Invoke_mD69A0AF58702707D5A6FC59B2AC7CCA1A044315E_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&BuildingsUpdatedEventHandler_Invoke_mD69A0AF58702707D5A6FC59B2AC7CCA1A044315E_Multicast;
}
// System.Void IRepository/BuildingsUpdatedEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsUpdatedEventHandler_Invoke_mD69A0AF58702707D5A6FC59B2AC7CCA1A044315E (BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult IRepository/BuildingsUpdatedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BuildingsUpdatedEventHandler_BeginInvoke_m5BCA6F5206E9A2A1F0420B3819AADF7E1AAD1524 (BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void IRepository/BuildingsUpdatedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsUpdatedEventHandler_EndInvoke_m1ED1A1CFFDB0F04D1FB3CB64ABD6EE85F8FF1625 (BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.String JsonHelper::FixJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonHelper_FixJson_m7F0998CE00B016571B7D7CF43115FA2475DA7625 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B05BA3AF9971B71E952BCD1DB84CF25D895395C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// value = "{\"Items\":" + value + "}";
		String_t* L_0 = ___value0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral3B05BA3AF9971B71E952BCD1DB84CF25D895395C, L_0, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		___value0 = L_1;
		// return value;
		String_t* L_2 = ___value0;
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
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
// System.Void MobileLogger::LogToText(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileLogger_LogToText_m7017BCF3D726137E83488EE131A166E9C81E9051 (MobileLogger_t68F043E3DC35D9604F34ADF1B5CE3F633F61A008* __this, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method) 
{
	{
		// tmp_text.text = logString;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___tmp_text_4;
		String_t* L_1 = ___logString0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void MobileLogger::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileLogger_OnEnable_m74D0229DD1A26994367A7F874FF99325CC0EE5E0 (MobileLogger_t68F043E3DC35D9604F34ADF1B5CE3F633F61A008* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileLogger_LogToText_m7017BCF3D726137E83488EE131A166E9C81E9051_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.logMessageReceived += LogToText;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)MobileLogger_LogToText_m7017BCF3D726137E83488EE131A166E9C81E9051_RuntimeMethod_var), NULL);
		Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C(L_0, NULL);
		// }
		return;
	}
}
// System.Void MobileLogger::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileLogger_OnDisable_m0EB4B55C5B1184ED3D21AFEE1D06BA5FB4F263A7 (MobileLogger_t68F043E3DC35D9604F34ADF1B5CE3F633F61A008* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileLogger_LogToText_m7017BCF3D726137E83488EE131A166E9C81E9051_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.logMessageReceived -= LogToText;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)MobileLogger_LogToText_m7017BCF3D726137E83488EE131A166E9C81E9051_RuntimeMethod_var), NULL);
		Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC(L_0, NULL);
		// }
		return;
	}
}
// System.Void MobileLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileLogger__ctor_m7EA1818A534BD30925326AC024CEE9F3B2C0E1DA (MobileLogger_t68F043E3DC35D9604F34ADF1B5CE3F633F61A008* __this, const RuntimeMethod* method) 
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
// System.Object NavBaker::get_NavMeshComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavBaker_get_NavMeshComponents_m4A3E8D7A19F1F1105D6FF90638F1587685DE1012 (NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* __this, const RuntimeMethod* method) 
{
	{
		// public object NavMeshComponents { get; private set; }
		RuntimeObject* L_0 = __this->___U3CNavMeshComponentsU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void NavBaker::set_NavMeshComponents(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavBaker_set_NavMeshComponents_mB4ADF8533ED1CA4B8495383659C534638339995B (NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object NavMeshComponents { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CNavMeshComponentsU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNavMeshComponentsU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void NavBaker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavBaker_Awake_mE2826C46E50E5393DD66A6BBD2A2BAC116D812B8 (NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8_mDAFE31CD98EDC75F0630DDB68F748F84CF5316D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavBaker_UpdateNavMesh_m1B312D4FCBE33A3AA11B51524CC7B998377C5E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// surface = GetComponent<NavMeshSurface>();
		NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* L_0;
		L_0 = Component_GetComponent_TisNavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8_mDAFE31CD98EDC75F0630DDB68F748F84CF5316D0(__this, Component_GetComponent_TisNavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8_mDAFE31CD98EDC75F0630DDB68F748F84CF5316D0_RuntimeMethod_var);
		__this->___surface_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___surface_4), (void*)L_0);
		// buildingCreator.WallsUpdated += new BuildingCreator.WallsUpdatedEventHandler(UpdateNavMesh);
		BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* L_1 = __this->___buildingCreator_5;
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_2 = (WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190*)il2cpp_codegen_object_new(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WallsUpdatedEventHandler__ctor_mAB8C00748AE7E8B0DDC77B7D06ED8A35750C44DF(L_2, __this, (intptr_t)((void*)NavBaker_UpdateNavMesh_m1B312D4FCBE33A3AA11B51524CC7B998377C5E11_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		BuildingCreator_add_WallsUpdated_m9C85A5AEF04E1BEE7423FE20DE92AA837DC5BE32(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void NavBaker::UpdateNavMesh(Wall[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavBaker_UpdateNavMesh_m1B312D4FCBE33A3AA11B51524CC7B998377C5E11 (NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var cor = BuildNavMeshCor();
		RuntimeObject* L_0;
		L_0 = NavBaker_BuildNavMeshCor_mD7CCFC55BAAD109DD081533FDC698D0D95193BAA(__this, NULL);
		V_0 = L_0;
		// StartCoroutine(cor);
		RuntimeObject* L_1 = V_0;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator NavBaker::BuildNavMeshCor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavBaker_BuildNavMeshCor_mD7CCFC55BAAD109DD081533FDC698D0D95193BAA (NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3* L_0 = (U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3*)il2cpp_codegen_object_new(U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CBuildNavMeshCorU3Ed__8__ctor_m0A874B13FC8ED8A98EAA94D9C24644F36938551F(L_0, 0, NULL);
		U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void NavBaker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavBaker__ctor_m4DE73816E23B526BDCBB8F7E85EAA11D97242702 (NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* __this, const RuntimeMethod* method) 
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
// System.Void NavBaker/<BuildNavMeshCor>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildNavMeshCorU3Ed__8__ctor_m0A874B13FC8ED8A98EAA94D9C24644F36938551F (U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NavBaker/<BuildNavMeshCor>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildNavMeshCorU3Ed__8_System_IDisposable_Dispose_mED21B157DAB200F543C0A3C603E04F8A4F293ACB (U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NavBaker/<BuildNavMeshCor>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBuildNavMeshCorU3Ed__8_MoveNext_mA38C588972AD9176914F66FA1F49EF62013E068A (U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD330AE904D9B8C6FA57A125CD4DF59CD2A8924F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEEDC2AB1698F53638F4F021C54FE68E9F6CCE675_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8B9DB0A01D774511439B01CEE9DFFF358640164F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14421058D3E2462B1FF8DB46E652DAA2C169B7CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral214549AF147CB94BAB78407B0E3082FEC9DA1AC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB9988F07BD7178E6E0441CC13149AA13F44BA7E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_0139;
	}

IL_0022:
	{
		goto IL_017f;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// NavMeshBuildSettings buildSettings = surface.GetBuildSettings();
		NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* L_2 = __this->___U3CU3E4__this_2;
		NullCheck(L_2);
		NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* L_3 = L_2->___surface_4;
		NullCheck(L_3);
		NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D L_4;
		L_4 = NavMeshSurface_GetBuildSettings_mF3CF542BB01AF3C6C6A6892A5D0A4C61C2FFF4F9(L_3, NULL);
		__this->___U3CbuildSettingsU3E5__1_3 = L_4;
		// var buildSources = new List<NavMeshBuildSource>();
		List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* L_5 = (List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3*)il2cpp_codegen_object_new(List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mEEDC2AB1698F53638F4F021C54FE68E9F6CCE675(L_5, List_1__ctor_mEEDC2AB1698F53638F4F021C54FE68E9F6CCE675_RuntimeMethod_var);
		__this->___U3CbuildSourcesU3E5__2_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbuildSourcesU3E5__2_4), (void*)L_5);
		// var markups = new List<NavMeshBuildMarkup>();
		List_1_t8B9DB0A01D774511439B01CEE9DFFF358640164F* L_6 = (List_1_t8B9DB0A01D774511439B01CEE9DFFF358640164F*)il2cpp_codegen_object_new(List_1_t8B9DB0A01D774511439B01CEE9DFFF358640164F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mD330AE904D9B8C6FA57A125CD4DF59CD2A8924F6(L_6, List_1__ctor_mD330AE904D9B8C6FA57A125CD4DF59CD2A8924F6_RuntimeMethod_var);
		__this->___U3CmarkupsU3E5__3_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmarkupsU3E5__3_5), (void*)L_6);
		// NavMeshBuilder.CollectSources(surface.transform, surface.layerMask, surface.useGeometry, surface.defaultArea, markups, buildSources);
		NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* L_8 = L_7->___surface_4;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* L_11 = L_10->___surface_4;
		NullCheck(L_11);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_12;
		L_12 = NavMeshSurface_get_layerMask_m7F1AD8AF594B9939BC4710C6D125FECACA3CA3AC(L_11, NULL);
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_12, NULL);
		NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* L_15 = L_14->___surface_4;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = NavMeshSurface_get_useGeometry_m72C055217C16DC4A6850627E98DB51CCABA5538B(L_15, NULL);
		NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* L_17 = __this->___U3CU3E4__this_2;
		NullCheck(L_17);
		NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* L_18 = L_17->___surface_4;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = NavMeshSurface_get_defaultArea_m9763C2DF8366180B1162CA247504E1CD4EA4F404(L_18, NULL);
		List_1_t8B9DB0A01D774511439B01CEE9DFFF358640164F* L_20 = __this->___U3CmarkupsU3E5__3_5;
		List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* L_21 = __this->___U3CbuildSourcesU3E5__2_4;
		NavMeshBuilder_CollectSources_m0C96E1DB13DCEFE45CDF53F044B1D5B1CB51313E(L_9, L_13, L_16, L_19, L_20, L_21, NULL);
		// var bounds = new Bounds(transform.position, new Vector3(1000, 1000, 1000));
		NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* L_22 = __this->___U3CU3E4__this_2;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), (1000.0f), (1000.0f), (1000.0f), /*hidden argument*/NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&L_26), L_24, L_25, /*hidden argument*/NULL);
		__this->___U3CboundsU3E5__4_6 = L_26;
		// Debug.LogWarning("TODO: find bounds");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral14421058D3E2462B1FF8DB46E652DAA2C169B7CD, NULL);
		// NavMeshData data = new();
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_27 = (NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284*)il2cpp_codegen_object_new(NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		NavMeshData__ctor_m2C0DE2AACB529EE0ABB27F514E4968F62BE97C72(L_27, NULL);
		__this->___U3CdataU3E5__5_7 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdataU3E5__5_7), (void*)L_27);
		// AsyncOperation operation = NavMeshBuilder.UpdateNavMeshDataAsync(data, buildSettings, buildSources, bounds);
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_28 = __this->___U3CdataU3E5__5_7;
		NavMeshBuildSettings_t7836365E01BEB1D2FF32BF62AE46A465DD84B77D L_29 = __this->___U3CbuildSettingsU3E5__1_3;
		List_1_tA1B43D38C15DE02C34B9D22B1D6610931673C1C3* L_30 = __this->___U3CbuildSourcesU3E5__2_4;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_31 = __this->___U3CboundsU3E5__4_6;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_32;
		L_32 = NavMeshBuilder_UpdateNavMeshDataAsync_mE11626461F878CE8C00462DC1FA13736D6B28D52(L_28, L_29, L_30, L_31, NULL);
		__this->___U3CoperationU3E5__6_8 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoperationU3E5__6_8), (void*)L_32);
		// Debug.Log("Building nav mesh");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAB9988F07BD7178E6E0441CC13149AA13F44BA7E, NULL);
		goto IL_0140;
	}

IL_0129:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0139:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0140:
	{
		// while (!operation.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_33 = __this->___U3CoperationU3E5__6_8;
		NullCheck(L_33);
		bool L_34;
		L_34 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_33, NULL);
		V_1 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_1;
		if (L_35)
		{
			goto IL_0129;
		}
	}
	{
		// NavMesh.RemoveAllNavMeshData();
		NavMesh_RemoveAllNavMeshData_m02AE3C675DA1B315CB6B47969B7633B920A9FCAF(NULL);
		// NavMesh.AddNavMeshData(data);
		NavMeshData_t8BA8655BA9F2090EAD42953E956E8FDB98AA5284* L_36 = __this->___U3CdataU3E5__5_7;
		NavMeshDataInstance_t305211376D44ABC0AD2885CAF4E1D8F3BAE16F04 L_37;
		L_37 = NavMesh_AddNavMeshData_mF8AA70956909F02883A0D11E4052D4783604884A(L_36, NULL);
		// Debug.Log("Nav mesh data updated");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral214549AF147CB94BAB78407B0E3082FEC9DA1AC6, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_017f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object NavBaker/<BuildNavMeshCor>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBuildNavMeshCorU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE838EAC2FAEB66A8033604D5D8DBC90A58071B68 (U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NavBaker/<BuildNavMeshCor>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildNavMeshCorU3Ed__8_System_Collections_IEnumerator_Reset_m17E210F5B81AFEAA8D83BEFD37578D120A6970F2 (U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBuildNavMeshCorU3Ed__8_System_Collections_IEnumerator_Reset_m17E210F5B81AFEAA8D83BEFD37578D120A6970F2_RuntimeMethod_var)));
	}
}
// System.Object NavBaker/<BuildNavMeshCor>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBuildNavMeshCorU3Ed__8_System_Collections_IEnumerator_get_Current_m225390E34D14D5F931DBE598C51F808612C45291 (U3CBuildNavMeshCorU3Ed__8_tC5DEB18DDE4FCCBFC98E5CBA89DE16DC7FECCCB3* __this, const RuntimeMethod* method) 
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
// System.Void NavPath::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavPath_Start_m7D3564A6670E6F1832F55D529F0DC9B9E8C4FE79 (NavPath_tFEE0E9DAF3B58D1309422507CB92F35E2289B412* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// path = new NavMeshPath();
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*)il2cpp_codegen_object_new(NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F(L_0, NULL);
		__this->___path_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_6), (void*)L_0);
		// elapsed = 0.0f;
		__this->___elapsed_8 = (0.0f);
		// }
		return;
	}
}
// System.Void NavPath::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavPath_Update_mF919A2D6BC9E9D7E24CAB4357969E5C4EED9CD4D (NavPath_tFEE0E9DAF3B58D1309422507CB92F35E2289B412* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// elapsed += Time.deltaTime;
		float L_0 = __this->___elapsed_8;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___elapsed_8 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (elapsed > refreshTime)
		float L_2 = __this->___elapsed_8;
		float L_3 = __this->___refreshTime_7;
		V_0 = (bool)((((float)L_2) > ((float)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_008d;
		}
	}
	{
		// elapsed -= refreshTime;
		float L_5 = __this->___elapsed_8;
		float L_6 = __this->___refreshTime_7;
		__this->___elapsed_8 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		// NavMesh.CalculatePath(transform.position, target.position, NavMesh.AllAreas, path);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___target_4;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_11 = __this->___path_6;
		bool L_12;
		L_12 = NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9(L_8, L_10, (-1), L_11, NULL);
		// pathLine.positionCount = path.corners.Length;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_13 = __this->___pathLine_5;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_14 = __this->___path_6;
		NullCheck(L_14);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15;
		L_15 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_14, NULL);
		NullCheck(L_15);
		NullCheck(L_13);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_13, ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		// pathLine.SetPositions(path.corners);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_16 = __this->___pathLine_5;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_17 = __this->___path_6;
		NullCheck(L_17);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18;
		L_18 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_17, NULL);
		NullCheck(L_16);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_16, L_18, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void NavPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavPath__ctor_m86933350FE6877603538DFD66FA4438F212EA1BF (NavPath_tFEE0E9DAF3B58D1309422507CB92F35E2289B412* __this, const RuntimeMethod* method) 
{
	{
		// public float refreshTime = 1f;
		__this->___refreshTime_7 = (1.0f);
		// private float elapsed = 0.0f;
		__this->___elapsed_8 = (0.0f);
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
// System.Void SimpleRotation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRotation_Start_m7CEF57B5B11FA76ABA825E3285E3F835D22165B7 (SimpleRotation_t3EC38818F3C88BEC2C80E1DB76C40B08C440020E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SimpleRotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRotation_Update_m19D0864DD93581F50F330F5CFB1CF29F6F5A6C82 (SimpleRotation_t3EC38818F3C88BEC2C80E1DB76C40B08C440020E* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 timeRot = new Vector3(Time.realtimeSinceStartup, Time.realtimeSinceStartup, Time.realtimeSinceStartup);
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_2;
		L_2 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_0, L_1, L_2, NULL);
		// Vector3 finalRot = Vector3.Scale(timeRot, rotSpeed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___rotSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_3, L_4, NULL);
		V_1 = L_5;
		// gameObject.transform.localRotation = Quaternion.Euler(finalRot);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_8, NULL);
		NullCheck(L_7);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_7, L_9, NULL);
		// }
		return;
	}
}
// System.Void SimpleRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleRotation__ctor_m742A37EB3C099BBD220D910AE26951756863E906 (SimpleRotation_t3EC38818F3C88BEC2C80E1DB76C40B08C440020E* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 rotSpeed = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___rotSpeed_4 = L_0;
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
// System.Void TestScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestScript_Start_m20D2A28F879FF600835555F46DBCBA69371D5B52 (TestScript_t6D759E079BA3FEA034493A5F329125444C6E8F1A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TestScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestScript_Update_m2C71EA169AE2E24BFBF2B756FFA6646F13C760FF (TestScript_t6D759E079BA3FEA034493A5F329125444C6E8F1A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Time.realtimeSinceStartup >= 12 && !hasRun)
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		if ((!(((float)L_0) >= ((float)(12.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->___hasRun_7;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// hasRun = true;
		__this->___hasRun_7 = (bool)1;
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TestScript::RetrieveTextureFromWeb(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestScript_RetrieveTextureFromWeb_m7EC6D5F8E025D0E6FABC5147991C1F1E2FF18D7A (TestScript_t6D759E079BA3FEA034493A5F329125444C6E8F1A* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090* L_0 = (U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090*)il2cpp_codegen_object_new(U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRetrieveTextureFromWebU3Ed__6__ctor_mFF7CDE36384581D13DB03FDF07719CCA8BCA09C8(L_0, 0, NULL);
		U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090* L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		L_2->___url_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___url_2), (void*)L_3);
		return L_2;
	}
}
// System.Void TestScript::CreateImageTargetFromTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestScript_CreateImageTargetFromTexture_mC4374FD8C340CC2BFCA912047AE477D1F644F707 (TestScript_t6D759E079BA3FEA034493A5F329125444C6E8F1A* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisDefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0_m55DBAFA25D3E78827B9F1395D9C33E63C4A09C37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6C747AEB9AA9DA4CE5AED715510D654FEC8B311);
		s_Il2CppMethodInitialized = true;
	}
	ImageTargetBehaviour_t014481FC6A8B819C2BCE7922BA6BD53E1B23F120* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// var mTarget = VuforiaBehaviour.Instance.ObserverFactory.CreateImageTarget(
		//     texture,
		//     printedTargetSize,
		//     targetName);
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_0;
		L_0 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		NullCheck(L_0);
		ObserverFactory_t15303B50E9714D21517E15020805420A68418285* L_1;
		L_1 = VuforiaBehaviour_get_ObserverFactory_m58CBBB055DA900E6F04BC2605833C687C1C38B0F_inline(L_0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___texture0;
		float L_3 = __this->___printedTargetSize_5;
		String_t* L_4 = __this->___targetName_6;
		NullCheck(L_1);
		ImageTargetBehaviour_t014481FC6A8B819C2BCE7922BA6BD53E1B23F120* L_5;
		L_5 = ObserverFactory_CreateImageTarget_m8C7C9E66AB49D825DAAE276DE9E56A60D898294B(L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		// mTarget.gameObject.AddComponent<DefaultObserverEventHandler>();
		ImageTargetBehaviour_t014481FC6A8B819C2BCE7922BA6BD53E1B23F120* L_6 = V_0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0* L_8;
		L_8 = GameObject_AddComponent_TisDefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0_m55DBAFA25D3E78827B9F1395D9C33E63C4A09C37(L_7, GameObject_AddComponent_TisDefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0_m55DBAFA25D3E78827B9F1395D9C33E63C4A09C37_RuntimeMethod_var);
		// Debug.Log("Instant Image Target created " + mTarget.TargetName);
		ImageTargetBehaviour_t014481FC6A8B819C2BCE7922BA6BD53E1B23F120* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ObserverBehaviour_get_TargetName_mFB6FC5459068E0E9800E2C8AFFEF6F8F48297AB1_inline(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA6C747AEB9AA9DA4CE5AED715510D654FEC8B311, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(0, NULL);
		V_1 = L_12;
		// sphere.transform.parent = mTarget.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_1;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		ImageTargetBehaviour_t014481FC6A8B819C2BCE7922BA6BD53E1B23F120* L_15 = V_0;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_14);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_14, L_16, NULL);
		// sphere.transform.localPosition = new Vector3(0, 0.5f, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_1;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.0f), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_18, L_19, NULL);
		// sphere.GetComponent<MeshRenderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_1;
		NullCheck(L_20);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_21;
		L_21 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_20, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_21);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_21, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TestScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestScript__ctor_mE9AF09F78DA4B15E4FFB15B70546E46CD955CDDA (TestScript_t6D759E079BA3FEA034493A5F329125444C6E8F1A* __this, const RuntimeMethod* method) 
{
	{
		// private bool hasRun = false;
		__this->___hasRun_7 = (bool)0;
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
// System.Void TestScript/<RetrieveTextureFromWeb>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetrieveTextureFromWebU3Ed__6__ctor_mFF7CDE36384581D13DB03FDF07719CCA8BCA09C8 (U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TestScript/<RetrieveTextureFromWeb>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetrieveTextureFromWebU3Ed__6_System_IDisposable_Dispose_m35EB38CA24C5B3A9C922F0ECB62F2EEC98086A52 (U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CRetrieveTextureFromWebU3Ed__6_U3CU3Em__Finally1_mD82E12F44D32370AF15B47C39098149F30E31DBB(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean TestScript/<RetrieveTextureFromWeb>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRetrieveTextureFromWebU3Ed__6_MoveNext_mD35D11521DA37203DFFE7D7DCA9180DD6C7D417D (U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE8E21EC40707CD6ED8B4678234920AE4C89C331);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00f1:
			{// begin fault (depth: 1)
				U3CRetrieveTextureFromWebU3Ed__6_System_IDisposable_Dispose_m35EB38CA24C5B3A9C922F0ECB62F2EEC98086A52(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0016_1;
			}

IL_0012_1:
			{
				goto IL_001d_1;
			}

IL_0014_1:
			{
				goto IL_005e_1;
			}

IL_0016_1:
			{
				V_0 = (bool)0;
				goto IL_00f9;
			}

IL_001d_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (UnityWebRequest uwr = UnityWebRequestTexture.GetTexture(url))
				String_t* L_3 = __this->___url_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4;
				L_4 = UnityWebRequestTexture_GetTexture_mEEC74BBC5190D4012A0B87C5D439AF59E22EF2EF(L_3, NULL);
				__this->___U3CuwrU3E5__1_4 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CuwrU3E5__1_4), (void*)L_4);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return uwr.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___U3CuwrU3E5__1_4;
				NullCheck(L_5);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_6;
				L_6 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_5, NULL);
				__this->___U3CU3E2__current_1 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00f9;
			}

IL_005e_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// if (uwr.result != UnityWebRequest.Result.Success)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = __this->___U3CuwrU3E5__1_4;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_7, NULL);
				V_2 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_9 = V_2;
				if (!L_9)
				{
					goto IL_0090_1;
				}
			}
			{
				// Debug.Log(uwr.error);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->___U3CuwrU3E5__1_4;
				NullCheck(L_10);
				String_t* L_11;
				L_11 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_10, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
				goto IL_00de_1;
			}

IL_0090_1:
			{
				// var texture = DownloadHandlerTexture.GetContent(uwr);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_12 = __this->___U3CuwrU3E5__1_4;
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13;
				L_13 = DownloadHandlerTexture_GetContent_m86BC88F58305A1B21C21CE7D82658197932EFB18(L_12, NULL);
				__this->___U3CtextureU3E5__2_5 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextureU3E5__2_5), (void*)L_13);
				// Debug.Log("Image downloaded " + uwr);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___U3CuwrU3E5__1_4;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = L_14;
				G_B11_0 = L_15;
				G_B11_1 = _stringLiteralEE8E21EC40707CD6ED8B4678234920AE4C89C331;
				if (L_15)
				{
					G_B12_0 = L_15;
					G_B12_1 = _stringLiteralEE8E21EC40707CD6ED8B4678234920AE4C89C331;
					goto IL_00b4_1;
				}
			}
			{
				G_B13_0 = ((String_t*)(NULL));
				G_B13_1 = G_B11_1;
				goto IL_00b9_1;
			}

IL_00b4_1:
			{
				NullCheck(G_B12_0);
				String_t* L_16;
				L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B12_0);
				G_B13_0 = L_16;
				G_B13_1 = G_B12_1;
			}

IL_00b9_1:
			{
				String_t* L_17;
				L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B13_1, G_B13_0, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
				// CreateImageTargetFromTexture(texture);
				TestScript_t6D759E079BA3FEA034493A5F329125444C6E8F1A* L_18 = __this->___U3CU3E4__this_3;
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = __this->___U3CtextureU3E5__2_5;
				NullCheck(L_18);
				TestScript_CreateImageTargetFromTexture_mC4374FD8C340CC2BFCA912047AE477D1F644F707(L_18, L_19, NULL);
				__this->___U3CtextureU3E5__2_5 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextureU3E5__2_5), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
			}

IL_00de_1:
			{
				U3CRetrieveTextureFromWebU3Ed__6_U3CU3Em__Finally1_mD82E12F44D32370AF15B47C39098149F30E31DBB(__this, NULL);
				__this->___U3CuwrU3E5__1_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CuwrU3E5__1_4), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00f9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f9:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void TestScript/<RetrieveTextureFromWeb>d__6::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetrieveTextureFromWebU3Ed__6_U3CU3Em__Finally1_mD82E12F44D32370AF15B47C39098149F30E31DBB (U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CuwrU3E5__1_4;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CuwrU3E5__1_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object TestScript/<RetrieveTextureFromWeb>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRetrieveTextureFromWebU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m92E859D9554D188F7AC3E4EE5A719C9C947CAF47 (U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TestScript/<RetrieveTextureFromWeb>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRetrieveTextureFromWebU3Ed__6_System_Collections_IEnumerator_Reset_m386295269EEDEEDC79F8EAEC2CA639C194E76859 (U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRetrieveTextureFromWebU3Ed__6_System_Collections_IEnumerator_Reset_m386295269EEDEEDC79F8EAEC2CA639C194E76859_RuntimeMethod_var)));
	}
}
// System.Object TestScript/<RetrieveTextureFromWeb>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRetrieveTextureFromWebU3Ed__6_System_Collections_IEnumerator_get_Current_mF524123ED5EFF8218BBA153C7F320B981F858527 (U3CRetrieveTextureFromWebU3Ed__6_t34B2481347CE39D9D3C7AB34E2E021D83606E090* __this, const RuntimeMethod* method) 
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
// System.Void CameraImageAccess::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageAccess_Start_m85A9776809D8905CEC1FC47897B236C4ECECC2CA (CameraImageAccess_t57DEFBCE790B5BB36FA653DD5A23463B4CF007DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraImageAccess_OnPause_mCF59395AD642374085F0FACAF112D119B8757342_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraImageAccess_OnVuforiaUpdated_m3D00BEB24FDFFF2833101AFDC17C2897D33E5EA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraImageAccess_RegisterFormat_m2CCE0BE3E7CB9CA726D8827114C18C06274A2226_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// texture = new Texture2D(width, height, TextureFormat.RGB24, false);
		int32_t L_0 = __this->___width_8;
		int32_t L_1 = __this->___height_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_2, L_0, L_1, 3, (bool)0, NULL);
		__this->___texture_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texture_5), (void*)L_2);
		// VuforiaApplication.Instance.OnVuforiaStarted += RegisterFormat;
		VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* L_3;
		L_3 = VuforiaApplication_get_Instance_mAD5B1238C27A229C127BD1E44677713D1CE0FC03(NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, __this, (intptr_t)((void*)CameraImageAccess_RegisterFormat_m2CCE0BE3E7CB9CA726D8827114C18C06274A2226_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		VuforiaApplication_add_OnVuforiaStarted_mE13713AD839E4F3A635FF321BF28BE990F6E49CE(L_3, L_4, NULL);
		// VuforiaApplication.Instance.OnVuforiaPaused += OnPause;
		VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* L_5;
		L_5 = VuforiaApplication_get_Instance_mAD5B1238C27A229C127BD1E44677713D1CE0FC03(NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_6, __this, (intptr_t)((void*)CameraImageAccess_OnPause_mCF59395AD642374085F0FACAF112D119B8757342_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		VuforiaApplication_add_OnVuforiaPaused_m56715B6BF9C247D34A3563D93045F91BC9DC0517(L_5, L_6, NULL);
		// VuforiaBehaviour.Instance.World.OnStateUpdated += OnVuforiaUpdated;
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_7;
		L_7 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		NullCheck(L_7);
		World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* L_8;
		L_8 = VuforiaBehaviour_get_World_m14A8271B023273D49C261BE6EC1378C16EB7B900_inline(L_7, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, __this, (intptr_t)((void*)CameraImageAccess_OnVuforiaUpdated_m3D00BEB24FDFFF2833101AFDC17C2897D33E5EA6_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		World_add_OnStateUpdated_mA376BD9928E49474C1A020C81AC8C2A9C0D04BC9(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void CameraImageAccess::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageAccess_OnDestroy_mF27542ACC01F51815AA88A7F38A3EBE6D799D571 (CameraImageAccess_t57DEFBCE790B5BB36FA653DD5A23463B4CF007DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraImageAccess_OnPause_mCF59395AD642374085F0FACAF112D119B8757342_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraImageAccess_OnVuforiaUpdated_m3D00BEB24FDFFF2833101AFDC17C2897D33E5EA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraImageAccess_RegisterFormat_m2CCE0BE3E7CB9CA726D8827114C18C06274A2226_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VuforiaApplication.Instance.OnVuforiaStarted -= RegisterFormat;
		VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* L_0;
		L_0 = VuforiaApplication_get_Instance_mAD5B1238C27A229C127BD1E44677713D1CE0FC03(NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)CameraImageAccess_RegisterFormat_m2CCE0BE3E7CB9CA726D8827114C18C06274A2226_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VuforiaApplication_remove_OnVuforiaStarted_m5D03D7619DABF168B877F079AEA48AEB98104B7D(L_0, L_1, NULL);
		// VuforiaApplication.Instance.OnVuforiaPaused -= OnPause;
		VuforiaApplication_t84202EE6AE3488947F9398AA46BAB1D6F7CCDA46* L_2;
		L_2 = VuforiaApplication_get_Instance_mAD5B1238C27A229C127BD1E44677713D1CE0FC03(NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_3, __this, (intptr_t)((void*)CameraImageAccess_OnPause_mCF59395AD642374085F0FACAF112D119B8757342_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VuforiaApplication_remove_OnVuforiaPaused_mFC1B8A942A8E8C31DBA07FBD71C41773A2C8631A(L_2, L_3, NULL);
		// VuforiaBehaviour.Instance.World.OnStateUpdated -= OnVuforiaUpdated;
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_4;
		L_4 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		NullCheck(L_4);
		World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* L_5;
		L_5 = VuforiaBehaviour_get_World_m14A8271B023273D49C261BE6EC1378C16EB7B900_inline(L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, __this, (intptr_t)((void*)CameraImageAccess_OnVuforiaUpdated_m3D00BEB24FDFFF2833101AFDC17C2897D33E5EA6_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		World_remove_OnStateUpdated_mD87D14C47D5D5B6E38EEA3370E04258FC58FFD8A(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void CameraImageAccess::OnVuforiaUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageAccess_OnVuforiaUpdated_m3D00BEB24FDFFF2833101AFDC17C2897D33E5EA6 (CameraImageAccess_t57DEFBCE790B5BB36FA653DD5A23463B4CF007DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Image_tC8F1E47959853F15CF7B56529F313496B2DD740B* V_1 = NULL;
	bool V_2 = false;
	{
		// if (mFormatRegistered)
		bool L_0 = __this->___mFormatRegistered_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0076;
		}
	}
	{
		// Vuforia.Image image = VuforiaBehaviour.Instance.CameraDevice.GetCameraImage(mPixelFormat);
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_2;
		L_2 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		NullCheck(L_2);
		CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* L_3;
		L_3 = VuforiaBehaviour_get_CameraDevice_m2B852D0BE38060B0B933A903E97F2278EE97BEEA_inline(L_2, NULL);
		int32_t L_4 = __this->___mPixelFormat_6;
		NullCheck(L_3);
		Image_tC8F1E47959853F15CF7B56529F313496B2DD740B* L_5;
		L_5 = CameraDevice_GetCameraImage_mEAFCDA913F72B58D9C1B88C73B2F3722540076F4(L_3, L_4, NULL);
		V_1 = L_5;
		// image.CopyBufferToTexture(texture);
		Image_tC8F1E47959853F15CF7B56529F313496B2DD740B* L_6 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___texture_5;
		NullCheck(L_6);
		Image_CopyBufferToTexture_m36F41725E7564CC7CC9D9FEE6C76E52746B4FF18(L_6, L_7, NULL);
		// texture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___texture_5;
		NullCheck(L_8);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_8, NULL);
		// if (texture)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->___texture_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		// rawImage.texture = texture;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_12 = __this->___rawImage_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = __this->___texture_5;
		NullCheck(L_12);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_12, L_13, NULL);
		// rawImage.material.mainTexture = texture;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_14 = __this->___rawImage_4;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_14);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = __this->___texture_5;
		NullCheck(L_15);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_15, L_16, NULL);
	}

IL_0075:
	{
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void CameraImageAccess::OnPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageAccess_OnPause_mCF59395AD642374085F0FACAF112D119B8757342 (CameraImageAccess_t57DEFBCE790B5BB36FA653DD5A23463B4CF007DD* __this, bool ___paused0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F6807B3C21CE1E40CD4C2F04D1F35272D874A95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71793D063A6C7D6207E0289CCAE29DA9DA4B6B26);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (paused)
		bool L_0 = ___paused0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// Debug.Log("App was paused");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3F6807B3C21CE1E40CD4C2F04D1F35272D874A95, NULL);
		// UnregisterFormat();
		CameraImageAccess_UnregisterFormat_m9DE847283139BE3292766142E29F081D764F4957(__this, NULL);
		goto IL_0030;
	}

IL_001c:
	{
		// Debug.Log("App was resumed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral71793D063A6C7D6207E0289CCAE29DA9DA4B6B26, NULL);
		// RegisterFormat();
		CameraImageAccess_RegisterFormat_m2CCE0BE3E7CB9CA726D8827114C18C06274A2226(__this, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void CameraImageAccess::RegisterFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageAccess_RegisterFormat_m2CCE0BE3E7CB9CA726D8827114C18C06274A2226 (CameraImageAccess_t57DEFBCE790B5BB36FA653DD5A23463B4CF007DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PixelFormat_t869ADFBEA645F6791AB1D62DAB0164965E279156_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4373A9E757DE805F896E277AA78684157388969E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77C2E4D86E25AB2A6789BC4D287B25254CE6204E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4CEB041499939796C43CDDD97FC260C4CA738F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// bool success = VuforiaBehaviour.Instance.CameraDevice.SetFrameFormat(mPixelFormat, true);
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_0;
		L_0 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		NullCheck(L_0);
		CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* L_1;
		L_1 = VuforiaBehaviour_get_CameraDevice_m2B852D0BE38060B0B933A903E97F2278EE97BEEA_inline(L_0, NULL);
		int32_t L_2 = __this->___mPixelFormat_6;
		NullCheck(L_1);
		bool L_3;
		L_3 = CameraDevice_SetFrameFormat_m42A7D34E97602FFAB10DB1ACAC7736EE026A2B6E(L_1, L_2, (bool)1, NULL);
		V_0 = L_3;
		// if (success)
		bool L_4 = V_0;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// Debug.Log("Successfully registered pixel format " + mPixelFormat.ToString());
		int32_t* L_6 = (&__this->___mPixelFormat_6);
		Il2CppFakeBox<int32_t> L_7(PixelFormat_t869ADFBEA645F6791AB1D62DAB0164965E279156_il2cpp_TypeInfo_var, L_6);
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral77C2E4D86E25AB2A6789BC4D287B25254CE6204E, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// mFormatRegistered = true;
		__this->___mFormatRegistered_7 = (bool)1;
		goto IL_0078;
	}

IL_0049:
	{
		// Debug.LogError(
		//     "Failed to register pixel format " + mPixelFormat.ToString() +
		//     "\n the format may be unsupported by your device;" +
		//     "\n consider using a different pixel format.");
		int32_t* L_10 = (&__this->___mPixelFormat_6);
		Il2CppFakeBox<int32_t> L_11(PixelFormat_t869ADFBEA645F6791AB1D62DAB0164965E279156_il2cpp_TypeInfo_var, L_10);
		String_t* L_12;
		L_12 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), NULL);
		String_t* L_13;
		L_13 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralAF4CEB041499939796C43CDDD97FC260C4CA738F, L_12, _stringLiteral4373A9E757DE805F896E277AA78684157388969E, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_13, NULL);
		// mFormatRegistered = false;
		__this->___mFormatRegistered_7 = (bool)0;
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void CameraImageAccess::UnregisterFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageAccess_UnregisterFormat_m9DE847283139BE3292766142E29F081D764F4957 (CameraImageAccess_t57DEFBCE790B5BB36FA653DD5A23463B4CF007DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PixelFormat_t869ADFBEA645F6791AB1D62DAB0164965E279156_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D799F5CCF4177DBD5B0211092936B886613A65A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Unregistering camera pixel format " + mPixelFormat.ToString());
		int32_t* L_0 = (&__this->___mPixelFormat_6);
		Il2CppFakeBox<int32_t> L_1(PixelFormat_t869ADFBEA645F6791AB1D62DAB0164965E279156_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1D799F5CCF4177DBD5B0211092936B886613A65A, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// VuforiaBehaviour.Instance.CameraDevice.SetFrameFormat(mPixelFormat, false);
		VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* L_4;
		L_4 = VuforiaBehaviour_get_Instance_m8429CB479D68EA7506815B46E9D9AA09C8F90EA0(NULL);
		NullCheck(L_4);
		CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* L_5;
		L_5 = VuforiaBehaviour_get_CameraDevice_m2B852D0BE38060B0B933A903E97F2278EE97BEEA_inline(L_4, NULL);
		int32_t L_6 = __this->___mPixelFormat_6;
		NullCheck(L_5);
		bool L_7;
		L_7 = CameraDevice_SetFrameFormat_m42A7D34E97602FFAB10DB1ACAC7736EE026A2B6E(L_5, L_6, (bool)0, NULL);
		// mFormatRegistered = false;
		__this->___mFormatRegistered_7 = (bool)0;
		// }
		return;
	}
}
// System.Void CameraImageAccess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageAccess__ctor_m58ECB56BFF4EE3173F711A889083A406419EFDB2 (CameraImageAccess_t57DEFBCE790B5BB36FA653DD5A23463B4CF007DD* __this, const RuntimeMethod* method) 
{
	{
		// private PixelFormat mPixelFormat = PixelFormat.RGB888;
		__this->___mPixelFormat_6 = 3;
		// private bool mFormatRegistered = false;
		__this->___mFormatRegistered_7 = (bool)0;
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
// System.Void ImageTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTarget__ctor_m33BD0D6EA7CD4146FD8D8A9E47987C03CACBDF5D (ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void ImageUploader::CaptureAndUploadImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageUploader_CaptureAndUploadImage_m74C68648C4351F680832298C5C825D60D26894A8 (ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageUploader_U3CCaptureAndUploadImageU3Eb__5_0_m1BA49A9DAA1484C3D0DBBF663BC46E94F517D0AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// NativeCamera.Permission permission = NativeCamera.TakePicture((path) =>
		// {
		//     Debug.Log("Image path: " + path);
		//     if (path != null)
		//     {
		//         // Create a Texture2D from the captured image
		//         _textureToUpload = NativeCamera.LoadImageAtPath(path, maxSize: 1000, markTextureNonReadable: false);
		//         TryUploadTexture();
		//     }
		// });
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_0 = (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771*)il2cpp_codegen_object_new(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CameraCallback__ctor_m39376148047C9B1A537BC5DB202E142431A77AFE(L_0, __this, (intptr_t)((void*)ImageUploader_U3CCaptureAndUploadImageU3Eb__5_0_m1BA49A9DAA1484C3D0DBBF663BC46E94F517D0AA_RuntimeMethod_var), NULL);
		int32_t L_1;
		L_1 = NativeCamera_TakePicture_mC2A748E023DC5C34D19AF571325AF952A714AAD4(L_0, (-1), (bool)1, (-1), NULL);
		V_0 = L_1;
		// }
		return;
	}
}
// System.Void ImageUploader::TryUploadTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageUploader_TryUploadTexture_m49882DF77EB8F124D3DDCE56EF3863E22C5CBBCA (ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageUploader_U3CTryUploadTextureU3Eb__6_0_m03491CD29B077B40D680CF634043EAEDCD76F336_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77D55F948CD86B3B7D2AD0730A129575FE8BD5F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		// if (_textureToUpload != null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->____textureToUpload_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// var cor1 = VuforiaRepository.CreateImageTarget(_textureToUpload, (KeyValuePair<String, ImageTarget> target) =>
		// {
		//     if (!target.Equals(default(KeyValuePair<String, ImageTarget>)))
		//     {
		//         var cor2 = TryGetRating(target.Key, (int rating) =>
		//         {
		//             Debug.Log(rating);
		//             if (rating >= 3)
		//             {
		//                 var cor3 = firebaseRepo.UploadImageTarget("home", target);
		//                 StartCoroutine(cor3);
		//             }
		// 
		//         });
		//         StartCoroutine(cor2);
		//     }
		//     else
		//         Debug.Log("Upload failed");
		// });
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->____textureToUpload_8;
		Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB* L_4 = (Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB*)il2cpp_codegen_object_new(Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mAC8E9144DB5AC0712B8E6649B0E4112F6188CDB2(L_4, __this, (intptr_t)((void*)ImageUploader_U3CTryUploadTextureU3Eb__6_0_m03491CD29B077B40D680CF634043EAEDCD76F336_RuntimeMethod_var), NULL);
		RuntimeObject* L_5;
		L_5 = VuforiaRepository_CreateImageTarget_mC77E3809FBD901BE7CC97F33836C47FFEA902E71(L_3, L_4, NULL);
		V_1 = L_5;
		// StartCoroutine(cor1);
		RuntimeObject* L_6 = V_1;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		goto IL_0040;
	}

IL_0035:
	{
		// Debug.Log("Upload texture is null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB77D55F948CD86B3B7D2AD0730A129575FE8BD5F, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator ImageUploader::TryGetRating(System.String,System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageUploader_TryGetRating_m0375D17DD9317E94770C7E628FBF462E35A84CF7 (ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8* __this, String_t* ___targetId0, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799* L_0 = (U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799*)il2cpp_codegen_object_new(U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTryGetRatingU3Ed__7__ctor_m5F1A521B121881115978521A7A30C0A26691383F(L_0, 0, NULL);
		U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799* L_2 = L_1;
		String_t* L_3 = ___targetId0;
		NullCheck(L_2);
		L_2->___targetId_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___targetId_2), (void*)L_3);
		U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799* L_4 = L_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = ___callback1;
		NullCheck(L_4);
		L_4->___callback_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___callback_3), (void*)L_5);
		return L_4;
	}
}
// System.Void ImageUploader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageUploader__ctor_m52F2F86D91B4CCFC3EF9ADAE97F1DA7202A306FC (ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8* __this, const RuntimeMethod* method) 
{
	{
		// public int maxTries = 20;
		__this->___maxTries_6 = ((int32_t)20);
		// public float waitTime = 0.5f;
		__this->___waitTime_7 = (0.5f);
		// private Texture2D _textureToUpload = null;
		__this->____textureToUpload_8 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____textureToUpload_8), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ImageUploader::<CaptureAndUploadImage>b__5_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageUploader_U3CCaptureAndUploadImageU3Eb__5_0_m1BA49A9DAA1484C3D0DBBF663BC46E94F517D0AA (ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral174ED8386002338D41311EA8103201765BC2ED20);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Debug.Log("Image path: " + path);
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral174ED8386002338D41311EA8103201765BC2ED20, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// if (path != null)
		String_t* L_2 = ___path0;
		V_0 = (bool)((!(((RuntimeObject*)(String_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// _textureToUpload = NativeCamera.LoadImageAtPath(path, maxSize: 1000, markTextureNonReadable: false);
		String_t* L_4 = ___path0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5;
		L_5 = NativeCamera_LoadImageAtPath_m0F2B227CF63FE99A67155B8C52A719AF5949C747(L_4, ((int32_t)1000), (bool)0, (bool)1, (bool)0, NULL);
		__this->____textureToUpload_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____textureToUpload_8), (void*)L_5);
		// TryUploadTexture();
		ImageUploader_TryUploadTexture_m49882DF77EB8F124D3DDCE56EF3863E22C5CBBCA(__this, NULL);
	}

IL_0037:
	{
		// });
		return;
	}
}
// System.Void ImageUploader::<TryUploadTexture>b__6_0(System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageUploader_U3CTryUploadTextureU3Eb__6_0_m03491CD29B077B40D680CF634043EAEDCD76F336 (ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8* __this, KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mD288650659CF2C6F2AE39C709B535092E5CF182C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CTryUploadTextureU3Eb__1_mD87A0F04484595BEA0DCED634F4DE5D1BB3C7CAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92DA6CEE917F1CD170A41C45409C50E05C6AA3DA);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445* V_0 = NULL;
	bool V_1 = false;
	KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445* L_0 = (U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_m63A1A46D2EA583CBEED6826B55288222D480444A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_1), (void*)__this);
		U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445* L_2 = V_0;
		KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C L_3 = ___target0;
		NullCheck(L_2);
		L_2->___target_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_2->___target_0))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_2->___target_0))->___value_1), (void*)NULL);
		#endif
		// if (!target.Equals(default(KeyValuePair<String, ImageTarget>)))
		U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445* L_4 = V_0;
		NullCheck(L_4);
		KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C* L_5 = (&L_4->___target_0);
		il2cpp_codegen_initobj((&V_2), sizeof(KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C));
		KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C L_6 = V_2;
		KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C L_7 = L_6;
		RuntimeObject* L_8 = Box(KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C_il2cpp_TypeInfo_var, &L_7);
		Il2CppFakeBox<KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C> L_9(KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C_il2cpp_TypeInfo_var, L_5);
		bool L_10;
		L_10 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_9), L_8, NULL);
		V_1 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		// var cor2 = TryGetRating(target.Key, (int rating) =>
		// {
		//     Debug.Log(rating);
		//     if (rating >= 3)
		//     {
		//         var cor3 = firebaseRepo.UploadImageTarget("home", target);
		//         StartCoroutine(cor3);
		//     }
		// 
		// });
		U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445* L_12 = V_0;
		NullCheck(L_12);
		KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C* L_13 = (&L_12->___target_0);
		String_t* L_14;
		L_14 = KeyValuePair_2_get_Key_mD288650659CF2C6F2AE39C709B535092E5CF182C_inline(L_13, KeyValuePair_2_get_Key_mD288650659CF2C6F2AE39C709B535092E5CF182C_RuntimeMethod_var);
		U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445* L_15 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_16 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CTryUploadTextureU3Eb__1_mD87A0F04484595BEA0DCED634F4DE5D1BB3C7CAD_RuntimeMethod_var), NULL);
		RuntimeObject* L_17;
		L_17 = ImageUploader_TryGetRating_m0375D17DD9317E94770C7E628FBF462E35A84CF7(__this, L_14, L_16, NULL);
		V_3 = L_17;
		// StartCoroutine(cor2);
		RuntimeObject* L_18 = V_3;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_19;
		L_19 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_18, NULL);
		goto IL_0070;
	}

IL_0065:
	{
		// Debug.Log("Upload failed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral92DA6CEE917F1CD170A41C45409C50E05C6AA3DA, NULL);
	}

IL_0070:
	{
		// });
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
// System.Void ImageUploader/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m63A1A46D2EA583CBEED6826B55288222D480444A (U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ImageUploader/<>c__DisplayClass6_0::<TryUploadTexture>b__1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CTryUploadTextureU3Eb__1_mD87A0F04484595BEA0DCED634F4DE5D1BB3C7CAD (U3CU3Ec__DisplayClass6_0_t40F1FB74BA8151848BA1B32A530DEC88BF6D7445* __this, int32_t ___rating0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		// Debug.Log(rating);
		int32_t L_0 = ___rating0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// if (rating >= 3)
		int32_t L_3 = ___rating0;
		V_0 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		// var cor3 = firebaseRepo.UploadImageTarget("home", target);
		ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8* L_5 = __this->___U3CU3E4__this_1;
		NullCheck(L_5);
		FirebaseRepository_tF7B568A98C9D20CE97AAC8B8AE5D64B0A6DA3C70* L_6 = L_5->___firebaseRepo_4;
		KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C L_7 = __this->___target_0;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = FirebaseRepository_UploadImageTarget_m22DF19AC205C17BCB7F12B4B7ECDBCDA714D3E83(L_6, _stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97, L_7, NULL);
		V_1 = L_8;
		// StartCoroutine(cor3);
		ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8* L_9 = __this->___U3CU3E4__this_1;
		RuntimeObject* L_10 = V_1;
		NullCheck(L_9);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_9, L_10, NULL);
	}

IL_0043:
	{
		// });
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
// System.Void ImageUploader/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mFC7F11C8D7D8C786EAD8BBE408DDDCFD1DE3D3FC (U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ImageUploader/<>c__DisplayClass7_0::<TryGetRating>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CTryGetRatingU3Eb__0_mBCE59404FE1FA2674FD7DE019488C93FA5FB4D21 (U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F* __this, int32_t ___rating0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// imageRating = rating;
		int32_t L_0 = ___rating0;
		__this->___imageRating_0 = L_0;
		// tries++;
		int32_t L_1 = __this->___tries_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___tries_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// });
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
// System.Void ImageUploader/<TryGetRating>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGetRatingU3Ed__7__ctor_m5F1A521B121881115978521A7A30C0A26691383F (U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ImageUploader/<TryGetRating>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGetRatingU3Ed__7_System_IDisposable_Dispose_m2A34B95A77E13ABF7A9DDF7C14AA43CFE20531B5 (U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ImageUploader/<TryGetRating>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTryGetRatingU3Ed__7_MoveNext_mA216C9EEA32DF26BA5F053C57741193DC0C02770 (U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CTryGetRatingU3Eb__0_mBCE59404FE1FA2674FD7DE019488C93FA5FB4D21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B13_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_007f;
	}

IL_001f:
	{
		goto IL_00a5;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F* L_2 = (U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3CU3Ec__DisplayClass7_0__ctor_mFC7F11C8D7D8C786EAD8BBE408DDDCFD1DE3D3FC(L_2, NULL);
		__this->___U3CU3E8__1_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)L_2);
		// int imageRating = -1;
		U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F* L_3 = __this->___U3CU3E8__1_5;
		NullCheck(L_3);
		L_3->___imageRating_0 = (-1);
		// int tries = 0;
		U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F* L_4 = __this->___U3CU3E8__1_5;
		NullCheck(L_4);
		L_4->___tries_1 = 0;
		goto IL_00ad;
	}

IL_0053:
	{
		// yield return VuforiaRepository.GetImageTargetRating(targetId, (int rating) =>
		// {
		//     imageRating = rating;
		//     tries++;
		// });
		String_t* L_5 = __this->___targetId_2;
		U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F* L_6 = __this->___U3CU3E8__1_5;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CTryGetRatingU3Eb__0_mBCE59404FE1FA2674FD7DE019488C93FA5FB4D21_RuntimeMethod_var), NULL);
		RuntimeObject* L_8;
		L_8 = VuforiaRepository_GetImageTargetRating_mB6966EE6E80C33DE38C892D6CF818C348032291C(L_5, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(waitTime);
		ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8* L_9 = __this->___U3CU3E4__this_4;
		NullCheck(L_9);
		float L_10 = L_9->___waitTime_7;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, L_10, NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00a5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00ad:
	{
		// while (imageRating == -1 && tries < maxTries)
		U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F* L_12 = __this->___U3CU3E8__1_5;
		NullCheck(L_12);
		int32_t L_13 = L_12->___imageRating_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_00d5;
		}
	}
	{
		U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F* L_14 = __this->___U3CU3E8__1_5;
		NullCheck(L_14);
		int32_t L_15 = L_14->___tries_1;
		ImageUploader_t92ADBF928933F6CB136583C50FEF3029A2AAE9B8* L_16 = __this->___U3CU3E4__this_4;
		NullCheck(L_16);
		int32_t L_17 = L_16->___maxTries_6;
		G_B13_0 = ((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		goto IL_00d6;
	}

IL_00d5:
	{
		G_B13_0 = 0;
	}

IL_00d6:
	{
		V_1 = (bool)G_B13_0;
		bool L_18 = V_1;
		if (L_18)
		{
			goto IL_0053;
		}
	}
	{
		// callback(imageRating);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_19 = __this->___callback_3;
		U3CU3Ec__DisplayClass7_0_t7D305385DA5230778B99CA724CA41081FA1F0C5F* L_20 = __this->___U3CU3E8__1_5;
		NullCheck(L_20);
		int32_t L_21 = L_20->___imageRating_0;
		NullCheck(L_19);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_19, L_21, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ImageUploader/<TryGetRating>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTryGetRatingU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBE40A4206AD771C1E6FD7EC09B1BC21E53D1E954 (U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ImageUploader/<TryGetRating>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryGetRatingU3Ed__7_System_Collections_IEnumerator_Reset_m5EA6E0798ECC90FE29E3D29BDE53864895C0C190 (U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTryGetRatingU3Ed__7_System_Collections_IEnumerator_Reset_m5EA6E0798ECC90FE29E3D29BDE53864895C0C190_RuntimeMethod_var)));
	}
}
// System.Object ImageUploader/<TryGetRating>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTryGetRatingU3Ed__7_System_Collections_IEnumerator_get_Current_mBBCA7E0B2DE8A2DDCB1BA367173985688896C76E (U3CTryGetRatingU3Ed__7_t4C9B2083D7C4A3CDE40F7BACB482BF8CAF5B6799* __this, const RuntimeMethod* method) 
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
// System.Void PatchImageTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PatchImageTarget__ctor_m418833AAAF50EB493ADD102BF77166FB2E35A902 (PatchImageTarget_tA48F50DFD12C321D3CDA22622FCA247829F0207B* __this, const RuntimeMethod* method) 
{
	{
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
// System.Collections.IEnumerator VuforiaRepository::UpdateImageTargetDimensions(System.String,System.Single,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuforiaRepository_UpdateImageTargetDimensions_m84C11EDE1DE470BF70C9BB70FF148FE77543C053 (String_t* ___targetId0, float ___width1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39* L_0 = (U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39*)il2cpp_codegen_object_new(U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUpdateImageTargetDimensionsU3Ed__3__ctor_mBAFC75AC667418EF68AEFB34D93720EE360F222F(L_0, 0, NULL);
		U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39* L_1 = L_0;
		String_t* L_2 = ___targetId0;
		NullCheck(L_1);
		L_1->___targetId_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___targetId_2), (void*)L_2);
		U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39* L_3 = L_1;
		float L_4 = ___width1;
		NullCheck(L_3);
		L_3->___width_3 = L_4;
		U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39* L_5 = L_3;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = ___callback2;
		NullCheck(L_5);
		L_5->___callback_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___callback_4), (void*)L_6);
		return L_5;
	}
}
// System.Collections.IEnumerator VuforiaRepository::DeleteImageTarget(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuforiaRepository_DeleteImageTarget_m51577AC2CDDCD7AA32FAA22A1AACBEB957EFBDEE (String_t* ___targetId0, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E* L_0 = (U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E*)il2cpp_codegen_object_new(U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDeleteImageTargetU3Ed__4__ctor_mCA6233372207329675DC1D824D61D3F0F99772DC(L_0, 0, NULL);
		U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E* L_1 = L_0;
		String_t* L_2 = ___targetId0;
		NullCheck(L_1);
		L_1->___targetId_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___targetId_2), (void*)L_2);
		U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E* L_3 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = ___callback1;
		NullCheck(L_3);
		L_3->___callback_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___callback_3), (void*)L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator VuforiaRepository::GetImageTargetRating(System.String,System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuforiaRepository_GetImageTargetRating_mB6966EE6E80C33DE38C892D6CF818C348032291C (String_t* ___targetId0, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81* L_0 = (U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81*)il2cpp_codegen_object_new(U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetImageTargetRatingU3Ed__5__ctor_mD2591FDB293D68B0F410A33260AF88FC86B2A15F(L_0, 0, NULL);
		U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81* L_1 = L_0;
		String_t* L_2 = ___targetId0;
		NullCheck(L_1);
		L_1->___targetId_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___targetId_2), (void*)L_2);
		U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81* L_3 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_4 = ___callback1;
		NullCheck(L_3);
		L_3->___callback_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___callback_3), (void*)L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator VuforiaRepository::CreateImageTarget(UnityEngine.Texture2D,System.Action`1<System.Collections.Generic.KeyValuePair`2<System.String,ImageTarget>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuforiaRepository_CreateImageTarget_mC77E3809FBD901BE7CC97F33836C47FFEA902E71 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE* L_0 = (U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE*)il2cpp_codegen_object_new(U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCreateImageTargetU3Ed__6__ctor_m358174F15127A54C36D3EB9B8C61BB3650684AFC(L_0, 0, NULL);
		U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE* L_1 = L_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___texture0;
		NullCheck(L_1);
		L_1->___texture_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___texture_2), (void*)L_2);
		U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE* L_3 = L_1;
		Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB* L_4 = ___callback1;
		NullCheck(L_3);
		L_3->___callback_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___callback_3), (void*)L_4);
		return L_3;
	}
}
// System.String VuforiaRepository::GetRandomString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VuforiaRepository_GetRandomString_m6EE6A917D2FDE3BE6C31979D5763D03D1E55DFFA (int32_t ___length0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E18D43E8177562043B97E5C12804AA56C7FFD09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	{
		// string randomString = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < length; i++)
		V_1 = 0;
		goto IL_0038;
	}

IL_000b:
	{
		// randomString += glyphs[Random.Range(0, glyphs.Length)];
		String_t* L_0 = V_0;
		NullCheck(_stringLiteral6E18D43E8177562043B97E5C12804AA56C7FFD09);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral6E18D43E8177562043B97E5C12804AA56C7FFD09, NULL);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_1, NULL);
		NullCheck(_stringLiteral6E18D43E8177562043B97E5C12804AA56C7FFD09);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral6E18D43E8177562043B97E5C12804AA56C7FFD09, L_2, NULL);
		V_2 = L_3;
		String_t* L_4;
		L_4 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_2), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_4, NULL);
		V_0 = L_5;
		// for (int i = 0; i < length; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_7 = V_1;
		int32_t L_8 = ___length0;
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_000b;
		}
	}
	{
		// return randomString;
		String_t* L_10 = V_0;
		V_4 = L_10;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		String_t* L_11 = V_4;
		return L_11;
	}
}
// System.String VuforiaRepository::GetDateNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VuforiaRepository_GetDateNow_m9909DB641278DE815A6552352106FBF2A519FEDD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9D7A6E96A22CDB584063589D5EF1A7796C3D3D8);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// return string.Format("{0:r}", DateTime.Now.ToUniversalTime());
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&V_0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = L_1;
		RuntimeObject* L_3 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE9D7A6E96A22CDB584063589D5EF1A7796C3D3D8, L_3, NULL);
		V_1 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.String VuforiaRepository::GetVWSAuth(System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VuforiaRepository_GetVWSAuth_mE596C73ED6191272068D9C03B768B78EB5A69E23 (String_t* ___http_verb0, String_t* ___content1, String_t* ___content_type2, String_t* ___date3, String_t* ___requestPath4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27E448D585A6F8F5B979D5BC0372C487BB2268E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AC28C6D19A375187276904D61039C20D427BA32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73D03079E45B3F36B90943F4A53A917569339F52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC38A64A8630F9E40C8641D25571BA212263DC23D);
		s_Il2CppMethodInitialized = true;
	}
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	String_t* V_6 = NULL;
	bool V_7 = false;
	MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* V_8 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	StringBuilder_t* V_11 = NULL;
	int32_t V_12 = 0;
	bool V_13 = false;
	String_t* V_14 = NULL;
	{
		// var enc = Encoding.UTF8;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		V_0 = L_0;
		// if (content == null)
		String_t* L_1 = ___content1;
		V_7 = (bool)((((RuntimeObject*)(String_t*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// content_MD5 = "d41d8cd98f00b204e9800998ecf8427e"; // Empty MD5
		V_1 = _stringLiteral73D03079E45B3F36B90943F4A53A917569339F52;
		goto IL_0080;
	}

IL_0019:
	{
		// MD5 md5 = MD5.Create();
		MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* L_3;
		L_3 = MD5_Create_mD7AEBE7A752D163971C764A9A8CC0029C865F223(NULL);
		V_8 = L_3;
		// byte[] inputBytes = enc.GetBytes(content);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4 = V_0;
		String_t* L_5 = ___content1;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		V_9 = L_6;
		// byte[] hash = md5.ComputeHash(inputBytes);
		MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* L_7 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_9;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_7, L_8, NULL);
		V_10 = L_9;
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_10 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_10, NULL);
		V_11 = L_10;
		// for (int i = 0; i < hash.Length; i++)
		V_12 = 0;
		goto IL_0064;
	}

IL_0041:
	{
		// sb.Append(hash[i].ToString("X2"));
		StringBuilder_t* L_11 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_10;
		int32_t L_13 = V_12;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD, NULL);
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_14, NULL);
		// for (int i = 0; i < hash.Length; i++)
		int32_t L_16 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0064:
	{
		// for (int i = 0; i < hash.Length; i++)
		int32_t L_17 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_10;
		NullCheck(L_18);
		V_13 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))? 1 : 0);
		bool L_19 = V_13;
		if (L_19)
		{
			goto IL_0041;
		}
	}
	{
		// content_MD5 = sb.ToString().ToLowerInvariant();
		StringBuilder_t* L_20 = V_11;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_21, NULL);
		V_1 = L_22;
	}

IL_0080:
	{
		// string stringToSign = string.Format("{0}\n{1}\n{2}\n{3}\n{4}", http_verb, content_MD5, content_type, date, requestPath);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_23;
		String_t* L_25 = ___http_verb0;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_24;
		String_t* L_27 = V_1;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_26;
		String_t* L_29 = ___content_type2;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_28;
		String_t* L_31 = ___date3;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_30;
		String_t* L_33 = ___requestPath4;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_33);
		String_t* L_34;
		L_34 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral27E448D585A6F8F5B979D5BC0372C487BB2268E9, L_32, NULL);
		V_2 = L_34;
		// HMACSHA1 hmac = new HMACSHA1(enc.GetBytes(serverSecretKey));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_35 = V_0;
		NullCheck(L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_35, _stringLiteralC38A64A8630F9E40C8641D25571BA212263DC23D);
		HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030* L_37 = (HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030*)il2cpp_codegen_object_new(HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		HMACSHA1__ctor_mC50ADF9333EE40240D96377069CD32E0D373ECCE(L_37, L_36, NULL);
		V_3 = L_37;
		// byte[] stringToSignBytes = enc.GetBytes(stringToSign);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_38 = V_0;
		String_t* L_39 = V_2;
		NullCheck(L_38);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_38, L_39);
		V_4 = L_40;
		// var sha1Hash = hmac.ComputeHash(stringToSignBytes);
		HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030* L_41 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_4;
		NullCheck(L_41);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43;
		L_43 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_41, L_42, NULL);
		V_5 = L_43;
		// var signature = Convert.ToBase64String(sha1Hash);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_45;
		L_45 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_44, NULL);
		V_6 = L_45;
		// return "VWS " + serverAccessKey + ":" + signature;
		String_t* L_46 = V_6;
		String_t* L_47;
		L_47 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3AC28C6D19A375187276904D61039C20D427BA32, L_46, NULL);
		V_14 = L_47;
		goto IL_00e3;
	}

IL_00e3:
	{
		// }
		String_t* L_48 = V_14;
		return L_48;
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
// System.Void VuforiaRepository/<UpdateImageTargetDimensions>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateImageTargetDimensionsU3Ed__3__ctor_mBAFC75AC667418EF68AEFB34D93720EE360F222F (U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VuforiaRepository/<UpdateImageTargetDimensions>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateImageTargetDimensionsU3Ed__3_System_IDisposable_Dispose_m0F3A7DC70E7B5768213508C9CA9CED26FC3DF613 (U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CUpdateImageTargetDimensionsU3Ed__3_U3CU3Em__Finally1_m129B034C1DCDF05B14ED0E810BAC6522263A2BAD(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean VuforiaRepository/<UpdateImageTargetDimensions>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateImageTargetDimensionsU3Ed__3_MoveNext_m247C01D0A30E481495258018D8C1EAE79DCAD9D2 (U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PatchImageTarget_tA48F50DFD12C321D3CDA22622FCA247829F0207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF432166DF5D1D96A7A93C521BA6543EA79619D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD823CDDE27A8530C6A8EFF7B8B8E99A4B8F1B45);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_019e:
			{// begin fault (depth: 1)
				U3CUpdateImageTargetDimensionsU3Ed__3_System_IDisposable_Dispose_m0F3A7DC70E7B5768213508C9CA9CED26FC3DF613(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0019_1;
			}

IL_0012_1:
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				goto IL_0150_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_01a6;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// var target = new PatchImageTarget()
				// {
				//     width = width
				// };
				PatchImageTarget_tA48F50DFD12C321D3CDA22622FCA247829F0207B* L_3 = (PatchImageTarget_tA48F50DFD12C321D3CDA22622FCA247829F0207B*)il2cpp_codegen_object_new(PatchImageTarget_tA48F50DFD12C321D3CDA22622FCA247829F0207B_il2cpp_TypeInfo_var);
				NullCheck(L_3);
				PatchImageTarget__ctor_m418833AAAF50EB493ADD102BF77166FB2E35A902(L_3, NULL);
				PatchImageTarget_tA48F50DFD12C321D3CDA22622FCA247829F0207B* L_4 = L_3;
				float L_5 = __this->___width_3;
				NullCheck(L_4);
				L_4->___width_0 = L_5;
				__this->___U3CtargetU3E5__1_5 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtargetU3E5__1_5), (void*)L_4);
				// var http_verb = "PUT";
				__this->___U3Chttp_verbU3E5__2_6 = _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Chttp_verbU3E5__2_6), (void*)_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
				// string content = JsonUtility.ToJson(target);
				PatchImageTarget_tA48F50DFD12C321D3CDA22622FCA247829F0207B* L_6 = __this->___U3CtargetU3E5__1_5;
				String_t* L_7;
				L_7 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_6, NULL);
				__this->___U3CcontentU3E5__3_7 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentU3E5__3_7), (void*)L_7);
				// string contentType = "application/json";
				__this->___U3CcontentTypeU3E5__4_8 = _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentTypeU3E5__4_8), (void*)_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
				// var requestPath = "/targets/" + targetId; // Documentation says that the request path is "/targets", which is wrong...
				String_t* L_8 = __this->___targetId_2;
				String_t* L_9;
				L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAF432166DF5D1D96A7A93C521BA6543EA79619D8, L_8, NULL);
				__this->___U3CrequestPathU3E5__5_9 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestPathU3E5__5_9), (void*)L_9);
				// var date = GetDateNow();
				String_t* L_10;
				L_10 = VuforiaRepository_GetDateNow_m9909DB641278DE815A6552352106FBF2A519FEDD(NULL);
				__this->___U3CdateU3E5__6_10 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdateU3E5__6_10), (void*)L_10);
				// var auth = GetVWSAuth(http_verb, content, contentType, date, requestPath);
				String_t* L_11 = __this->___U3Chttp_verbU3E5__2_6;
				String_t* L_12 = __this->___U3CcontentU3E5__3_7;
				String_t* L_13 = __this->___U3CcontentTypeU3E5__4_8;
				String_t* L_14 = __this->___U3CdateU3E5__6_10;
				String_t* L_15 = __this->___U3CrequestPathU3E5__5_9;
				String_t* L_16;
				L_16 = VuforiaRepository_GetVWSAuth_mE596C73ED6191272068D9C03B768B78EB5A69E23(L_11, L_12, L_13, L_14, L_15, NULL);
				__this->___U3CauthU3E5__7_11 = L_16;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CauthU3E5__7_11), (void*)L_16);
				// var contentBytes = Encoding.UTF8.GetBytes(content);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
				L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				String_t* L_18 = __this->___U3CcontentU3E5__3_7;
				NullCheck(L_17);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
				L_19 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_17, L_18);
				__this->___U3CcontentBytesU3E5__8_12 = L_19;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentBytesU3E5__8_12), (void*)L_19);
				// using (UnityWebRequest webRequest = UnityWebRequest.Put(host + requestPath, contentBytes))
				String_t* L_20 = __this->___U3CrequestPathU3E5__5_9;
				String_t* L_21;
				L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDD823CDDE27A8530C6A8EFF7B8B8E99A4B8F1B45, L_20, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___U3CcontentBytesU3E5__8_12;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_23;
				L_23 = UnityWebRequest_Put_mC7DF84F2C091ABB8D930BFEC5F648DB90AFD842F(L_21, L_22, NULL);
				__this->___U3CwebRequestU3E5__9_13 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__9_13), (void*)L_23);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// webRequest.SetRequestHeader("Date", date);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = __this->___U3CwebRequestU3E5__9_13;
				String_t* L_25 = __this->___U3CdateU3E5__6_10;
				NullCheck(L_24);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_24, _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03, L_25, NULL);
				// webRequest.SetRequestHeader("Authorization", auth);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_26 = __this->___U3CwebRequestU3E5__9_13;
				String_t* L_27 = __this->___U3CauthU3E5__7_11;
				NullCheck(L_26);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_26, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_27, NULL);
				// webRequest.SetRequestHeader("Content-Type", "application/json");
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_28 = __this->___U3CwebRequestU3E5__9_13;
				NullCheck(L_28);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_28, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
				// yield return webRequest.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_29 = __this->___U3CwebRequestU3E5__9_13;
				NullCheck(L_29);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_30;
				L_30 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_29, NULL);
				__this->___U3CU3E2__current_1 = L_30;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_30);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_01a6;
			}

IL_0150_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// if (webRequest.responseCode == 200)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_31 = __this->___U3CwebRequestU3E5__9_13;
				NullCheck(L_31);
				int64_t L_32;
				L_32 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_31, NULL);
				V_2 = (bool)((((int64_t)L_32) == ((int64_t)((int64_t)((int32_t)200))))? 1 : 0);
				bool L_33 = V_2;
				if (!L_33)
				{
					goto IL_017e_1;
				}
			}
			{
				// callback(true);
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_34 = __this->___callback_4;
				NullCheck(L_34);
				Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_34, (bool)1, NULL);
				goto IL_018b_1;
			}

IL_017e_1:
			{
				// callback(false);
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_35 = __this->___callback_4;
				NullCheck(L_35);
				Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_35, (bool)0, NULL);
			}

IL_018b_1:
			{
				U3CUpdateImageTargetDimensionsU3Ed__3_U3CU3Em__Finally1_m129B034C1DCDF05B14ED0E810BAC6522263A2BAD(__this, NULL);
				__this->___U3CwebRequestU3E5__9_13 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__9_13), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_01a6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01a6:
	{
		bool L_36 = V_0;
		return L_36;
	}
}
// System.Void VuforiaRepository/<UpdateImageTargetDimensions>d__3::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateImageTargetDimensionsU3Ed__3_U3CU3Em__Finally1_m129B034C1DCDF05B14ED0E810BAC6522263A2BAD (U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3E5__9_13;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebRequestU3E5__9_13;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object VuforiaRepository/<UpdateImageTargetDimensions>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateImageTargetDimensionsU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mED232DA94D60AA96E55DBA58165054E8EFD6EA6E (U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VuforiaRepository/<UpdateImageTargetDimensions>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateImageTargetDimensionsU3Ed__3_System_Collections_IEnumerator_Reset_mB636A6A7ABC67D334D032B72F1559DEE14B42D25 (U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateImageTargetDimensionsU3Ed__3_System_Collections_IEnumerator_Reset_mB636A6A7ABC67D334D032B72F1559DEE14B42D25_RuntimeMethod_var)));
	}
}
// System.Object VuforiaRepository/<UpdateImageTargetDimensions>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateImageTargetDimensionsU3Ed__3_System_Collections_IEnumerator_get_Current_m51EE512BE3DD26858DAD2EF215A9D148539E080E (U3CUpdateImageTargetDimensionsU3Ed__3_t53A1C1364B455E2F70BDA791AA3255A900DDBF39* __this, const RuntimeMethod* method) 
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
// System.Void VuforiaRepository/<DeleteImageTarget>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteImageTargetU3Ed__4__ctor_mCA6233372207329675DC1D824D61D3F0F99772DC (U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VuforiaRepository/<DeleteImageTarget>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteImageTargetU3Ed__4_System_IDisposable_Dispose_mFAE0D2C63BCDACC6947BEFE994D6338F2777443E (U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CDeleteImageTargetU3Ed__4_U3CU3Em__Finally1_m1943F53017E2E3EFE3E617C8AC776C74021E831D(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean VuforiaRepository/<DeleteImageTarget>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDeleteImageTargetU3Ed__4_MoveNext_m7664C57BD6FBB57B1712C312FBACF18B6FC6DD1E (U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF432166DF5D1D96A7A93C521BA6543EA79619D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD823CDDE27A8530C6A8EFF7B8B8E99A4B8F1B45);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_014f:
			{// begin fault (depth: 1)
				U3CDeleteImageTargetU3Ed__4_System_IDisposable_Dispose_mFAE0D2C63BCDACC6947BEFE994D6338F2777443E(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0019_1;
			}

IL_0012_1:
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				goto IL_0101_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_0157;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// var http_verb = "DELETE";
				__this->___U3Chttp_verbU3E5__1_4 = _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Chttp_verbU3E5__1_4), (void*)_stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38);
				// string content = "";
				__this->___U3CcontentU3E5__2_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentU3E5__2_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
				// string contentType = "";
				__this->___U3CcontentTypeU3E5__3_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentTypeU3E5__3_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
				// var requestPath = "/targets/" + targetId;
				String_t* L_3 = __this->___targetId_2;
				String_t* L_4;
				L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAF432166DF5D1D96A7A93C521BA6543EA79619D8, L_3, NULL);
				__this->___U3CrequestPathU3E5__4_7 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestPathU3E5__4_7), (void*)L_4);
				// var date = GetDateNow();
				String_t* L_5;
				L_5 = VuforiaRepository_GetDateNow_m9909DB641278DE815A6552352106FBF2A519FEDD(NULL);
				__this->___U3CdateU3E5__5_8 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdateU3E5__5_8), (void*)L_5);
				// var auth = GetVWSAuth(http_verb, content, contentType, date, requestPath);
				String_t* L_6 = __this->___U3Chttp_verbU3E5__1_4;
				String_t* L_7 = __this->___U3CcontentU3E5__2_5;
				String_t* L_8 = __this->___U3CcontentTypeU3E5__3_6;
				String_t* L_9 = __this->___U3CdateU3E5__5_8;
				String_t* L_10 = __this->___U3CrequestPathU3E5__4_7;
				String_t* L_11;
				L_11 = VuforiaRepository_GetVWSAuth_mE596C73ED6191272068D9C03B768B78EB5A69E23(L_6, L_7, L_8, L_9, L_10, NULL);
				__this->___U3CauthU3E5__6_9 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CauthU3E5__6_9), (void*)L_11);
				// using (UnityWebRequest webRequest = UnityWebRequest.Delete(host + requestPath))
				String_t* L_12 = __this->___U3CrequestPathU3E5__4_7;
				String_t* L_13;
				L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDD823CDDE27A8530C6A8EFF7B8B8E99A4B8F1B45, L_12, NULL);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14;
				L_14 = UnityWebRequest_Delete_mB86F20E8BF883C7F5831ED29A9ADF2A54E7F7021(L_13, NULL);
				__this->___U3CwebRequestU3E5__7_10 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__7_10), (void*)L_14);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// webRequest.SetRequestHeader("Date", date);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->___U3CwebRequestU3E5__7_10;
				String_t* L_16 = __this->___U3CdateU3E5__5_8;
				NullCheck(L_15);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_15, _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03, L_16, NULL);
				// webRequest.SetRequestHeader("Authorization", auth);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = __this->___U3CwebRequestU3E5__7_10;
				String_t* L_18 = __this->___U3CauthU3E5__6_9;
				NullCheck(L_17);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_17, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_18, NULL);
				// yield return webRequest.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_19 = __this->___U3CwebRequestU3E5__7_10;
				NullCheck(L_19);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_20;
				L_20 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_19, NULL);
				__this->___U3CU3E2__current_1 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0157;
			}

IL_0101_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// if (webRequest.responseCode == 200)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_21 = __this->___U3CwebRequestU3E5__7_10;
				NullCheck(L_21);
				int64_t L_22;
				L_22 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_21, NULL);
				V_2 = (bool)((((int64_t)L_22) == ((int64_t)((int64_t)((int32_t)200))))? 1 : 0);
				bool L_23 = V_2;
				if (!L_23)
				{
					goto IL_012f_1;
				}
			}
			{
				// callback(true);
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_24 = __this->___callback_3;
				NullCheck(L_24);
				Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_24, (bool)1, NULL);
				goto IL_013c_1;
			}

IL_012f_1:
			{
				// callback(false);
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_25 = __this->___callback_3;
				NullCheck(L_25);
				Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_25, (bool)0, NULL);
			}

IL_013c_1:
			{
				U3CDeleteImageTargetU3Ed__4_U3CU3Em__Finally1_m1943F53017E2E3EFE3E617C8AC776C74021E831D(__this, NULL);
				__this->___U3CwebRequestU3E5__7_10 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__7_10), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_0157;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0157:
	{
		bool L_26 = V_0;
		return L_26;
	}
}
// System.Void VuforiaRepository/<DeleteImageTarget>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteImageTargetU3Ed__4_U3CU3Em__Finally1_m1943F53017E2E3EFE3E617C8AC776C74021E831D (U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3E5__7_10;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebRequestU3E5__7_10;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object VuforiaRepository/<DeleteImageTarget>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDeleteImageTargetU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7E793BAD9E7EC1675FB5815F9CECED19526FAC9C (U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VuforiaRepository/<DeleteImageTarget>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteImageTargetU3Ed__4_System_Collections_IEnumerator_Reset_mA142D8E341E5E61047965CB45226A0860D19DC81 (U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeleteImageTargetU3Ed__4_System_Collections_IEnumerator_Reset_mA142D8E341E5E61047965CB45226A0860D19DC81_RuntimeMethod_var)));
	}
}
// System.Object VuforiaRepository/<DeleteImageTarget>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDeleteImageTargetU3Ed__4_System_Collections_IEnumerator_get_Current_m821F0D61B05F2C8387E869CA5D37E5820D545C83 (U3CDeleteImageTargetU3Ed__4_tC0651873A3C33AC3F93EEB97FF69CC436A393F4E* __this, const RuntimeMethod* method) 
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
// System.Void VuforiaRepository/<GetImageTargetRating>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetImageTargetRatingU3Ed__5__ctor_mD2591FDB293D68B0F410A33260AF88FC86B2A15F (U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VuforiaRepository/<GetImageTargetRating>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetImageTargetRatingU3Ed__5_System_IDisposable_Dispose_m9BD281E3897480E001BC94ACBB4D8979B5470989 (U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CGetImageTargetRatingU3Ed__5_U3CU3Em__Finally1_mBC583F8BDF59C5087BC015970BFEE3F8BAD033B5(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean VuforiaRepository/<GetImageTargetRating>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetImageTargetRatingU3Ed__5_MoveNext_m63D3344A6DC29512EDAF2470AD4B0ECF4DBC5CE3 (U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_ToObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DFE617439C21A755062578D82CB788A379344B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03231398100983497E8A3A9BA34D49B8B6AECC95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral944CBBAA2B71AFBB04AEDE40F86DC1C60E7D7F60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF432166DF5D1D96A7A93C521BA6543EA79619D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD823CDDE27A8530C6A8EFF7B8B8E99A4B8F1B45);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_01b7:
			{// begin fault (depth: 1)
				U3CGetImageTargetRatingU3Ed__5_System_IDisposable_Dispose_m9BD281E3897480E001BC94ACBB4D8979B5470989(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0019_1;
			}

IL_0012_1:
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				goto IL_0104_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_01bf;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// var http_verb = "GET";
				__this->___U3Chttp_verbU3E5__1_4 = _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Chttp_verbU3E5__1_4), (void*)_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
				// string content = "";
				__this->___U3CcontentU3E5__2_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentU3E5__2_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
				// string contentType = "";
				__this->___U3CcontentTypeU3E5__3_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentTypeU3E5__3_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
				// var requestPath = "/targets/" + targetId;
				String_t* L_3 = __this->___targetId_2;
				String_t* L_4;
				L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAF432166DF5D1D96A7A93C521BA6543EA79619D8, L_3, NULL);
				__this->___U3CrequestPathU3E5__4_7 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestPathU3E5__4_7), (void*)L_4);
				// var date = GetDateNow();
				String_t* L_5;
				L_5 = VuforiaRepository_GetDateNow_m9909DB641278DE815A6552352106FBF2A519FEDD(NULL);
				__this->___U3CdateU3E5__5_8 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdateU3E5__5_8), (void*)L_5);
				// var auth = GetVWSAuth(http_verb, content, contentType, date, requestPath);
				String_t* L_6 = __this->___U3Chttp_verbU3E5__1_4;
				String_t* L_7 = __this->___U3CcontentU3E5__2_5;
				String_t* L_8 = __this->___U3CcontentTypeU3E5__3_6;
				String_t* L_9 = __this->___U3CdateU3E5__5_8;
				String_t* L_10 = __this->___U3CrequestPathU3E5__4_7;
				String_t* L_11;
				L_11 = VuforiaRepository_GetVWSAuth_mE596C73ED6191272068D9C03B768B78EB5A69E23(L_6, L_7, L_8, L_9, L_10, NULL);
				__this->___U3CauthU3E5__6_9 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CauthU3E5__6_9), (void*)L_11);
				// using (UnityWebRequest webRequest = UnityWebRequest.Get(host + requestPath))
				String_t* L_12 = __this->___U3CrequestPathU3E5__4_7;
				String_t* L_13;
				L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDD823CDDE27A8530C6A8EFF7B8B8E99A4B8F1B45, L_12, NULL);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14;
				L_14 = UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86(L_13, NULL);
				__this->___U3CwebRequestU3E5__7_10 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__7_10), (void*)L_14);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// webRequest.SetRequestHeader("Date", date);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->___U3CwebRequestU3E5__7_10;
				String_t* L_16 = __this->___U3CdateU3E5__5_8;
				NullCheck(L_15);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_15, _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03, L_16, NULL);
				// webRequest.SetRequestHeader("Authorization", auth);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = __this->___U3CwebRequestU3E5__7_10;
				String_t* L_18 = __this->___U3CauthU3E5__6_9;
				NullCheck(L_17);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_17, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_18, NULL);
				// yield return webRequest.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_19 = __this->___U3CwebRequestU3E5__7_10;
				NullCheck(L_19);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_20;
				L_20 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_19, NULL);
				__this->___U3CU3E2__current_1 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_01bf;
			}

IL_0104_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// Debug.Log(webRequest.downloadHandler.text);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_21 = __this->___U3CwebRequestU3E5__7_10;
				NullCheck(L_21);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_22;
				L_22 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_21, NULL);
				NullCheck(L_22);
				String_t* L_23;
				L_23 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_22, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_23, NULL);
				// if (webRequest.responseCode == 200)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = __this->___U3CwebRequestU3E5__7_10;
				NullCheck(L_24);
				int64_t L_25;
				L_25 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_24, NULL);
				V_2 = (bool)((((int64_t)L_25) == ((int64_t)((int64_t)((int32_t)200))))? 1 : 0);
				bool L_26 = V_2;
				if (!L_26)
				{
					goto IL_0196_1;
				}
			}
			{
				// var json = JObject.Parse(webRequest.downloadHandler.text);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_27 = __this->___U3CwebRequestU3E5__7_10;
				NullCheck(L_27);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_28;
				L_28 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_27, NULL);
				NullCheck(L_28);
				String_t* L_29;
				L_29 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_28, NULL);
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_30;
				L_30 = JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43(L_29, NULL);
				__this->___U3CjsonU3E5__8_11 = L_30;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CjsonU3E5__8_11), (void*)L_30);
				// var trackingRating = json["target_record"]["tracking_rating"].ToObject<int>();
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_31 = __this->___U3CjsonU3E5__8_11;
				NullCheck(L_31);
				JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_32;
				L_32 = JObject_get_Item_m889A29E8FCEA531AF829407F208DD05F0108C50B(L_31, _stringLiteral03231398100983497E8A3A9BA34D49B8B6AECC95, NULL);
				NullCheck(L_32);
				JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_33;
				L_33 = VirtualFuncInvoker1< JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3*, RuntimeObject* >::Invoke(17 /* Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::get_Item(System.Object) */, L_32, _stringLiteral944CBBAA2B71AFBB04AEDE40F86DC1C60E7D7F60);
				NullCheck(L_33);
				int32_t L_34;
				L_34 = JToken_ToObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DFE617439C21A755062578D82CB788A379344B7(L_33, JToken_ToObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DFE617439C21A755062578D82CB788A379344B7_RuntimeMethod_var);
				__this->___U3CtrackingRatingU3E5__9_12 = L_34;
				// callback(trackingRating);
				Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_35 = __this->___callback_3;
				int32_t L_36 = __this->___U3CtrackingRatingU3E5__9_12;
				NullCheck(L_35);
				Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_35, L_36, NULL);
				__this->___U3CjsonU3E5__8_11 = (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CjsonU3E5__8_11), (void*)(JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*)NULL);
				goto IL_01a4_1;
			}

IL_0196_1:
			{
				// callback(-2);
				Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_37 = __this->___callback_3;
				NullCheck(L_37);
				Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_37, ((int32_t)-2), NULL);
			}

IL_01a4_1:
			{
				U3CGetImageTargetRatingU3Ed__5_U3CU3Em__Finally1_mBC583F8BDF59C5087BC015970BFEE3F8BAD033B5(__this, NULL);
				__this->___U3CwebRequestU3E5__7_10 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__7_10), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_01bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01bf:
	{
		bool L_38 = V_0;
		return L_38;
	}
}
// System.Void VuforiaRepository/<GetImageTargetRating>d__5::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetImageTargetRatingU3Ed__5_U3CU3Em__Finally1_mBC583F8BDF59C5087BC015970BFEE3F8BAD033B5 (U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3E5__7_10;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebRequestU3E5__7_10;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object VuforiaRepository/<GetImageTargetRating>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetImageTargetRatingU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mED98E22CDF6BF5B7DBB4EA9956882CC6347AEE8D (U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VuforiaRepository/<GetImageTargetRating>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetImageTargetRatingU3Ed__5_System_Collections_IEnumerator_Reset_m50C824923AE46C7833FF648230431B6347E59D5E (U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetImageTargetRatingU3Ed__5_System_Collections_IEnumerator_Reset_m50C824923AE46C7833FF648230431B6347E59D5E_RuntimeMethod_var)));
	}
}
// System.Object VuforiaRepository/<GetImageTargetRating>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetImageTargetRatingU3Ed__5_System_Collections_IEnumerator_get_Current_m9C86D5920791DAF475EA2B7019BFAF797AB343A5 (U3CGetImageTargetRatingU3Ed__5_t771DE16280B9148E5C64863503B8BCA5C7146F81* __this, const RuntimeMethod* method) 
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
// System.Void VuforiaRepository/<CreateImageTarget>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateImageTargetU3Ed__6__ctor_m358174F15127A54C36D3EB9B8C61BB3650684AFC (U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VuforiaRepository/<CreateImageTarget>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateImageTargetU3Ed__6_System_IDisposable_Dispose_m3F72879825F6C3836336A624EF174B8EA3E5261A (U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CCreateImageTargetU3Ed__6_U3CU3Em__Finally1_mECD0D11DFEA98BA68BC45E71F7E4A4388BCE7C5F(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean VuforiaRepository/<CreateImageTarget>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCreateImageTargetU3Ed__6_MoveNext_m75E8844F29D927532A054EF3F380AAD4EF43E95F (U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_ToObject_TisString_t_m24A2444CF94E8759ECB9DA2C94349E16C95CFE48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m5ABBD3A8519075375F31B4EF37E1D4ECD25E909C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF353257FB610A8C8D2E52526E8FE9F5287946B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE45786161ABBA491B2EDCBE328D7553B1A93EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD823CDDE27A8530C6A8EFF7B8B8E99A4B8F1B45);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_02d5:
			{// begin fault (depth: 1)
				U3CCreateImageTargetU3Ed__6_System_IDisposable_Dispose_m3F72879825F6C3836336A624EF174B8EA3E5261A(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0019_1;
			}

IL_0012_1:
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				goto IL_01de_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_02dd;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// var tex24 = new Texture2D(texture.width, texture.height, TextureFormat.RGB24, false);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->___texture_2;
				NullCheck(L_3);
				int32_t L_4;
				L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->___texture_2;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_7, L_4, L_6, 3, (bool)0, NULL);
				__this->___U3Ctex24U3E5__1_4 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Ctex24U3E5__1_4), (void*)L_7);
				// tex24.SetPixels(texture.GetPixels());
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___U3Ctex24U3E5__1_4;
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->___texture_2;
				NullCheck(L_9);
				ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_10;
				L_10 = Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039(L_9, NULL);
				NullCheck(L_8);
				Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_8, L_10, NULL);
				// tex24.Apply();
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = __this->___U3Ctex24U3E5__1_4;
				NullCheck(L_11);
				Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_11, NULL);
				// var imageBytes = tex24.EncodeToJPG();
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = __this->___U3Ctex24U3E5__1_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
				L_13 = ImageConversion_EncodeToJPG_mD3B358B8645CF85EBAD979554FFDE05A54A99804(L_12, NULL);
				__this->___U3CimageBytesU3E5__2_5 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimageBytesU3E5__2_5), (void*)L_13);
				// var imageString = Convert.ToBase64String(imageBytes);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___U3CimageBytesU3E5__2_5;
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				String_t* L_15;
				L_15 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_14, NULL);
				__this->___U3CimageStringU3E5__3_6 = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimageStringU3E5__3_6), (void*)L_15);
				// var target = new ImageTarget()
				// {
				//     // Name must be unique in database according to vuforia docs
				//     name = GetRandomString(60),
				//     image = imageString,
				//     width = 1
				// };
				ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* L_16 = (ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1*)il2cpp_codegen_object_new(ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				ImageTarget__ctor_m33BD0D6EA7CD4146FD8D8A9E47987C03CACBDF5D(L_16, NULL);
				ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* L_17 = L_16;
				String_t* L_18;
				L_18 = VuforiaRepository_GetRandomString_m6EE6A917D2FDE3BE6C31979D5763D03D1E55DFFA(((int32_t)60), NULL);
				NullCheck(L_17);
				L_17->___name_0 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&L_17->___name_0), (void*)L_18);
				ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* L_19 = L_17;
				String_t* L_20 = __this->___U3CimageStringU3E5__3_6;
				NullCheck(L_19);
				L_19->___image_2 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&L_19->___image_2), (void*)L_20);
				ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* L_21 = L_19;
				NullCheck(L_21);
				L_21->___width_1 = (1.0f);
				__this->___U3CtargetU3E5__4_7 = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtargetU3E5__4_7), (void*)L_21);
				// var http_verb = "POST";
				__this->___U3Chttp_verbU3E5__5_8 = _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Chttp_verbU3E5__5_8), (void*)_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
				// string content = JsonUtility.ToJson(target);
				ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* L_22 = __this->___U3CtargetU3E5__4_7;
				String_t* L_23;
				L_23 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_22, NULL);
				__this->___U3CcontentU3E5__6_9 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentU3E5__6_9), (void*)L_23);
				// string contentType = "application/json";
				__this->___U3CcontentTypeU3E5__7_10 = _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentTypeU3E5__7_10), (void*)_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
				// var requestPath = "/targets";
				__this->___U3CrequestPathU3E5__8_11 = _stringLiteralAF353257FB610A8C8D2E52526E8FE9F5287946B3;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestPathU3E5__8_11), (void*)_stringLiteralAF353257FB610A8C8D2E52526E8FE9F5287946B3);
				// var date = GetDateNow();
				String_t* L_24;
				L_24 = VuforiaRepository_GetDateNow_m9909DB641278DE815A6552352106FBF2A519FEDD(NULL);
				__this->___U3CdateU3E5__9_12 = L_24;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdateU3E5__9_12), (void*)L_24);
				// var auth = GetVWSAuth(http_verb, content, contentType, date, requestPath);
				String_t* L_25 = __this->___U3Chttp_verbU3E5__5_8;
				String_t* L_26 = __this->___U3CcontentU3E5__6_9;
				String_t* L_27 = __this->___U3CcontentTypeU3E5__7_10;
				String_t* L_28 = __this->___U3CdateU3E5__9_12;
				String_t* L_29 = __this->___U3CrequestPathU3E5__8_11;
				String_t* L_30;
				L_30 = VuforiaRepository_GetVWSAuth_mE596C73ED6191272068D9C03B768B78EB5A69E23(L_25, L_26, L_27, L_28, L_29, NULL);
				__this->___U3CauthU3E5__10_13 = L_30;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CauthU3E5__10_13), (void*)L_30);
				// using (UnityWebRequest webRequest = UnityWebRequest.Post(host + requestPath, new WWWForm()))
				String_t* L_31 = __this->___U3CrequestPathU3E5__8_11;
				String_t* L_32;
				L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDD823CDDE27A8530C6A8EFF7B8B8E99A4B8F1B45, L_31, NULL);
				WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_33 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				NullCheck(L_33);
				WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_33, NULL);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_34;
				L_34 = UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373(L_32, L_33, NULL);
				__this->___U3CwebRequestU3E5__11_14 = L_34;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__11_14), (void*)L_34);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// var contentBytes = Encoding.UTF8.GetBytes(content);
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_35;
				L_35 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				String_t* L_36 = __this->___U3CcontentU3E5__6_9;
				NullCheck(L_35);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
				L_37 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_35, L_36);
				__this->___U3CcontentBytesU3E5__12_15 = L_37;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentBytesU3E5__12_15), (void*)L_37);
				// webRequest.uploadHandler = new UploadHandlerRaw(contentBytes);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_38 = __this->___U3CwebRequestU3E5__11_14;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->___U3CcontentBytesU3E5__12_15;
				UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_40 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
				NullCheck(L_40);
				UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_40, L_39, NULL);
				NullCheck(L_38);
				UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_38, L_40, NULL);
				// webRequest.SetRequestHeader("Date", date);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_41 = __this->___U3CwebRequestU3E5__11_14;
				String_t* L_42 = __this->___U3CdateU3E5__9_12;
				NullCheck(L_41);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_41, _stringLiteral39CB21871F9F9FE5AE18BA5E81ED4EC6DADB8E03, L_42, NULL);
				// webRequest.SetRequestHeader("Authorization", auth);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_43 = __this->___U3CwebRequestU3E5__11_14;
				String_t* L_44 = __this->___U3CauthU3E5__10_13;
				NullCheck(L_43);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_43, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_44, NULL);
				// webRequest.SetRequestHeader("Content-Type", "application/json");
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_45 = __this->___U3CwebRequestU3E5__11_14;
				NullCheck(L_45);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_45, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
				// yield return webRequest.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_46 = __this->___U3CwebRequestU3E5__11_14;
				NullCheck(L_46);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_47;
				L_47 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_46, NULL);
				__this->___U3CU3E2__current_1 = L_47;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_47);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_02dd;
			}

IL_01de_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// Debug.Log(webRequest.downloadHandler.text);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_48 = __this->___U3CwebRequestU3E5__11_14;
				NullCheck(L_48);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_49;
				L_49 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_48, NULL);
				NullCheck(L_49);
				String_t* L_50;
				L_50 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_49, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_50, NULL);
				// if (webRequest.responseCode == 201)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_51 = __this->___U3CwebRequestU3E5__11_14;
				NullCheck(L_51);
				int64_t L_52;
				L_52 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_51, NULL);
				V_2 = (bool)((((int64_t)L_52) == ((int64_t)((int64_t)((int32_t)201))))? 1 : 0);
				bool L_53 = V_2;
				if (!L_53)
				{
					goto IL_02a5_1;
				}
			}
			{
				// var json = JObject.Parse(webRequest.downloadHandler.text);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_54 = __this->___U3CwebRequestU3E5__11_14;
				NullCheck(L_54);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_55;
				L_55 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_54, NULL);
				NullCheck(L_55);
				String_t* L_56;
				L_56 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_55, NULL);
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_57;
				L_57 = JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43(L_56, NULL);
				__this->___U3CjsonU3E5__13_16 = L_57;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CjsonU3E5__13_16), (void*)L_57);
				// var targetId = json["target_id"];
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_58 = __this->___U3CjsonU3E5__13_16;
				NullCheck(L_58);
				JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_59;
				L_59 = JObject_get_Item_m889A29E8FCEA531AF829407F208DD05F0108C50B(L_58, _stringLiteralCCE45786161ABBA491B2EDCBE328D7553B1A93EE, NULL);
				__this->___U3CtargetIdU3E5__14_17 = L_59;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtargetIdU3E5__14_17), (void*)L_59);
				// if (targetId.Type is JTokenType.String)
				JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_60 = __this->___U3CtargetIdU3E5__14_17;
				NullCheck(L_60);
				int32_t L_61;
				L_61 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JToken::get_Type() */, L_60);
				V_3 = (bool)((((int32_t)L_61) == ((int32_t)8))? 1 : 0);
				bool L_62 = V_3;
				if (!L_62)
				{
					goto IL_027e_1;
				}
			}
			{
				// callback(new KeyValuePair<String, ImageTarget>(targetId.ToObject<string>(), target));
				Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB* L_63 = __this->___callback_3;
				JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_64 = __this->___U3CtargetIdU3E5__14_17;
				NullCheck(L_64);
				String_t* L_65;
				L_65 = JToken_ToObject_TisString_t_m24A2444CF94E8759ECB9DA2C94349E16C95CFE48(L_64, JToken_ToObject_TisString_t_m24A2444CF94E8759ECB9DA2C94349E16C95CFE48_RuntimeMethod_var);
				ImageTarget_t4CAC9E2CD94CAC67C0AD910B9AA6AEF072136DB1* L_66 = __this->___U3CtargetU3E5__4_7;
				KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C L_67;
				memset((&L_67), 0, sizeof(L_67));
				KeyValuePair_2__ctor_m5ABBD3A8519075375F31B4EF37E1D4ECD25E909C((&L_67), L_65, L_66, /*hidden argument*/KeyValuePair_2__ctor_m5ABBD3A8519075375F31B4EF37E1D4ECD25E909C_RuntimeMethod_var);
				NullCheck(L_63);
				Action_1_Invoke_mC1B314AE030CD140BC556A0DD6FEBEE9D96BA995_inline(L_63, L_67, NULL);
				goto IL_0294_1;
			}

IL_027e_1:
			{
				// callback(new KeyValuePair<String, ImageTarget>());
				Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB* L_68 = __this->___callback_3;
				il2cpp_codegen_initobj((&V_4), sizeof(KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C));
				KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C L_69 = V_4;
				NullCheck(L_68);
				Action_1_Invoke_mC1B314AE030CD140BC556A0DD6FEBEE9D96BA995_inline(L_68, L_69, NULL);
			}

IL_0294_1:
			{
				__this->___U3CjsonU3E5__13_16 = (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CjsonU3E5__13_16), (void*)(JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*)NULL);
				__this->___U3CtargetIdU3E5__14_17 = (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtargetIdU3E5__14_17), (void*)(JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3*)NULL);
				goto IL_02bb_1;
			}

IL_02a5_1:
			{
				// callback(new KeyValuePair<String, ImageTarget>());
				Action_1_tA7EB7A81375661994BEB6EDE6825A382FBB802DB* L_70 = __this->___callback_3;
				il2cpp_codegen_initobj((&V_4), sizeof(KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C));
				KeyValuePair_2_tC56804A6399FAD394275685BFB483483CA662D6C L_71 = V_4;
				NullCheck(L_70);
				Action_1_Invoke_mC1B314AE030CD140BC556A0DD6FEBEE9D96BA995_inline(L_70, L_71, NULL);
			}

IL_02bb_1:
			{
				__this->___U3CcontentBytesU3E5__12_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcontentBytesU3E5__12_15), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
				U3CCreateImageTargetU3Ed__6_U3CU3Em__Finally1_mECD0D11DFEA98BA68BC45E71F7E4A4388BCE7C5F(__this, NULL);
				__this->___U3CwebRequestU3E5__11_14 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__11_14), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_02dd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02dd:
	{
		bool L_72 = V_0;
		return L_72;
	}
}
// System.Void VuforiaRepository/<CreateImageTarget>d__6::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateImageTargetU3Ed__6_U3CU3Em__Finally1_mECD0D11DFEA98BA68BC45E71F7E4A4388BCE7C5F (U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3E5__11_14;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwebRequestU3E5__11_14;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object VuforiaRepository/<CreateImageTarget>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateImageTargetU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m07700DF1DCC909AFCC7891938558D9663E789C2B (U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VuforiaRepository/<CreateImageTarget>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateImageTargetU3Ed__6_System_Collections_IEnumerator_Reset_mB9F44F8F95A7629022BD67578566F0DB1B352523 (U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateImageTargetU3Ed__6_System_Collections_IEnumerator_Reset_mB9F44F8F95A7629022BD67578566F0DB1B352523_RuntimeMethod_var)));
	}
}
// System.Object VuforiaRepository/<CreateImageTarget>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateImageTargetU3Ed__6_System_Collections_IEnumerator_get_Current_m3DDE8450CAC7506EDE7E0B11338BA58C90663281 (U3CCreateImageTargetU3Ed__6_tDEEBD369841E4A9964DF7257C21A7F65A18FEEFE* __this, const RuntimeMethod* method) 
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
// System.Void ExtensionMethods.TransormExtensions::SetPositionAndRotation(UnityEngine.Transform,IWorldObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransormExtensions_SetPositionAndRotation_mA01C31412B17250D9C8D7116D8C1CF8888BC5FE5 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, RuntimeObject* ___worldObject1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWorldObject_t184D5AD5E56EFFE4AB33E345710E3F29E45ACCE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = worldObject.Position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___transform0;
		RuntimeObject* L_1 = ___worldObject1;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* UnityEngine.Vector3 IWorldObject::get_Position() */, IWorldObject_t184D5AD5E56EFFE4AB33E345710E3F29E45ACCE9_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// transform.rotation = Quaternion.Euler(worldObject.Rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___transform0;
		RuntimeObject* L_4 = ___worldObject1;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(1 /* UnityEngine.Vector3 IWorldObject::get_Rotation() */, IWorldObject_t184D5AD5E56EFFE4AB33E345710E3F29E45ACCE9_il2cpp_TypeInfo_var, L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_5, NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_6, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_inline (WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___walls0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObserverFactory_t15303B50E9714D21517E15020805420A68418285* VuforiaBehaviour_get_ObserverFactory_m58CBBB055DA900E6F04BC2605833C687C1C38B0F_inline (VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* __this, const RuntimeMethod* method) 
{
	{
		ObserverFactory_t15303B50E9714D21517E15020805420A68418285* L_0 = __this->___U3CObserverFactoryU3Ek__BackingField_10;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ObserverBehaviour_get_TargetName_mFB6FC5459068E0E9800E2C8AFFEF6F8F48297AB1_inline (ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mTrackableName_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* VuforiaBehaviour_get_World_m14A8271B023273D49C261BE6EC1378C16EB7B900_inline (VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* __this, const RuntimeMethod* method) 
{
	{
		World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* L_0 = __this->___U3CWorldU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* VuforiaBehaviour_get_CameraDevice_m2B852D0BE38060B0B933A903E97F2278EE97BEEA_inline (VuforiaBehaviour_t53608E2BEC77029C0140CB1E88A0B186FC5E76C6* __this, const RuntimeMethod* method) 
{
	{
		CameraDevice_t34ADAC91596592865E992E89542B1B6F88EAAB27* L_0 = __this->___U3CCameraDeviceU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mCFA770E39C25CD56F9F1DAFFD3D511898715E91F_gshared_inline (Action_1_tE3E694A2F100A2CF4074391F82A671EDA972F099* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
