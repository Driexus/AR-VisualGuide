#include "pch-cpp.hpp"

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

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>
struct IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Unity.AI.Navigation.NavMeshSurface>
struct List_1_t66CB785B72698BF8F0678AE256477DC34C9292D0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
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
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// Building[]
struct BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
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
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
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
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Building
struct Building_t950D5394E080624D7E96B158EF852EA16ADB3650;
// BuildingCreator
struct BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524;
// BuildingSelector
struct BuildingSelector_t1AC2812062DAB3D4B6763834547CF7517EC1EC88;
// BuildingViewModel
struct BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
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
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Vuforia.DevicePoseBehaviour
struct DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960;
// FirebaseTest
struct FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Vuforia.HitTestResult
struct HitTestResult_t623F1DB9A0AAD8416652DFFE1842F908250D44D9;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Vuforia.IVuHitTest
struct IVuHitTest_t2D5BB78FCECD172E4373E7355083101E88B00EB6;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
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
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
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
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PathPlacer
struct PathPlacer_tDB937E241E57AAD33D3076D912352A1296AAFDBD;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Vuforia.PlaneFinderBehaviour
struct PlaneFinderBehaviour_t23E09D9522086A00933FFF43F29F9D4CEE1578F5;
// Firebase.Database.Query
struct Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
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
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Wall
struct Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// BuildingCreator/WallsUpdatedEventHandler
struct WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190;
// BuildingViewModel/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010;
// BuildingViewModel/CurrentBuildingChangedEventHandler
struct CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177;
// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7;
// FirebaseTest/<>c
struct U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363;
// FirebaseTest/<FetchBuildingData>d__16
struct U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820;
// FirebaseTest/<SignInUser>d__17
struct U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4;
// FirebaseTest/<writeNewUser>d__15
struct U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A;
// FirebaseTest/BuildingsUpdatedEventHandler
struct BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8;
// FirebaseTest/User
struct User_t7B4D8808D7DCBA206312E14D7B985EE0AF19AFF0;
// IRepository/BuildingsUpdatedEventHandler
struct BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// TMPro.TMP_Dropdown/DropdownEvent
struct DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91;
// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E;
// TMPro.TMP_Dropdown/OptionDataList
struct OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Building_t950D5394E080624D7E96B158EF852EA16ADB3650_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t89D6D9FAD8F93015339F011596FA51B8F53D3248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* User_t7B4D8808D7DCBA206312E14D7B985EE0AF19AFF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B8A0531638A0E5DD42B2E1AD8CA6971D707645F;
IL2CPP_EXTERN_C String_t* _stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97;
IL2CPP_EXTERN_C String_t* _stringLiteral0CEC0C2A2C4C5D2434C3D0BCA6DBB41CF79CC0CE;
IL2CPP_EXTERN_C String_t* _stringLiteral10F2F2837CFD9B3F053F697E215765329BE0EEA6;
IL2CPP_EXTERN_C String_t* _stringLiteral12B5BBD6E325F7831D54BD41218B9B8018863F71;
IL2CPP_EXTERN_C String_t* _stringLiteral139F69C93C042496A8E958EC5930662C6CCCAFBF;
IL2CPP_EXTERN_C String_t* _stringLiteral24E44E9BEBD26B4D54643A87E01870D7B3EB4386;
IL2CPP_EXTERN_C String_t* _stringLiteral2886387B11CFFC71ECF9EFF9CECC0B003CFAD505;
IL2CPP_EXTERN_C String_t* _stringLiteral33ECF2584F82391BB2BF4F6F500A72FE898905F5;
IL2CPP_EXTERN_C String_t* _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79;
IL2CPP_EXTERN_C String_t* _stringLiteral36B202D655CC2A3CA47D60DB812C800D8F29B18A;
IL2CPP_EXTERN_C String_t* _stringLiteral3B05BA3AF9971B71E952BCD1DB84CF25D895395C;
IL2CPP_EXTERN_C String_t* _stringLiteral43772496A8425310102AB6842A8DF95A40CBE489;
IL2CPP_EXTERN_C String_t* _stringLiteral438095AAD6F94182BE6B5ABD3C540AB80840ADF2;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral52AE6CA3F44DAEE1589E24134950B40011440605;
IL2CPP_EXTERN_C String_t* _stringLiteral840B40C9136D96D5D3A27C5A9AA17798E1CBB4C2;
IL2CPP_EXTERN_C String_t* _stringLiteral8BDB2B51F26EBAE72DE1760A3E90AF8B1C1A8590;
IL2CPP_EXTERN_C String_t* _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9;
IL2CPP_EXTERN_C String_t* _stringLiteral9B8A636FED687923E28D69542E3847323D850EDE;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralE607EECF2DD996D5B52019F099885B017CC96437;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73;
IL2CPP_EXTERN_C const RuntimeMethod* BuildingCreator_U3CAwakeU3Eb__15_0_m6E37711F9B5FF3F015E632272DD43FB986E56039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BuildingSelector_OnBuildingSelected_mE792107DAC7A6E5D654870D03826612738709396_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BuildingSelector_PopulateDropdown_mD2F5BA4EB39C49D21D785F34C2BBCDD78CABACD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseTest_U3CFetchBuildingCollectionU3Eb__18_0_m0B7D1E1C8A62D91A2387A55E2D320129AF06F1C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisTMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_m3E70D234E806B9EC31E4E572CB72CE14733F52C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonHelper_FromServerJson_TisWall_t937177F3C848F0B028993DB85C6BDFF844EB1334_m255C09737638D8C3FD131BC814CFFDF85D7DB685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE80F02484ED836571C16C2A0C39181A5E707536B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MobileLogger_LogToText_m7017BCF3D726137E83488EE131A166E9C81E9051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NavBaker_UpdateNavMesh_m1B312D4FCBE33A3AA11B51524CC7B998377C5E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFetchBuildingDataU3Ed__16_System_Collections_IEnumerator_Reset_m8A09721C669700FD20700CFBFB65ABCA80FE821F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSignInUserU3Ed__17_System_Collections_IEnumerator_Reset_mC5DA399BBB7EB133BE138DBC24BD7EA6F2D77B11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFetchBuildingDataU3Eb__16_0_m122762CB344B8BA3F42C66E6325698A71CFE5379_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSignInUserU3Eb__17_0_mE3C3E376B98B8A31E5B89EE901657E1EC76DDFBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CStartU3Eb__0_m8FCB46DAF3D0E9CADBE2E40D5AEAA91F2D5D71E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwriteNewUserU3Ed__15_System_Collections_IEnumerator_Reset_mA9DA209C4253C94258461F59C86BD1BFE7DB0C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
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
struct Il2CppArrayBounds;

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

// JsonHelper
struct JsonHelper_t74F181470A256BAED8E585DCE6B11850EEAA0504  : public RuntimeObject
{
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

// ExtensionMethods.TransformExtensions
struct TransformExtensions_tCC1B5D3363304AEA84ECC12B665CB6A4C4DE9D99  : public RuntimeObject
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

// BuildingViewModel/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010  : public RuntimeObject
{
	// BuildingViewModel BuildingViewModel/<>c__DisplayClass9_0::<>4__this
	BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* ___U3CU3E4__this_0;
	// FirebaseTest/BuildingsUpdatedEventHandler BuildingViewModel/<>c__DisplayClass9_0::handler
	BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* ___handler_1;
};

// FirebaseTest/<>c
struct U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363  : public RuntimeObject
{
};

struct U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_StaticFields
{
	// FirebaseTest/<>c FirebaseTest/<>c::<>9
	U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363* ___U3CU3E9_0;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>> FirebaseTest/<>c::<>9__16_0
	Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* ___U3CU3E9__16_0_1;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>> FirebaseTest/<>c::<>9__17_0
	Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* ___U3CU3E9__17_0_2;
};

// FirebaseTest/<FetchBuildingData>d__16
struct U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820  : public RuntimeObject
{
	// System.Int32 FirebaseTest/<FetchBuildingData>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FirebaseTest/<FetchBuildingData>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FirebaseTest FirebaseTest/<FetchBuildingData>d__16::<>4__this
	FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* ___U3CU3E4__this_2;
};

// FirebaseTest/<SignInUser>d__17
struct U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4  : public RuntimeObject
{
	// System.Int32 FirebaseTest/<SignInUser>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FirebaseTest/<SignInUser>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FirebaseTest FirebaseTest/<SignInUser>d__17::<>4__this
	FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* ___U3CU3E4__this_2;
};

// FirebaseTest/<writeNewUser>d__15
struct U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A  : public RuntimeObject
{
	// System.Int32 FirebaseTest/<writeNewUser>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FirebaseTest/<writeNewUser>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String FirebaseTest/<writeNewUser>d__15::userId
	String_t* ___userId_2;
	// System.String FirebaseTest/<writeNewUser>d__15::name
	String_t* ___name_3;
	// System.String FirebaseTest/<writeNewUser>d__15::email
	String_t* ___email_4;
	// FirebaseTest FirebaseTest/<writeNewUser>d__15::<>4__this
	FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* ___U3CU3E4__this_5;
	// FirebaseTest/User FirebaseTest/<writeNewUser>d__15::<user>5__1
	User_t7B4D8808D7DCBA206312E14D7B985EE0AF19AFF0* ___U3CuserU3E5__1_6;
	// System.String FirebaseTest/<writeNewUser>d__15::<json>5__2
	String_t* ___U3CjsonU3E5__2_7;
};

// FirebaseTest/User
struct User_t7B4D8808D7DCBA206312E14D7B985EE0AF19AFF0  : public RuntimeObject
{
	// System.String FirebaseTest/User::username
	String_t* ___username_0;
	// System.String FirebaseTest/User::email
	String_t* ___email_1;
};

// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E  : public RuntimeObject
{
	// System.String TMPro.TMP_Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite TMPro.TMP_Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
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
	// System.String Building::name
	String_t* ___name_2;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// Vuforia.HitTestResult
struct HitTestResult_t623F1DB9A0AAD8416652DFFE1842F908250D44D9  : public RuntimeObject
{
	// Vuforia.IVuHitTest Vuforia.HitTestResult::mVuHitTest
	RuntimeObject* ___mVuHitTest_0;
	// UnityEngine.Vector3 Vuforia.HitTestResult::mPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mPosition_1;
	// UnityEngine.Quaternion Vuforia.HitTestResult::mOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___mOrientation_2;
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
	// UnityEngine.Vector2 Wall::_start
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____start_4;
	// UnityEngine.Vector2 Wall::_end
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____end_5;
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

// Firebase.Auth.UserInfoInterface
struct UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.UserInfoInterface::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.UserInfoInterface::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60  : public MulticastDelegate_t
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

// BuildingViewModel/CurrentBuildingChangedEventHandler
struct CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177  : public MulticastDelegate_t
{
};

// FirebaseTest/BuildingsUpdatedEventHandler
struct BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8  : public MulticastDelegate_t
{
};

// IRepository/BuildingsUpdatedEventHandler
struct BuildingsUpdatedEventHandler_t1F2B26F2FC3FC5E2B499E7D9BCCDCBB1AC2B1E49  : public MulticastDelegate_t
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
	// Wall[] BuildingCreator::_walls
	WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ____walls_6;
	// System.Single BuildingCreator::wallWidth
	float ___wallWidth_7;
	// System.Single BuildingCreator::wallHeight
	float ___wallHeight_8;
	// System.UInt32 BuildingCreator::initialWallCount
	uint32_t ___initialWallCount_9;
	// UnityEngine.GameObject BuildingCreator::wallObjectPool
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wallObjectPool_10;
	// UnityEngine.GameObject BuildingCreator::floor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___floor_11;
	// UnityEngine.GameObject BuildingCreator::wallCollection
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wallCollection_12;
	// System.Int32 BuildingCreator::wallCounter
	int32_t ___wallCounter_13;
};

// BuildingSelector
struct BuildingSelector_t1AC2812062DAB3D4B6763834547CF7517EC1EC88  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FirebaseTest BuildingSelector::repository
	FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* ___repository_4;
	// BuildingViewModel BuildingSelector::buildingVM
	BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* ___buildingVM_5;
	// TMPro.TMP_Dropdown BuildingSelector::dropdown
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___dropdown_6;
};

// BuildingViewModel
struct BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FirebaseTest BuildingViewModel::repository
	FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* ___repository_4;
	// Building BuildingViewModel::_currentBuilding
	Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ____currentBuilding_5;
	// BuildingViewModel/CurrentBuildingChangedEventHandler BuildingViewModel::CurrentBuildingChanged
	CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* ___CurrentBuildingChanged_6;
};

// FirebaseTest
struct FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean FirebaseTest::hasRun
	bool ___hasRun_4;
	// Firebase.Database.DatabaseReference FirebaseTest::db
	DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* ___db_5;
	// Firebase.Auth.FirebaseAuth FirebaseTest::auth
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___auth_6;
	// FirebaseTest/BuildingsUpdatedEventHandler FirebaseTest::BuildingsUpdated
	BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* ___BuildingsUpdated_7;
	// System.Boolean FirebaseTest::_mustCallBuildingsUpdatedListener
	bool ____mustCallBuildingsUpdatedListener_8;
	// Building[] FirebaseTest::_buildings
	BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* ____buildings_9;
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

// PathPlacer
struct PathPlacer_tDB937E241E57AAD33D3076D912352A1296AAFDBD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Vuforia.DevicePoseBehaviour PathPlacer::devicePoseBehaviour
	DevicePoseBehaviour_tB66D2A5B7C7DA1929EC742544831049B124BD642* ___devicePoseBehaviour_4;
	// Vuforia.PlaneFinderBehaviour PathPlacer::planeFinderBehaviour
	PlaneFinderBehaviour_t23E09D9522086A00933FFF43F29F9D4CEE1578F5* ___planeFinderBehaviour_5;
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
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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
// T[] JsonHelper::FromServerJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* JsonHelper_FromServerJson_TisRuntimeObject_mB8DB48521B58393749534CD1B3AC2B74F5BC8C61_gshared (String_t* ___serverJson0, const RuntimeMethod* method) ;

// System.Void DatabaseObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseObject__ctor_m3956E795269A15C7240827FDF65BEE351B08E37A (DatabaseObject_t1196001559FD7BD1D56B995A6BCD1681AFDF8027* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void BuildingCreator::LoadWalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_LoadWalls_m5877C2D30A1289DED21147170127145C2409B68A (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) ;
// System.Void BuildingCreator::LoadFloor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_LoadFloor_m63A389ED219A1B3B6508934F6D11C922CB95C8AC (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) ;
// System.Void BuildingCreator/WallsUpdatedEventHandler::Invoke(Wall[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_inline (WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void BuildingViewModel/CurrentBuildingChangedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentBuildingChangedEventHandler__ctor_m32D103CB11C652F84827F351C9A6EFA9885E6360 (CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void BuildingViewModel::add_CurrentBuildingChanged(BuildingViewModel/CurrentBuildingChangedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingViewModel_add_CurrentBuildingChanged_mA461F6199C1482F41899E0E19566E479B1DA4139 (BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* __this, CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* ___value0, const RuntimeMethod* method) ;
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
// UnityEngine.Vector2 Wall::get_MiddlePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Wall_get_MiddlePoint_m728B7D4AF428EC265B1F3C75D0670B14CD35CAE2 (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single Wall::get_Angle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Wall_get_Angle_m6421870344364BD325482A921E15D82ED4758C44 (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Single BuildingCreator::MaxOfThree(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BuildingCreator_MaxOfThree_m724F033A62CC5DF256626D3689CA7B36DE384D2E (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, float ___a0, float ___b1, float ___c2, const RuntimeMethod* method) ;
// System.Single BuildingCreator::MinOfThree(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BuildingCreator_MinOfThree_m7EB41EF72CBC2CB2AB9FEBD91A37F654C1664600 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, float ___a0, float ___b1, float ___c2, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void BuildingCreator::set_Walls(Wall[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_set_Walls_mC4B569C67E783C1BEC0462B449FEA13E6C673A6B (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<TMPro.TMP_Dropdown>(T&)
inline bool GameObject_TryGetComponent_TisTMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_m3E70D234E806B9EC31E4E572CB72CE14733F52C0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// System.Void FirebaseTest/BuildingsUpdatedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsUpdatedEventHandler__ctor_m14E7093BE2A45F53689AED55E7FFB37E8272E9FF (BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void FirebaseTest::add_BuildingsUpdated(FirebaseTest/BuildingsUpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseTest_add_BuildingsUpdated_mC5209AB99FFA58CC0BE428F5CD4737846D13402F (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* ___value0, const RuntimeMethod* method) ;
// System.Void BuildingSelector::PopulateDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingSelector_PopulateDropdown_mD2F5BA4EB39C49D21D785F34C2BBCDD78CABACD2 (BuildingSelector_t1AC2812062DAB3D4B6763834547CF7517EC1EC88* __this, const RuntimeMethod* method) ;
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
// Building[] FirebaseTest::get_Buildings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* FirebaseTest_get_Buildings_m6F3A122504D551DBA32E205D7F70DEB7633126B1 (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, const RuntimeMethod* method) ;
// System.Void BuildingViewModel::set_CurrentBuilding(Building)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingViewModel_set_CurrentBuilding_mF38C5360C9F1F927939F44BA109FFBC131DD0E04 (BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___value0, const RuntimeMethod* method) ;
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
// System.Void BuildingViewModel/CurrentBuildingChangedEventHandler::Invoke(Building)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_inline (CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building0, const RuntimeMethod* method) ;
// System.Void BuildingViewModel/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mC33A9A188D97A8B9E7E870AF1CFF63FDF6183988 (U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void FirebaseTest::remove_BuildingsUpdated(FirebaseTest/BuildingsUpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseTest_remove_BuildingsUpdated_m3B8BB78DC0B36E87A8AEE42CF70FEB52067F4B70 (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* ___value0, const RuntimeMethod* method) ;
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* FirebaseDatabase_get_DefaultInstance_m5D2694D707EAE163776CC0FF92B92537BDD59118 (const RuntimeMethod* method) ;
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434 (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) ;
// System.Void FirebaseTest::FetchBuildingCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseTest_FetchBuildingCollection_mCB6117F11762C5AF4FADCFFF4522792884CC1BBA (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator FirebaseTest::SignInUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseTest_SignInUser_mBB56F3CC812DCFA7E3BAC7B54D2A4E3D54D2A931 (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FirebaseTest::writeNewUser(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseTest_writeNewUser_m71C728C494D5449A57A87982CEA9A52A8AA34FF2 (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, String_t* ___userId0, String_t* ___name1, String_t* ___email2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FirebaseTest::FetchBuildingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseTest_FetchBuildingData_m6B670548ED5D82B32FE5F8C51601DCFE13A76364 (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, const RuntimeMethod* method) ;
// System.Void FirebaseTest/BuildingsUpdatedEventHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BuildingsUpdatedEventHandler_Invoke_m81DD9FB33429CC840F4AAF695BB2F6A7B3D31DD8_inline (BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* __this, const RuntimeMethod* method) ;
// System.Void FirebaseTest/<writeNewUser>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwriteNewUserU3Ed__15__ctor_mFA21CFA32E903BB6B60E893A938EC4F84D1BC436 (U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void FirebaseTest/<FetchBuildingData>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFetchBuildingDataU3Ed__16__ctor_mCE0ED29495D1A3F0BF4807E2E93A6C46D63AE746 (U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void FirebaseTest/<SignInUser>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInUserU3Ed__17__ctor_mD61B54A56A437A60F0617C706745CD52F0B33033 (U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
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
// System.Void FirebaseTest/User::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m243C5074E23953E7715E4557DFC25FFAFB59B63C (User_t7B4D8808D7DCBA206312E14D7B985EE0AF19AFF0* __this, String_t* ___username0, String_t* ___email1, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetRawJsonValueAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DatabaseReference_SetRawJsonValueAsync_m9490E9CAA051A1E371954DF33B34505FC09AA080 (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, String_t* ___jsonValue0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void FirebaseTest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m098C1C3A506D57F8F451454244612C18A7FB34C4 (U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363* __this, const RuntimeMethod* method) ;
// T[] JsonHelper::FromServerJson<Wall>(System.String)
inline WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* JsonHelper_FromServerJson_TisWall_t937177F3C848F0B028993DB85C6BDFF844EB1334_m255C09737638D8C3FD131BC814CFFDF85D7DB685 (String_t* ___serverJson0, const RuntimeMethod* method)
{
	return ((  WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* (*) (String_t*, const RuntimeMethod*))JsonHelper_FromServerJson_TisRuntimeObject_mB8DB48521B58393749534CD1B3AC2B74F5BC8C61_gshared)(___serverJson0, method);
}
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
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// System.Void BuildingCreator/WallsUpdatedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallsUpdatedEventHandler__ctor_mAB8C00748AE7E8B0DDC77B7D06ED8A35750C44DF (WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void BuildingCreator::add_WallsUpdated(BuildingCreator/WallsUpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_add_WallsUpdated_m9C85A5AEF04E1BEE7423FE20DE92AA837DC5BE32 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.AI.Navigation.NavMeshSurface::BuildNavMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshSurface_BuildNavMesh_mD9177CA8015A7CF3299DD5420FDD33CFEE252CAF (NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sourcePosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition1, int32_t ___areaMask2, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path3, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Vuforia.HitTestResult::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HitTestResult_get_Position_m2F30FBF2AF4D53E6C3F1E51D44AE699C153C4784_inline (HitTestResult_t623F1DB9A0AAD8416652DFFE1842F908250D44D9* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
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
		// public Building(string id) : base(id)
		String_t* L_0 = ___id0;
		DatabaseObject__ctor_m3956E795269A15C7240827FDF65BEE351B08E37A(__this, L_0, NULL);
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
// Wall[] BuildingCreator::get_Walls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* BuildingCreator_get_Walls_m45EA0EAF12732208BECA3C4A84EA8DB84057D1D3 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) 
{
	WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* V_0 = NULL;
	{
		// get { return _walls; }
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_0 = __this->____walls_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _walls; }
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_1 = V_0;
		return L_1;
	}
}
// System.Void BuildingCreator::set_Walls(Wall[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_set_Walls_mC4B569C67E783C1BEC0462B449FEA13E6C673A6B (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___value0, const RuntimeMethod* method) 
{
	{
		// _walls = value;
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_0 = ___value0;
		__this->____walls_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____walls_6), (void*)L_0);
		// LoadWalls();
		BuildingCreator_LoadWalls_m5877C2D30A1289DED21147170127145C2409B68A(__this, NULL);
		// LoadFloor();
		BuildingCreator_LoadFloor_m63A389ED219A1B3B6508934F6D11C922CB95C8AC(__this, NULL);
		// WallsUpdated(_walls);
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_1 = __this->___WallsUpdated_5;
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_2 = __this->____walls_6;
		NullCheck(L_1);
		WallsUpdatedEventHandler_Invoke_mBA26B6D20E7D6F49D4051D589E6D7692BEC6955C_inline(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void BuildingCreator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_Awake_m5A3795B3859FD20A8005387153243A3836616AC4 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingCreator_U3CAwakeU3Eb__15_0_m6E37711F9B5FF3F015E632272DD43FB986E56039_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
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
		__this->___floor_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___floor_11), (void*)L_0);
		// floor.gameObject.name = "Floor";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___floor_11;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_1, NULL);
		NullCheck(L_2);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_2, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		// floor.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___floor_11;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_4, L_5, NULL);
		// wallCollection = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_6, NULL);
		__this->___wallCollection_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wallCollection_12), (void*)L_6);
		// wallCollection.gameObject.name = "Walls";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___wallCollection_12;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_7, NULL);
		NullCheck(L_8);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_8, _stringLiteral9B8A636FED687923E28D69542E3847323D850EDE, NULL);
		// wallCollection.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___wallCollection_12;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_10, L_11, NULL);
		// buildingVM.CurrentBuildingChanged += new BuildingViewModel.CurrentBuildingChangedEventHandler((Building building) => Walls = building.walls);
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_12 = __this->___buildingVM_4;
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_13 = (CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177*)il2cpp_codegen_object_new(CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		CurrentBuildingChangedEventHandler__ctor_m32D103CB11C652F84827F351C9A6EFA9885E6360(L_13, __this, (intptr_t)((void*)BuildingCreator_U3CAwakeU3Eb__15_0_m6E37711F9B5FF3F015E632272DD43FB986E56039_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		BuildingViewModel_add_CurrentBuildingChanged_mA461F6199C1482F41899E0E19566E479B1DA4139(L_12, L_13, NULL);
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
		__this->___wallObjectPool_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wallObjectPool_10), (void*)L_0);
		// wallObjectPool.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___wallObjectPool_10;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_2, L_3, NULL);
		// wallObjectPool.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___wallObjectPool_10;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// for (int i = 0; i < initialWallCount; i++)
		V_0 = 0;
		goto IL_0051;
	}

IL_0039:
	{
		// CreateWall(wallObjectPool.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___wallObjectPool_10;
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
		uint32_t L_10 = __this->___initialWallCount_9;
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
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2886387B11CFFC71ECF9EFF9CECC0B003CFAD505);
		s_Il2CppMethodInitialized = true;
	}
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
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___wallCollection_12;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		V_0 = L_2;
		// if (activeWallCount > _walls.Length)
		int32_t L_3 = V_0;
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_4 = __this->____walls_6;
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
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___wallCollection_12;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_7, 0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___wallObjectPool_10;
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
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_14 = __this->____walls_6;
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
		goto IL_019f;
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
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___wallCollection_12;
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
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___wallObjectPool_10;
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
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___wallObjectPool_10;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_28, 0, NULL);
		V_5 = L_29;
		// wallTransform.parent = wallCollection.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = V_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___wallCollection_12;
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
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___wallCollection_12;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = BuildingCreator_CreateWall_mC873FF7A34D80EAC5DA7CAE7375827503F532E13(__this, L_34, NULL);
		V_5 = L_35;
	}

IL_00e2:
	{
		// wallTransform.transform.localScale = new Vector3(_walls[i].Length, wallHeight, wallWidth);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = V_5;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_38 = __this->____walls_6;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		float L_42;
		L_42 = Wall_get_Length_mB8AB6207AEB4D490DBD378466DC4A463464350E1(L_41, NULL);
		float L_43 = __this->___wallHeight_8;
		float L_44 = __this->___wallWidth_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_45), L_42, L_43, L_44, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_37, L_45, NULL);
		// wallTransform.transform.position = new Vector3(_walls[i].MiddlePoint.x, wallHeight / 2, _walls[i].MiddlePoint.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46 = V_5;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_46, NULL);
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_48 = __this->____walls_6;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Wall_get_MiddlePoint_m728B7D4AF428EC265B1F3C75D0670B14CD35CAE2(L_51, NULL);
		float L_53 = L_52.___x_0;
		float L_54 = __this->___wallHeight_8;
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_55 = __this->____walls_6;
		int32_t L_56 = V_4;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = Wall_get_MiddlePoint_m728B7D4AF428EC265B1F3C75D0670B14CD35CAE2(L_58, NULL);
		float L_60 = L_59.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_61), L_53, ((float)(L_54/(2.0f))), L_60, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_47, L_61, NULL);
		// wallTransform.transform.localRotation = Quaternion.Euler(new Vector3(0, _walls[i].Angle, 0));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62 = V_5;
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_62, NULL);
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_64 = __this->____walls_6;
		int32_t L_65 = V_4;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		float L_68;
		L_68 = Wall_get_Angle_m6421870344364BD325482A921E15D82ED4758C44(L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_69), (0.0f), L_68, (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_70;
		L_70 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_69, NULL);
		NullCheck(L_63);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_63, L_70, NULL);
		// wallTransform.gameObject.layer = LayerMask.NameToLayer("Geometry");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71 = V_5;
		NullCheck(L_71);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72;
		L_72 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_71, NULL);
		int32_t L_73;
		L_73 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral2886387B11CFFC71ECF9EFF9CECC0B003CFAD505, NULL);
		NullCheck(L_72);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_72, L_73, NULL);
		// for (int i = 0; i < _walls.Length; i++)
		int32_t L_74 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_019f:
	{
		// for (int i = 0; i < _walls.Length; i++)
		int32_t L_75 = V_4;
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_76 = __this->____walls_6;
		NullCheck(L_76);
		V_8 = (bool)((((int32_t)L_75) < ((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length))))? 1 : 0);
		bool L_77 = V_8;
		if (L_77)
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
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_0 = __this->____walls_6;
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
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_52 = __this->____walls_6;
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
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___floor_11;
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
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = __this->___floor_11;
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
		int32_t* L_5 = (&__this->___wallCounter_13);
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
		int32_t L_11 = __this->___wallCounter_13;
		__this->___wallCounter_13 = ((int32_t)il2cpp_codegen_add(L_11, 1));
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
		__this->___wallCounter_13 = 0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void BuildingCreator::<Awake>b__15_0(Building)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingCreator_U3CAwakeU3Eb__15_0_m6E37711F9B5FF3F015E632272DD43FB986E56039 (BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building0, const RuntimeMethod* method) 
{
	{
		// buildingVM.CurrentBuildingChanged += new BuildingViewModel.CurrentBuildingChangedEventHandler((Building building) => Walls = building.walls);
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_0 = ___building0;
		NullCheck(L_0);
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_1 = L_0->___walls_1;
		BuildingCreator_set_Walls_mC4B569C67E783C1BEC0462B449FEA13E6C673A6B(__this, L_1, NULL);
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
// System.Void BuildingSelector::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingSelector_Awake_m5B0DBEE6FABDB15FA98067289A19FFF595D44DDA (BuildingSelector_t1AC2812062DAB3D4B6763834547CF7517EC1EC88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingSelector_OnBuildingSelected_mE792107DAC7A6E5D654870D03826612738709396_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingSelector_PopulateDropdown_mD2F5BA4EB39C49D21D785F34C2BBCDD78CABACD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisTMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_m3E70D234E806B9EC31E4E572CB72CE14733F52C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.TryGetComponent(out dropdown);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504** L_1 = (&__this->___dropdown_6);
		NullCheck(L_0);
		bool L_2;
		L_2 = GameObject_TryGetComponent_TisTMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_m3E70D234E806B9EC31E4E572CB72CE14733F52C0(L_0, L_1, GameObject_TryGetComponent_TisTMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_m3E70D234E806B9EC31E4E572CB72CE14733F52C0_RuntimeMethod_var);
		// repository.BuildingsUpdated += new FirebaseTest.BuildingsUpdatedEventHandler(PopulateDropdown);
		FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* L_3 = __this->___repository_4;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_4 = (BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8*)il2cpp_codegen_object_new(BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BuildingsUpdatedEventHandler__ctor_m14E7093BE2A45F53689AED55E7FFB37E8272E9FF(L_4, __this, (intptr_t)((void*)BuildingSelector_PopulateDropdown_mD2F5BA4EB39C49D21D785F34C2BBCDD78CABACD2_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		FirebaseTest_add_BuildingsUpdated_mC5209AB99FFA58CC0BE428F5CD4737846D13402F(L_3, L_4, NULL);
		// PopulateDropdown();
		BuildingSelector_PopulateDropdown_mD2F5BA4EB39C49D21D785F34C2BBCDD78CABACD2(__this, NULL);
		// dropdown.onValueChanged.AddListener(OnBuildingSelected);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_5 = __this->___dropdown_6;
		NullCheck(L_5);
		DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* L_6;
		L_6 = TMP_Dropdown_get_onValueChanged_mC5A65068BFDC48C26FAC4B6FB2C0983633168BFF(L_5, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_7 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_7, __this, (intptr_t)((void*)BuildingSelector_OnBuildingSelected_mE792107DAC7A6E5D654870D03826612738709396_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_6, L_7, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BuildingSelector::OnBuildingSelected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingSelector_OnBuildingSelected_mE792107DAC7A6E5D654870D03826612738709396 (BuildingSelector_t1AC2812062DAB3D4B6763834547CF7517EC1EC88* __this, int32_t ___optionIndex0, const RuntimeMethod* method) 
{
	{
		// buildingVM.CurrentBuilding = repository.Buildings[optionIndex];
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_0 = __this->___buildingVM_5;
		FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* L_1 = __this->___repository_4;
		NullCheck(L_1);
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_2;
		L_2 = FirebaseTest_get_Buildings_m6F3A122504D551DBA32E205D7F70DEB7633126B1(L_1, NULL);
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
// System.Void BuildingSelector::PopulateDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingSelector_PopulateDropdown_mD2F5BA4EB39C49D21D785F34C2BBCDD78CABACD2 (BuildingSelector_t1AC2812062DAB3D4B6763834547CF7517EC1EC88* __this, const RuntimeMethod* method) 
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
	BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* V_0 = NULL;
	int32_t V_1 = 0;
	Building_t950D5394E080624D7E96B158EF852EA16ADB3650* V_2 = NULL;
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* V_3 = NULL;
	{
		// dropdown.options = new();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___dropdown_6;
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_1 = (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52*)il2cpp_codegen_object_new(List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mE80F02484ED836571C16C2A0C39181A5E707536B(L_1, List_1__ctor_mE80F02484ED836571C16C2A0C39181A5E707536B_RuntimeMethod_var);
		NullCheck(L_0);
		TMP_Dropdown_set_options_m4CD66EEEFDF53BAD9862AA2768F6048B2CA5B2AD(L_0, L_1, NULL);
		// foreach (Building building in repository.Buildings)
		FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* L_2 = __this->___repository_4;
		NullCheck(L_2);
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_3;
		L_3 = FirebaseTest_get_Buildings_m6F3A122504D551DBA32E205D7F70DEB7633126B1(L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0052;
	}

IL_0023:
	{
		// foreach (Building building in repository.Buildings)
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// TMP_Dropdown.OptionData optionData = new TMP_Dropdown.OptionData
		// {
		//     text = building.name
		// };
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_8 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		OptionData__ctor_m5B8E6B683070AB406FA738E689E2FD4055697FB6(L_8, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_9 = L_8;
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_10 = V_2;
		NullCheck(L_10);
		String_t* L_11 = L_10->___name_2;
		NullCheck(L_9);
		OptionData_set_text_mFF1E8A215A399CB9EA9DDFB0C6F3B9F068837226(L_9, L_11, NULL);
		V_3 = L_9;
		// dropdown.options.Add(optionData);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_12 = __this->___dropdown_6;
		NullCheck(L_12);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_13;
		L_13 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_12, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_14 = V_3;
		NullCheck(L_13);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_13, L_14, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0052:
	{
		// foreach (Building building in repository.Buildings)
		int32_t L_16 = V_1;
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BuildingSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingSelector__ctor_m379EF3C874F539D8A0E4F613D5EC0B02519EA378 (BuildingSelector_t1AC2812062DAB3D4B6763834547CF7517EC1EC88* __this, const RuntimeMethod* method) 
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
	CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* G_B2_0 = NULL;
	CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* G_B1_0 = NULL;
	{
		// _currentBuilding = value;
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_0 = ___value0;
		__this->____currentBuilding_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentBuilding_5), (void*)L_0);
		// CurrentBuildingChanged?.Invoke(value);
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_1 = __this->___CurrentBuildingChanged_6;
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_001b;
	}

IL_0014:
	{
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_3 = ___value0;
		NullCheck(G_B2_0);
		CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_inline(G_B2_0, L_3, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void BuildingViewModel::add_CurrentBuildingChanged(BuildingViewModel/CurrentBuildingChangedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingViewModel_add_CurrentBuildingChanged_mA461F6199C1482F41899E0E19566E479B1DA4139 (BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* __this, CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* V_0 = NULL;
	CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* V_1 = NULL;
	CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* V_2 = NULL;
	{
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_0 = __this->___CurrentBuildingChanged_6;
		V_0 = L_0;
	}

IL_0007:
	{
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_1 = V_0;
		V_1 = L_1;
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_2 = V_1;
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177*)CastclassSealed((RuntimeObject*)L_4, CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177_il2cpp_TypeInfo_var));
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177** L_5 = (&__this->___CurrentBuildingChanged_6);
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_6 = V_2;
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_7 = V_1;
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_8;
		L_8 = InterlockedCompareExchangeImpl<CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177*>(L_5, L_6, L_7);
		V_0 = L_8;
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_9 = V_0;
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_10 = V_1;
		if ((!(((RuntimeObject*)(CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177*)L_9) == ((RuntimeObject*)(CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void BuildingViewModel::remove_CurrentBuildingChanged(BuildingViewModel/CurrentBuildingChangedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingViewModel_remove_CurrentBuildingChanged_mFF05DD9B291E2A28DF780B822B9B66D9CFAFACD5 (BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* __this, CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* V_0 = NULL;
	CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* V_1 = NULL;
	CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* V_2 = NULL;
	{
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_0 = __this->___CurrentBuildingChanged_6;
		V_0 = L_0;
	}

IL_0007:
	{
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_1 = V_0;
		V_1 = L_1;
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_2 = V_1;
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177*)CastclassSealed((RuntimeObject*)L_4, CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177_il2cpp_TypeInfo_var));
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177** L_5 = (&__this->___CurrentBuildingChanged_6);
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_6 = V_2;
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_7 = V_1;
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_8;
		L_8 = InterlockedCompareExchangeImpl<CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177*>(L_5, L_6, L_7);
		V_0 = L_8;
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_9 = V_0;
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* L_10 = V_1;
		if ((!(((RuntimeObject*)(CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177*)L_9) == ((RuntimeObject*)(CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177*)L_10))))
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CStartU3Eb__0_m8FCB46DAF3D0E9CADBE2E40D5AEAA91F2D5D71E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010* L_0 = (U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_mC33A9A188D97A8B9E7E870AF1CFF63FDF6183988(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// FirebaseTest.BuildingsUpdatedEventHandler handler = null;
		U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010* L_2 = V_0;
		NullCheck(L_2);
		L_2->___handler_1 = (BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___handler_1), (void*)(BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8*)NULL);
		// handler = new FirebaseTest.BuildingsUpdatedEventHandler(() =>
		// {
		//     CurrentBuilding = repository.Buildings[0];
		//     repository.BuildingsUpdated -= handler;
		// });
		U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010* L_3 = V_0;
		U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010* L_4 = V_0;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_5 = (BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8*)il2cpp_codegen_object_new(BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BuildingsUpdatedEventHandler__ctor_m14E7093BE2A45F53689AED55E7FFB37E8272E9FF(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CStartU3Eb__0_m8FCB46DAF3D0E9CADBE2E40D5AEAA91F2D5D71E7_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		L_3->___handler_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___handler_1), (void*)L_5);
		// repository.BuildingsUpdated += handler;
		FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* L_6 = __this->___repository_4;
		U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010* L_7 = V_0;
		NullCheck(L_7);
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_8 = L_7->___handler_1;
		NullCheck(L_6);
		FirebaseTest_add_BuildingsUpdated_mC5209AB99FFA58CC0BE428F5CD4737846D13402F(L_6, L_8, NULL);
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
void CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_Multicast(CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* currentDelegate = reinterpret_cast<CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Building_t950D5394E080624D7E96B158EF852EA16ADB3650*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___building0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_OpenInst(CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building0, const RuntimeMethod* method)
{
	NullCheck(___building0);
	typedef void (*FunctionPointerType) (Building_t950D5394E080624D7E96B158EF852EA16ADB3650*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___building0, method);
}
void CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_OpenStatic(CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Building_t950D5394E080624D7E96B158EF852EA16ADB3650*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___building0, method);
}
void CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_OpenStaticInvoker(CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Building_t950D5394E080624D7E96B158EF852EA16ADB3650* >::Invoke(__this->___method_ptr_0, method, NULL, ___building0);
}
void CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_ClosedStaticInvoker(CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___building0);
}
void CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_OpenVirtual(CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building0, const RuntimeMethod* method)
{
	NullCheck(___building0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___building0);
}
void CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_OpenInterface(CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building0, const RuntimeMethod* method)
{
	NullCheck(___building0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___building0);
}
void CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_OpenGenericVirtual(CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building0, const RuntimeMethod* method)
{
	NullCheck(___building0);
	GenericVirtualActionInvoker0::Invoke(method, ___building0);
}
void CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_OpenGenericInterface(CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building0, const RuntimeMethod* method)
{
	NullCheck(___building0);
	GenericInterfaceActionInvoker0::Invoke(method, ___building0);
}
// System.Void BuildingViewModel/CurrentBuildingChangedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentBuildingChangedEventHandler__ctor_m32D103CB11C652F84827F351C9A6EFA9885E6360 (CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_OpenStatic;
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
						__this->___invoke_impl_1 = (intptr_t)&CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_OpenInst;
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
	__this->___extra_arg_5 = (intptr_t)&CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_Multicast;
}
// System.Void BuildingViewModel/CurrentBuildingChangedEventHandler::Invoke(Building)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2 (CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Building_t950D5394E080624D7E96B158EF852EA16ADB3650*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___building0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult BuildingViewModel/CurrentBuildingChangedEventHandler::BeginInvoke(Building,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurrentBuildingChangedEventHandler_BeginInvoke_m69449CD2F5B2D79A3B6AC85CD97F0D895BD0A376 (CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___building0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void BuildingViewModel/CurrentBuildingChangedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentBuildingChangedEventHandler_EndInvoke_m5F7C1D9A584BE0DBDE7CB6555046263FFBFEA926 (CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void BuildingViewModel/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mC33A9A188D97A8B9E7E870AF1CFF63FDF6183988 (U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BuildingViewModel/<>c__DisplayClass9_0::<Start>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CStartU3Eb__0_m8FCB46DAF3D0E9CADBE2E40D5AEAA91F2D5D71E7 (U3CU3Ec__DisplayClass9_0_tDD00FDE88E927BFB1C2C99E03FFB2B28E401D010* __this, const RuntimeMethod* method) 
{
	{
		// CurrentBuilding = repository.Buildings[0];
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_0 = __this->___U3CU3E4__this_0;
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_1 = __this->___U3CU3E4__this_0;
		NullCheck(L_1);
		FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* L_2 = L_1->___repository_4;
		NullCheck(L_2);
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_3;
		L_3 = FirebaseTest_get_Buildings_m6F3A122504D551DBA32E205D7F70DEB7633126B1(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4 = 0;
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		BuildingViewModel_set_CurrentBuilding_mF38C5360C9F1F927939F44BA109FFBC131DD0E04(L_0, L_5, NULL);
		// repository.BuildingsUpdated -= handler;
		BuildingViewModel_tC169A29C2A3BE6EF2AF7F15703A54EC5D4D86436* L_6 = __this->___U3CU3E4__this_0;
		NullCheck(L_6);
		FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* L_7 = L_6->___repository_4;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_8 = __this->___handler_1;
		NullCheck(L_7);
		FirebaseTest_remove_BuildingsUpdated_m3B8BB78DC0B36E87A8AEE42CF70FEB52067F4B70(L_7, L_8, NULL);
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
// System.Void FirebaseTest::add_BuildingsUpdated(FirebaseTest/BuildingsUpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseTest_add_BuildingsUpdated_mC5209AB99FFA58CC0BE428F5CD4737846D13402F (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* V_0 = NULL;
	BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* V_1 = NULL;
	BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* V_2 = NULL;
	{
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_0 = __this->___BuildingsUpdated_7;
		V_0 = L_0;
	}

IL_0007:
	{
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_1 = V_0;
		V_1 = L_1;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_2 = V_1;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8*)CastclassSealed((RuntimeObject*)L_4, BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8_il2cpp_TypeInfo_var));
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8** L_5 = (&__this->___BuildingsUpdated_7);
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_6 = V_2;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_7 = V_1;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_8;
		L_8 = InterlockedCompareExchangeImpl<BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8*>(L_5, L_6, L_7);
		V_0 = L_8;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_9 = V_0;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_10 = V_1;
		if ((!(((RuntimeObject*)(BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8*)L_9) == ((RuntimeObject*)(BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FirebaseTest::remove_BuildingsUpdated(FirebaseTest/BuildingsUpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseTest_remove_BuildingsUpdated_m3B8BB78DC0B36E87A8AEE42CF70FEB52067F4B70 (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* V_0 = NULL;
	BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* V_1 = NULL;
	BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* V_2 = NULL;
	{
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_0 = __this->___BuildingsUpdated_7;
		V_0 = L_0;
	}

IL_0007:
	{
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_1 = V_0;
		V_1 = L_1;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_2 = V_1;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8*)CastclassSealed((RuntimeObject*)L_4, BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8_il2cpp_TypeInfo_var));
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8** L_5 = (&__this->___BuildingsUpdated_7);
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_6 = V_2;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_7 = V_1;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_8;
		L_8 = InterlockedCompareExchangeImpl<BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8*>(L_5, L_6, L_7);
		V_0 = L_8;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_9 = V_0;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_10 = V_1;
		if ((!(((RuntimeObject*)(BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8*)L_9) == ((RuntimeObject*)(BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Building[] FirebaseTest::get_Buildings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* FirebaseTest_get_Buildings_m6F3A122504D551DBA32E205D7F70DEB7633126B1 (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, const RuntimeMethod* method) 
{
	BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* V_0 = NULL;
	{
		// public Building[] Buildings { get { return _buildings; } }
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_0 = __this->____buildings_9;
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
// System.Void FirebaseTest::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseTest_Awake_m5D6D030C5089DBA55560502301669CA5F654EF1A (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, const RuntimeMethod* method) 
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
		__this->___db_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___db_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void FirebaseTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseTest_Start_m38598FE6EF85B81241575DF7372799E880C81D87 (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, const RuntimeMethod* method) 
{
	{
		// FetchBuildingCollection();
		FirebaseTest_FetchBuildingCollection_mCB6117F11762C5AF4FADCFFF4522792884CC1BBA(__this, NULL);
		// }
		return;
	}
}
// System.Void FirebaseTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseTest_Update_m993E1CEE696A7CA2A3152668C3818E4537F15291 (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral139F69C93C042496A8E958EC5930662C6CCCAFBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral840B40C9136D96D5D3A27C5A9AA17798E1CBB4C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BDB2B51F26EBAE72DE1760A3E90AF8B1C1A8590);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* G_B8_0 = NULL;
	BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* G_B7_0 = NULL;
	{
		// if (Time.realtimeSinceStartup > 10 && !hasRun)
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		if ((!(((float)L_0) > ((float)(10.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->___hasRun_4;
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
			goto IL_0069;
		}
	}
	{
		// hasRun = true;
		__this->___hasRun_4 = (bool)1;
		// IEnumerator cor = SignInUser();
		RuntimeObject* L_3;
		L_3 = FirebaseTest_SignInUser_mBB56F3CC812DCFA7E3BAC7B54D2A4E3D54D2A931(__this, NULL);
		V_1 = L_3;
		// StartCoroutine(cor);
		RuntimeObject* L_4 = V_1;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// IEnumerator cor2 = writeNewUser("1234", "Mitsos", "a@a.com");
		RuntimeObject* L_6;
		L_6 = FirebaseTest_writeNewUser_m71C728C494D5449A57A87982CEA9A52A8AA34FF2(__this, _stringLiteral139F69C93C042496A8E958EC5930662C6CCCAFBF, _stringLiteral840B40C9136D96D5D3A27C5A9AA17798E1CBB4C2, _stringLiteral8BDB2B51F26EBAE72DE1760A3E90AF8B1C1A8590, NULL);
		V_2 = L_6;
		// StartCoroutine(cor2);
		RuntimeObject* L_7 = V_2;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
		// IEnumerator cor3 = FetchBuildingData();
		RuntimeObject* L_9;
		L_9 = FirebaseTest_FetchBuildingData_m6B670548ED5D82B32FE5F8C51601DCFE13A76364(__this, NULL);
		V_3 = L_9;
		// StartCoroutine(cor3);
		RuntimeObject* L_10 = V_3;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_10, NULL);
		// FetchBuildingCollection();
		FirebaseTest_FetchBuildingCollection_mCB6117F11762C5AF4FADCFFF4522792884CC1BBA(__this, NULL);
	}

IL_0069:
	{
		// if (_mustCallBuildingsUpdatedListener)
		bool L_12 = __this->____mustCallBuildingsUpdatedListener_8;
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0090;
		}
	}
	{
		// _mustCallBuildingsUpdatedListener = false;
		__this->____mustCallBuildingsUpdatedListener_8 = (bool)0;
		// BuildingsUpdated?.Invoke();
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_14 = __this->___BuildingsUpdated_7;
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* L_15 = L_14;
		G_B7_0 = L_15;
		if (L_15)
		{
			G_B8_0 = L_15;
			goto IL_0089;
		}
	}
	{
		goto IL_008f;
	}

IL_0089:
	{
		NullCheck(G_B8_0);
		BuildingsUpdatedEventHandler_Invoke_m81DD9FB33429CC840F4AAF695BB2F6A7B3D31DD8_inline(G_B8_0, NULL);
	}

IL_008f:
	{
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator FirebaseTest::writeNewUser(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseTest_writeNewUser_m71C728C494D5449A57A87982CEA9A52A8AA34FF2 (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, String_t* ___userId0, String_t* ___name1, String_t* ___email2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A* L_0 = (U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A*)il2cpp_codegen_object_new(U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CwriteNewUserU3Ed__15__ctor_mFA21CFA32E903BB6B60E893A938EC4F84D1BC436(L_0, 0, NULL);
		U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A* L_2 = L_1;
		String_t* L_3 = ___userId0;
		NullCheck(L_2);
		L_2->___userId_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___userId_2), (void*)L_3);
		U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A* L_4 = L_2;
		String_t* L_5 = ___name1;
		NullCheck(L_4);
		L_4->___name_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___name_3), (void*)L_5);
		U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A* L_6 = L_4;
		String_t* L_7 = ___email2;
		NullCheck(L_6);
		L_6->___email_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___email_4), (void*)L_7);
		return L_6;
	}
}
// System.Collections.IEnumerator FirebaseTest::FetchBuildingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseTest_FetchBuildingData_m6B670548ED5D82B32FE5F8C51601DCFE13A76364 (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820* L_0 = (U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820*)il2cpp_codegen_object_new(U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFetchBuildingDataU3Ed__16__ctor_mCE0ED29495D1A3F0BF4807E2E93A6C46D63AE746(L_0, 0, NULL);
		U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator FirebaseTest::SignInUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseTest_SignInUser_mBB56F3CC812DCFA7E3BAC7B54D2A4E3D54D2A931 (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4* L_0 = (U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4*)il2cpp_codegen_object_new(U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSignInUserU3Ed__17__ctor_mD61B54A56A437A60F0617C706745CD52F0B33033(L_0, 0, NULL);
		U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void FirebaseTest::FetchBuildingCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseTest_FetchBuildingCollection_mCB6117F11762C5AF4FADCFFF4522792884CC1BBA (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseTest_U3CFetchBuildingCollectionU3Eb__18_0_m0B7D1E1C8A62D91A2387A55E2D320129AF06F1C7_RuntimeMethod_var);
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
		//         foreach (DataSnapshot building in snapshot.Children)
		//         {
		//             string buildingId = building.Key;
		//             Building aBuilding = new Building(buildingId);
		// 
		//             string json = building.GetRawJsonValue();
		//             JsonUtility.FromJsonOverwrite(json, aBuilding);
		// 
		//             _buildings[i] = aBuilding;
		//             i++;
		//         }
		// 
		//         _mustCallBuildingsUpdatedListener = true;
		//     }
		//     else
		//         Debug.Log("Failed to fetch buildings collection");
		// });
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_0 = __this->___db_5;
		NullCheck(L_0);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_1;
		L_1 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_0, _stringLiteralE607EECF2DD996D5B52019F099885B017CC96437, NULL);
		NullCheck(L_1);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_2;
		L_2 = Query_GetValueAsync_mFEB57CCE078D10FC3A6DA6DA2A7DCD16CC4673F5(L_1, NULL);
		Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* L_3 = (Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756*)il2cpp_codegen_object_new(Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m47FFCA5D7CA1940EDC58E9D6F823C7710794F537(L_3, __this, (intptr_t)((void*)FirebaseTest_U3CFetchBuildingCollectionU3Eb__18_0_m0B7D1E1C8A62D91A2387A55E2D320129AF06F1C7_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663(L_2, L_3, TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FirebaseTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseTest__ctor_mB67F7E3C6A6560453C5D750FBB714EC217344D1D (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, const RuntimeMethod* method) 
{
	{
		// bool hasRun = false;
		__this->___hasRun_4 = (bool)0;
		// private bool _mustCallBuildingsUpdatedListener = false;
		__this->____mustCallBuildingsUpdatedListener_8 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void FirebaseTest::<FetchBuildingCollection>b__18_0(System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseTest_U3CFetchBuildingCollectionU3Eb__18_0_m0B7D1E1C8A62D91A2387A55E2D320129AF06F1C7 (FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* __this, Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Building_t950D5394E080624D7E96B158EF852EA16ADB3650_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseTest_U3CFetchBuildingCollectionU3Eb__18_0_m0B7D1E1C8A62D91A2387A55E2D320129AF06F1C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t89D6D9FAD8F93015339F011596FA51B8F53D3248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43772496A8425310102AB6842A8DF95A40CBE489);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral438095AAD6F94182BE6B5ABD3C540AB80840ADF2);
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
			goto IL_00a0;
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
		if ((int64_t)(L_6) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), FirebaseTest_U3CFetchBuildingCollectionU3Eb__18_0_m0B7D1E1C8A62D91A2387A55E2D320129AF06F1C7_RuntimeMethod_var);
		BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_7 = (BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923*)(BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923*)SZArrayNew(BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_6));
		__this->____buildings_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buildings_9), (void*)L_7);
		// foreach (DataSnapshot building in snapshot.Children)
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

FINALLY_008b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_3;
					if (!L_11)
					{
						goto IL_0095;
					}
				}
				{
					RuntimeObject* L_12 = V_3;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0095:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0081_1;
			}

IL_0044_1:
			{
				// foreach (DataSnapshot building in snapshot.Children)
				RuntimeObject* L_13 = V_3;
				NullCheck(L_13);
				DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_14;
				L_14 = InterfaceFuncInvoker0< DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot>::get_Current() */, IEnumerator_1_t89D6D9FAD8F93015339F011596FA51B8F53D3248_il2cpp_TypeInfo_var, L_13);
				V_4 = L_14;
				// string buildingId = building.Key;
				DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_15 = V_4;
				NullCheck(L_15);
				String_t* L_16;
				L_16 = DataSnapshot_get_Key_m71F6DF80BFBCFA8C9C2F2368AD5F6A44F5E70908(L_15, NULL);
				V_5 = L_16;
				// Building aBuilding = new Building(buildingId);
				String_t* L_17 = V_5;
				Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_18 = (Building_t950D5394E080624D7E96B158EF852EA16ADB3650*)il2cpp_codegen_object_new(Building_t950D5394E080624D7E96B158EF852EA16ADB3650_il2cpp_TypeInfo_var);
				NullCheck(L_18);
				Building__ctor_mFA4E6FF1B808B600BA046726206734FA40C5EE14(L_18, L_17, NULL);
				V_6 = L_18;
				// string json = building.GetRawJsonValue();
				DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_19 = V_4;
				NullCheck(L_19);
				String_t* L_20;
				L_20 = DataSnapshot_GetRawJsonValue_m1C68374C193D549348050EC403C01F68AB3A1591(L_19, NULL);
				V_7 = L_20;
				// JsonUtility.FromJsonOverwrite(json, aBuilding);
				String_t* L_21 = V_7;
				Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_22 = V_6;
				JsonUtility_FromJsonOverwrite_mF60C8238431C1A42F7F482BB717757B281570D56(L_21, L_22, NULL);
				// _buildings[i] = aBuilding;
				BuildingU5BU5D_t2224E8D46E2056B6FC47768923ABD833D25EA923* L_23 = __this->____buildings_9;
				int32_t L_24 = V_2;
				Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_25 = V_6;
				NullCheck(L_23);
				ArrayElementTypeCheck (L_23, L_25);
				(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Building_t950D5394E080624D7E96B158EF852EA16ADB3650*)L_25);
				// i++;
				int32_t L_26 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
			}

IL_0081_1:
			{
				// foreach (DataSnapshot building in snapshot.Children)
				RuntimeObject* L_27 = V_3;
				NullCheck(L_27);
				bool L_28;
				L_28 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_27);
				if (L_28)
				{
					goto IL_0044_1;
				}
			}
			{
				goto IL_0096;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0096:
	{
		// _mustCallBuildingsUpdatedListener = true;
		__this->____mustCallBuildingsUpdatedListener_8 = (bool)1;
		goto IL_00ab;
	}

IL_00a0:
	{
		// Debug.Log("Failed to fetch buildings collection");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral43772496A8425310102AB6842A8DF95A40CBE489, NULL);
	}

IL_00ab:
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
void BuildingsUpdatedEventHandler_Invoke_m81DD9FB33429CC840F4AAF695BB2F6A7B3D31DD8_Multicast(BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* currentDelegate = reinterpret_cast<BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BuildingsUpdatedEventHandler_Invoke_m81DD9FB33429CC840F4AAF695BB2F6A7B3D31DD8_OpenInst(BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void BuildingsUpdatedEventHandler_Invoke_m81DD9FB33429CC840F4AAF695BB2F6A7B3D31DD8_OpenStatic(BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void BuildingsUpdatedEventHandler_Invoke_m81DD9FB33429CC840F4AAF695BB2F6A7B3D31DD8_OpenStaticInvoker(BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void BuildingsUpdatedEventHandler_Invoke_m81DD9FB33429CC840F4AAF695BB2F6A7B3D31DD8_ClosedStaticInvoker(BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8 (BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void FirebaseTest/BuildingsUpdatedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsUpdatedEventHandler__ctor_m14E7093BE2A45F53689AED55E7FFB37E8272E9FF (BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&BuildingsUpdatedEventHandler_Invoke_m81DD9FB33429CC840F4AAF695BB2F6A7B3D31DD8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BuildingsUpdatedEventHandler_Invoke_m81DD9FB33429CC840F4AAF695BB2F6A7B3D31DD8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BuildingsUpdatedEventHandler_Invoke_m81DD9FB33429CC840F4AAF695BB2F6A7B3D31DD8_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&BuildingsUpdatedEventHandler_Invoke_m81DD9FB33429CC840F4AAF695BB2F6A7B3D31DD8_Multicast;
}
// System.Void FirebaseTest/BuildingsUpdatedEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsUpdatedEventHandler_Invoke_m81DD9FB33429CC840F4AAF695BB2F6A7B3D31DD8 (BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult FirebaseTest/BuildingsUpdatedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BuildingsUpdatedEventHandler_BeginInvoke_mF2F4B35C95906C6652F38458EB4A212D2A5D85FA (BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void FirebaseTest/BuildingsUpdatedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingsUpdatedEventHandler_EndInvoke_mB6A661C673227054F736099791597246B5FDDD79 (BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void FirebaseTest/User::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_mAA9CCB9C46B57C1842A8880AAD855DBA1EFD2A56 (User_t7B4D8808D7DCBA206312E14D7B985EE0AF19AFF0* __this, const RuntimeMethod* method) 
{
	{
		// public User()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void FirebaseTest/User::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m243C5074E23953E7715E4557DFC25FFAFB59B63C (User_t7B4D8808D7DCBA206312E14D7B985EE0AF19AFF0* __this, String_t* ___username0, String_t* ___email1, const RuntimeMethod* method) 
{
	{
		// public User(string username, string email)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.username = username;
		String_t* L_0 = ___username0;
		__this->___username_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___username_0), (void*)L_0);
		// this.email = email;
		String_t* L_1 = ___email1;
		__this->___email_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___email_1), (void*)L_1);
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
// System.Void FirebaseTest/<writeNewUser>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwriteNewUserU3Ed__15__ctor_mFA21CFA32E903BB6B60E893A938EC4F84D1BC436 (U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FirebaseTest/<writeNewUser>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwriteNewUserU3Ed__15_System_IDisposable_Dispose_mEB185FE233D7F8D5D3BD2FDD8B7EA24CBD98DDF1 (U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FirebaseTest/<writeNewUser>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwriteNewUserU3Ed__15_MoveNext_mC0EB027E521EA83DD3F2E47069AF1702FF97427E (U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_t7B4D8808D7DCBA206312E14D7B985EE0AF19AFF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
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
		goto IL_0084;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// User user = new User(name, email);
		String_t* L_3 = __this->___name_3;
		String_t* L_4 = __this->___email_4;
		User_t7B4D8808D7DCBA206312E14D7B985EE0AF19AFF0* L_5 = (User_t7B4D8808D7DCBA206312E14D7B985EE0AF19AFF0*)il2cpp_codegen_object_new(User_t7B4D8808D7DCBA206312E14D7B985EE0AF19AFF0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		User__ctor_m243C5074E23953E7715E4557DFC25FFAFB59B63C(L_5, L_3, L_4, NULL);
		__this->___U3CuserU3E5__1_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CuserU3E5__1_6), (void*)L_5);
		// string json = JsonUtility.ToJson(user);
		User_t7B4D8808D7DCBA206312E14D7B985EE0AF19AFF0* L_6 = __this->___U3CuserU3E5__1_6;
		String_t* L_7;
		L_7 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_6, NULL);
		__this->___U3CjsonU3E5__2_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CjsonU3E5__2_7), (void*)L_7);
		// db.Child("users").Child(userId).SetRawJsonValueAsync(json);
		FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* L_8 = __this->___U3CU3E4__this_5;
		NullCheck(L_8);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_9 = L_8->___db_5;
		NullCheck(L_9);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_10;
		L_10 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_9, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, NULL);
		String_t* L_11 = __this->___userId_2;
		NullCheck(L_10);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_12;
		L_12 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_10, L_11, NULL);
		String_t* L_13 = __this->___U3CjsonU3E5__2_7;
		NullCheck(L_12);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_14;
		L_14 = DatabaseReference_SetRawJsonValueAsync_m9490E9CAA051A1E371954DF33B34505FC09AA080(L_12, L_13, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0084:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object FirebaseTest/<writeNewUser>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CwriteNewUserU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF09009F08861872C748B37FE8B30B01BC1D995C1 (U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FirebaseTest/<writeNewUser>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwriteNewUserU3Ed__15_System_Collections_IEnumerator_Reset_mA9DA209C4253C94258461F59C86BD1BFE7DB0C70 (U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CwriteNewUserU3Ed__15_System_Collections_IEnumerator_Reset_mA9DA209C4253C94258461F59C86BD1BFE7DB0C70_RuntimeMethod_var)));
	}
}
// System.Object FirebaseTest/<writeNewUser>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CwriteNewUserU3Ed__15_System_Collections_IEnumerator_get_Current_m7610BB54189C3A33DB194173B4B007F548591D1D (U3CwriteNewUserU3Ed__15_t1020BC58041CAC72BE430A511159AF1E147DCC0A* __this, const RuntimeMethod* method) 
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
// System.Void FirebaseTest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4A5E486ED565F84FAEC0CD58212B30A6A7DDBC3C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363* L_0 = (U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363*)il2cpp_codegen_object_new(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m098C1C3A506D57F8F451454244612C18A7FB34C4(L_0, NULL);
		((U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void FirebaseTest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m098C1C3A506D57F8F451454244612C18A7FB34C4 (U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FirebaseTest/<>c::<FetchBuildingData>b__16_0(System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CFetchBuildingDataU3Eb__16_0_m122762CB344B8BA3F42C66E6325698A71CFE5379 (U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363* __this, Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHelper_FromServerJson_TisWall_t937177F3C848F0B028993DB85C6BDFF844EB1334_m255C09737638D8C3FD131BC814CFFDF85D7DB685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CEC0C2A2C4C5D2434C3D0BCA6DBB41CF79CC0CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33ECF2584F82391BB2BF4F6F500A72FE898905F5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* V_1 = NULL;
	String_t* V_2 = NULL;
	WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* V_3 = NULL;
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
			goto IL_002f;
		}
	}
	{
		// Debug.Log("Building data successfully fetched");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral33ECF2584F82391BB2BF4F6F500A72FE898905F5, NULL);
		// DataSnapshot snapshot = task.Result;
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_3 = ___task0;
		NullCheck(L_3);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_4;
		L_4 = Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C(L_3, Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		V_1 = L_4;
		// string jsonString = snapshot.GetRawJsonValue();
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = DataSnapshot_GetRawJsonValue_m1C68374C193D549348050EC403C01F68AB3A1591(L_5, NULL);
		V_2 = L_6;
		// Wall[] walls = JsonHelper.FromServerJson<Wall>(jsonString);
		String_t* L_7 = V_2;
		WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* L_8;
		L_8 = JsonHelper_FromServerJson_TisWall_t937177F3C848F0B028993DB85C6BDFF844EB1334_m255C09737638D8C3FD131BC814CFFDF85D7DB685(L_7, JsonHelper_FromServerJson_TisWall_t937177F3C848F0B028993DB85C6BDFF844EB1334_m255C09737638D8C3FD131BC814CFFDF85D7DB685_RuntimeMethod_var);
		V_3 = L_8;
		goto IL_003a;
	}

IL_002f:
	{
		// Debug.Log("Failed to fetch building data");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0CEC0C2A2C4C5D2434C3D0BCA6DBB41CF79CC0CE, NULL);
	}

IL_003a:
	{
		// });
		return;
	}
}
// System.Void FirebaseTest/<>c::<SignInUser>b__17_0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSignInUserU3Eb__17_0_mE3C3E376B98B8A31E5B89EE901657E1EC76DDFBF (U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___task0, const RuntimeMethod* method) 
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
// System.Void FirebaseTest/<FetchBuildingData>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFetchBuildingDataU3Ed__16__ctor_mCE0ED29495D1A3F0BF4807E2E93A6C46D63AE746 (U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FirebaseTest/<FetchBuildingData>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFetchBuildingDataU3Ed__16_System_IDisposable_Dispose_m8F358BCDC92538B8F4F0F95E24F21FB976D6A643 (U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FirebaseTest/<FetchBuildingData>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFetchBuildingDataU3Ed__16_MoveNext_m706EA3CB5BDB36E89E14A8DF3167A5301391E626 (U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFetchBuildingDataU3Eb__16_0_m122762CB344B8BA3F42C66E6325698A71CFE5379_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B8A0531638A0E5DD42B2E1AD8CA6971D707645F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36B202D655CC2A3CA47D60DB812C800D8F29B18A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE607EECF2DD996D5B52019F099885B017CC96437);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* G_B9_0 = NULL;
	Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* G_B9_1 = NULL;
	Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* G_B8_0 = NULL;
	Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* G_B8_1 = NULL;
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
		goto IL_008e;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Fetching building data");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0B8A0531638A0E5DD42B2E1AD8CA6971D707645F, NULL);
		// db.Child("buildings").Child("home").Child("walls").GetValueAsync().ContinueWithOnMainThread(task =>
		// {
		//     // Get the json from the server snapshot and convert it into Wall array in order to put it in the building creator
		//     if (task.IsCompleted)
		//     {
		//         Debug.Log("Building data successfully fetched");
		// 
		//         DataSnapshot snapshot = task.Result;
		// 
		//         string jsonString = snapshot.GetRawJsonValue();
		// 
		//         Wall[] walls = JsonHelper.FromServerJson<Wall>(jsonString);
		//     }
		//     else
		//         Debug.Log("Failed to fetch building data");
		// });
		FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_4 = L_3->___db_5;
		NullCheck(L_4);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_5;
		L_5 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_4, _stringLiteralE607EECF2DD996D5B52019F099885B017CC96437, NULL);
		NullCheck(L_5);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_6;
		L_6 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_5, _stringLiteral0C9DC099BD4ECD04B696BF38FC02346103F2BC97, NULL);
		NullCheck(L_6);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_7;
		L_7 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_6, _stringLiteral36B202D655CC2A3CA47D60DB812C800D8F29B18A, NULL);
		NullCheck(L_7);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_8;
		L_8 = Query_GetValueAsync_mFEB57CCE078D10FC3A6DA6DA2A7DCD16CC4673F5(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var);
		Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* L_9 = ((U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1;
		Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* L_10 = L_9;
		G_B8_0 = L_10;
		G_B8_1 = L_8;
		if (L_10)
		{
			G_B9_0 = L_10;
			G_B9_1 = L_8;
			goto IL_0078;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var);
		U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363* L_11 = ((U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* L_12 = (Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756*)il2cpp_codegen_object_new(Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_m47FFCA5D7CA1940EDC58E9D6F823C7710794F537(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3CFetchBuildingDataU3Eb__16_0_m122762CB344B8BA3F42C66E6325698A71CFE5379_RuntimeMethod_var), NULL);
		Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* L_13 = L_12;
		((U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1), (void*)L_13);
		G_B9_0 = L_13;
		G_B9_1 = G_B8_1;
	}

IL_0078:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_14;
		L_14 = TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663(G_B9_1, G_B9_0, TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663_RuntimeMethod_var);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object FirebaseTest/<FetchBuildingData>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFetchBuildingDataU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6A520513693E0C78F36A15D572F7B0433894AD53 (U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FirebaseTest/<FetchBuildingData>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFetchBuildingDataU3Ed__16_System_Collections_IEnumerator_Reset_m8A09721C669700FD20700CFBFB65ABCA80FE821F (U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFetchBuildingDataU3Ed__16_System_Collections_IEnumerator_Reset_m8A09721C669700FD20700CFBFB65ABCA80FE821F_RuntimeMethod_var)));
	}
}
// System.Object FirebaseTest/<FetchBuildingData>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFetchBuildingDataU3Ed__16_System_Collections_IEnumerator_get_Current_m8819D753019F2A7BBFCE94FEB4DB161E634FF58E (U3CFetchBuildingDataU3Ed__16_t4A17DE8A2E3C9A2953540EB9CA932A99D3344820* __this, const RuntimeMethod* method) 
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
// System.Void FirebaseTest/<SignInUser>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInUserU3Ed__17__ctor_mD61B54A56A437A60F0617C706745CD52F0B33033 (U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FirebaseTest/<SignInUser>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInUserU3Ed__17_System_IDisposable_Dispose_mFF2F1C1BC6ECB41434B22EEF70500B9C5159957F (U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FirebaseTest/<SignInUser>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSignInUserU3Ed__17_MoveNext_mD466E7FB164DD50ABFBF9DDAB9CDF3B0088FD0C9 (U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSignInUserU3Eb__17_0_mE3C3E376B98B8A31E5B89EE901657E1EC76DDFBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var);
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
		FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* L_3 = __this->___U3CU3E4__this_2;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_4;
		L_4 = FirebaseAuth_get_DefaultInstance_m86A4E32D8DCDB80079317B58210090F3D3B1711F(NULL);
		NullCheck(L_3);
		L_3->___auth_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___auth_6), (void*)L_4);
		// auth.SignInWithEmailAndPasswordAsync("toliasj@yahoo.gr", "password").ContinueWithOnMainThread(task =>
		// {
		//     Debug.Log(task.Result.UserId.ToString());
		// });
		FirebaseTest_t6D3275679DC4322C0F703216D2200D568AD8A083* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_6 = L_5->___auth_6;
		NullCheck(L_6);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_7;
		L_7 = FirebaseAuth_SignInWithEmailAndPasswordAsync_mAA4074C7F5BC11678AF9FCAFB7BE86F751072E5E(L_6, _stringLiteral24E44E9BEBD26B4D54643A87E01870D7B3EB4386, _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var);
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_8 = ((U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_2;
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
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var);
		U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363* L_10 = ((U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_11 = (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*)il2cpp_codegen_object_new(Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CSignInUserU3Eb__17_0_mE3C3E376B98B8A31E5B89EE901657E1EC76DDFBF_RuntimeMethod_var), NULL);
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_12 = L_11;
		((U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD058653E0B1D5EC5E261A5CBA96B7E668520A363_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_2), (void*)L_12);
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
// System.Object FirebaseTest/<SignInUser>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSignInUserU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9111E686812038D7E86BAD9C6E775482E1FD4728 (U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FirebaseTest/<SignInUser>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignInUserU3Ed__17_System_Collections_IEnumerator_Reset_mC5DA399BBB7EB133BE138DBC24BD7EA6F2D77B11 (U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSignInUserU3Ed__17_System_Collections_IEnumerator_Reset_mC5DA399BBB7EB133BE138DBC24BD7EA6F2D77B11_RuntimeMethod_var)));
	}
}
// System.Object FirebaseTest/<SignInUser>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSignInUserU3Ed__17_System_Collections_IEnumerator_get_Current_mF17E33F29A8B213585C7BED295087A64F0747EB4 (U3CSignInUserU3Ed__17_tA2A5ACD1D7D6B8276CBCB4A473CA21C90F1E92D4* __this, const RuntimeMethod* method) 
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
// System.Void NavBaker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavBaker_Update_m39BFC3ECF5C2741048AE90ECF53C8B044CA36950 (NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavBaker_UpdateNavMesh_m1B312D4FCBE33A3AA11B51524CC7B998377C5E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buildingCreator.WallsUpdated += new BuildingCreator.WallsUpdatedEventHandler(UpdateNavMesh);
		BuildingCreator_t4DF683362887B2B9E871F5C174AEFBB112168524* L_0 = __this->___buildingCreator_5;
		WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190* L_1 = (WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190*)il2cpp_codegen_object_new(WallsUpdatedEventHandler_t4B44DF709162B87399624C400D8DD03097C10190_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WallsUpdatedEventHandler__ctor_mAB8C00748AE7E8B0DDC77B7D06ED8A35750C44DF(L_1, __this, (intptr_t)((void*)NavBaker_UpdateNavMesh_m1B312D4FCBE33A3AA11B51524CC7B998377C5E11_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		BuildingCreator_add_WallsUpdated_m9C85A5AEF04E1BEE7423FE20DE92AA837DC5BE32(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void NavBaker::UpdateNavMesh(Wall[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavBaker_UpdateNavMesh_m1B312D4FCBE33A3AA11B51524CC7B998377C5E11 (NavBaker_t487B1FB48CC02C1A360908C8B156D0C46B643AE2* __this, WallU5BU5D_t9D65FF02DD86CBA4D23AA0321630BF2480A3C46A* ___walls0, const RuntimeMethod* method) 
{
	{
		// surface.BuildNavMesh();
		NavMeshSurface_t6AD4A78CE9075724C0508F2F3F822BD46C4330B8* L_0 = __this->___surface_4;
		NullCheck(L_0);
		NavMeshSurface_BuildNavMesh_mD9177CA8015A7CF3299DD5420FDD33CFEE252CAF(L_0, NULL);
		// }
		return;
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
// System.Void PathPlacer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathPlacer_Start_m61764DD6A2B74DCF6FB8FCD6AF66F91DBF144A97 (PathPlacer_tDB937E241E57AAD33D3076D912352A1296AAFDBD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PathPlacer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathPlacer_Update_mBCCCA18CEC53143AE711AB73C0A5504AD47E1CDD (PathPlacer_tDB937E241E57AAD33D3076D912352A1296AAFDBD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PathPlacer::LogHitResult(Vuforia.HitTestResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathPlacer_LogHitResult_mF9234B8F2B3335C341FAE40DDF80ACCC5E867180 (PathPlacer_tDB937E241E57AAD33D3076D912352A1296AAFDBD* __this, HitTestResult_t623F1DB9A0AAD8416652DFFE1842F908250D44D9* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Log(result.Position.ToString());
		HitTestResult_t623F1DB9A0AAD8416652DFFE1842F908250D44D9* L_0 = ___result0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = HitTestResult_get_Position_m2F30FBF2AF4D53E6C3F1E51D44AE699C153C4784_inline(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.Void PathPlacer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathPlacer__ctor_m631D5EA148EB42CC783E799F72C9EE9D167A480B (PathPlacer_tDB937E241E57AAD33D3076D912352A1296AAFDBD* __this, const RuntimeMethod* method) 
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
// System.Void TestScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestScript_Update_m2C71EA169AE2E24BFBF2B756FFA6646F13C760FF (TestScript_t6D759E079BA3FEA034493A5F329125444C6E8F1A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TestScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestScript__ctor_mE9AF09F78DA4B15E4FFB15B70546E46CD955CDDA (TestScript_t6D759E079BA3FEA034493A5F329125444C6E8F1A* __this, const RuntimeMethod* method) 
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
// System.Void Wall::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall__ctor_m5BD6F62EC59A3C2B6CDE3C17B95D2EB616A6873E (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, float ___x10, float ___y11, float ___x22, float ___y23, const RuntimeMethod* method) 
{
	{
		// public Wall(float x1, float y1, float x2, float y2)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.x1 = x1;
		float L_0 = ___x10;
		__this->___x1_0 = L_0;
		// this.x2 = x2;
		float L_1 = ___x22;
		__this->___x2_1 = L_1;
		// this.y1 = y1;
		float L_2 = ___y11;
		__this->___y1_2 = L_2;
		// this.y2 = y2;
		float L_3 = ___y23;
		__this->___y2_3 = L_3;
		// }
		return;
	}
}
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
// UnityEngine.Vector2 Wall::get_MiddlePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Wall_get_MiddlePoint_m728B7D4AF428EC265B1F3C75D0670B14CD35CAE2 (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector2 MiddlePoint { get { return (new Vector2(x1, y1) + new Vector2(x2, y2)) / 2 ;} }
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
		L_6 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_2, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_6, (2.0f), NULL);
		V_0 = L_7;
		goto IL_0035;
	}

IL_0035:
	{
		// public Vector2 MiddlePoint { get { return (new Vector2(x1, y1) + new Vector2(x2, y2)) / 2 ;} }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		return L_8;
	}
}
// System.Single Wall::get_Angle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Wall_get_Angle_m6421870344364BD325482A921E15D82ED4758C44 (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
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
		// return  - radians * Mathf.Rad2Deg;
		float L_12 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(((-L_12)), (57.2957802f)));
		goto IL_0046;
	}

IL_0046:
	{
		// }
		float L_13 = V_2;
		return L_13;
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
// System.Void ExtensionMethods.TransformExtensions::SetThisTransformAsParent(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_SetThisTransformAsParent_mFDB4D212AD75D4E186835ABCF4B64032501F93DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___anotherTransform1, const RuntimeMethod* method) 
{
	{
		// anotherTransform.SetParent(transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___anotherTransform1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___transform0;
		NullCheck(L_0);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_0, L_1, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CurrentBuildingChangedEventHandler_Invoke_m23C6E95007C4CB12996E292CC3FF9ECEB60A3DC2_inline (CurrentBuildingChangedEventHandler_t06104FD2B736B50CB66CA09A8498551BA0D83177* __this, Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Building_t950D5394E080624D7E96B158EF852EA16ADB3650*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___building0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BuildingsUpdatedEventHandler_Invoke_m81DD9FB33429CC840F4AAF695BB2F6A7B3D31DD8_inline (BuildingsUpdatedEventHandler_t5C15C9A2399A93BB1B0EBC718B187878F1121EE8* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HitTestResult_get_Position_m2F30FBF2AF4D53E6C3F1E51D44AE699C153C4784_inline (HitTestResult_t623F1DB9A0AAD8416652DFFE1842F908250D44D9* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___mPosition_1;
		return L_0;
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
