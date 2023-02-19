#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.Animator[]
struct AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// AmmoFill
struct AmmoFill_t0A044433D8643E2BF797DFF1D9EE3D7E8136ABAC;
// AmmoHUD
struct AmmoHUD_tE1C54E983482F90529FF4C2566BADC656945FD26;
// AnimationPlay
struct AnimationPlay_t860DA11F624886F82FF2095D4DE3EA768B4F3C86;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// Bullet
struct Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344;
// BulletTimer
struct BulletTimer_t97075F2EF0198227CA44647E8FC59C4AC8D431FF;
// CactiEnemy
struct CactiEnemy_tFB3DC7AC62B57581F0EDD20F9AB462721F39FA4A;
// CactiEnemyHitbox
struct CactiEnemyHitbox_tD2E7A316112AA0888296FEB7FF1024F5A17D4235;
// CactiSpawner
struct CactiSpawner_t4D512B30FBC71DC65BB3D6A01BEA49458471097A;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Complete.CameraControl
struct CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChangeColor
struct ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Effects
struct Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// ExitGame
struct ExitGame_t7535BD4AC5611EBE2045397500E11C4CF600C05F;
// Fillerposition
struct Fillerposition_t91FD8A68FAD952EE3FFFCA7F8F6C31184D45CBDF;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GenerateScene
struct GenerateScene_t9ACA89CB83770DF630D576D080539DB3819093EC;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Intro
struct Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// LoadEffect
struct LoadEffect_t81BB68327496191ACDBEC355E8617D05B76B1C0F;
// LoadScene
struct LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuIni
struct MenuIni_t660796B995663DC8A034C1E199ED3D30C43E8430;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Objectives
struct Objectives_t4A4ADA2273CA4802758983D534A582BBA49DC9C6;
// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// RespawnTank
struct RespawnTank_t87BA50F342F879CE8D7FEBAF82E1B5F8278B0D3A;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SetActive
struct SetActive_tB87BB5B726EB18026D8486B4984B86DD02A87FA8;
// Shaker
struct Shaker_tABF7D944736B0C499CD37059E23615FD62497421;
// ShieldFill
struct ShieldFill_t69472C7D9EE599DDD9BADA65ABC251F6253E7BBB;
// ShieldHUD
struct ShieldHUD_t698DC2B8ADFE815DF9FA8694A78B46EC480AEDDD;
// SimpleTimer
struct SimpleTimer_tD2DC11B21AA29D70436742BE281D6B6C8E111A77;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SpeedFill
struct SpeedFill_tAAB1F8017D32D393374B30393633AA7EA3E65144;
// SpeedHUD
struct SpeedHUD_t482A6FA2DFE06D93637EFA89304A01F6FC80537B;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// SpriteFading
struct SpriteFading_tED9181E2EB4A6B104DFE8EA91848FE6B11BAB07B;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// StartButton
struct StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545;
// System.String
struct String_t;
// Tank2DHitbox
struct Tank2DHitbox_t6D53C7E581FA57B95DC5CA061D6ABBDBEE4C7417;
// Tank2DControllers.Tank2DMovement
struct Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9;
// Tank2DShootSystem
struct Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TimerDestroyer
struct TimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D;
// TimerSlider
struct TimerSlider_tA122A06C993B0C854E93D19EDC1084C402B0D9B4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// gameMode
struct gameMode_t047BBDC9475313F1573710EF9F747B44AF8511EC;
// infiniteBG
struct infiniteBG_tA3EE5CD3AFA501C654EA135CD2C3D3FD2FEA9E6D;
// mainMenuInput
struct mainMenuInput_tDD747AF6182F7AE942D4754D1B24E60BA18B1516;
// mode
struct mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB;
// respawnThings
struct respawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Shaker/<DoShake>d__7
struct U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// SpriteFading/<DoFadeIn>d__2
struct U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0549601E569B22E43E64BA4E87DE09DBE74DD1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral0ABEDB84292C204B8C6686DA012CFD44CAB00935;
IL2CPP_EXTERN_C String_t* _stringLiteral1C40CE790532B765E659B01F6C1AF98D8B06E6A1;
IL2CPP_EXTERN_C String_t* _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral36B5261CDBCF95DBB7DA9447BE6C009129905FD6;
IL2CPP_EXTERN_C String_t* _stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6;
IL2CPP_EXTERN_C String_t* _stringLiteral402C6E3ED23DA5C25388A2C7380FF5A1731F7107;
IL2CPP_EXTERN_C String_t* _stringLiteral51452628837BAB7C283227D4421383559F8F9A27;
IL2CPP_EXTERN_C String_t* _stringLiteral52F407FEEF7C909FF3C6CB7F61DE89BDB2D8E436;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral60BB56EE14754E743163E5891FD1A9CB6106AF3B;
IL2CPP_EXTERN_C String_t* _stringLiteral61F286CA98AA084927C9A5C29EF0A1E9BB34770D;
IL2CPP_EXTERN_C String_t* _stringLiteral62EC32DB0165ABAB454A1C8263AA078C3F4A968D;
IL2CPP_EXTERN_C String_t* _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8;
IL2CPP_EXTERN_C String_t* _stringLiteral65DA496F0A005C3E89199A5C0EB7FE1E0C433652;
IL2CPP_EXTERN_C String_t* _stringLiteral6904788C6F25089EBD4EA775308DF7FBE31A8E87;
IL2CPP_EXTERN_C String_t* _stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8A33FE33BA2472F54E326BFE6F0AC8F486AFA318;
IL2CPP_EXTERN_C String_t* _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
IL2CPP_EXTERN_C String_t* _stringLiteral998760288811781BA6F27E7F4EAD61CB21F5BB52;
IL2CPP_EXTERN_C String_t* _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC9C2EAADCD2A99B30FBDDAA084D66CCB0E750D4A;
IL2CPP_EXTERN_C String_t* _stringLiteralD5C25B77D6B0C426E4F883AAD29E42E5C88C7770;
IL2CPP_EXTERN_C String_t* _stringLiteralDBFFAD61A233ED4EE48B6C5A23F05B9B224C09C7;
IL2CPP_EXTERN_C String_t* _stringLiteralDFB9DAA21FF5FBDDD3BE3EFA35A1C531B36AF68A;
IL2CPP_EXTERN_C String_t* _stringLiteralE2F8AD0FA2E585DD18D33AC7E9CC01954B078584;
IL2CPP_EXTERN_C String_t* _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66;
IL2CPP_EXTERN_C String_t* _stringLiteralF55287E7C5B1B29E0C38F4EB26BD01879D2C68D5;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971_mDDC5E9C56F521A856F6C7DDE89809540509B05BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D_m776CCB324E2F77A562FA2519CB69F3BD8B3D11DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisrespawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF_m229ABF9297E780EC352EB7390C02C5E48FDB7CAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tank2DMovement_UpdateCannon_mC5BDC90694B7B6F8EA19D0E9B0733A4E6E8193A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoFadeInU3Ed__2_System_Collections_IEnumerator_Reset_m236BE9BBFEF4AF513C4FBCD3425D8212ABE3C376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoShakeU3Ed__7_System_Collections_IEnumerator_Reset_m58CDFB182B7E844ED13019CEE49C44E398AAA076_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

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

// Tank2DLibraryFunctions.LibraryFunctions
struct LibraryFunctions_tED261B11BE91BC6ACED6AC92E7E2B96AEDC9AFC2  : public RuntimeObject
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

// Shaker/<DoShake>d__7
struct U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE  : public RuntimeObject
{
	// System.Int32 Shaker/<DoShake>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Shaker/<DoShake>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Shaker Shaker/<DoShake>d__7::<>4__this
	Shaker_tABF7D944736B0C499CD37059E23615FD62497421* ___U3CU3E4__this_2;
	// System.Single Shaker/<DoShake>d__7::<startTime>5__2
	float ___U3CstartTimeU3E5__2_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
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

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// SpriteFading/<DoFadeIn>d__2
struct U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901  : public RuntimeObject
{
	// System.Int32 SpriteFading/<DoFadeIn>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpriteFading/<DoFadeIn>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.SpriteRenderer SpriteFading/<DoFadeIn>d__2::_sprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ____sprite_2;
	// SpriteFading SpriteFading/<DoFadeIn>d__2::<>4__this
	SpriteFading_tED9181E2EB4A6B104DFE8EA91848FE6B11BAB07B* ___U3CU3E4__this_3;
	// UnityEngine.Color SpriteFading/<DoFadeIn>d__2::<tmpColor>5__2
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CtmpColorU3E5__2_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// AmmoFill
struct AmmoFill_t0A044433D8643E2BF797DFF1D9EE3D7E8136ABAC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent AmmoFill::m_MyEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_MyEvent_4;
	// System.Int32 AmmoFill::ammoAmount
	int32_t ___ammoAmount_5;
};

// AmmoHUD
struct AmmoHUD_tE1C54E983482F90529FF4C2566BADC656945FD26  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] AmmoHUD::ammoTank
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ammoTank_4;
};

// AnimationPlay
struct AnimationPlay_t860DA11F624886F82FF2095D4DE3EA768B4F3C86  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator[] AnimationPlay::animator
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* ___animator_4;
};

// Bullet
struct Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Bullet::tagCollide
	String_t* ___tagCollide_4;
	// System.String Bullet::tagCollidePlayer
	String_t* ___tagCollidePlayer_5;
	// UnityEngine.Events.UnityEvent Bullet::En_MyEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___En_MyEvent_6;
};

// BulletTimer
struct BulletTimer_t97075F2EF0198227CA44647E8FC59C4AC8D431FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BulletTimer::targetTime
	float ___targetTime_4;
	// System.Single BulletTimer::counterTime
	float ___counterTime_5;
};

// CactiEnemy
struct CactiEnemy_tFB3DC7AC62B57581F0EDD20F9AB462721F39FA4A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CactiEnemyHitbox
struct CactiEnemyHitbox_tD2E7A316112AA0888296FEB7FF1024F5A17D4235  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String CactiEnemyHitbox::tagCollide
	String_t* ___tagCollide_4;
	// UnityEngine.Events.UnityEvent CactiEnemyHitbox::En_MyEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___En_MyEvent_5;
};

// CactiSpawner
struct CactiSpawner_t4D512B30FBC71DC65BB3D6A01BEA49458471097A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String CactiSpawner::tagposition
	String_t* ___tagposition_4;
	// UnityEngine.GameObject CactiSpawner::fillerelement
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fillerelement_5;
	// System.Boolean CactiSpawner::activaterelocation
	bool ___activaterelocation_6;
	// UnityEngine.GameObject[] CactiSpawner::spawnPoints
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___spawnPoints_7;
	// UnityEngine.GameObject CactiSpawner::currentPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentPoint_8;
	// System.Single CactiSpawner::counterTime
	float ___counterTime_9;
	// System.Int32 CactiSpawner::index
	int32_t ___index_10;
};

// Complete.CameraControl
struct CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Complete.CameraControl::m_DampTime
	float ___m_DampTime_4;
	// System.Single Complete.CameraControl::m_ScreenEdgeBuffer
	float ___m_ScreenEdgeBuffer_5;
	// System.Single Complete.CameraControl::m_MinSize
	float ___m_MinSize_6;
	// UnityEngine.Transform[] Complete.CameraControl::m_Targets
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___m_Targets_7;
	// UnityEngine.Camera Complete.CameraControl::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_8;
	// System.Single Complete.CameraControl::m_ZoomSpeed
	float ___m_ZoomSpeed_9;
	// UnityEngine.Vector3 Complete.CameraControl::m_MoveVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveVelocity_10;
	// UnityEngine.Vector3 Complete.CameraControl::m_DesiredPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DesiredPosition_11;
};

// ChangeColor
struct ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] ChangeColor::hearts
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___hearts_4;
};

// Effects
struct Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Effects::NameEffect
	String_t* ___NameEffect_4;
	// UnityEngine.GameObject Effects::fillerelement
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fillerelement_5;
	// UnityEngine.GameObject Effects::placeapparition
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placeapparition_6;
	// System.Boolean Effects::startOnLoad
	bool ___startOnLoad_7;
};

// ExitGame
struct ExitGame_t7535BD4AC5611EBE2045397500E11C4CF600C05F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Fillerposition
struct Fillerposition_t91FD8A68FAD952EE3FFFCA7F8F6C31184D45CBDF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Fillerposition::tagposition
	String_t* ___tagposition_4;
	// UnityEngine.GameObject Fillerposition::fillerelement
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fillerelement_5;
	// System.Boolean Fillerposition::activaterelocation
	bool ___activaterelocation_6;
	// UnityEngine.GameObject[] Fillerposition::spawnPoints
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___spawnPoints_7;
	// UnityEngine.GameObject Fillerposition::currentPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentPoint_8;
	// System.Single Fillerposition::counterTime
	float ___counterTime_9;
	// System.Int32 Fillerposition::index
	int32_t ___index_10;
};

// GenerateScene
struct GenerateScene_t9ACA89CB83770DF630D576D080539DB3819093EC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent GenerateScene::m_MyEventsolo
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_MyEventsolo_4;
	// UnityEngine.Events.UnityEvent GenerateScene::m_MyEventmulti
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_MyEventmulti_5;
};

// Intro
struct Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Intro::selectedButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectedButton_4;
};

// LoadEffect
struct LoadEffect_t81BB68327496191ACDBEC355E8617D05B76B1C0F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator LoadEffect::Effect
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___Effect_4;
	// System.String LoadEffect::NameEffect
	String_t* ___NameEffect_5;
	// System.Boolean LoadEffect::onStart
	bool ___onStart_6;
};

// LoadScene
struct LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LoadScene::sceneNumber
	int32_t ___sceneNumber_4;
};

// MenuIni
struct MenuIni_t660796B995663DC8A034C1E199ED3D30C43E8430  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MenuIni::mainMenuUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mainMenuUI_4;
	// System.Boolean MenuIni::isMenu
	bool ___isMenu_5;
	// UnityEngine.GameObject MenuIni::selectedButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectedButton_6;
};

// Objectives
struct Objectives_t4A4ADA2273CA4802758983D534A582BBA49DC9C6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Objectives::scoretext
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoretext_4;
	// System.Int32 Objectives::maxpunctuation
	int32_t ___maxpunctuation_5;
	// UnityEngine.Events.UnityEvent Objectives::m_MyEventscore
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_MyEventscore_6;
	// UnityEngine.Events.UnityEvent Objectives::m_MyEventpoints
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_MyEventpoints_7;
	// System.Int32 Objectives::tankplayer
	int32_t ___tankplayer_8;
	// System.Int32 Objectives::objective
	int32_t ___objective_9;
	// System.Int32 Objectives::objectivemulti1
	int32_t ___objectivemulti1_10;
	// System.Int32 Objectives::objectivemulti2
	int32_t ___objectivemulti2_11;
	// System.Single Objectives::timerpunctuation
	float ___timerpunctuation_12;
	// System.String Objectives::winner
	String_t* ___winner_13;
};

// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PauseMenu::pauseMenuUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenuUI_4;
	// System.Boolean PauseMenu::isPaused
	bool ___isPaused_5;
	// UnityEngine.Events.UnityEvent PauseMenu::m_MyEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_MyEvent_6;
	// UnityEngine.Events.UnityEvent PauseMenu::m_MyEventD
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_MyEventD_7;
	// UnityEngine.GameObject PauseMenu::selectedPauseButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectedPauseButton_8;
};

// RespawnTank
struct RespawnTank_t87BA50F342F879CE8D7FEBAF82E1B5F8278B0D3A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject RespawnTank::Tankcontroller
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Tankcontroller_4;
	// Tank2DShootSystem RespawnTank::tankController
	Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* ___tankController_5;
	// UnityEngine.GameObject[] RespawnTank::spawnPoints
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___spawnPoints_6;
	// UnityEngine.GameObject RespawnTank::currentPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentPoint_7;
	// System.String RespawnTank::tagposition
	String_t* ___tagposition_8;
	// System.Int32 RespawnTank::index
	int32_t ___index_9;
};

// SetActive
struct SetActive_tB87BB5B726EB18026D8486B4984B86DD02A87FA8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] SetActive::objects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___objects_4;
};

// Shaker
struct Shaker_tABF7D944736B0C499CD37059E23615FD62497421  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Shaker::_target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____target_4;
	// UnityEngine.Vector3 Shaker::_initialPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____initialPos_5;
	// System.Single Shaker::_pendingShakeDuration
	float ____pendingShakeDuration_6;
	// System.Boolean Shaker::_isShaking
	bool ____isShaking_7;
};

// ShieldFill
struct ShieldFill_t69472C7D9EE599DDD9BADA65ABC251F6253E7BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent ShieldFill::m_MyEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_MyEvent_4;
};

// ShieldHUD
struct ShieldHUD_t698DC2B8ADFE815DF9FA8694A78B46EC480AEDDD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ShieldHUD::shieldTank
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shieldTank_4;
};

// SimpleTimer
struct SimpleTimer_tD2DC11B21AA29D70436742BE281D6B6C8E111A77  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent SimpleTimer::m_MyEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_MyEvent_4;
	// System.Single SimpleTimer::targetTime
	float ___targetTime_5;
	// System.Boolean SimpleTimer::deactivateobject
	bool ___deactivateobject_6;
	// System.Single SimpleTimer::counterTime
	float ___counterTime_7;
};

// SpeedFill
struct SpeedFill_tAAB1F8017D32D393374B30393633AA7EA3E65144  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent SpeedFill::m_MyEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_MyEvent_4;
};

// SpeedHUD
struct SpeedHUD_t482A6FA2DFE06D93637EFA89304A01F6FC80537B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SpeedHUD::speedTank
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___speedTank_4;
};

// SpriteFading
struct SpriteFading_tED9181E2EB4A6B104DFE8EA91848FE6B11BAB07B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SpriteFading::fadeOutTime
	float ___fadeOutTime_4;
};

// StartButton
struct StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent StartButton::m_MyEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_MyEvent_4;
};

// Tank2DHitbox
struct Tank2DHitbox_t6D53C7E581FA57B95DC5CA061D6ABBDBEE4C7417  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Tank2DHitbox::tagCollide
	String_t* ___tagCollide_4;
	// UnityEngine.Events.UnityEvent Tank2DHitbox::En_MyEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___En_MyEvent_5;
};

// Tank2DControllers.Tank2DMovement
struct Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Effects Tank2DControllers.Tank2DMovement::EffectOnomatopoeiaSpeed
	Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E* ___EffectOnomatopoeiaSpeed_4;
	// System.Boolean Tank2DControllers.Tank2DMovement::MouseAim
	bool ___MouseAim_5;
	// UnityEngine.Animator Tank2DControllers.Tank2DMovement::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_6;
	// UnityEngine.Rigidbody2D Tank2DControllers.Tank2DMovement::_rigidbody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rigidbody_7;
	// UnityEngine.Transform Tank2DControllers.Tank2DMovement::cannonRotor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cannonRotor_8;
	// System.Single Tank2DControllers.Tank2DMovement::forwardSpeed
	float ___forwardSpeed_9;
	// System.Single Tank2DControllers.Tank2DMovement::backwardSpeed
	float ___backwardSpeed_10;
	// System.Single Tank2DControllers.Tank2DMovement::turnSpeed
	float ___turnSpeed_11;
	// System.Single Tank2DControllers.Tank2DMovement::speedMultiplier
	float ___speedMultiplier_12;
	// System.Single Tank2DControllers.Tank2DMovement::<Speed>k__BackingField
	float ___U3CSpeedU3Ek__BackingField_13;
	// System.Single Tank2DControllers.Tank2DMovement::_currentRotation
	float ____currentRotation_14;
	// System.Single Tank2DControllers.Tank2DMovement::_currentSpeed
	float ____currentSpeed_15;
	// UnityEngine.Vector2 Tank2DControllers.Tank2DMovement::_movementDirection
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____movementDirection_16;
	// System.Boolean Tank2DControllers.Tank2DMovement::_haltMovement
	bool ____haltMovement_17;
	// System.Single Tank2DControllers.Tank2DMovement::acceleration
	float ___acceleration_18;
	// System.Single Tank2DControllers.Tank2DMovement::deceleration
	float ___deceleration_19;
	// System.Single Tank2DControllers.Tank2DMovement::maxHorizontalSpeed
	float ___maxHorizontalSpeed_20;
	// System.Single Tank2DControllers.Tank2DMovement::maxUpwardSpeed
	float ___maxUpwardSpeed_21;
	// System.Single Tank2DControllers.Tank2DMovement::maxDownwardSpeed
	float ___maxDownwardSpeed_22;
	// UnityEngine.Vector2 Tank2DControllers.Tank2DMovement::friction
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___friction_23;
	// System.Single Tank2DControllers.Tank2DMovement::rotorSpeed
	float ___rotorSpeed_24;
	// System.Single Tank2DControllers.Tank2DMovement::rotorSmoothSpeed
	float ___rotorSmoothSpeed_25;
	// System.Boolean[] Tank2DControllers.Tank2DMovement::hideSection
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___hideSection_26;
	// System.String Tank2DControllers.Tank2DMovement::ShootInput
	String_t* ___ShootInput_27;
	// System.String Tank2DControllers.Tank2DMovement::ShieldInput
	String_t* ___ShieldInput_28;
	// System.String Tank2DControllers.Tank2DMovement::keyboardHorizontalInput
	String_t* ___keyboardHorizontalInput_29;
	// System.String Tank2DControllers.Tank2DMovement::keyboardVerticalInput
	String_t* ___keyboardVerticalInput_30;
	// System.Boolean Tank2DControllers.Tank2DMovement::keyboardInvertHorizontal
	bool ___keyboardInvertHorizontal_31;
	// System.Boolean Tank2DControllers.Tank2DMovement::keyboardInvertVertical
	bool ___keyboardInvertVertical_32;
	// System.String Tank2DControllers.Tank2DMovement::leftJoystickHorizontalInput
	String_t* ___leftJoystickHorizontalInput_33;
	// System.String Tank2DControllers.Tank2DMovement::leftJoystickVerticalInput
	String_t* ___leftJoystickVerticalInput_34;
	// System.Boolean Tank2DControllers.Tank2DMovement::leftJoystickInvertHorizontal
	bool ___leftJoystickInvertHorizontal_35;
	// System.Boolean Tank2DControllers.Tank2DMovement::leftJoystickInvertVertical
	bool ___leftJoystickInvertVertical_36;
	// System.String Tank2DControllers.Tank2DMovement::rightJoystickHorizontalInput
	String_t* ___rightJoystickHorizontalInput_37;
	// System.String Tank2DControllers.Tank2DMovement::rightJoystickVerticalInput
	String_t* ___rightJoystickVerticalInput_38;
	// System.Boolean Tank2DControllers.Tank2DMovement::rightJoystickInvertHorizontal
	bool ___rightJoystickInvertHorizontal_39;
	// System.Boolean Tank2DControllers.Tank2DMovement::rightJoystickInvertVertical
	bool ___rightJoystickInvertVertical_40;
	// System.Boolean Tank2DControllers.Tank2DMovement::_accelerate
	bool ____accelerate_41;
	// System.String Tank2DControllers.Tank2DMovement::accelerateInput
	String_t* ___accelerateInput_42;
	// UnityEngine.Vector2 Tank2DControllers.Tank2DMovement::_previousMouseInput
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____previousMouseInput_43;
	// UnityEngine.Vector2 Tank2DControllers.Tank2DMovement::_previousJoystickInput
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____previousJoystickInput_44;
	// System.Boolean Tank2DControllers.Tank2DMovement::pause
	bool ___pause_45;
	// Tank2DControllers.Tank2DMovement/RotorRotationMethod Tank2DControllers.Tank2DMovement::rotorRotationMethod
	int32_t ___rotorRotationMethod_46;
	// UnityEngine.Camera Tank2DControllers.Tank2DMovement::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_47;
	// System.Single Tank2DControllers.Tank2DMovement::leftDeadZoneThreshold
	float ___leftDeadZoneThreshold_48;
	// System.Single Tank2DControllers.Tank2DMovement::rightDeadZoneThreshold
	float ___rightDeadZoneThreshold_49;
	// System.Boolean Tank2DControllers.Tank2DMovement::limitMaximumSpeed
	bool ___limitMaximumSpeed_50;
	// System.Single Tank2DControllers.Tank2DMovement::cannonAngle
	float ___cannonAngle_51;
	// UnityEngine.Quaternion Tank2DControllers.Tank2DMovement::cannonVelocity
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___cannonVelocity_52;
	// Tank2DShootSystem Tank2DControllers.Tank2DMovement::weapon
	Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* ___weapon_53;
};

// Tank2DShootSystem
struct Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Tank2DShootSystem::bulletObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bulletObject_4;
	// UnityEngine.Transform Tank2DShootSystem::firePoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___firePoint_5;
	// System.Single Tank2DShootSystem::fireForce
	float ___fireForce_6;
	// System.Int32 Tank2DShootSystem::startAmmo
	int32_t ___startAmmo_7;
	// System.Int32 Tank2DShootSystem::currentAmmo
	int32_t ___currentAmmo_8;
	// System.Int32 Tank2DShootSystem::maxAmmo
	int32_t ___maxAmmo_9;
	// System.Boolean Tank2DShootSystem::shieldStatus
	bool ___shieldStatus_10;
	// System.Boolean Tank2DShootSystem::speedStatus
	bool ___speedStatus_11;
	// AmmoHUD Tank2DShootSystem::ammoHUD
	AmmoHUD_tE1C54E983482F90529FF4C2566BADC656945FD26* ___ammoHUD_12;
	// ShieldHUD Tank2DShootSystem::shieldHUD
	ShieldHUD_t698DC2B8ADFE815DF9FA8694A78B46EC480AEDDD* ___shieldHUD_13;
	// SpeedHUD Tank2DShootSystem::speedHUD
	SpeedHUD_t482A6FA2DFE06D93637EFA89304A01F6FC80537B* ___speedHUD_14;
	// UnityEngine.Animator Tank2DShootSystem::Cannon
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___Cannon_15;
	// UnityEngine.GameObject Tank2DShootSystem::ShieldAbility
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ShieldAbility_16;
	// UnityEngine.GameObject Tank2DShootSystem::SpeedAbilityHUD
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SpeedAbilityHUD_17;
	// Tank2DControllers.Tank2DMovement Tank2DShootSystem::tank2DMovement
	Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* ___tank2DMovement_18;
	// TimerSlider Tank2DShootSystem::SpeedAbilitytimer
	TimerSlider_tA122A06C993B0C854E93D19EDC1084C402B0D9B4* ___SpeedAbilitytimer_19;
	// Effects Tank2DShootSystem::EffectOnomatopoeiaShoot
	Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E* ___EffectOnomatopoeiaShoot_20;
	// Effects Tank2DShootSystem::EffectOnomatopoeiaShield
	Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E* ___EffectOnomatopoeiaShield_21;
	// UnityEngine.Animator Tank2DShootSystem::animationBullet
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animationBullet_22;
	// System.Single Tank2DShootSystem::fSpeed
	float ___fSpeed_23;
	// System.Single Tank2DShootSystem::bSpeed
	float ___bSpeed_24;
};

// TimerDestroyer
struct TimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TimerDestroyer::targetTime
	float ___targetTime_4;
	// System.Single TimerDestroyer::counterTime
	float ___counterTime_5;
	// System.Boolean TimerDestroyer::startertime
	bool ___startertime_6;
};

// TimerSlider
struct TimerSlider_tA122A06C993B0C854E93D19EDC1084C402B0D9B4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Tank2DShootSystem TimerSlider::weapon
	Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* ___weapon_4;
	// UnityEngine.Events.UnityEvent TimerSlider::m_MyEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_MyEvent_5;
	// UnityEngine.UI.Slider TimerSlider::timerSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___timerSlider_6;
	// System.Single TimerSlider::targetTime
	float ___targetTime_7;
	// System.Single TimerSlider::counterTime
	float ___counterTime_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// gameMode
struct gameMode_t047BBDC9475313F1573710EF9F747B44AF8511EC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// infiniteBG
struct infiniteBG_tA3EE5CD3AFA501C654EA135CD2C3D3FD2FEA9E6D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material infiniteBG::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_4;
	// UnityEngine.Vector2 infiniteBG::offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset_5;
	// System.Int32 infiniteBG::xVelocity
	int32_t ___xVelocity_6;
	// System.Int32 infiniteBG::yVelocity
	int32_t ___yVelocity_7;
};

// mainMenuInput
struct mainMenuInput_tDD747AF6182F7AE942D4754D1B24E60BA18B1516  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator mainMenuInput::UITank
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___UITank_4;
	// UnityEngine.Animator mainMenuInput::BGTank
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___BGTank_5;
	// UnityEngine.GameObject mainMenuInput::ButtonSolo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ButtonSolo_6;
	// UnityEngine.GameObject mainMenuInput::ButtonMulti
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ButtonMulti_7;
	// UnityEngine.GameObject mainMenuInput::ButtonExit
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ButtonExit_8;
	// UnityEngine.Animator mainMenuInput::PressedSolo
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___PressedSolo_9;
	// UnityEngine.Animator mainMenuInput::PressedMulti
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___PressedMulti_10;
	// UnityEngine.Animator mainMenuInput::PressedExit
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___PressedExit_11;
	// UnityEngine.GameObject mainMenuInput::selectedButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectedButton_12;
	// System.Boolean mainMenuInput::solo
	bool ___solo_13;
	// System.Boolean mainMenuInput::multi
	bool ___multi_14;
	// System.Boolean mainMenuInput::exit
	bool ___exit_15;
	// System.Boolean mainMenuInput::soloBG
	bool ___soloBG_16;
	// System.Boolean mainMenuInput::multiBG
	bool ___multiBG_17;
	// System.Boolean mainMenuInput::exitBG
	bool ___exitBG_18;
	// System.Boolean mainMenuInput::pressedactionsolo
	bool ___pressedactionsolo_19;
	// System.Boolean mainMenuInput::pressedactionmulti
	bool ___pressedactionmulti_20;
	// System.Boolean mainMenuInput::pressedactionexit
	bool ___pressedactionexit_21;
};

// mode
struct mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// respawnThings
struct respawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 respawnThings::refPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___refPos_4;
	// UnityEngine.Vector3 respawnThings::originalPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originalPos_5;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
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

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// Tank2DLibraryFunctions.LibraryFunctions

// Tank2DLibraryFunctions.LibraryFunctions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Shaker/<DoShake>d__7

// Shaker/<DoShake>d__7

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// SpriteFading/<DoFadeIn>d__2

// SpriteFading/<DoFadeIn>d__2

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// AmmoFill

// AmmoFill

// AmmoHUD

// AmmoHUD

// AnimationPlay

// AnimationPlay

// Bullet

// Bullet

// BulletTimer

// BulletTimer

// CactiEnemy

// CactiEnemy

// CactiEnemyHitbox

// CactiEnemyHitbox

// CactiSpawner

// CactiSpawner

// Complete.CameraControl

// Complete.CameraControl

// ChangeColor

// ChangeColor

// Effects

// Effects

// ExitGame

// ExitGame

// Fillerposition

// Fillerposition

// GenerateScene

// GenerateScene

// Intro

// Intro

// LoadEffect

// LoadEffect

// LoadScene

// LoadScene

// MenuIni

// MenuIni

// Objectives

// Objectives

// PauseMenu

// PauseMenu

// RespawnTank

// RespawnTank

// SetActive

// SetActive

// Shaker

// Shaker

// ShieldFill

// ShieldFill

// ShieldHUD

// ShieldHUD

// SimpleTimer

// SimpleTimer

// SpeedFill

// SpeedFill

// SpeedHUD

// SpeedHUD

// SpriteFading

// SpriteFading

// StartButton

// StartButton

// Tank2DHitbox

// Tank2DHitbox

// Tank2DControllers.Tank2DMovement

// Tank2DControllers.Tank2DMovement

// Tank2DShootSystem

// Tank2DShootSystem

// TimerDestroyer

// TimerDestroyer

// TimerSlider

// TimerSlider

// gameMode

// gameMode

// infiniteBG

// infiniteBG

// mainMenuInput

// mainMenuInput

// mode
struct mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB_StaticFields
{
	// System.Int32 mode::gameMode
	int32_t ___gameMode_4;
};

// mode

// respawnThings

// respawnThings

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Animator[]
struct AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759  : public RuntimeArray
{
	ALIGN_FIELD (8) Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* m_Items[1];

	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Shaker::DoShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Shaker_DoShake_mB860FD1E7A97AF6510AC6D028FBF85D4E684683B (Shaker_tABF7D944736B0C499CD37059E23615FD62497421* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Shaker/<DoShake>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoShakeU3Ed__7__ctor_mDB4DE2D3A26250B7DC37B49ABE0CB4FF04BAB565 (U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_get_mainTextureOffset_m642934E0FF835323FCAFE2F43E314722E8B6A439 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_selected, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void Objectives::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objectives_EndGame_mCDC9F7DA5DB1611FEAB452DB4365CD5350093C16 (Objectives_t4A4ADA2273CA4802758983D534A582BBA49DC9C6* __this, const RuntimeMethod* method) ;
// System.Void Objectives::lifes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objectives_lifes_mE27A37F8D7E3E76942F2F85CA776E36641B8D5E4 (Objectives_t4A4ADA2273CA4802758983D534A582BBA49DC9C6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<respawnThings>()
inline respawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF* GameObject_GetComponent_TisrespawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF_m229ABF9297E780EC352EB7390C02C5E48FDB7CAA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  respawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void respawnThings::SavePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void respawnThings_SavePos_m328F66441D68202CFD1B1A8DE3DEA4358B78F0F4 (respawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF* __this, const RuntimeMethod* method) ;
// System.Void respawnThings::ResetObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void respawnThings_ResetObject_m62FDDC69261DA41FB02A74650C275B0C6F98AE14 (respawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator SpriteFading::DoFadeIn(UnityEngine.SpriteRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpriteFading_DoFadeIn_m8F9D89A5DF3CF5C3D202DD8D45D5670E31CCCD06 (SpriteFading_tED9181E2EB4A6B104DFE8EA91848FE6B11BAB07B* __this, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0__sprite, const RuntimeMethod* method) ;
// System.Void SpriteFading/<DoFadeIn>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoFadeInU3Ed__2__ctor_mCEADAA44166D10197C10C5F3A2CE216CC68DE956 (U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<Tank2DShootSystem>()
inline Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* GameObject_GetComponentInChildren_TisTank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971_mDDC5E9C56F521A856F6C7DDE89809540509B05BF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void Tank2DShootSystem::AddAmmo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_AddAmmo_mC8894EBED8F76410472D7D0720EA32167B25A20C (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, int32_t ___0_ammoAmount, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Void Fillerposition::PositionLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fillerposition_PositionLocation_m8313D482D200C33944F9BD80C192B9179D527E11 (Fillerposition_t91FD8A68FAD952EE3FFFCA7F8F6C31184D45CBDF* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void Tank2DShootSystem::AddShield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_AddShield_m4592260F1AEB297B51B3CB6737F01DC3CAD38B5B (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, const RuntimeMethod* method) ;
// System.Void Tank2DShootSystem::AddSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_AddSpeed_m3B369D4289BA620AC60F6486FCAC62A464D8A20A (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void CactiSpawner::firstPositionLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CactiSpawner_firstPositionLocation_mD48F48FC543CC47FEB87DE923632D18C55DDC715 (CactiSpawner_t4D512B30FBC71DC65BB3D6A01BEA49458471097A* __this, const RuntimeMethod* method) ;
// System.Void CactiSpawner::PositionLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CactiSpawner_PositionLocation_m67EDD8D6B442850BC55F6BBAC8DE529715CC5587 (CactiSpawner_t4D512B30FBC71DC65BB3D6A01BEA49458471097A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Tank2DShootSystem::UpdatingHUD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_UpdatingHUD_mA86A3F77214B6B7C53B76E765A544EDD6E297C91 (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void Effects::InstantiateEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Effects_InstantiateEffect_mE4D99F0277DFA3687B4F3A345269F3389BC56DBF (Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void TimerSlider::RestartTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerSlider_RestartTimer_m300E5B0F7257BD914FB05DF0803FBABA77DE6CAF (TimerSlider_tA122A06C993B0C854E93D19EDC1084C402B0D9B4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// System.Void StartButton::invokeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_invokeEvent_mCE821056EA095FAE5260ABC34322208E213ADC17 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) ;
// System.Void BulletTimer::timerEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletTimer_timerEnded_mA491E919DA6C6A31FDC5854AFC44C71B54F640B1 (BulletTimer_t97075F2EF0198227CA44647E8FC59C4AC8D431FF* __this, const RuntimeMethod* method) ;
// System.Void SimpleTimer::timerEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTimer_timerEnded_m6454A2FDCDD316CED00BCA9BB3DD4911B883DA66 (SimpleTimer_tD2DC11B21AA29D70436742BE281D6B6C8E111A77* __this, const RuntimeMethod* method) ;
// System.Void TimerDestroyer::timerEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerDestroyer_timerEnded_mBA80766C5B6241B13D62C0454EEBD3D30983291B (TimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D* __this, const RuntimeMethod* method) ;
// System.Void TimerSlider::timerEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerSlider_timerEnded_mABEDAD32FBCABCD849DFC308A126F33326FB7EC9 (TimerSlider_tA122A06C993B0C854E93D19EDC1084C402B0D9B4* __this, const RuntimeMethod* method) ;
// System.Void Tank2DShootSystem::Speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_Speed_m6F5DEB8797F900E9AD88CF72F08E4C09E18216EC (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TimerDestroyer>()
inline TimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D* GameObject_GetComponent_TisTimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D_m776CCB324E2F77A562FA2519CB69F3BD8B3D11DA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void MenuIni::ActivateMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIni_ActivateMainMenu_m0E6B2A8F750FBED24893BFC22ED93CC136ABE93A (MenuIni_t660796B995663DC8A034C1E199ED3D30C43E8430* __this, const RuntimeMethod* method) ;
// System.Void MenuIni::DeactivateMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIni_DeactivateMainMenu_mE21A0878F88332CA18B79DB97607092953D7F1BB (MenuIni_t660796B995663DC8A034C1E199ED3D30C43E8430* __this, const RuntimeMethod* method) ;
// System.Void PauseMenu::ActivateMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_ActivateMenu_m34B912263A9465C89A628D4F2C3C8494B0A169B6 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// System.Void PauseMenu::DeactivateMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_DeactivateMenu_m3E89789E6ED28D19DF9C4A7361E005039BE5CCA4 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioListener::set_pause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody2D Tank2DControllers.Tank2DMovement::get_Rigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Tank2DMovement_get_Rigidbody_m0DE3A47752BAB082ABE9D4C6D5AF8C4C5D9B1D03 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::MoveRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MoveRotation_m33BC3C46E2584EB32C6E440AA4E9E58BEEEE8256 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___0_angle, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void Tank2DControllers.Tank2DMovement::set_MovementDirection(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_MovementDirection_mEAC7A16D2AB3765E0DD263A85578253E64167DBD (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Boolean Tank2DControllers.Tank2DMovement::get_HaltMovement()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tank2DMovement_get_HaltMovement_m7760462F3FC140454AC6FA4896A7F0CAAD8ED735_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// System.Single Tank2DControllers.Tank2DMovement::GetHorizontalInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_GetHorizontalInput_mCFB8341861FBE24598E5CD1AD61C0E97F76E5AFE (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// System.Single Tank2DControllers.Tank2DMovement::GetVerticalInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_GetVerticalInput_m456C5363C7F7F9A0012CFE36D6208415A6572CEA (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// System.Single Tank2DControllers.Tank2DMovement::GetCannonInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_GetCannonInput_m4E78EC17B00B83E7F1A68F515599A3F86A0930D6 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Tank2DControllers.Tank2DMovement::get_MovementDirection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Tank2DLibraryFunctions.LibraryFunctions::WithY(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 LibraryFunctions_WithY_m2F261415E7644F2B38671C55F18180C2CEDAE8EE (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector3, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Tank2DLibraryFunctions.LibraryFunctions::WithX(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 LibraryFunctions_WithX_mC6822C65832A522E3F62B84B5405302EBBBA63BA (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector3, float ___1_x, const RuntimeMethod* method) ;
// System.Void Tank2DControllers.Tank2DMovement::UpdateVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_UpdateVelocity_mAD1820E8A01AA9D639897645ABF47306F0907671 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// System.Void Tank2DControllers.Tank2DMovement::UpdateCannon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_UpdateCannon_mC5BDC90694B7B6F8EA19D0E9B0733A4E6E8193A9 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void Tank2DControllers.Tank2DMovement::set_CurrentSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_CurrentSpeed_m89E069819CBCFF91B6CE5F3871057D37D8D8A8D7 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single Tank2DControllers.Tank2DMovement::get_CurrentSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_CurrentSpeed_m8EE81766B58A58D355D65FAB9361A6300BED0736_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// System.Void Tank2DControllers.Tank2DMovement::OverrideInput(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_OverrideInput_m788F6D37B25ACE8A4FE0135819B68437575C268F (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float* ___0_targetSpeed, const RuntimeMethod* method) ;
// System.Void Tank2DControllers.Tank2DMovement::set_Speed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tank2DMovement_set_Speed_m42B09A481DBC03697B6A7E8266406EFB8599CD55_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsZero(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsZero_m936446C5DDE0AC1A7498554F84DBE66CB136A177 (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Tank2DControllers.Tank2DMovement::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Tank2DMovement_get_velocity_m898B7F0D3AE3F17FABEA6BBCD84A674969C5C439 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Tank2DControllers.Tank2DMovement::InputToVelocity(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Tank2DMovement_InputToVelocity_m987C4959CC88CC6E666D3C9148E17A9935BDDB68 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float* ___0_targetSpeed, const RuntimeMethod* method) ;
// System.Void Tank2DControllers.Tank2DMovement::ApplyMovement(UnityEngine.Vector2&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_ApplyMovement_m52A2DD6737465BCC79B882B085821AA621F16FA0 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_currentVelocity, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_targetVelocity, float ___2_targetSpeed, float ___3_deltaTime, const RuntimeMethod* method) ;
// System.Void Tank2DControllers.Tank2DMovement::LimitVelocity(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_LimitVelocity_m4C2161500EFBB7000B5E879F8E5128D6BB3650DB (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_currentVelocity, const RuntimeMethod* method) ;
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsNaN(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsNaN_m3C6429C07F554C82B934EF0E6C5A73581AF87B93 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, const RuntimeMethod* method) ;
// System.Void Tank2DControllers.Tank2DMovement::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_velocity_m37258D8A8F0AF82E57C029843EB218D1FFA7DA0C (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Tank2DControllers.Tank2DMovement::get_Friction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Tank2DMovement_get_Friction_mA6575A05FBD4E90BBEE8B340BF3E81967F47142F_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single Tank2DControllers.Tank2DMovement::get_currentRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_currentRotation_mCC7C1E54559D2FF1D643D52FED35E254C40527F4_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// System.Void Tank2DControllers.Tank2DMovement::set_currentRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_currentRotation_m976E2B0B9A1DBBF2E6008097A6A4F92E7559D433 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single Tank2DControllers.Tank2DMovement::get_Acceleration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_Acceleration_mFBEA511919CF6DF4F0FA14327018D9D6EC77EC48_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsZero(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsZero_m4BE5E1A876D26E25BD300D5302E163EC0D7193AB (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, const RuntimeMethod* method) ;
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsExceeding(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsExceeding_mCA101BE0FB330E356BCF4C1B52C2E90CC14B92AD (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_magnitude, const RuntimeMethod* method) ;
// System.Single Tank2DControllers.Tank2DMovement::get_Deceleration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_Deceleration_mEA7E1577E0A0D9EF602A06DD355E6A61D72A108B_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single Tank2DControllers.Tank2DMovement::get_MaxHorizontalSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_MaxHorizontalSpeed_m90EED88EAAFE59D9E59FEFD9DF0CD4A9D64DBFF0_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// System.Single Tank2DControllers.Tank2DMovement::get_MaxUpwardSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_MaxUpwardSpeed_mE44FF701EA00979C0E27C3B740B6E2BED5611594_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// System.Single Tank2DControllers.Tank2DMovement::get_MaxDownwardSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_MaxDownwardSpeed_m7D6595E04789939916612029425A8A7838C3E80B_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector2 Tank2DLibraryFunctions.LibraryFunctions::xy(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 LibraryFunctions_xy_m23350819B057EF9C0B832E3A35AA0E25A864EEC8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Transform Tank2DControllers.Tank2DMovement::get_CannonRotor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Tank2DMovement_get_CannonRotor_m6539B98BA88E833F688DD391CEEA7F17E4E90E6C (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
// System.Single Tank2DControllers.Tank2DMovement::get_RotorSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_RotorSpeed_mAF618A4377642636F5CABEDB5D821C2D44E66C6E_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_from, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_to, float ___2_maxDegreesDelta, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Tank2DLibraryFunctions.LibraryFunctions::SmoothDamp(UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Quaternion&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 LibraryFunctions_SmoothDamp_mA40287B4C6FDDF154EEAEC715EA26B9A215D2D10 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rot, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_target, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_deriv, float ___3_time, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void Tank2DControllers.Tank2DMovement::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_HandleInput_m0C6232EF682F62DBA181C5380957D61B90B37B9D (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Void Tank2DShootSystem::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_Shoot_m20D51D3AD595A6DA932FECE1EB6CEFD70FAC52B3 (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, const RuntimeMethod* method) ;
// System.Void Tank2DShootSystem::Shield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_Shield_m58BF80269854F04F0656DF783C21117A180EFA43 (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, const RuntimeMethod* method) ;
// System.Void Tank2DControllers.Tank2DMovement::ProcessInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_ProcessInput_m16F72386C80B1CC0D27703BD19F573B8BE8C062D (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_onNormal, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Tank2DLibraryFunctions.LibraryFunctions::OnlyXZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LibraryFunctions_OnlyXZ_mA503685A7C3E9A666D28AC7690CC75FEFE43648A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_normalized_mD7671F6DCE4C1A80243139B87858FF65F4B865A3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::Project(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Project_mEC70C8D2D5111A0EF91D410259BCD28424238B99_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___0_layerName, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___0_intVal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void Complete.CameraControl::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Move_m22EF2FEFAFAE3CDFD7FBFF1FD20E57C3FCFF9D47 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) ;
// System.Void Complete.CameraControl::Zoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Zoom_mE73BD9B135D45CAF561647BD922895499ACC1737 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) ;
// System.Void Complete.CameraControl::FindAveragePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_FindAveragePosition_m2598B51258C3699DAE73ADFED744AFAA25884CA5 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single Complete.CameraControl::FindRequiredSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraControl_FindRequiredSize_m1E117B911293210B9FA6372851EFAFFA4C515DA3 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_SlerpUnclamped_mAE7F4DF2F239831CCAA1DFB52F313E5AED52D32D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248 (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::Normalize(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Normalize_m1D1B879617A0F54904EDD0E59D356D605457002B_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Magnitude(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Magnitude_mFBC659211CDF4EDB2B540C58315D1E260FB23B1F_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
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
// System.Void Shaker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shaker_Start_m8959530179040B122DCDFF7712C25B06711523F3 (Shaker_tABF7D944736B0C499CD37059E23615FD62497421* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _target = GetComponent<Transform>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(__this, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		__this->____target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_4), (void*)L_0);
		// _initialPos = _target.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		__this->____initialPos_5 = L_2;
		// }
		return;
	}
}
// System.Void Shaker::Shake(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shaker_Shake_mED08382AA8FF5D4951DA3CC5D561B2E2BBD0040C (Shaker_tABF7D944736B0C499CD37059E23615FD62497421* __this, float ___0_duration, const RuntimeMethod* method) 
{
	{
		// if (duration >0)
		float L_0 = ___0_duration;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0016;
		}
	}
	{
		// _pendingShakeDuration += duration;
		float L_1 = __this->____pendingShakeDuration_6;
		float L_2 = ___0_duration;
		__this->____pendingShakeDuration_6 = ((float)il2cpp_codegen_add(L_1, L_2));
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Shaker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shaker_Update_m833A89A7415C79A1605C5B0B4B535F8534E01272 (Shaker_tABF7D944736B0C499CD37059E23615FD62497421* __this, const RuntimeMethod* method) 
{
	{
		// if (_pendingShakeDuration > 0 && !_isShaking)
		float L_0 = __this->____pendingShakeDuration_6;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = __this->____isShaking_7;
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		// StartCoroutine(DoShake());
		RuntimeObject* L_2;
		L_2 = Shaker_DoShake_mB860FD1E7A97AF6510AC6D028FBF85D4E684683B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Shaker::DoShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Shaker_DoShake_mB860FD1E7A97AF6510AC6D028FBF85D4E684683B (Shaker_tABF7D944736B0C499CD37059E23615FD62497421* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE* L_0 = (U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE*)il2cpp_codegen_object_new(U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE_il2cpp_TypeInfo_var);
		U3CDoShakeU3Ed__7__ctor_mDB4DE2D3A26250B7DC37B49ABE0CB4FF04BAB565(L_0, 0, NULL);
		U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Shaker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shaker__ctor_m3788EDEA8C44FA644941623BED17CF5DFA2F474A (Shaker_tABF7D944736B0C499CD37059E23615FD62497421* __this, const RuntimeMethod* method) 
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
// System.Void Shaker/<DoShake>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoShakeU3Ed__7__ctor_mDB4DE2D3A26250B7DC37B49ABE0CB4FF04BAB565 (U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Shaker/<DoShake>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoShakeU3Ed__7_System_IDisposable_Dispose_m320D2BF77FEC15F584889239344DF78AB77A9EAF (U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Shaker/<DoShake>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoShakeU3Ed__7_MoveNext_m027B500D2E7D5F7352CF4EDD917A717649347735 (U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Shaker_tABF7D944736B0C499CD37059E23615FD62497421* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Shaker_tABF7D944736B0C499CD37059E23615FD62497421* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_007e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _isShaking = true;
		Shaker_tABF7D944736B0C499CD37059E23615FD62497421* L_4 = V_1;
		L_4->____isShaking_7 = (bool)1;
		// var startTime = Time.realtimeSinceStartup;
		float L_5;
		L_5 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___U3CstartTimeU3E5__2_3 = L_5;
		goto IL_0085;
	}

IL_0032:
	{
		// var randomPoint = new Vector3(Random.Range(-1f,1f), Random.Range(-1f,1f), _initialPos.z);
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		float L_7;
		L_7 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		Shaker_tABF7D944736B0C499CD37059E23615FD62497421* L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&L_8->____initialPos_5);
		float L_10 = L_9->___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_6, L_7, L_10, NULL);
		// _target.localPosition = randomPoint;
		Shaker_tABF7D944736B0C499CD37059E23615FD62497421* L_11 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11->____target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_2;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_13, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0085:
	{
		// while (Time.realtimeSinceStartup < startTime + _pendingShakeDuration)
		float L_14;
		L_14 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_15 = __this->___U3CstartTimeU3E5__2_3;
		Shaker_tABF7D944736B0C499CD37059E23615FD62497421* L_16 = V_1;
		float L_17 = L_16->____pendingShakeDuration_6;
		if ((((float)L_14) < ((float)((float)il2cpp_codegen_add(L_15, L_17)))))
		{
			goto IL_0032;
		}
	}
	{
		// _pendingShakeDuration = 0f;
		Shaker_tABF7D944736B0C499CD37059E23615FD62497421* L_18 = V_1;
		L_18->____pendingShakeDuration_6 = (0.0f);
		// _target.localPosition = _initialPos;
		Shaker_tABF7D944736B0C499CD37059E23615FD62497421* L_19 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = L_19->____target_4;
		Shaker_tABF7D944736B0C499CD37059E23615FD62497421* L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21->____initialPos_5;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_20, L_22, NULL);
		// _isShaking = false;
		Shaker_tABF7D944736B0C499CD37059E23615FD62497421* L_23 = V_1;
		L_23->____isShaking_7 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Shaker/<DoShake>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoShakeU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDAA20B0C533495148C4187585D9AC4C1E45CD718 (U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Shaker/<DoShake>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoShakeU3Ed__7_System_Collections_IEnumerator_Reset_m58CDFB182B7E844ED13019CEE49C44E398AAA076 (U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoShakeU3Ed__7_System_Collections_IEnumerator_Reset_m58CDFB182B7E844ED13019CEE49C44E398AAA076_RuntimeMethod_var)));
	}
}
// System.Object Shaker/<DoShake>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoShakeU3Ed__7_System_Collections_IEnumerator_get_Current_m07F41038F2813E56D5E2A2A065B8356147BB976C (U3CDoShakeU3Ed__7_t953247CCC9366041EDAAE68BDFC65CB2E03034DE* __this, const RuntimeMethod* method) 
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
// System.Void AnimationPlay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlay_Start_mB12CA541601813CC32941EC8B3391ABF799C02B0 (AnimationPlay_t860DA11F624886F82FF2095D4DE3EA768B4F3C86* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AnimationPlay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlay_Update_m930433F89BE67073251AE8FA06BF938BC61DB6CE (AnimationPlay_t860DA11F624886F82FF2095D4DE3EA768B4F3C86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9C2EAADCD2A99B30FBDDAA084D66CCB0E750D4A);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach(Animator anim in animator)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_0 = __this->___animator_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000b:
	{
		// foreach(Animator anim in animator)
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// anim.SetBool("animationName", true);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteralC9C2EAADCD2A99B30FBDDAA084D66CCB0E750D4A, (bool)1, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001d:
	{
		// foreach(Animator anim in animator)
		int32_t L_6 = V_1;
		AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AnimationPlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlay__ctor_m6889CFE82196B97ED7E2B981493BC6C53F819A9E (AnimationPlay_t860DA11F624886F82FF2095D4DE3EA768B4F3C86* __this, const RuntimeMethod* method) 
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
// System.Void ChangeColor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor_Start_mFFF9A8BFA333CC0E38A78786ED5BF7602EF3D3EB (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChangeColor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor_Update_m63344DD38748CD168C2D72E250B4FDBD396C2748 (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// foreach(GameObject go in hearts) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___hearts_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0040;
	}

IL_000b:
	{
		// foreach(GameObject go in hearts) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (go != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// go.GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_2;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8;
		L_8 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_7, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_9), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_8, L_9, NULL);
	}

IL_003c:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0040:
	{
		// foreach(GameObject go in hearts) {
		int32_t L_11 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ChangeColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor__ctor_m8BB1B19B1A2961B218222DF5C104ECAE825C8EA1 (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, const RuntimeMethod* method) 
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
// System.Void ExitGame::QuitTheGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitGame_QuitTheGame_mCEB902EB6C1F1F27002CFD3CCB8C728E069C4F0D (ExitGame_t7535BD4AC5611EBE2045397500E11C4CF600C05F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52F407FEEF7C909FF3C6CB7F61DE89BDB2D8E436);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log ("The game is closed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral52F407FEEF7C909FF3C6CB7F61DE89BDB2D8E436, NULL);
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void ExitGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitGame__ctor_mF031F846CC7DE286155C56931B1D99E3B60E9151 (ExitGame_t7535BD4AC5611EBE2045397500E11C4CF600C05F* __this, const RuntimeMethod* method) 
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
// System.Void gameMode::SoloMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameMode_SoloMode_mB5069C8DB15B373DEF112C948EA981B890F28EAF (gameMode_t047BBDC9475313F1573710EF9F747B44AF8511EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mode.gameMode = 0;
		((mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB_StaticFields*)il2cpp_codegen_static_fields_for(mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB_il2cpp_TypeInfo_var))->___gameMode_4 = 0;
		// }
		return;
	}
}
// System.Void gameMode::MultiMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameMode_MultiMode_m3B2E4066989527C61E337C2641F25BCB0E3C8859 (gameMode_t047BBDC9475313F1573710EF9F747B44AF8511EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mode.gameMode = 1;
		((mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB_StaticFields*)il2cpp_codegen_static_fields_for(mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB_il2cpp_TypeInfo_var))->___gameMode_4 = 1;
		// }
		return;
	}
}
// System.Void gameMode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameMode__ctor_mAB4587A35CF326E976814C4884FDB738B6F4F530 (gameMode_t047BBDC9475313F1573710EF9F747B44AF8511EC* __this, const RuntimeMethod* method) 
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
// System.Void GenerateScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateScene_Start_m13B9902D6A3399E7165C189F52A8EFC235D544EB (GenerateScene_t9ACA89CB83770DF630D576D080539DB3819093EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mode.gameMode == 0)
		int32_t L_0 = ((mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB_StaticFields*)il2cpp_codegen_static_fields_for(mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB_il2cpp_TypeInfo_var))->___gameMode_4;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_MyEventsolo.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___m_MyEventsolo_4;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
		return;
	}

IL_0013:
	{
		// else if (mode.gameMode == 1)
		int32_t L_2 = ((mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB_StaticFields*)il2cpp_codegen_static_fields_for(mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB_il2cpp_TypeInfo_var))->___gameMode_4;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// m_MyEventmulti.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = __this->___m_MyEventmulti_5;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_3, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void GenerateScene::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateScene_Update_m79B8CED582C3DC85080C3B0C9459967DFFF8B80C (GenerateScene_t9ACA89CB83770DF630D576D080539DB3819093EC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GenerateScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateScene__ctor_m2CD5ECDAB779AAD757D9C4FFD5440FB0DCE81D23 (GenerateScene_t9ACA89CB83770DF630D576D080539DB3819093EC* __this, const RuntimeMethod* method) 
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
// System.Void infiniteBG::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void infiniteBG_Awake_mF8B75A0AA74198F04701D6FA48D0CCD4D88C6197 (infiniteBG_tA3EE5CD3AFA501C654EA135CD2C3D3FD2FEA9E6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material = GetComponent<Renderer>().material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		__this->___material_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void infiniteBG::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void infiniteBG_Start_m3D4884D2E2E0CF7B6D1968E11AE34CC7D8952E73 (infiniteBG_tA3EE5CD3AFA501C654EA135CD2C3D3FD2FEA9E6D* __this, const RuntimeMethod* method) 
{
	{
		// offset = new Vector2(xVelocity, yVelocity);
		int32_t L_0 = __this->___xVelocity_6;
		int32_t L_1 = __this->___yVelocity_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), ((float)L_0), ((float)L_1), /*hidden argument*/NULL);
		__this->___offset_5 = L_2;
		// }
		return;
	}
}
// System.Void infiniteBG::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void infiniteBG_Update_m91776764D75B1AB2B876B681F3ED808AF099D7AF (infiniteBG_tA3EE5CD3AFA501C654EA135CD2C3D3FD2FEA9E6D* __this, const RuntimeMethod* method) 
{
	{
		// material.mainTextureOffset += offset * Time.deltaTime;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Material_get_mainTextureOffset_m642934E0FF835323FCAFE2F43E314722E8B6A439(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___offset_5;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_2, L_5, NULL);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void infiniteBG::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void infiniteBG__ctor_m11809E3BD3EE03968B8396DC3BD26576641C4E01 (infiniteBG_tA3EE5CD3AFA501C654EA135CD2C3D3FD2FEA9E6D* __this, const RuntimeMethod* method) 
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
// System.Void Intro::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intro_Start_mED069CCBF90D9C9297AB1A2950428FA6B84A8A64 (Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventSystem.current.SetSelectedGameObject(selectedButton);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___selectedButton_4;
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Intro::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intro_Update_m05AD393689ADBC5D1EEE010ECC64CFB1AEF36C00 (Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (EventSystem.current.currentSelectedGameObject == null && Input.GetAxisRaw("Horizontal") !=0)
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		float L_3;
		L_3 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((((float)L_3) == ((float)(0.0f))))
		{
			goto IL_0033;
		}
	}
	{
		// EventSystem.current.SetSelectedGameObject(selectedButton);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___selectedButton_4;
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_4, L_5, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void Intro::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intro__ctor_m7D4DB3A66688C059CF001AE68699BE1E51CAE3DE (Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* __this, const RuntimeMethod* method) 
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
// System.Void LoadScene::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene_LoadGame_mB091F9471384443EF7AB935CD963ADA2F0DB1E47 (LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneNumber);
		int32_t L_0 = __this->___sceneNumber_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void LoadScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene__ctor_m560E29BD726E67BB4572A9B8098DD97BEFFF63DD (LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335* __this, const RuntimeMethod* method) 
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
// System.Void mode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mode__ctor_mA83B580F534A850A5E58C3CA77210CE0FAF9E710 (mode_t3A1D367C9C9F957BFA83FDC5B610E1A0617043EB* __this, const RuntimeMethod* method) 
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
// System.Void Objectives::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objectives_Update_m1876491386F851305E30AEC467C8B48659B7A695 (Objectives_t4A4ADA2273CA4802758983D534A582BBA49DC9C6* __this, const RuntimeMethod* method) 
{
	{
		// timerpunctuation += Time.deltaTime;
		float L_0 = __this->___timerpunctuation_12;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timerpunctuation_12 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if(maxpunctuation <= objective || maxpunctuation <= objectivemulti1 || maxpunctuation <= objectivemulti2)
		int32_t L_2 = __this->___maxpunctuation_5;
		int32_t L_3 = __this->___objective_9;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_4 = __this->___maxpunctuation_5;
		int32_t L_5 = __this->___objectivemulti1_10;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_6 = __this->___maxpunctuation_5;
		int32_t L_7 = __this->___objectivemulti2_11;
		if ((((int32_t)L_6) > ((int32_t)L_7)))
		{
			goto IL_0042;
		}
	}

IL_003c:
	{
		// EndGame();
		Objectives_EndGame_mCDC9F7DA5DB1611FEAB452DB4365CD5350093C16(__this, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Objectives::UpdateObjective()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objectives_UpdateObjective_mC240EC6E8D22EB3BCCAE731AA1450ED01433437B (Objectives_t4A4ADA2273CA4802758983D534A582BBA49DC9C6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch(tankplayer)
		int32_t L_0 = __this->___tankplayer_8;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0060;
			}
		}
	}
	{
		return;
	}

IL_001a:
	{
		// objective += 1;
		int32_t L_2 = __this->___objective_9;
		__this->___objective_9 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// if(maxpunctuation > objective)lifes();
		int32_t L_3 = __this->___maxpunctuation_5;
		int32_t L_4 = __this->___objective_9;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0082;
		}
	}
	{
		// if(maxpunctuation > objective)lifes();
		Objectives_lifes_mE27A37F8D7E3E76942F2F85CA776E36641B8D5E4(__this, NULL);
		// break;
		return;
	}

IL_003d:
	{
		// objectivemulti1 += 1;
		int32_t L_5 = __this->___objectivemulti1_10;
		__this->___objectivemulti1_10 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if(maxpunctuation > objectivemulti1)lifes();
		int32_t L_6 = __this->___maxpunctuation_5;
		int32_t L_7 = __this->___objectivemulti1_10;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0082;
		}
	}
	{
		// if(maxpunctuation > objectivemulti1)lifes();
		Objectives_lifes_mE27A37F8D7E3E76942F2F85CA776E36641B8D5E4(__this, NULL);
		// break;
		return;
	}

IL_0060:
	{
		// objectivemulti2 += 1;
		int32_t L_8 = __this->___objectivemulti2_11;
		__this->___objectivemulti2_11 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// if(maxpunctuation > objectivemulti2)lifes();
		int32_t L_9 = __this->___maxpunctuation_5;
		int32_t L_10 = __this->___objectivemulti2_11;
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_0082;
		}
	}
	{
		// if(maxpunctuation > objectivemulti2)lifes();
		Objectives_lifes_mE27A37F8D7E3E76942F2F85CA776E36641B8D5E4(__this, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void Objectives::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objectives_EndGame_mCDC9F7DA5DB1611FEAB452DB4365CD5350093C16 (Objectives_t4A4ADA2273CA4802758983D534A582BBA49DC9C6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// scoretext.text = Mathf.RoundToInt(timerpunctuation).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___scoretext_4;
		float L_1 = __this->___timerpunctuation_12;
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// m_MyEventscore.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = __this->___m_MyEventscore_6;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_4, NULL);
		// }
		return;
	}
}
// System.Void Objectives::lifes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objectives_lifes_mE27A37F8D7E3E76942F2F85CA776E36641B8D5E4 (Objectives_t4A4ADA2273CA4802758983D534A582BBA49DC9C6* __this, const RuntimeMethod* method) 
{
	{
		// m_MyEventpoints.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_MyEventpoints_7;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void Objectives::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objectives__ctor_mA318787B66F85AF6EC6E356A9D01B05D9658E44E (Objectives_t4A4ADA2273CA4802758983D534A582BBA49DC9C6* __this, const RuntimeMethod* method) 
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
// System.Void SetActive::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActive_Start_m8E79766A057D1F405096B1B9C127F18EDB491B08 (SetActive_tB87BB5B726EB18026D8486B4984B86DD02A87FA8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SetActive::ActiveObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActive_ActiveObjects_m33B2181BD18285285E0F4F1653EFE2EF08E3E08A (SetActive_tB87BB5B726EB18026D8486B4984B86DD02A87FA8* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach(GameObject obj in objects) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___objects_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach(GameObject obj in objects) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// obj.SetActive(true);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		// foreach(GameObject obj in objects) {
		int32_t L_6 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SetActive::LoadState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActive_LoadState_m225E0BEC8582371F2E45B4A2CE1C802900E55BE8 (SetActive_tB87BB5B726EB18026D8486B4984B86DD02A87FA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisrespawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF_m229ABF9297E780EC352EB7390C02C5E48FDB7CAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach(GameObject obj in objects) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___objects_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001c;
	}

IL_000b:
	{
		// foreach(GameObject obj in objects) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// obj.GetComponent<respawnThings>().SavePos();
		respawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF* L_5;
		L_5 = GameObject_GetComponent_TisrespawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF_m229ABF9297E780EC352EB7390C02C5E48FDB7CAA(L_4, GameObject_GetComponent_TisrespawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF_m229ABF9297E780EC352EB7390C02C5E48FDB7CAA_RuntimeMethod_var);
		respawnThings_SavePos_m328F66441D68202CFD1B1A8DE3DEA4358B78F0F4(L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001c:
	{
		// foreach(GameObject obj in objects) {
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
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
// System.Void SetActive::DeactiveObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActive_DeactiveObjects_m061A4D26213C7BF70C81043FD639CB38E325DFB3 (SetActive_tB87BB5B726EB18026D8486B4984B86DD02A87FA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisrespawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF_m229ABF9297E780EC352EB7390C02C5E48FDB7CAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach(GameObject obj in objects) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___objects_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001c;
	}

IL_000b:
	{
		// foreach(GameObject obj in objects) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// obj.GetComponent<respawnThings>().ResetObject();
		respawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF* L_5;
		L_5 = GameObject_GetComponent_TisrespawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF_m229ABF9297E780EC352EB7390C02C5E48FDB7CAA(L_4, GameObject_GetComponent_TisrespawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF_m229ABF9297E780EC352EB7390C02C5E48FDB7CAA_RuntimeMethod_var);
		respawnThings_ResetObject_m62FDDC69261DA41FB02A74650C275B0C6F98AE14(L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001c:
	{
		// foreach(GameObject obj in objects) {
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
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
// System.Void SetActive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActive__ctor_m8E878442F55CC2CF5FCDE239BB1F8EC96FB3D164 (SetActive_tB87BB5B726EB18026D8486B4984B86DD02A87FA8* __this, const RuntimeMethod* method) 
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
// System.Void SpriteFading::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteFading_Start_mC6E4D7AAA8F9D63785ACBA6D3D6299DCA8C5F4A4 (SpriteFading_tED9181E2EB4A6B104DFE8EA91848FE6B11BAB07B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(DoFadeIn(GetComponent <SpriteRenderer>()));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		RuntimeObject* L_1;
		L_1 = SpriteFading_DoFadeIn_m8F9D89A5DF3CF5C3D202DD8D45D5670E31CCCD06(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SpriteFading::DoFadeIn(UnityEngine.SpriteRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpriteFading_DoFadeIn_m8F9D89A5DF3CF5C3D202DD8D45D5670E31CCCD06 (SpriteFading_tED9181E2EB4A6B104DFE8EA91848FE6B11BAB07B* __this, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0__sprite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901* L_0 = (U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901*)il2cpp_codegen_object_new(U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901_il2cpp_TypeInfo_var);
		U3CDoFadeInU3Ed__2__ctor_mCEADAA44166D10197C10C5F3A2CE216CC68DE956(L_0, 0, NULL);
		U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901* L_1 = L_0;
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901* L_2 = L_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = ___0__sprite;
		L_2->____sprite_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____sprite_2), (void*)L_3);
		return L_2;
	}
}
// System.Void SpriteFading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteFading__ctor_m7A7EFCD6BCD491A34E12F1D6258DD58B43541FE4 (SpriteFading_tED9181E2EB4A6B104DFE8EA91848FE6B11BAB07B* __this, const RuntimeMethod* method) 
{
	{
		// public float fadeOutTime = 1f;
		__this->___fadeOutTime_4 = (1.0f);
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
// System.Void SpriteFading/<DoFadeIn>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoFadeInU3Ed__2__ctor_mCEADAA44166D10197C10C5F3A2CE216CC68DE956 (U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SpriteFading/<DoFadeIn>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoFadeInU3Ed__2_System_IDisposable_Dispose_m7BF202CABD3D7D70928277926721BB95D1CC90CE (U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SpriteFading/<DoFadeIn>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoFadeInU3Ed__2_MoveNext_mCA2E3A9CAE66E4DD7792A2C729FB2BABC96AA9C2 (U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SpriteFading_tED9181E2EB4A6B104DFE8EA91848FE6B11BAB07B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpriteFading_tED9181E2EB4A6B104DFE8EA91848FE6B11BAB07B* L_1 = __this->___U3CU3E4__this_3;
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
			goto IL_008f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Color tmpColor = _sprite.color;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->____sprite_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_4, NULL);
		__this->___U3CtmpColorU3E5__2_4 = L_5;
		goto IL_0096;
	}

IL_0031:
	{
		// tmpColor.a -= Time.deltaTime /fadeOutTime;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = (&__this->___U3CtmpColorU3E5__2_4);
		float* L_7 = (&L_6->___a_3);
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		SpriteFading_tED9181E2EB4A6B104DFE8EA91848FE6B11BAB07B* L_11 = V_1;
		float L_12 = L_11->___fadeOutTime_4;
		*((float*)L_8) = (float)((float)il2cpp_codegen_subtract(L_9, ((float)(L_10/L_12))));
		// _sprite.color = tmpColor;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = __this->____sprite_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___U3CtmpColorU3E5__2_4;
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_13, L_14, NULL);
		// if(tmpColor.a >= 1f) tmpColor.a = 1.0f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_15 = (&__this->___U3CtmpColorU3E5__2_4);
		float L_16 = L_15->___a_3;
		if ((!(((float)L_16) >= ((float)(1.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		// if(tmpColor.a >= 1f) tmpColor.a = 1.0f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_17 = (&__this->___U3CtmpColorU3E5__2_4);
		L_17->___a_3 = (1.0f);
	}

IL_007f:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0096:
	{
		// while (tmpColor.a >1f){
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_18 = (&__this->___U3CtmpColorU3E5__2_4);
		float L_19 = L_18->___a_3;
		if ((((float)L_19) > ((float)(1.0f))))
		{
			goto IL_0031;
		}
	}
	{
		// _sprite.color = tmpColor;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->____sprite_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = __this->___U3CtmpColorU3E5__2_4;
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_20, L_21, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SpriteFading/<DoFadeIn>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoFadeInU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5CF92A691B8CC0D1747BF2A396BFA0517B22FA7D (U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SpriteFading/<DoFadeIn>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoFadeInU3Ed__2_System_Collections_IEnumerator_Reset_m236BE9BBFEF4AF513C4FBCD3425D8212ABE3C376 (U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoFadeInU3Ed__2_System_Collections_IEnumerator_Reset_m236BE9BBFEF4AF513C4FBCD3425D8212ABE3C376_RuntimeMethod_var)));
	}
}
// System.Object SpriteFading/<DoFadeIn>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoFadeInU3Ed__2_System_Collections_IEnumerator_get_Current_m5BB3C5F99C393A4691B872AAB46CE6EB30E0B45B (U3CDoFadeInU3Ed__2_t4258BB7F2285145BA5DC54A348D86CC7DDA66901* __this, const RuntimeMethod* method) 
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
// System.Void AmmoFill::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmoFill_OnTriggerEnter2D_m4E981400AAD95F1FB4B2BE7376B889FED2E486D3 (AmmoFill_t0A044433D8643E2BF797DFF1D9EE3D7E8136ABAC* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971_mDDC5E9C56F521A856F6C7DDE89809540509B05BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* V_0 = NULL;
	{
		// Tank2DShootSystem weapon = collision.gameObject.GetComponentInChildren<Tank2DShootSystem>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_2;
		L_2 = GameObject_GetComponentInChildren_TisTank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971_mDDC5E9C56F521A856F6C7DDE89809540509B05BF(L_1, GameObject_GetComponentInChildren_TisTank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971_mDDC5E9C56F521A856F6C7DDE89809540509B05BF_RuntimeMethod_var);
		V_0 = L_2;
		// if (weapon)
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// weapon.AddAmmo(ammoAmount);
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_5 = V_0;
		int32_t L_6 = __this->___ammoAmount_5;
		Tank2DShootSystem_AddAmmo_mC8894EBED8F76410472D7D0720EA32167B25A20C(L_5, L_6, NULL);
		// m_MyEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_7 = __this->___m_MyEvent_4;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_7, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void AmmoFill::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmoFill__ctor_mB488B27DC7CE9D48322AEA2A69EDC7B42EC43583 (AmmoFill_t0A044433D8643E2BF797DFF1D9EE3D7E8136ABAC* __this, const RuntimeMethod* method) 
{
	{
		// public int ammoAmount = 5;
		__this->___ammoAmount_5 = 5;
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
// System.Void Fillerposition::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fillerposition_Start_m92A58B7E9B8DE16F31BB3BAC6E642F8CC21F7D06 (Fillerposition_t91FD8A68FAD952EE3FFFCA7F8F6C31184D45CBDF* __this, const RuntimeMethod* method) 
{
	{
		// spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
		String_t* L_0 = __this->___tagposition_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(L_0, NULL);
		__this->___spawnPoints_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnPoints_7), (void*)L_1);
		// index = Random.Range (0, spawnPoints.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___spawnPoints_7;
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		__this->___index_10 = L_3;
		// PositionLocation();
		Fillerposition_PositionLocation_m8313D482D200C33944F9BD80C192B9179D527E11(__this, NULL);
		// }
		return;
	}
}
// System.Void Fillerposition::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fillerposition_Update_mBCB322302AC1C12D57BC544AF38BD45BD2AFE7A1 (Fillerposition_t91FD8A68FAD952EE3FFFCA7F8F6C31184D45CBDF* __this, const RuntimeMethod* method) 
{
	{
		// if (activaterelocation)
		bool L_0 = __this->___activaterelocation_6;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		// counterTime -= Time.deltaTime;
		float L_1 = __this->___counterTime_9;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___counterTime_9 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (counterTime <= 0.0f)
		float L_3 = __this->___counterTime_9;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// index = Random.Range (0, spawnPoints.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___spawnPoints_7;
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->___index_10 = L_5;
		// PositionLocation();
		Fillerposition_PositionLocation_m8313D482D200C33944F9BD80C192B9179D527E11(__this, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Fillerposition::PositionLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fillerposition_PositionLocation_m8313D482D200C33944F9BD80C192B9179D527E11 (Fillerposition_t91FD8A68FAD952EE3FFFCA7F8F6C31184D45CBDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentPoint = spawnPoints[index];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___spawnPoints_7;
		int32_t L_1 = __this->___index_10;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		__this->___currentPoint_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPoint_8), (void*)L_3);
		// counterTime = 5.0f;
		__this->___counterTime_9 = (5.0f);
		// activaterelocation = false;
		__this->___activaterelocation_6 = (bool)0;
		// Instantiate(fillerelement, currentPoint.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___fillerelement_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___currentPoint_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_4, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Fillerposition::RecolocateElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fillerposition_RecolocateElement_mF0A24AA10D86732799F7B72C7C089C09D8E9A047 (Fillerposition_t91FD8A68FAD952EE3FFFCA7F8F6C31184D45CBDF* __this, const RuntimeMethod* method) 
{
	{
		// activaterelocation = true;
		__this->___activaterelocation_6 = (bool)1;
		// }
		return;
	}
}
// System.Void Fillerposition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fillerposition__ctor_m8BA532C8BAD8CCC6AB1674E4040FF9A0CB803B03 (Fillerposition_t91FD8A68FAD952EE3FFFCA7F8F6C31184D45CBDF* __this, const RuntimeMethod* method) 
{
	{
		// private float counterTime = 5.0f;
		__this->___counterTime_9 = (5.0f);
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
// System.Void ShieldFill::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShieldFill_OnTriggerEnter2D_mA76045D846BE2503121A839351C1DFA74040544D (ShieldFill_t69472C7D9EE599DDD9BADA65ABC251F6253E7BBB* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971_mDDC5E9C56F521A856F6C7DDE89809540509B05BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* V_0 = NULL;
	{
		// Tank2DShootSystem weapon = collision.gameObject.GetComponentInChildren<Tank2DShootSystem>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_2;
		L_2 = GameObject_GetComponentInChildren_TisTank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971_mDDC5E9C56F521A856F6C7DDE89809540509B05BF(L_1, GameObject_GetComponentInChildren_TisTank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971_mDDC5E9C56F521A856F6C7DDE89809540509B05BF_RuntimeMethod_var);
		V_0 = L_2;
		// if (weapon)
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// weapon.AddShield();
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_5 = V_0;
		Tank2DShootSystem_AddShield_m4592260F1AEB297B51B3CB6737F01DC3CAD38B5B(L_5, NULL);
		// m_MyEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = __this->___m_MyEvent_4;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_6, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void ShieldFill::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShieldFill__ctor_mC8D8B16C0C443023C940D15D5AA30103AD5FDF91 (ShieldFill_t69472C7D9EE599DDD9BADA65ABC251F6253E7BBB* __this, const RuntimeMethod* method) 
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
// System.Void SpeedFill::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedFill_OnTriggerEnter2D_m93843B909CE1D5CF4BBC33AE6BEE5E39BA0F24F5 (SpeedFill_tAAB1F8017D32D393374B30393633AA7EA3E65144* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971_mDDC5E9C56F521A856F6C7DDE89809540509B05BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* V_0 = NULL;
	{
		// Tank2DShootSystem weapon = collision.gameObject.GetComponentInChildren<Tank2DShootSystem>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_2;
		L_2 = GameObject_GetComponentInChildren_TisTank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971_mDDC5E9C56F521A856F6C7DDE89809540509B05BF(L_1, GameObject_GetComponentInChildren_TisTank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971_mDDC5E9C56F521A856F6C7DDE89809540509B05BF_RuntimeMethod_var);
		V_0 = L_2;
		// if (weapon)
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// weapon.AddSpeed();
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_5 = V_0;
		Tank2DShootSystem_AddSpeed_m3B369D4289BA620AC60F6486FCAC62A464D8A20A(L_5, NULL);
		// m_MyEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = __this->___m_MyEvent_4;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_6, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void SpeedFill::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedFill__ctor_m0C49B9A4F7C822EB1A1119C973D29DAC6A525DC8 (SpeedFill_tAAB1F8017D32D393374B30393633AA7EA3E65144* __this, const RuntimeMethod* method) 
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
// System.Void CactiEnemy::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CactiEnemy_OnTriggerEnter2D_m5FE7E4CD19306AD5D183D11A26A1BE3116735E71 (CactiEnemy_tFB3DC7AC62B57581F0EDD20F9AB462721F39FA4A* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971_mDDC5E9C56F521A856F6C7DDE89809540509B05BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Tank2DShootSystem weapon = collision.gameObject.GetComponentInChildren<Tank2DShootSystem>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_2;
		L_2 = GameObject_GetComponentInChildren_TisTank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971_mDDC5E9C56F521A856F6C7DDE89809540509B05BF(L_1, GameObject_GetComponentInChildren_TisTank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971_mDDC5E9C56F521A856F6C7DDE89809540509B05BF_RuntimeMethod_var);
		// if (weapon)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void CactiEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CactiEnemy__ctor_m87D4EE41D6D771AA33592F868A9D8CC17D851D25 (CactiEnemy_tFB3DC7AC62B57581F0EDD20F9AB462721F39FA4A* __this, const RuntimeMethod* method) 
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
// System.Void CactiEnemyHitbox::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CactiEnemyHitbox_OnTriggerEnter2D_mD03A1E594E2AF25DD20756999B36B82C7D7B8347 (CactiEnemyHitbox_tD2E7A316112AA0888296FEB7FF1024F5A17D4235* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	{
		// if (collision.tag.Equals(tagCollide)){
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		String_t* L_2 = __this->___tagCollide_4;
		bool L_3;
		L_3 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// En_MyEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = __this->___En_MyEvent_5;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_4, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void CactiEnemyHitbox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CactiEnemyHitbox__ctor_mD2C34C452691E2C6222DF714EA8A85701F77014C (CactiEnemyHitbox_tD2E7A316112AA0888296FEB7FF1024F5A17D4235* __this, const RuntimeMethod* method) 
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
// System.Void CactiSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CactiSpawner_Start_m29C7FB3319397807483BF03E002582386A96730F (CactiSpawner_t4D512B30FBC71DC65BB3D6A01BEA49458471097A* __this, const RuntimeMethod* method) 
{
	{
		// spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
		String_t* L_0 = __this->___tagposition_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(L_0, NULL);
		__this->___spawnPoints_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnPoints_7), (void*)L_1);
		// index = Random.Range (0, spawnPoints.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___spawnPoints_7;
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		__this->___index_10 = L_3;
		// firstPositionLocation();
		CactiSpawner_firstPositionLocation_mD48F48FC543CC47FEB87DE923632D18C55DDC715(__this, NULL);
		// }
		return;
	}
}
// System.Void CactiSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CactiSpawner_Update_m07C530F2726C10C909A59893F4DE2FA824E683B0 (CactiSpawner_t4D512B30FBC71DC65BB3D6A01BEA49458471097A* __this, const RuntimeMethod* method) 
{
	{
		// if (activaterelocation)
		bool L_0 = __this->___activaterelocation_6;
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		// counterTime -= Time.deltaTime;
		float L_1 = __this->___counterTime_9;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___counterTime_9 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (counterTime <= 0.0f)
		float L_3 = __this->___counterTime_9;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
		String_t* L_4 = __this->___tagposition_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5;
		L_5 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(L_4, NULL);
		__this->___spawnPoints_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnPoints_7), (void*)L_5);
		// index = Random.Range (0, spawnPoints.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___spawnPoints_7;
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		__this->___index_10 = L_7;
		// PositionLocation();
		CactiSpawner_PositionLocation_m67EDD8D6B442850BC55F6BBAC8DE529715CC5587(__this, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void CactiSpawner::PositionLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CactiSpawner_PositionLocation_m67EDD8D6B442850BC55F6BBAC8DE529715CC5587 (CactiSpawner_t4D512B30FBC71DC65BB3D6A01BEA49458471097A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentPoint = spawnPoints[index];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___spawnPoints_7;
		int32_t L_1 = __this->___index_10;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		__this->___currentPoint_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPoint_8), (void*)L_3);
		// counterTime = 1.0f;
		__this->___counterTime_9 = (1.0f);
		// activaterelocation = false;
		__this->___activaterelocation_6 = (bool)0;
		// Instantiate(fillerelement, currentPoint.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___fillerelement_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___currentPoint_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_4, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Destroy(currentPoint.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___currentPoint_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_10, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_11, NULL);
		// }
		return;
	}
}
// System.Void CactiSpawner::firstPositionLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CactiSpawner_firstPositionLocation_mD48F48FC543CC47FEB87DE923632D18C55DDC715 (CactiSpawner_t4D512B30FBC71DC65BB3D6A01BEA49458471097A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 5; i++)
		V_0 = 0;
		goto IL_0071;
	}

IL_0004:
	{
		// spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
		String_t* L_0 = __this->___tagposition_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(L_0, NULL);
		__this->___spawnPoints_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnPoints_7), (void*)L_1);
		// index = Random.Range (0, spawnPoints.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___spawnPoints_7;
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		__this->___index_10 = L_3;
		// currentPoint = spawnPoints[index];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___spawnPoints_7;
		int32_t L_5 = __this->___index_10;
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		__this->___currentPoint_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPoint_8), (void*)L_7);
		// Instantiate(fillerelement, currentPoint.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___fillerelement_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___currentPoint_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_8, L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Destroy(currentPoint.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___currentPoint_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_14, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_15, NULL);
		// for (int i = 0; i < 5; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0071:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CactiSpawner::RecolocateElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CactiSpawner_RecolocateElement_m507373A893C7E0BB2EE0FA301388CB6F6D59AB74 (CactiSpawner_t4D512B30FBC71DC65BB3D6A01BEA49458471097A* __this, const RuntimeMethod* method) 
{
	{
		// activaterelocation = true;
		__this->___activaterelocation_6 = (bool)1;
		// }
		return;
	}
}
// System.Void CactiSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CactiSpawner__ctor_mBDD96A07C80901A4253F36F23C25E4AE809C2E5F (CactiSpawner_t4D512B30FBC71DC65BB3D6A01BEA49458471097A* __this, const RuntimeMethod* method) 
{
	{
		// private float counterTime = 1.0f;
		__this->___counterTime_9 = (1.0f);
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
// System.Void respawnThings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void respawnThings_Start_mFAA628299033A3C600548AB71431E7F70B4C99F4 (respawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF* __this, const RuntimeMethod* method) 
{
	{
		// originalPos = new Vector3(gameObject.transform.position.x, gameObject.transform.position.y, gameObject.transform.position.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_3, L_7, L_11, /*hidden argument*/NULL);
		__this->___originalPos_5 = L_12;
		// }
		return;
	}
}
// System.Void respawnThings::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void respawnThings_Update_m913B9A5B78F12AF4DA86745A33AA951B280C20E6 (respawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void respawnThings::SavePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void respawnThings_SavePos_m328F66441D68202CFD1B1A8DE3DEA4358B78F0F4 (respawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF* __this, const RuntimeMethod* method) 
{
	{
		// refPos = originalPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___originalPos_5;
		__this->___refPos_4 = L_0;
		// gameObject.transform.position = refPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___refPos_4;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void respawnThings::ResetObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void respawnThings_ResetObject_m62FDDC69261DA41FB02A74650C275B0C6F98AE14 (respawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.transform.position = originalPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___originalPos_5;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void respawnThings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void respawnThings__ctor_m84E2E401A0BDED3C2B0B234B3EDB006CD7C85D02 (respawnThings_t9288999D3E111724924578F8C0E7C0E9D6415BBF* __this, const RuntimeMethod* method) 
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
// System.Void Bullet::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_OnTriggerEnter2D_mC3642C0546BCF5AFC8036C6B77D66560C04685E8 (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	{
		// if (collision.gameObject.tag.Equals(tagCollide) || collision.gameObject.tag.Equals(tagCollidePlayer)){
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		String_t* L_3 = __this->___tagCollide_4;
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		String_t* L_7;
		L_7 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_6, NULL);
		String_t* L_8 = __this->___tagCollidePlayer_5;
		bool L_9;
		L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_003b;
		}
	}

IL_0030:
	{
		// En_MyEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10 = __this->___En_MyEvent_6;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_10, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_m873C02F2114EA93A35E4392013AC831246756CBA (Bullet_t5A7C684C3CECF8FB977D516EC7DBDF9102D7E344* __this, const RuntimeMethod* method) 
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
// System.Void RespawnTank::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnTank_Start_m9BC8059FAAF4E4C6AFC46BDDE8A4E0153EFDE87E (RespawnTank_t87BA50F342F879CE8D7FEBAF82E1B5F8278B0D3A* __this, const RuntimeMethod* method) 
{
	{
		// spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
		String_t* L_0 = __this->___tagposition_8;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(L_0, NULL);
		__this->___spawnPoints_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnPoints_6), (void*)L_1);
		// index = Random.Range (0, spawnPoints.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___spawnPoints_6;
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		__this->___index_9 = L_3;
		// }
		return;
	}
}
// System.Void RespawnTank::UpdateHUDTankAndPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnTank_UpdateHUDTankAndPosition_m3C105875E278568712EB4231061BCA2A97FC04AD (RespawnTank_t87BA50F342F879CE8D7FEBAF82E1B5F8278B0D3A* __this, const RuntimeMethod* method) 
{
	{
		// index = Random.Range (0, spawnPoints.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___spawnPoints_6;
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		__this->___index_9 = L_1;
		// currentPoint = spawnPoints[index];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___spawnPoints_6;
		int32_t L_3 = __this->___index_9;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		__this->___currentPoint_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPoint_7), (void*)L_5);
		// tankController.currentAmmo = 10;
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_6 = __this->___tankController_5;
		L_6->___currentAmmo_8 = ((int32_t)10);
		// tankController.shieldStatus = false;
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_7 = __this->___tankController_5;
		L_7->___shieldStatus_10 = (bool)0;
		// tankController.speedStatus = false;
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_8 = __this->___tankController_5;
		L_8->___speedStatus_11 = (bool)0;
		// tankController.UpdatingHUD();
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_9 = __this->___tankController_5;
		Tank2DShootSystem_UpdatingHUD_mA86A3F77214B6B7C53B76E765A544EDD6E297C91(L_9, NULL);
		// Tankcontroller.transform.position = currentPoint.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Tankcontroller_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___currentPoint_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_14, NULL);
		// Tankcontroller.transform.rotation = currentPoint.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___Tankcontroller_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___currentPoint_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_18, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_16, L_19, NULL);
		// }
		return;
	}
}
// System.Void RespawnTank::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnTank__ctor_m1A16ED72914D0807BBA4F641DEC258D849827A50 (RespawnTank_t87BA50F342F879CE8D7FEBAF82E1B5F8278B0D3A* __this, const RuntimeMethod* method) 
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
// System.Void Tank2DHitbox::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DHitbox_OnTriggerEnter2D_m52BBAFC42DFE453CE3C90E02FC783405ADD8249C (Tank2DHitbox_t6D53C7E581FA57B95DC5CA061D6ABBDBEE4C7417* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collision, const RuntimeMethod* method) 
{
	{
		// if (collision.tag.Equals(tagCollide)){
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_collision;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		String_t* L_2 = __this->___tagCollide_4;
		bool L_3;
		L_3 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// En_MyEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = __this->___En_MyEvent_5;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_4, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Tank2DHitbox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DHitbox__ctor_m784F65F41148B1BB72ED4459B825224C004F8C20 (Tank2DHitbox_t6D53C7E581FA57B95DC5CA061D6ABBDBEE4C7417* __this, const RuntimeMethod* method) 
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
// System.Void Tank2DShootSystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_Start_m0AE44B9FDC3399ED9FE1737092E4BFD8614E4174 (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, const RuntimeMethod* method) 
{
	{
		// currentAmmo = startAmmo;
		int32_t L_0 = __this->___startAmmo_7;
		__this->___currentAmmo_8 = L_0;
		// fSpeed = tank2DMovement.forwardSpeed;
		Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* L_1 = __this->___tank2DMovement_18;
		float L_2 = L_1->___forwardSpeed_9;
		__this->___fSpeed_23 = L_2;
		// bSpeed = tank2DMovement.backwardSpeed;
		Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* L_3 = __this->___tank2DMovement_18;
		float L_4 = L_3->___backwardSpeed_10;
		__this->___bSpeed_24 = L_4;
		// UpdatingHUD();
		Tank2DShootSystem_UpdatingHUD_mA86A3F77214B6B7C53B76E765A544EDD6E297C91(__this, NULL);
		// }
		return;
	}
}
// System.Void Tank2DShootSystem::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_Shoot_m20D51D3AD595A6DA932FECE1EB6CEFD70FAC52B3 (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentAmmo > 0)
		int32_t L_0 = __this->___currentAmmo_8;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		// Cannon.SetTrigger("Shoot");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___Cannon_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8, NULL);
		// GameObject bullet = Instantiate(bulletObject, firePoint.position, firePoint.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___bulletObject_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___firePoint_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___firePoint_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// bullet.GetComponent<Rigidbody2D>().AddForce(firePoint.up * fireForce, ForceMode2D.Impulse);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8;
		L_8 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_7, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___firePoint_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_9, NULL);
		float L_11 = __this->___fireForce_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_12, NULL);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_8, L_13, 1, NULL);
		// EffectOnomatopoeiaShoot.InstantiateEffect();
		Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E* L_14 = __this->___EffectOnomatopoeiaShoot_20;
		Effects_InstantiateEffect_mE4D99F0277DFA3687B4F3A345269F3389BC56DBF(L_14, NULL);
		// currentAmmo --;
		int32_t L_15 = __this->___currentAmmo_8;
		__this->___currentAmmo_8 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		// UpdatingHUD();
		Tank2DShootSystem_UpdatingHUD_mA86A3F77214B6B7C53B76E765A544EDD6E297C91(__this, NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Tank2DShootSystem::Shield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_Shield_m58BF80269854F04F0656DF783C21117A180EFA43 (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, const RuntimeMethod* method) 
{
	{
		// if (shieldStatus)
		bool L_0 = __this->___shieldStatus_10;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// EffectOnomatopoeiaShield.InstantiateEffect();
		Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E* L_1 = __this->___EffectOnomatopoeiaShield_21;
		Effects_InstantiateEffect_mE4D99F0277DFA3687B4F3A345269F3389BC56DBF(L_1, NULL);
		// ShieldAbility.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___ShieldAbility_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// shieldStatus = false;
		__this->___shieldStatus_10 = (bool)0;
		// UpdatingHUD();
		Tank2DShootSystem_UpdatingHUD_mA86A3F77214B6B7C53B76E765A544EDD6E297C91(__this, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Tank2DShootSystem::Speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_Speed_m6F5DEB8797F900E9AD88CF72F08E4C09E18216EC (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, const RuntimeMethod* method) 
{
	{
		// if (speedStatus)
		bool L_0 = __this->___speedStatus_11;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// SpeedAbilityHUD.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___SpeedAbilityHUD_17;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// tank2DMovement.forwardSpeed = fSpeed;
		Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* L_2 = __this->___tank2DMovement_18;
		float L_3 = __this->___fSpeed_23;
		L_2->___forwardSpeed_9 = L_3;
		// tank2DMovement.backwardSpeed = bSpeed;
		Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* L_4 = __this->___tank2DMovement_18;
		float L_5 = __this->___bSpeed_24;
		L_4->___backwardSpeed_10 = L_5;
		// speedStatus = false;
		__this->___speedStatus_11 = (bool)0;
		// UpdatingHUD();
		Tank2DShootSystem_UpdatingHUD_mA86A3F77214B6B7C53B76E765A544EDD6E297C91(__this, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Tank2DShootSystem::AddAmmo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_AddAmmo_mC8894EBED8F76410472D7D0720EA32167B25A20C (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, int32_t ___0_ammoAmount, const RuntimeMethod* method) 
{
	{
		// currentAmmo += ammoAmount;
		int32_t L_0 = __this->___currentAmmo_8;
		int32_t L_1 = ___0_ammoAmount;
		__this->___currentAmmo_8 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// if (currentAmmo > maxAmmo)
		int32_t L_2 = __this->___currentAmmo_8;
		int32_t L_3 = __this->___maxAmmo_9;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0028;
		}
	}
	{
		// currentAmmo = maxAmmo;
		int32_t L_4 = __this->___maxAmmo_9;
		__this->___currentAmmo_8 = L_4;
	}

IL_0028:
	{
		// UpdatingHUD();
		Tank2DShootSystem_UpdatingHUD_mA86A3F77214B6B7C53B76E765A544EDD6E297C91(__this, NULL);
		// }
		return;
	}
}
// System.Void Tank2DShootSystem::AddShield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_AddShield_m4592260F1AEB297B51B3CB6737F01DC3CAD38B5B (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51452628837BAB7C283227D4421383559F8F9A27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (shieldStatus)
		bool L_0 = __this->___shieldStatus_10;
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		// shieldHUD.shieldTank.GetComponent<Animator>().SetBool("Shield",false);
		ShieldHUD_t698DC2B8ADFE815DF9FA8694A78B46EC480AEDDD* L_1 = __this->___shieldHUD_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1->___shieldTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_2, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteral51452628837BAB7C283227D4421383559F8F9A27, (bool)0, NULL);
		// shieldHUD.shieldTank.GetComponent<Animator>().SetBool("No",true);
		ShieldHUD_t698DC2B8ADFE815DF9FA8694A78B46EC480AEDDD* L_4 = __this->___shieldHUD_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___shieldTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6;
		L_6 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_5, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, (bool)1, NULL);
		// shieldHUD.shieldTank.GetComponent<Animator>().SetBool("Speed",false);
		ShieldHUD_t698DC2B8ADFE815DF9FA8694A78B46EC480AEDDD* L_7 = __this->___shieldHUD_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___shieldTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9;
		L_9 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_8, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_9, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, (bool)0, NULL);
	}

IL_0059:
	{
		// SpeedAbilityHUD.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___SpeedAbilityHUD_17;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// tank2DMovement.forwardSpeed = fSpeed;
		Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* L_11 = __this->___tank2DMovement_18;
		float L_12 = __this->___fSpeed_23;
		L_11->___forwardSpeed_9 = L_12;
		// tank2DMovement.backwardSpeed = bSpeed;
		Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* L_13 = __this->___tank2DMovement_18;
		float L_14 = __this->___bSpeed_24;
		L_13->___backwardSpeed_10 = L_14;
		// shieldStatus=true;
		__this->___shieldStatus_10 = (bool)1;
		// speedStatus=false;
		__this->___speedStatus_11 = (bool)0;
		// UpdatingHUD();
		Tank2DShootSystem_UpdatingHUD_mA86A3F77214B6B7C53B76E765A544EDD6E297C91(__this, NULL);
		// }
		return;
	}
}
// System.Void Tank2DShootSystem::AddSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_AddSpeed_m3B369D4289BA620AC60F6486FCAC62A464D8A20A (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51452628837BAB7C283227D4421383559F8F9A27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (speedStatus)
		bool L_0 = __this->___speedStatus_11;
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		// speedHUD.speedTank.GetComponent<Animator>().SetBool("Speed",false);
		SpeedHUD_t482A6FA2DFE06D93637EFA89304A01F6FC80537B* L_1 = __this->___speedHUD_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1->___speedTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_2, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, (bool)0, NULL);
		// speedHUD.speedTank.GetComponent<Animator>().SetBool("Shield",false);
		SpeedHUD_t482A6FA2DFE06D93637EFA89304A01F6FC80537B* L_4 = __this->___speedHUD_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___speedTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6;
		L_6 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_5, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteral51452628837BAB7C283227D4421383559F8F9A27, (bool)0, NULL);
		// speedHUD.speedTank.GetComponent<Animator>().SetBool("No",true);
		SpeedHUD_t482A6FA2DFE06D93637EFA89304A01F6FC80537B* L_7 = __this->___speedHUD_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___speedTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9;
		L_9 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_8, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_9, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, (bool)1, NULL);
	}

IL_0059:
	{
		// shieldStatus=false;
		__this->___shieldStatus_10 = (bool)0;
		// speedStatus=true;
		__this->___speedStatus_11 = (bool)1;
		// SpeedAbilityHUD.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___SpeedAbilityHUD_17;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// SpeedAbilitytimer.RestartTimer();
		TimerSlider_tA122A06C993B0C854E93D19EDC1084C402B0D9B4* L_11 = __this->___SpeedAbilitytimer_19;
		TimerSlider_RestartTimer_m300E5B0F7257BD914FB05DF0803FBABA77DE6CAF(L_11, NULL);
		// tank2DMovement.forwardSpeed = fSpeed * 2.0f;
		Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* L_12 = __this->___tank2DMovement_18;
		float L_13 = __this->___fSpeed_23;
		L_12->___forwardSpeed_9 = ((float)il2cpp_codegen_multiply(L_13, (2.0f)));
		// tank2DMovement.backwardSpeed = bSpeed * 2.0f;
		Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* L_14 = __this->___tank2DMovement_18;
		float L_15 = __this->___bSpeed_24;
		L_14->___backwardSpeed_10 = ((float)il2cpp_codegen_multiply(L_15, (2.0f)));
		// UpdatingHUD();
		Tank2DShootSystem_UpdatingHUD_mA86A3F77214B6B7C53B76E765A544EDD6E297C91(__this, NULL);
		// }
		return;
	}
}
// System.Void Tank2DShootSystem::UpdatingHUD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem_UpdatingHUD_mA86A3F77214B6B7C53B76E765A544EDD6E297C91 (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51452628837BAB7C283227D4421383559F8F9A27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65DA496F0A005C3E89199A5C0EB7FE1E0C433652);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2F8AD0FA2E585DD18D33AC7E9CC01954B078584);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// if (shieldStatus && !speedStatus)
		bool L_0 = __this->___shieldStatus_10;
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		bool L_1 = __this->___speedStatus_11;
		if (L_1)
		{
			goto IL_0061;
		}
	}
	{
		// shieldHUD.shieldTank.GetComponent<Animator>().SetBool("Shield",true);
		ShieldHUD_t698DC2B8ADFE815DF9FA8694A78B46EC480AEDDD* L_2 = __this->___shieldHUD_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___shieldTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_3, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteral51452628837BAB7C283227D4421383559F8F9A27, (bool)1, NULL);
		// shieldHUD.shieldTank.GetComponent<Animator>().SetBool("No",false);
		ShieldHUD_t698DC2B8ADFE815DF9FA8694A78B46EC480AEDDD* L_5 = __this->___shieldHUD_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___shieldTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7;
		L_7 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_6, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, (bool)0, NULL);
		// shieldHUD.shieldTank.GetComponent<Animator>().SetBool("Speed",false);
		ShieldHUD_t698DC2B8ADFE815DF9FA8694A78B46EC480AEDDD* L_8 = __this->___shieldHUD_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___shieldTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10;
		L_10 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_9, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, (bool)0, NULL);
	}

IL_0061:
	{
		// if (speedStatus && !shieldStatus)
		bool L_11 = __this->___speedStatus_11;
		if (!L_11)
		{
			goto IL_00c2;
		}
	}
	{
		bool L_12 = __this->___shieldStatus_10;
		if (L_12)
		{
			goto IL_00c2;
		}
	}
	{
		// speedHUD.speedTank.GetComponent<Animator>().SetBool("Speed",true);
		SpeedHUD_t482A6FA2DFE06D93637EFA89304A01F6FC80537B* L_13 = __this->___speedHUD_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___speedTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15;
		L_15 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_14, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_15, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, (bool)1, NULL);
		// speedHUD.speedTank.GetComponent<Animator>().SetBool("Shield",false);
		SpeedHUD_t482A6FA2DFE06D93637EFA89304A01F6FC80537B* L_16 = __this->___speedHUD_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16->___speedTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18;
		L_18 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_17, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_18, _stringLiteral51452628837BAB7C283227D4421383559F8F9A27, (bool)0, NULL);
		// speedHUD.speedTank.GetComponent<Animator>().SetBool("No",false);
		SpeedHUD_t482A6FA2DFE06D93637EFA89304A01F6FC80537B* L_19 = __this->___speedHUD_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___speedTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21;
		L_21 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_20, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_21, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, (bool)0, NULL);
	}

IL_00c2:
	{
		// if (!shieldStatus && !speedStatus)
		bool L_22 = __this->___shieldStatus_10;
		if (L_22)
		{
			goto IL_017a;
		}
	}
	{
		bool L_23 = __this->___speedStatus_11;
		if (L_23)
		{
			goto IL_017a;
		}
	}
	{
		// speedHUD.speedTank.GetComponent<Animator>().SetBool("No" , true);
		SpeedHUD_t482A6FA2DFE06D93637EFA89304A01F6FC80537B* L_24 = __this->___speedHUD_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24->___speedTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26;
		L_26 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_25, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_26, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, (bool)1, NULL);
		// shieldHUD.shieldTank.GetComponent<Animator>().SetBool("No", true);
		ShieldHUD_t698DC2B8ADFE815DF9FA8694A78B46EC480AEDDD* L_27 = __this->___shieldHUD_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->___shieldTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29;
		L_29 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_28, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_29, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, (bool)1, NULL);
		// speedHUD.speedTank.GetComponent<Animator>().SetBool("Speed" , false);
		SpeedHUD_t482A6FA2DFE06D93637EFA89304A01F6FC80537B* L_30 = __this->___speedHUD_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = L_30->___speedTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_32;
		L_32 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_31, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_32, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, (bool)0, NULL);
		// shieldHUD.shieldTank.GetComponent<Animator>().SetBool("Speed", false);
		ShieldHUD_t698DC2B8ADFE815DF9FA8694A78B46EC480AEDDD* L_33 = __this->___shieldHUD_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = L_33->___shieldTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_35;
		L_35 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_34, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_35, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, (bool)0, NULL);
		// speedHUD.speedTank.GetComponent<Animator>().SetBool("Shield" , false);
		SpeedHUD_t482A6FA2DFE06D93637EFA89304A01F6FC80537B* L_36 = __this->___speedHUD_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = L_36->___speedTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_38;
		L_38 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_37, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_38, _stringLiteral51452628837BAB7C283227D4421383559F8F9A27, (bool)0, NULL);
		// shieldHUD.shieldTank.GetComponent<Animator>().SetBool("Shield", false);
		ShieldHUD_t698DC2B8ADFE815DF9FA8694A78B46EC480AEDDD* L_39 = __this->___shieldHUD_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = L_39->___shieldTank_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_41;
		L_41 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_40, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_41, _stringLiteral51452628837BAB7C283227D4421383559F8F9A27, (bool)0, NULL);
	}

IL_017a:
	{
		// int i=maxAmmo;
		int32_t L_42 = __this->___maxAmmo_9;
		V_0 = L_42;
		// foreach(GameObject bulletHUD in ammoHUD.ammoTank) {
		AmmoHUD_tE1C54E983482F90529FF4C2566BADC656945FD26* L_43 = __this->___ammoHUD_12;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_44 = L_43->___ammoTank_4;
		V_1 = L_44;
		V_2 = 0;
		goto IL_021b;
	}

IL_0194:
	{
		// foreach(GameObject bulletHUD in ammoHUD.ammoTank) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_45 = V_1;
		int32_t L_46 = V_2;
		int32_t L_47 = L_46;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		V_3 = L_48;
		// animationBullet = bulletHUD.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = V_3;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_50;
		L_50 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_49, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___animationBullet_22 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animationBullet_22), (void*)L_50);
		// if (i > currentAmmo) bulletHUD.SetActive(false);
		int32_t L_51 = V_0;
		int32_t L_52 = __this->___currentAmmo_8;
		if ((((int32_t)L_51) <= ((int32_t)L_52)))
		{
			goto IL_01b6;
		}
	}
	{
		// if (i > currentAmmo) bulletHUD.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = V_3;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_53, (bool)0, NULL);
		goto IL_0213;
	}

IL_01b6:
	{
		// else if(i == currentAmmo)
		int32_t L_54 = V_0;
		int32_t L_55 = __this->___currentAmmo_8;
		if ((!(((uint32_t)L_54) == ((uint32_t)L_55))))
		{
			goto IL_01ea;
		}
	}
	{
		// animationBullet.SetBool("selectedAmmo",true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_56 = __this->___animationBullet_22;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_56, _stringLiteralE2F8AD0FA2E585DD18D33AC7E9CC01954B078584, (bool)1, NULL);
		// animationBullet.SetBool("yesAmmo",false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_57 = __this->___animationBullet_22;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_57, _stringLiteral65DA496F0A005C3E89199A5C0EB7FE1E0C433652, (bool)0, NULL);
		// bulletHUD.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = V_3;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)1, NULL);
		goto IL_0213;
	}

IL_01ea:
	{
		// animationBullet.SetBool("yesAmmo",true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_59 = __this->___animationBullet_22;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_59, _stringLiteral65DA496F0A005C3E89199A5C0EB7FE1E0C433652, (bool)1, NULL);
		// animationBullet.SetBool("selectedAmmo",false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_60 = __this->___animationBullet_22;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_60, _stringLiteralE2F8AD0FA2E585DD18D33AC7E9CC01954B078584, (bool)0, NULL);
		// bulletHUD.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = V_3;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_61, (bool)1, NULL);
	}

IL_0213:
	{
		// i--;
		int32_t L_62 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
		int32_t L_63 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_021b:
	{
		// foreach(GameObject bulletHUD in ammoHUD.ammoTank) {
		int32_t L_64 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_65 = V_1;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_0194;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Tank2DShootSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DShootSystem__ctor_m81C4EDBE1AFEDE239A8E05FA90DCFE98C6BDBB7E (Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float fireForce = 60f;
		__this->___fireForce_6 = (60.0f);
		// public int startAmmo = 10,currentAmmo, maxAmmo = 15;
		__this->___startAmmo_7 = ((int32_t)10);
		// public int startAmmo = 10,currentAmmo, maxAmmo = 15;
		__this->___maxAmmo_9 = ((int32_t)15);
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
// System.Void StartButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_Update_mE2ADF40812F63A61BFDBC232B9AD2D7936F57654 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62EC32DB0165ABAB454A1C8263AA078C3F4A968D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetButtonDown("StartButton"))invokeEvent();
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral62EC32DB0165ABAB454A1C8263AA078C3F4A968D, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// if(Input.GetButtonDown("StartButton"))invokeEvent();
		StartButton_invokeEvent_mCE821056EA095FAE5260ABC34322208E213ADC17(__this, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void StartButton::invokeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton_invokeEvent_mCE821056EA095FAE5260ABC34322208E213ADC17 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
{
	{
		// m_MyEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_MyEvent_4;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void StartButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartButton__ctor_m8454B8AF76546ABE9126D56D36A2AC0DDCA673B3 (StartButton_tF8F6A56061EF51B26F82FD5C23D529D030248545* __this, const RuntimeMethod* method) 
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
// System.Void BulletTimer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletTimer_Start_m54D66D28D7B0BA890334B3CB73F44172138AA27C (BulletTimer_t97075F2EF0198227CA44647E8FC59C4AC8D431FF* __this, const RuntimeMethod* method) 
{
	{
		// counterTime= targetTime;
		float L_0 = __this->___targetTime_4;
		__this->___counterTime_5 = L_0;
		// }
		return;
	}
}
// System.Void BulletTimer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletTimer_Update_mAE8389D0328B5C12FE944784E68077A4F14425E5 (BulletTimer_t97075F2EF0198227CA44647E8FC59C4AC8D431FF* __this, const RuntimeMethod* method) 
{
	{
		// counterTime -= Time.deltaTime;
		float L_0 = __this->___counterTime_5;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___counterTime_5 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (counterTime <= 0.0f)
		float L_2 = __this->___counterTime_5;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0025;
		}
	}
	{
		// timerEnded();
		BulletTimer_timerEnded_mA491E919DA6C6A31FDC5854AFC44C71B54F640B1(__this, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void BulletTimer::timerEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletTimer_timerEnded_mA491E919DA6C6A31FDC5854AFC44C71B54F640B1 (BulletTimer_t97075F2EF0198227CA44647E8FC59C4AC8D431FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void BulletTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletTimer__ctor_mDFC7A9EBB0C1862DA40402D0E0DD2BAD68DFE6E8 (BulletTimer_t97075F2EF0198227CA44647E8FC59C4AC8D431FF* __this, const RuntimeMethod* method) 
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
// System.Void SimpleTimer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTimer_Start_m9604DBB72F48FA0F5EA8F8BE99DC9A30777E947C (SimpleTimer_tD2DC11B21AA29D70436742BE281D6B6C8E111A77* __this, const RuntimeMethod* method) 
{
	{
		// counterTime= targetTime;
		float L_0 = __this->___targetTime_5;
		__this->___counterTime_7 = L_0;
		// }
		return;
	}
}
// System.Void SimpleTimer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTimer_Update_m4184253A81FFC304576658F23D5AC80E9EF5118C (SimpleTimer_tD2DC11B21AA29D70436742BE281D6B6C8E111A77* __this, const RuntimeMethod* method) 
{
	{
		// counterTime -= Time.deltaTime;
		float L_0 = __this->___counterTime_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___counterTime_7 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (counterTime <= 0.0f)
		float L_2 = __this->___counterTime_7;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0025;
		}
	}
	{
		// timerEnded();
		SimpleTimer_timerEnded_m6454A2FDCDD316CED00BCA9BB3DD4911B883DA66(__this, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void SimpleTimer::timerEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTimer_timerEnded_m6454A2FDCDD316CED00BCA9BB3DD4911B883DA66 (SimpleTimer_tD2DC11B21AA29D70436742BE281D6B6C8E111A77* __this, const RuntimeMethod* method) 
{
	{
		// counterTime= targetTime;
		float L_0 = __this->___targetTime_5;
		__this->___counterTime_7 = L_0;
		// m_MyEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___m_MyEvent_4;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
		// if (deactivateobject)gameObject.SetActive(false);
		bool L_2 = __this->___deactivateobject_6;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// if (deactivateobject)gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void SimpleTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTimer__ctor_m276B7C7B7E75D65A785F6320C42988CD34D7592E (SimpleTimer_tD2DC11B21AA29D70436742BE281D6B6C8E111A77* __this, const RuntimeMethod* method) 
{
	{
		// public bool deactivateobject = true;
		__this->___deactivateobject_6 = (bool)1;
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
// System.Void TimerDestroyer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerDestroyer_Start_m7B69A4DED84CC24F81774F3554A5E5D7C3F6DC2D (TimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D* __this, const RuntimeMethod* method) 
{
	{
		// counterTime= targetTime;
		float L_0 = __this->___targetTime_4;
		__this->___counterTime_5 = L_0;
		// }
		return;
	}
}
// System.Void TimerDestroyer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerDestroyer_Update_m839C7CACA68349745A7F5E363CB9CA68CF8D8796 (TimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D* __this, const RuntimeMethod* method) 
{
	{
		// if (startertime)counterTime -= Time.deltaTime;
		bool L_0 = __this->___startertime_6;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// if (startertime)counterTime -= Time.deltaTime;
		float L_1 = __this->___counterTime_5;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___counterTime_5 = ((float)il2cpp_codegen_subtract(L_1, L_2));
	}

IL_001a:
	{
		// if (counterTime <= 0.0f)
		float L_3 = __this->___counterTime_5;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		// timerEnded();
		TimerDestroyer_timerEnded_mBA80766C5B6241B13D62C0454EEBD3D30983291B(__this, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void TimerDestroyer::timerEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerDestroyer_timerEnded_mBA80766C5B6241B13D62C0454EEBD3D30983291B (TimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void TimerDestroyer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerDestroyer__ctor_mAA6841CF62E04B9A406272E71A0C4516448FB47C (TimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D* __this, const RuntimeMethod* method) 
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
// System.Void TimerSlider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerSlider_Start_mA28458174C122EA61AEE813FCC7065CE765735C9 (TimerSlider_tA122A06C993B0C854E93D19EDC1084C402B0D9B4* __this, const RuntimeMethod* method) 
{
	{
		// RestartTimer();
		TimerSlider_RestartTimer_m300E5B0F7257BD914FB05DF0803FBABA77DE6CAF(__this, NULL);
		// }
		return;
	}
}
// System.Void TimerSlider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerSlider_Update_m829FB1C22B6782B3FC5637CF35AC6F130945B3AA (TimerSlider_tA122A06C993B0C854E93D19EDC1084C402B0D9B4* __this, const RuntimeMethod* method) 
{
	{
		// counterTime -= Time.deltaTime;
		float L_0 = __this->___counterTime_8;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___counterTime_8 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// timerSlider.value = counterTime;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___timerSlider_6;
		float L_3 = __this->___counterTime_8;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, L_3);
		// if (counterTime <= 0.0f)
		float L_4 = __this->___counterTime_8;
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		// timerEnded();
		TimerSlider_timerEnded_mABEDAD32FBCABCD849DFC308A126F33326FB7EC9(__this, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void TimerSlider::timerEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerSlider_timerEnded_mABEDAD32FBCABCD849DFC308A126F33326FB7EC9 (TimerSlider_tA122A06C993B0C854E93D19EDC1084C402B0D9B4* __this, const RuntimeMethod* method) 
{
	{
		// m_MyEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_MyEvent_5;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// counterTime= targetTime;
		float L_1 = __this->___targetTime_7;
		__this->___counterTime_8 = L_1;
		// weapon.Speed();
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_2 = __this->___weapon_4;
		Tank2DShootSystem_Speed_m6F5DEB8797F900E9AD88CF72F08E4C09E18216EC(L_2, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TimerSlider::RestartTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerSlider_RestartTimer_m300E5B0F7257BD914FB05DF0803FBABA77DE6CAF (TimerSlider_tA122A06C993B0C854E93D19EDC1084C402B0D9B4* __this, const RuntimeMethod* method) 
{
	{
		// timerSlider.maxValue = targetTime;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___timerSlider_6;
		float L_1 = __this->___targetTime_7;
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_0, L_1, NULL);
		// timerSlider.value = targetTime;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___timerSlider_6;
		float L_3 = __this->___targetTime_7;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, L_3);
		// counterTime= targetTime;
		float L_4 = __this->___targetTime_7;
		__this->___counterTime_8 = L_4;
		// }
		return;
	}
}
// System.Void TimerSlider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerSlider__ctor_mED734C0138BDC96E3DAED61396729C7BC802F57D (TimerSlider_tA122A06C993B0C854E93D19EDC1084C402B0D9B4* __this, const RuntimeMethod* method) 
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
// System.Void Effects::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Effects_Start_m986B0D80AC313BBA9DEEE514DD995007048C16AD (Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E* __this, const RuntimeMethod* method) 
{
	{
		// if(startOnLoad)InstantiateEffect();
		bool L_0 = __this->___startOnLoad_7;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if(startOnLoad)InstantiateEffect();
		Effects_InstantiateEffect_mE4D99F0277DFA3687B4F3A345269F3389BC56DBF(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Effects::InstantiateEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Effects_InstantiateEffect_mE4D99F0277DFA3687B4F3A345269F3389BC56DBF (Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D_m776CCB324E2F77A562FA2519CB69F3BD8B3D11DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = Instantiate(fillerelement, placeapparition.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___fillerelement_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___placeapparition_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// instance.GetComponent<TimerDestroyer>().startertime = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5;
		TimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D* L_7;
		L_7 = GameObject_GetComponent_TisTimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D_m776CCB324E2F77A562FA2519CB69F3BD8B3D11DA(L_6, GameObject_GetComponent_TisTimerDestroyer_tC2945EFCF2958C4FDACB5591E3A801A7C40FFD1D_m776CCB324E2F77A562FA2519CB69F3BD8B3D11DA_RuntimeMethod_var);
		L_7->___startertime_6 = (bool)1;
		// instance.GetComponent<Animator>().SetTrigger(NameEffect);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_6, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		String_t* L_9 = __this->___NameEffect_4;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Effects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Effects__ctor_m43728EBA9803CD3F1E06B46E15F4D339D7870378 (Effects_tC120B4FD66432A572E2AC11EB63747D191DF599E* __this, const RuntimeMethod* method) 
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
// System.Void AmmoHUD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmoHUD__ctor_m0544163FE292AF6D34281ED88915F509EEBB18F8 (AmmoHUD_tE1C54E983482F90529FF4C2566BADC656945FD26* __this, const RuntimeMethod* method) 
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
// System.Void ShieldHUD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShieldHUD__ctor_m7064B2E779DD8F939F07958D4BE3B548171520E5 (ShieldHUD_t698DC2B8ADFE815DF9FA8694A78B46EC480AEDDD* __this, const RuntimeMethod* method) 
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
// System.Void SpeedHUD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedHUD__ctor_mEE744249FAE793E5D90F192E2861DB5DD135B338 (SpeedHUD_t482A6FA2DFE06D93637EFA89304A01F6FC80537B* __this, const RuntimeMethod* method) 
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
// System.Void LoadEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadEffect_Start_mBCC2A7E707E71543573C6B0C271BD5F804408104 (LoadEffect_t81BB68327496191ACDBEC355E8617D05B76B1C0F* __this, const RuntimeMethod* method) 
{
	{
		// if(onStart)
		bool L_0 = __this->___onStart_6;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// Effect.SetTrigger(NameEffect);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___Effect_4;
		String_t* L_2 = __this->___NameEffect_5;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void LoadEffect::LoadEffectAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadEffect_LoadEffectAnim_mFC5E69BD45FCED3E0FBF61B8F18256B811E808A5 (LoadEffect_t81BB68327496191ACDBEC355E8617D05B76B1C0F* __this, const RuntimeMethod* method) 
{
	{
		// Effect.SetTrigger(NameEffect);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___Effect_4;
		String_t* L_1 = __this->___NameEffect_5;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LoadEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadEffect__ctor_m53002687224D0E368687ED2476752A89DB596535 (LoadEffect_t81BB68327496191ACDBEC355E8617D05B76B1C0F* __this, const RuntimeMethod* method) 
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
// System.Void mainMenuInput::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainMenuInput_Start_mBB161B8E5DC08D12C206B86938B99BCBAEAC64EC (mainMenuInput_tDD747AF6182F7AE942D4754D1B24E60BA18B1516* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventSystem.current.SetSelectedGameObject(selectedButton);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___selectedButton_12;
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void mainMenuInput::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainMenuInput_FixedUpdate_m21B9914058935126F4C0811F0F5C97999B2EFE47 (mainMenuInput_tDD747AF6182F7AE942D4754D1B24E60BA18B1516* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ABEDB84292C204B8C6686DA012CFD44CAB00935);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C40CE790532B765E659B01F6C1AF98D8B06E6A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36B5261CDBCF95DBB7DA9447BE6C009129905FD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60BB56EE14754E743163E5891FD1A9CB6106AF3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral998760288811781BA6F27E7F4EAD61CB21F5BB52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55287E7C5B1B29E0C38F4EB26BD01879D2C68D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BGTank.SetBool("soloBG", soloBG);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___BGTank_5;
		bool L_1 = __this->___soloBG_16;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral60BB56EE14754E743163E5891FD1A9CB6106AF3B, L_1, NULL);
		// BGTank.SetBool("multiBG", multiBG);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___BGTank_5;
		bool L_3 = __this->___multiBG_17;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral0ABEDB84292C204B8C6686DA012CFD44CAB00935, L_3, NULL);
		// BGTank.SetBool("exitBG", exitBG);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___BGTank_5;
		bool L_5 = __this->___exitBG_18;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteral998760288811781BA6F27E7F4EAD61CB21F5BB52, L_5, NULL);
		// UITank.SetBool("solo", solo);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___UITank_4;
		bool L_7 = __this->___solo_13;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteral1C40CE790532B765E659B01F6C1AF98D8B06E6A1, L_7, NULL);
		// UITank.SetBool("multi", multi);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___UITank_4;
		bool L_9 = __this->___multi_14;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralF55287E7C5B1B29E0C38F4EB26BD01879D2C68D5, L_9, NULL);
		// UITank.SetBool("exit", exit);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___UITank_4;
		bool L_11 = __this->___exit_15;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, L_11, NULL);
		// PressedSolo.SetBool("pressedaction", pressedactionsolo);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___PressedSolo_9;
		bool L_13 = __this->___pressedactionsolo_19;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_12, _stringLiteral36B5261CDBCF95DBB7DA9447BE6C009129905FD6, L_13, NULL);
		// PressedMulti.SetBool("pressedaction", pressedactionmulti);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___PressedMulti_10;
		bool L_15 = __this->___pressedactionmulti_20;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_14, _stringLiteral36B5261CDBCF95DBB7DA9447BE6C009129905FD6, L_15, NULL);
		// PressedExit.SetBool("pressedaction", pressedactionexit);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->___PressedExit_11;
		bool L_17 = __this->___pressedactionexit_21;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_16, _stringLiteral36B5261CDBCF95DBB7DA9447BE6C009129905FD6, L_17, NULL);
		// }
		return;
	}
}
// System.Void mainMenuInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainMenuInput_Update_m74FD0AE34F2696CBE79AD72E001F50DCD2E1501E (mainMenuInput_tDD747AF6182F7AE942D4754D1B24E60BA18B1516* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (EventSystem.current.currentSelectedGameObject == null && Input.GetAxisRaw("Horizontal") !=0)
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		float L_3;
		L_3 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((((float)L_3) == ((float)(0.0f))))
		{
			goto IL_0033;
		}
	}
	{
		// EventSystem.current.SetSelectedGameObject(selectedButton);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___selectedButton_12;
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_4, L_5, NULL);
	}

IL_0033:
	{
		// if (EventSystem.current.currentSelectedGameObject == ButtonSolo)
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_6;
		L_6 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___ButtonSolo_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0089;
		}
	}
	{
		// solo = true;
		__this->___solo_13 = (bool)1;
		// multi = false;
		__this->___multi_14 = (bool)0;
		// exit = false;
		__this->___exit_15 = (bool)0;
		// soloBG = true;
		__this->___soloBG_16 = (bool)1;
		// multiBG = false;
		__this->___multiBG_17 = (bool)0;
		// exitBG = false;
		__this->___exitBG_18 = (bool)0;
		// pressedactionsolo = true;
		__this->___pressedactionsolo_19 = (bool)1;
		// pressedactionmulti = false;
		__this->___pressedactionmulti_20 = (bool)0;
		// pressedactionexit = false;
		__this->___pressedactionexit_21 = (bool)0;
	}

IL_0089:
	{
		// if (EventSystem.current.currentSelectedGameObject == ButtonMulti)
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_10;
		L_10 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___ButtonMulti_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_00df;
		}
	}
	{
		// solo = false;
		__this->___solo_13 = (bool)0;
		// multi = true;
		__this->___multi_14 = (bool)1;
		// exit = false;
		__this->___exit_15 = (bool)0;
		// soloBG = false;
		__this->___soloBG_16 = (bool)0;
		// multiBG = true;
		__this->___multiBG_17 = (bool)1;
		// exitBG = false;
		__this->___exitBG_18 = (bool)0;
		// pressedactionsolo = false;
		__this->___pressedactionsolo_19 = (bool)0;
		// pressedactionmulti = true;
		__this->___pressedactionmulti_20 = (bool)1;
		// pressedactionexit = false;
		__this->___pressedactionexit_21 = (bool)0;
	}

IL_00df:
	{
		// if (EventSystem.current.currentSelectedGameObject == ButtonExit)
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_14;
		L_14 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_14, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___ButtonExit_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_0135;
		}
	}
	{
		// solo = false;
		__this->___solo_13 = (bool)0;
		// multi = false;
		__this->___multi_14 = (bool)0;
		// exit = true;
		__this->___exit_15 = (bool)1;
		// soloBG = false;
		__this->___soloBG_16 = (bool)0;
		// multiBG = false;
		__this->___multiBG_17 = (bool)0;
		// exitBG = true;
		__this->___exitBG_18 = (bool)1;
		// pressedactionsolo = false;
		__this->___pressedactionsolo_19 = (bool)0;
		// pressedactionmulti = false;
		__this->___pressedactionmulti_20 = (bool)0;
		// pressedactionexit = true;
		__this->___pressedactionexit_21 = (bool)1;
	}

IL_0135:
	{
		// }
		return;
	}
}
// System.Void mainMenuInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mainMenuInput__ctor_m007AD3B3E4FA38B8CE25B4A0D507049D28C05093 (mainMenuInput_tDD747AF6182F7AE942D4754D1B24E60BA18B1516* __this, const RuntimeMethod* method) 
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
// System.Void MenuIni::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIni_Start_mDBC14DAF3DA1D3A1436849452E63AE45E9E05725 (MenuIni_t660796B995663DC8A034C1E199ED3D30C43E8430* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventSystem.current.SetSelectedGameObject(selectedButton);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___selectedButton_6;
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MenuIni::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIni_Update_m83D46E890CFDF6C4433571F4469B16D87A6E4B80 (MenuIni_t660796B995663DC8A034C1E199ED3D30C43E8430* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (EventSystem.current.currentSelectedGameObject == null && Input.GetAxisRaw("Vertical") !=0)
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		float L_3;
		L_3 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		if ((((float)L_3) == ((float)(0.0f))))
		{
			goto IL_0033;
		}
	}
	{
		// EventSystem.current.SetSelectedGameObject(selectedButton);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___selectedButton_6;
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_4, L_5, NULL);
	}

IL_0033:
	{
		// if (isMenu)
		bool L_6 = __this->___isMenu_5;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// ActivateMainMenu();
		MenuIni_ActivateMainMenu_m0E6B2A8F750FBED24893BFC22ED93CC136ABE93A(__this, NULL);
		return;
	}

IL_0042:
	{
		// DeactivateMainMenu();
		MenuIni_DeactivateMainMenu_mE21A0878F88332CA18B79DB97607092953D7F1BB(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuIni::ActivateMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIni_ActivateMainMenu_m0E6B2A8F750FBED24893BFC22ED93CC136ABE93A (MenuIni_t660796B995663DC8A034C1E199ED3D30C43E8430* __this, const RuntimeMethod* method) 
{
	{
		// mainMenuUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___mainMenuUI_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MenuIni::DeactivateMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIni_DeactivateMainMenu_mE21A0878F88332CA18B79DB97607092953D7F1BB (MenuIni_t660796B995663DC8A034C1E199ED3D30C43E8430* __this, const RuntimeMethod* method) 
{
	{
		// mainMenuUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___mainMenuUI_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// isMenu = false;
		__this->___isMenu_5 = (bool)0;
		// }
		return;
	}
}
// System.Void MenuIni::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIni__ctor_mBA268FE8DEFA8B09734FCD81815D37E6E24A55AF (MenuIni_t660796B995663DC8A034C1E199ED3D30C43E8430* __this, const RuntimeMethod* method) 
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
// System.Void PauseMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Update_m5097E74BFD4385B73BA9EF7198886DCEC7DF9A83 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (EventSystem.current.currentSelectedGameObject == null && Input.GetAxisRaw("Vertical") !=0)
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		float L_3;
		L_3 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		if ((((float)L_3) == ((float)(0.0f))))
		{
			goto IL_0033;
		}
	}
	{
		// EventSystem.current.SetSelectedGameObject(selectedPauseButton);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___selectedPauseButton_8;
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_4, L_5, NULL);
	}

IL_0033:
	{
		// if(Input.GetButtonDown("Pause") || Input.GetButtonDown("Cancel") && isPaused){
		bool L_6;
		L_6 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, NULL);
		if (L_6)
		{
			goto IL_0053;
		}
	}
	{
		bool L_7;
		L_7 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674, NULL);
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		bool L_8 = __this->___isPaused_5;
		if (!L_8)
		{
			goto IL_0062;
		}
	}

IL_0053:
	{
		// isPaused = !isPaused;
		bool L_9 = __this->___isPaused_5;
		__this->___isPaused_5 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0062:
	{
		// if (isPaused)
		bool L_10 = __this->___isPaused_5;
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		// ActivateMenu();
		PauseMenu_ActivateMenu_m34B912263A9465C89A628D4F2C3C8494B0A169B6(__this, NULL);
		return;
	}

IL_0071:
	{
		// DeactivateMenu();
		PauseMenu_DeactivateMenu_m3E89789E6ED28D19DF9C4A7361E005039BE5CCA4(__this, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::ActivateMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_ActivateMenu_m34B912263A9465C89A628D4F2C3C8494B0A169B6 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!pauseMenuUI.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenuUI_4;
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (L_1)
		{
			goto IL_004f;
		}
	}
	{
		// AudioListener.pause = true;
		AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33((bool)1, NULL);
		// Time.timeScale =0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// pauseMenuUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pauseMenuUI_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// m_MyEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = __this->___m_MyEvent_6;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_3, NULL);
		// EventSystem.current.SetSelectedGameObject(null);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_4, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// EventSystem.current.SetSelectedGameObject(selectedPauseButton);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_5;
		L_5 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___selectedPauseButton_8;
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_5, L_6, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::DeactivateMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_DeactivateMenu_m3E89789E6ED28D19DF9C4A7361E005039BE5CCA4 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioListener.pause = false;
		AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33((bool)0, NULL);
		// Time.timeScale =1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// pauseMenuUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenuUI_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// isPaused = false;
		__this->___isPaused_5 = (bool)0;
		// m_MyEventD.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___m_MyEventD_7;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
		// EventSystem.current.SetSelectedGameObject(null);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2;
		L_2 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_2, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// EventSystem.current.SetSelectedGameObject(selectedPauseButton);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_3;
		L_3 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___selectedPauseButton_8;
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_m81B0E020DC5008DA4D414200BAAF7122B430D826 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
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
// System.Void Tank2DControllers.Tank2DMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_Start_mA677B768113AC6FAB1F67719F5E14D8427CBB1FE (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_6), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Rigidbody2D Tank2DControllers.Tank2DMovement::get_Rigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Tank2DMovement_get_Rigidbody_m0DE3A47752BAB082ABE9D4C6D5AF8C4C5D9B1D03 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_rigidbody) return _rigidbody;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->____rigidbody_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (_rigidbody) return _rigidbody;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->____rigidbody_7;
		return L_2;
	}

IL_0014:
	{
		// _rigidbody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3;
		L_3 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->____rigidbody_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody_7), (void*)L_3);
		// return _rigidbody;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->____rigidbody_7;
		return L_4;
	}
}
// UnityEngine.Transform Tank2DControllers.Tank2DMovement::get_CannonRotor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Tank2DMovement_get_CannonRotor_m6539B98BA88E833F688DD391CEEA7F17E4E90E6C (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6904788C6F25089EBD4EA775308DF7FBE31A8E87);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cannonRotor) return cannonRotor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___cannonRotor_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (cannonRotor) return cannonRotor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___cannonRotor_8;
		return L_2;
	}

IL_0014:
	{
		// cannonRotor = transform.Find("Cannon");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral6904788C6F25089EBD4EA775308DF7FBE31A8E87, NULL);
		__this->___cannonRotor_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cannonRotor_8), (void*)L_4);
		// return cannonRotor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___cannonRotor_8;
		return L_5;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_CannonRotor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_CannonRotor_m214BD974E30FE42B04678C2DC4ED9A35709CCC8B (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => cannonRotor = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___cannonRotor_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cannonRotor_8), (void*)L_0);
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::get_ForwardSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_get_ForwardSpeed_mC50BB6FA46172CCD2F4B5C669C6F0BA6A1EBF804 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => forwardSpeed;
		float L_0 = __this->___forwardSpeed_9;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_ForwardSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_ForwardSpeed_m2EE3CED26874C67771CC88F2DA937FD4163A45A5 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => forwardSpeed = Mathf.Max(0.0f, value);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_0, NULL);
		__this->___forwardSpeed_9 = L_1;
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::get_BackwardSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_get_BackwardSpeed_m575CDEF10E271A5F86D57922E197A5D6B97DA471 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => backwardSpeed;
		float L_0 = __this->___backwardSpeed_10;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_BackwardSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_BackwardSpeed_m2FFED0F19C21CD0281AF011764C58C08C65FF6FF (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => backwardSpeed = Mathf.Max(0.0f, value);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_0, NULL);
		__this->___backwardSpeed_10 = L_1;
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::get_TurnSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_get_TurnSpeed_mAFD29E335ED5CE77ADE456149D13E83575BDFE16 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => turnSpeed;
		float L_0 = __this->___turnSpeed_11;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_TurnSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_TurnSpeed_mA9D90DD1730E5D4F4C0F373A08E61DF8DE9B6A92 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => turnSpeed = Mathf.Max(0.0f, value);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_0, NULL);
		__this->___turnSpeed_11 = L_1;
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::get_SpeedMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_get_SpeedMultiplier_m6221E00A7384540E5877CBB3BD6001BB5F5E898F (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => speedMultiplier;
		float L_0 = __this->___speedMultiplier_12;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_SpeedMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_SpeedMultiplier_m62C13CD00EEDA1F1A04A97C5A8DD4FA397FBDC4C (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => speedMultiplier = Mathf.Max(value, 1.0f);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_0, (1.0f), NULL);
		__this->___speedMultiplier_12 = L_1;
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::get_Speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_get_Speed_mC5044BAE10F0EF865CA22B50F192E79B94453324 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// public float Speed { get; set; }
		float L_0 = __this->___U3CSpeedU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_Speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_Speed_m42B09A481DBC03697B6A7E8266406EFB8599CD55 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Speed { get; set; }
		float L_0 = ___0_value;
		__this->___U3CSpeedU3Ek__BackingField_13 = L_0;
		return;
	}
}
// UnityEngine.Vector2 Tank2DControllers.Tank2DMovement::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Tank2DMovement_get_velocity_m898B7F0D3AE3F17FABEA6BBCD84A674969C5C439 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => Rigidbody.velocity;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Tank2DMovement_get_Rigidbody_m0DE3A47752BAB082ABE9D4C6D5AF8C4C5D9B1D03(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_0, NULL);
		return L_1;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_velocity_m37258D8A8F0AF82E57C029843EB218D1FFA7DA0C (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => Rigidbody.velocity = value;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Tank2DMovement_get_Rigidbody_m0DE3A47752BAB082ABE9D4C6D5AF8C4C5D9B1D03(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_value;
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_0, L_1, NULL);
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::get_currentRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_get_currentRotation_mCC7C1E54559D2FF1D643D52FED35E254C40527F4 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => _currentRotation;
		float L_0 = __this->____currentRotation_14;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_currentRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_currentRotation_m976E2B0B9A1DBBF2E6008097A6A4F92E7559D433 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// _currentRotation = value;
		float L_0 = ___0_value;
		__this->____currentRotation_14 = L_0;
		// Rigidbody.MoveRotation(_currentRotation);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Tank2DMovement_get_Rigidbody_m0DE3A47752BAB082ABE9D4C6D5AF8C4C5D9B1D03(__this, NULL);
		float L_2 = __this->____currentRotation_14;
		Rigidbody2D_MoveRotation_m33BC3C46E2584EB32C6E440AA4E9E58BEEEE8256(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::get_CurrentSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_get_CurrentSpeed_m8EE81766B58A58D355D65FAB9361A6300BED0736 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => _currentSpeed;
		float L_0 = __this->____currentSpeed_15;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_CurrentSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_CurrentSpeed_m89E069819CBCFF91B6CE5F3871057D37D8D8A8D7 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _currentSpeed = Mathf.Max(0.0f, value);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_0, NULL);
		__this->____currentSpeed_15 = L_1;
		return;
	}
}
// UnityEngine.Vector2 Tank2DControllers.Tank2DMovement::get_MovementDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => _movementDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->____movementDirection_16;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_MovementDirection(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_MovementDirection_mEAC7A16D2AB3765E0DD263A85578253E64167DBD (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _movementDirection = Vector3.ClampMagnitude(value, 1.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_1, (1.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		__this->____movementDirection_16 = L_3;
		return;
	}
}
// System.Boolean Tank2DControllers.Tank2DMovement::get_HaltMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tank2DMovement_get_HaltMovement_m7760462F3FC140454AC6FA4896A7F0CAAD8ED735 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => _haltMovement;
		bool L_0 = __this->____haltMovement_17;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_HaltMovement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_HaltMovement_m21330A2B5406BBB0D0BF4EA1880A73287D259D8B (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// _haltMovement = value;
		bool L_0 = ___0_value;
		__this->____haltMovement_17 = L_0;
		// if (_haltMovement) MovementDirection = Vector2.zero;
		bool L_1 = __this->____haltMovement_17;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (_haltMovement) MovementDirection = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Tank2DMovement_set_MovementDirection_mEAC7A16D2AB3765E0DD263A85578253E64167DBD(__this, L_2, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::get_Acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_get_Acceleration_mFBEA511919CF6DF4F0FA14327018D9D6EC77EC48 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => acceleration;
		float L_0 = __this->___acceleration_18;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_Acceleration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_Acceleration_mC82ACE3B715C365F339C16C05CDD8D96376497D4 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => acceleration = Mathf.Max(0.0f, value);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_0, NULL);
		__this->___acceleration_18 = L_1;
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::get_Deceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_get_Deceleration_mEA7E1577E0A0D9EF602A06DD355E6A61D72A108B (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => deceleration;
		float L_0 = __this->___deceleration_19;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_Deceleration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_Deceleration_mDAF8CEA63A70E193750D54A715AB02FA53455EC1 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => deceleration = Mathf.Max(0.0f, value);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_0, NULL);
		__this->___deceleration_19 = L_1;
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::get_MaxHorizontalSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_get_MaxHorizontalSpeed_m90EED88EAAFE59D9E59FEFD9DF0CD4A9D64DBFF0 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => maxHorizontalSpeed;
		float L_0 = __this->___maxHorizontalSpeed_20;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_MaxHorizontalSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_MaxHorizontalSpeed_m9BA33DB6593B3E4782ADF8639BAFC3BF363DDF98 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => maxHorizontalSpeed = Mathf.Max(0.0f, value);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_0, NULL);
		__this->___maxHorizontalSpeed_20 = L_1;
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::get_MaxUpwardSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_get_MaxUpwardSpeed_mE44FF701EA00979C0E27C3B740B6E2BED5611594 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => maxUpwardSpeed;
		float L_0 = __this->___maxUpwardSpeed_21;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_MaxUpwardSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_MaxUpwardSpeed_m6005F198625F8EE0AEAC575B26D8A43F20C2343E (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => maxUpwardSpeed = Mathf.Max(0.0f, value);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_0, NULL);
		__this->___maxUpwardSpeed_21 = L_1;
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::get_MaxDownwardSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_get_MaxDownwardSpeed_m7D6595E04789939916612029425A8A7838C3E80B (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => maxDownwardSpeed;
		float L_0 = __this->___maxDownwardSpeed_22;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_MaxDownwardSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_MaxDownwardSpeed_m5828244EF724CA0868E2A9D7395F4CBEBEE05539 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => maxDownwardSpeed = Mathf.Max(0.0f, value);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_0, NULL);
		__this->___maxDownwardSpeed_22 = L_1;
		return;
	}
}
// UnityEngine.Vector2 Tank2DControllers.Tank2DMovement::get_Friction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Tank2DMovement_get_Friction_mA6575A05FBD4E90BBEE8B340BF3E81967F47142F (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => friction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___friction_23;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_Friction(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_Friction_m5AFBBC48CA514DC5782C22F684E7BD09CF49985F (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// friction.x = Mathf.Max(0.0f, value.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___friction_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_value;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_2, NULL);
		L_0->___x_0 = L_3;
		// friction.y = Mathf.Max(0.0f, value.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___friction_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___0_value;
		float L_6 = L_5.___y_1;
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_6, NULL);
		L_4->___y_1 = L_7;
		// }
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::get_RotorSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_get_RotorSpeed_mAF618A4377642636F5CABEDB5D821C2D44E66C6E (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => rotorSpeed;
		float L_0 = __this->___rotorSpeed_24;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_RotorSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_RotorSpeed_m183D8F18958F23AB53AB4205D16290FD68B4F1EC (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => rotorSpeed = Mathf.Max(0.0f, value);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_0, NULL);
		__this->___rotorSpeed_24 = L_1;
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::get_RotorSmoothSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_get_RotorSmoothSpeed_m65297A19F08F5F7BE0BDF760EF1EBA8B3AA64AD3 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => rotorSmoothSpeed;
		float L_0 = __this->___rotorSmoothSpeed_25;
		return L_0;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::set_RotorSmoothSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_set_RotorSmoothSpeed_m5919D4EB96685D89F30B92B9B5C732636D4D4240 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => rotorSmoothSpeed = Mathf.Max(0.0f, value);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_0, NULL);
		__this->___rotorSmoothSpeed_25 = L_1;
		return;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_HandleInput_m0C6232EF682F62DBA181C5380957D61B90B37B9D (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (pause || HaltMovement) return;
		bool L_0 = __this->___pause_45;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = Tank2DMovement_get_HaltMovement_m7760462F3FC140454AC6FA4896A7F0CAAD8ED735_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if (pause || HaltMovement) return;
		return;
	}

IL_0011:
	{
		// MovementDirection = new Vector2(GetHorizontalInput(),GetVerticalInput());
		float L_2;
		L_2 = Tank2DMovement_GetHorizontalInput_mCFB8341861FBE24598E5CD1AD61C0E97F76E5AFE(__this, NULL);
		float L_3;
		L_3 = Tank2DMovement_GetVerticalInput_m456C5363C7F7F9A0012CFE36D6208415A6572CEA(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Tank2DMovement_set_MovementDirection_mEAC7A16D2AB3765E0DD263A85578253E64167DBD(__this, L_4, NULL);
		// _accelerate = Input.GetButton(accelerateInput);
		String_t* L_5 = __this->___accelerateInput_42;
		bool L_6;
		L_6 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(L_5, NULL);
		__this->____accelerate_41 = L_6;
		// cannonAngle = GetCannonInput();
		float L_7;
		L_7 = Tank2DMovement_GetCannonInput_m4E78EC17B00B83E7F1A68F515599A3F86A0930D6(__this, NULL);
		__this->___cannonAngle_51 = L_7;
		// var x = Mathf.Abs(MovementDirection.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline(__this, NULL);
		float L_9 = L_8.___x_0;
		float L_10;
		L_10 = fabsf(L_9);
		V_0 = L_10;
		// var y = Mathf.Abs(MovementDirection.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline(__this, NULL);
		float L_12 = L_11.___y_1;
		float L_13;
		L_13 = fabsf(L_12);
		V_1 = L_13;
		// if (x > y) MovementDirection = MovementDirection.WithY(0);
		float L_14 = V_0;
		float L_15 = V_1;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_0082;
		}
	}
	{
		// if (x > y) MovementDirection = MovementDirection.WithY(0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = LibraryFunctions_WithY_m2F261415E7644F2B38671C55F18180C2CEDAE8EE(L_16, (0.0f), NULL);
		Tank2DMovement_set_MovementDirection_mEAC7A16D2AB3765E0DD263A85578253E64167DBD(__this, L_17, NULL);
		return;
	}

IL_0082:
	{
		// else if (y > x) MovementDirection = MovementDirection.WithX(0);
		float L_18 = V_1;
		float L_19 = V_0;
		if ((!(((float)L_18) > ((float)L_19))))
		{
			goto IL_009d;
		}
	}
	{
		// else if (y > x) MovementDirection = MovementDirection.WithX(0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = LibraryFunctions_WithX_mC6822C65832A522E3F62B84B5405302EBBBA63BA(L_20, (0.0f), NULL);
		Tank2DMovement_set_MovementDirection_mEAC7A16D2AB3765E0DD263A85578253E64167DBD(__this, L_21, NULL);
		return;
	}

IL_009d:
	{
		// else if (x > 0.69f && y > 0.69f) MovementDirection = MovementDirection.WithY(0) * 1.4285f;
		float L_22 = V_0;
		if ((!(((float)L_22) > ((float)(0.689999998f)))))
		{
			goto IL_00cd;
		}
	}
	{
		float L_23 = V_1;
		if ((!(((float)L_23) > ((float)(0.689999998f)))))
		{
			goto IL_00cd;
		}
	}
	{
		// else if (x > 0.69f && y > 0.69f) MovementDirection = MovementDirection.WithY(0) * 1.4285f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = LibraryFunctions_WithY_m2F261415E7644F2B38671C55F18180C2CEDAE8EE(L_24, (0.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_25, (1.42850006f), NULL);
		Tank2DMovement_set_MovementDirection_mEAC7A16D2AB3765E0DD263A85578253E64167DBD(__this, L_26, NULL);
	}

IL_00cd:
	{
		// }
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::GetHorizontalInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_GetHorizontalInput_mCFB8341861FBE24598E5CD1AD61C0E97F76E5AFE (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var horizontal = Input.GetAxisRaw(keyboardHorizontalInput);
		String_t* L_0 = __this->___keyboardHorizontalInput_29;
		float L_1;
		L_1 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_0, NULL);
		V_0 = L_1;
		// if (Mathf.Abs(horizontal) > 0)
		float L_2 = V_0;
		float L_3;
		L_3 = fabsf(L_2);
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0026;
		}
	}
	{
		// return keyboardInvertHorizontal ? -horizontal : horizontal;
		bool L_4 = __this->___keyboardInvertHorizontal_31;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		return L_5;
	}

IL_0023:
	{
		float L_6 = V_0;
		return ((-L_6));
	}

IL_0026:
	{
		// horizontal = Input.GetAxisRaw(leftJoystickHorizontalInput);
		String_t* L_7 = __this->___leftJoystickHorizontalInput_33;
		float L_8;
		L_8 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_7, NULL);
		V_0 = L_8;
		// if (Mathf.Abs(horizontal) < leftDeadZoneThreshold) return 0;
		float L_9 = V_0;
		float L_10;
		L_10 = fabsf(L_9);
		float L_11 = __this->___leftDeadZoneThreshold_48;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_0046;
		}
	}
	{
		// if (Mathf.Abs(horizontal) < leftDeadZoneThreshold) return 0;
		return (0.0f);
	}

IL_0046:
	{
		// return leftJoystickInvertHorizontal ? -horizontal : horizontal;
		bool L_12 = __this->___leftJoystickInvertHorizontal_35;
		if (L_12)
		{
			goto IL_0050;
		}
	}
	{
		float L_13 = V_0;
		return L_13;
	}

IL_0050:
	{
		float L_14 = V_0;
		return ((-L_14));
	}
}
// System.Single Tank2DControllers.Tank2DMovement::GetVerticalInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_GetVerticalInput_m456C5363C7F7F9A0012CFE36D6208415A6572CEA (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var vertical = Input.GetAxisRaw(keyboardVerticalInput);
		String_t* L_0 = __this->___keyboardVerticalInput_30;
		float L_1;
		L_1 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_0, NULL);
		V_0 = L_1;
		// if (Mathf.Abs(vertical) > 0)
		float L_2 = V_0;
		float L_3;
		L_3 = fabsf(L_2);
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0026;
		}
	}
	{
		// return keyboardInvertVertical ? -vertical : vertical;
		bool L_4 = __this->___keyboardInvertVertical_32;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		return L_5;
	}

IL_0023:
	{
		float L_6 = V_0;
		return ((-L_6));
	}

IL_0026:
	{
		// vertical = Input.GetAxisRaw(leftJoystickVerticalInput);
		String_t* L_7 = __this->___leftJoystickVerticalInput_34;
		float L_8;
		L_8 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_7, NULL);
		V_0 = L_8;
		// if (Mathf.Abs(vertical) < leftDeadZoneThreshold) return 0;
		float L_9 = V_0;
		float L_10;
		L_10 = fabsf(L_9);
		float L_11 = __this->___leftDeadZoneThreshold_48;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_0046;
		}
	}
	{
		// if (Mathf.Abs(vertical) < leftDeadZoneThreshold) return 0;
		return (0.0f);
	}

IL_0046:
	{
		// return leftJoystickInvertVertical ? -vertical : vertical;
		bool L_12 = __this->___leftJoystickInvertVertical_36;
		if (L_12)
		{
			goto IL_0050;
		}
	}
	{
		float L_13 = V_0;
		return L_13;
	}

IL_0050:
	{
		float L_14 = V_0;
		return ((-L_14));
	}
}
// System.Void Tank2DControllers.Tank2DMovement::ProcessInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_ProcessInput_m16F72386C80B1CC0D27703BD19F573B8BE8C062D (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// UpdateVelocity();
		Tank2DMovement_UpdateVelocity_mAD1820E8A01AA9D639897645ABF47306F0907671(__this, NULL);
		// UpdateCannon();
		Tank2DMovement_UpdateCannon_mC5BDC90694B7B6F8EA19D0E9B0733A4E6E8193A9(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Tank2DControllers.Tank2DMovement::InputToVelocity(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Tank2DMovement_InputToVelocity_m987C4959CC88CC6E666D3C9148E17A9935BDDB68 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float* ___0_targetSpeed, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* G_B2_0 = NULL;
	Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* G_B3_1 = NULL;
	{
		// CurrentSpeed = MovementDirection == Vector2.zero ? 0.0f : MovementDirection.magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0023;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline(__this, NULL);
		V_1 = L_3;
		float L_4;
		L_4 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_1), NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0023:
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		Tank2DMovement_set_CurrentSpeed_m89E069819CBCFF91B6CE5F3871057D37D8D8A8D7(G_B3_1, G_B3_0, NULL);
		// targetSpeed = 0;
		float* L_5 = ___0_targetSpeed;
		*((float*)L_5) = (float)(0.0f);
		// if(Mathf.Abs(MovementDirection.x) > 0) targetSpeed = turnSpeed * CurrentSpeed;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline(__this, NULL);
		float L_7 = L_6.___x_0;
		float L_8;
		L_8 = fabsf(L_7);
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_005a;
		}
	}
	{
		// if(Mathf.Abs(MovementDirection.x) > 0) targetSpeed = turnSpeed * CurrentSpeed;
		float* L_9 = ___0_targetSpeed;
		float L_10 = __this->___turnSpeed_11;
		float L_11;
		L_11 = Tank2DMovement_get_CurrentSpeed_m8EE81766B58A58D355D65FAB9361A6300BED0736_inline(__this, NULL);
		*((float*)L_9) = (float)((float)il2cpp_codegen_multiply(L_10, L_11));
	}

IL_005a:
	{
		// if (_accelerate)CurrentSpeed *= speedMultiplier;
		bool L_12 = __this->____accelerate_41;
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		// if (_accelerate)CurrentSpeed *= speedMultiplier;
		float L_13;
		L_13 = Tank2DMovement_get_CurrentSpeed_m8EE81766B58A58D355D65FAB9361A6300BED0736_inline(__this, NULL);
		float L_14 = __this->___speedMultiplier_12;
		Tank2DMovement_set_CurrentSpeed_m89E069819CBCFF91B6CE5F3871057D37D8D8A8D7(__this, ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
	}

IL_0075:
	{
		// if (MovementDirection.y < 0.0f) targetSpeed = backwardSpeed * CurrentSpeed;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline(__this, NULL);
		float L_16 = L_15.___y_1;
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_0098;
		}
	}
	{
		// if (MovementDirection.y < 0.0f) targetSpeed = backwardSpeed * CurrentSpeed;
		float* L_17 = ___0_targetSpeed;
		float L_18 = __this->___backwardSpeed_10;
		float L_19;
		L_19 = Tank2DMovement_get_CurrentSpeed_m8EE81766B58A58D355D65FAB9361A6300BED0736_inline(__this, NULL);
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply(L_18, L_19));
		goto IL_00b9;
	}

IL_0098:
	{
		// else if (MovementDirection.y > 0.0f) targetSpeed = forwardSpeed * CurrentSpeed;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline(__this, NULL);
		float L_21 = L_20.___y_1;
		if ((!(((float)L_21) > ((float)(0.0f)))))
		{
			goto IL_00b9;
		}
	}
	{
		// else if (MovementDirection.y > 0.0f) targetSpeed = forwardSpeed * CurrentSpeed;
		float* L_22 = ___0_targetSpeed;
		float L_23 = __this->___forwardSpeed_9;
		float L_24;
		L_24 = Tank2DMovement_get_CurrentSpeed_m8EE81766B58A58D355D65FAB9361A6300BED0736_inline(__this, NULL);
		*((float*)L_22) = (float)((float)il2cpp_codegen_multiply(L_23, L_24));
	}

IL_00b9:
	{
		// OverrideInput(ref targetSpeed);
		float* L_25 = ___0_targetSpeed;
		Tank2DMovement_OverrideInput_m788F6D37B25ACE8A4FE0135819B68437575C268F(__this, L_25, NULL);
		// Speed = targetSpeed;
		float* L_26 = ___0_targetSpeed;
		float L_27 = *((float*)L_26);
		Tank2DMovement_set_Speed_m42B09A481DBC03697B6A7E8266406EFB8599CD55_inline(__this, L_27, NULL);
		// var newVelocity = MovementDirection * targetSpeed;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline(__this, NULL);
		float* L_29 = ___0_targetSpeed;
		float L_30 = *((float*)L_29);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_28, L_30, NULL);
		V_0 = L_31;
		// newVelocity = transform.TransformDirection(newVelocity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_32, L_34, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_35, NULL);
		V_0 = L_36;
		// return newVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_0;
		return L_37;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::OverrideInput(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_OverrideInput_m788F6D37B25ACE8A4FE0135819B68437575C268F (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float* ___0_targetSpeed, const RuntimeMethod* method) 
{
	{
		// if (targetSpeed.IsZero()) return;
		float* L_0 = ___0_targetSpeed;
		float L_1 = *((float*)L_0);
		bool L_2;
		L_2 = LibraryFunctions_IsZero_m936446C5DDE0AC1A7498554F84DBE66CB136A177(L_1, NULL);
		// if (targetSpeed.IsZero()) return;
		return;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::UpdateVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_UpdateVelocity_mAD1820E8A01AA9D639897645ABF47306F0907671 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// var currentVelocity = velocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Tank2DMovement_get_velocity_m898B7F0D3AE3F17FABEA6BBCD84A674969C5C439(__this, NULL);
		V_0 = L_0;
		// var deltaTime = Time.deltaTime;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_1 = L_1;
		// var targetVelocity = InputToVelocity(out var targetSpeed);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Tank2DMovement_InputToVelocity_m987C4959CC88CC6E666D3C9148E17A9935BDDB68(__this, (&V_3), NULL);
		V_2 = L_2;
		// ApplyMovement(ref currentVelocity, targetVelocity, targetSpeed, deltaTime);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_2;
		float L_4 = V_3;
		float L_5 = V_1;
		Tank2DMovement_ApplyMovement_m52A2DD6737465BCC79B882B085821AA621F16FA0(__this, (&V_0), L_3, L_4, L_5, NULL);
		// LimitVelocity(ref currentVelocity);
		Tank2DMovement_LimitVelocity_m4C2161500EFBB7000B5E879F8E5128D6BB3650DB(__this, (&V_0), NULL);
		// if(!currentVelocity.IsNaN()) velocity = currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		bool L_7;
		L_7 = LibraryFunctions_IsNaN_m3C6429C07F554C82B934EF0E6C5A73581AF87B93(L_6, NULL);
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		// if(!currentVelocity.IsNaN()) velocity = currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		Tank2DMovement_set_velocity_m37258D8A8F0AF82E57C029843EB218D1FFA7DA0C(__this, L_8, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::ApplyMovement(UnityEngine.Vector2&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_ApplyMovement_m52A2DD6737465BCC79B882B085821AA621F16FA0 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_currentVelocity, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_targetVelocity, float ___2_targetSpeed, float ___3_deltaTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var torque = -MovementDirection.x * Mathf.Clamp01(1f - Friction.x * deltaTime);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline(__this, NULL);
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Tank2DMovement_get_Friction_mA6575A05FBD4E90BBEE8B340BF3E81967F47142F_inline(__this, NULL);
		float L_3 = L_2.___x_0;
		float L_4 = ___3_deltaTime;
		float L_5;
		L_5 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_3, L_4)))), NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((-L_1)), L_5));
		// currentRotation += torque * targetSpeed;
		float L_6;
		L_6 = Tank2DMovement_get_currentRotation_mCC7C1E54559D2FF1D643D52FED35E254C40527F4_inline(__this, NULL);
		float L_7 = V_0;
		float L_8 = ___2_targetSpeed;
		Tank2DMovement_set_currentRotation_m976E2B0B9A1DBBF2E6008097A6A4F92E7559D433(__this, ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)))), NULL);
		// if(Mathf.Abs(MovementDirection.x) > 0) targetVelocity = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline(__this, NULL);
		float L_10 = L_9.___x_0;
		float L_11;
		L_11 = fabsf(L_10);
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		// if(Mathf.Abs(MovementDirection.x) > 0) targetVelocity = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		___1_targetVelocity = L_12;
	}

IL_0055:
	{
		// var newVelocity = currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = ___0_currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_13);
		V_1 = L_14;
		// var targetDirection = targetVelocity / targetSpeed;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___1_targetVelocity;
		float L_16 = ___2_targetSpeed;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_15, L_16, NULL);
		V_2 = L_17;
		// var targetAcceleration = targetDirection * (Acceleration * deltaTime);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_2;
		float L_19;
		L_19 = Tank2DMovement_get_Acceleration_mFBEA511919CF6DF4F0FA14327018D9D6EC77EC48_inline(__this, NULL);
		float L_20 = ___3_deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_18, ((float)il2cpp_codegen_multiply(L_19, L_20)), NULL);
		V_3 = L_21;
		// if (targetAcceleration.IsZero() || newVelocity.IsExceeding(targetSpeed))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_3;
		bool L_23;
		L_23 = LibraryFunctions_IsZero_m4BE5E1A876D26E25BD300D5302E163EC0D7193AB(L_22, NULL);
		if (L_23)
		{
			goto IL_0085;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_1;
		float L_25 = ___2_targetSpeed;
		bool L_26;
		L_26 = LibraryFunctions_IsExceeding_mCA101BE0FB330E356BCF4C1B52C2E90CC14B92AD(L_24, L_25, NULL);
		if (!L_26)
		{
			goto IL_00c7;
		}
	}

IL_0085:
	{
		// newVelocity *= Mathf.Clamp01(1f - Friction.y * deltaTime);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Tank2DMovement_get_Friction_mA6575A05FBD4E90BBEE8B340BF3E81967F47142F_inline(__this, NULL);
		float L_29 = L_28.___y_1;
		float L_30 = ___3_deltaTime;
		float L_31;
		L_31 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_29, L_30)))), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_27, L_31, NULL);
		V_1 = L_32;
		// newVelocity = Vector3.MoveTowards(newVelocity, targetVelocity, Deceleration * deltaTime);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_33, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = ___1_targetVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_35, NULL);
		float L_37;
		L_37 = Tank2DMovement_get_Deceleration_mEA7E1577E0A0D9EF602A06DD355E6A61D72A108B_inline(__this, NULL);
		float L_38 = ___3_deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_34, L_36, ((float)il2cpp_codegen_multiply(L_37, L_38)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_39, NULL);
		V_1 = L_40;
		goto IL_010c;
	}

IL_00c7:
	{
		// newVelocity -= (newVelocity - targetDirection * newVelocity.magnitude) * (Friction.x  * deltaTime);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = V_2;
		float L_44;
		L_44 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		L_45 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_43, L_44, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_42, L_45, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Tank2DMovement_get_Friction_mA6575A05FBD4E90BBEE8B340BF3E81967F47142F_inline(__this, NULL);
		float L_48 = L_47.___x_0;
		float L_49 = ___3_deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_46, ((float)il2cpp_codegen_multiply(L_48, L_49)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		L_51 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_41, L_50, NULL);
		V_1 = L_51;
		// newVelocity = Vector3.ClampMagnitude(newVelocity + targetAcceleration, targetSpeed);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		L_54 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_52, L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_54, NULL);
		float L_56 = ___2_targetSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_55, L_56, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_57, NULL);
		V_1 = L_58;
	}

IL_010c:
	{
		// currentVelocity += newVelocity - currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_59 = ___0_currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_60 = ___0_currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_60);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_63 = ___0_currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_63);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		L_65 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_62, L_64, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		L_66 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_61, L_65, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_59 = L_66;
		// }
		return;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::LimitVelocity(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_LimitVelocity_m4C2161500EFBB7000B5E879F8E5128D6BB3650DB (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_currentVelocity, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (!limitMaximumSpeed) return;
		bool L_0 = __this->___limitMaximumSpeed_50;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!limitMaximumSpeed) return;
		return;
	}

IL_0009:
	{
		// var horizontalVelocity = currentVelocity.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = ___0_currentVelocity;
		float L_2 = L_1->___x_0;
		V_0 = L_2;
		// var verticalVelocity = currentVelocity.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = ___0_currentVelocity;
		float L_4 = L_3->___y_1;
		V_1 = L_4;
		// if (horizontalVelocity > MaxHorizontalSpeed)
		float L_5 = V_0;
		float L_6;
		L_6 = Tank2DMovement_get_MaxHorizontalSpeed_m90EED88EAAFE59D9E59FEFD9DF0CD4A9D64DBFF0_inline(__this, NULL);
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0045;
		}
	}
	{
		// currentVelocity += Vector2.zero.WithX(MaxHorizontalSpeed - horizontalVelocity);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = ___0_currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		float L_11;
		L_11 = Tank2DMovement_get_MaxHorizontalSpeed_m90EED88EAAFE59D9E59FEFD9DF0CD4A9D64DBFF0_inline(__this, NULL);
		float L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = LibraryFunctions_WithX_mC6822C65832A522E3F62B84B5405302EBBBA63BA(L_10, ((float)il2cpp_codegen_subtract(L_11, L_12)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_9, L_13, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_7 = L_14;
		goto IL_0073;
	}

IL_0045:
	{
		// else if (horizontalVelocity < -MaxHorizontalSpeed)
		float L_15 = V_0;
		float L_16;
		L_16 = Tank2DMovement_get_MaxHorizontalSpeed_m90EED88EAAFE59D9E59FEFD9DF0CD4A9D64DBFF0_inline(__this, NULL);
		if ((!(((float)L_15) < ((float)((-L_16))))))
		{
			goto IL_0073;
		}
	}
	{
		// currentVelocity += Vector2.zero.WithX(-MaxHorizontalSpeed - horizontalVelocity);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = ___0_currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = ___0_currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		float L_21;
		L_21 = Tank2DMovement_get_MaxHorizontalSpeed_m90EED88EAAFE59D9E59FEFD9DF0CD4A9D64DBFF0_inline(__this, NULL);
		float L_22 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = LibraryFunctions_WithX_mC6822C65832A522E3F62B84B5405302EBBBA63BA(L_20, ((float)il2cpp_codegen_subtract(((-L_21)), L_22)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_19, L_23, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_17 = L_24;
	}

IL_0073:
	{
		// if (verticalVelocity > MaxUpwardSpeed)
		float L_25 = V_1;
		float L_26;
		L_26 = Tank2DMovement_get_MaxUpwardSpeed_mE44FF701EA00979C0E27C3B740B6E2BED5611594_inline(__this, NULL);
		if ((!(((float)L_25) > ((float)L_26))))
		{
			goto IL_00a0;
		}
	}
	{
		// currentVelocity += Vector2.zero.WithY(MaxUpwardSpeed - verticalVelocity);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_27 = ___0_currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = ___0_currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		float L_31;
		L_31 = Tank2DMovement_get_MaxUpwardSpeed_mE44FF701EA00979C0E27C3B740B6E2BED5611594_inline(__this, NULL);
		float L_32 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = LibraryFunctions_WithY_m2F261415E7644F2B38671C55F18180C2CEDAE8EE(L_30, ((float)il2cpp_codegen_subtract(L_31, L_32)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_29, L_33, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_27 = L_34;
		return;
	}

IL_00a0:
	{
		// else if (verticalVelocity < -MaxDownwardSpeed)
		float L_35 = V_1;
		float L_36;
		L_36 = Tank2DMovement_get_MaxDownwardSpeed_m7D6595E04789939916612029425A8A7838C3E80B_inline(__this, NULL);
		if ((!(((float)L_35) < ((float)((-L_36))))))
		{
			goto IL_00ce;
		}
	}
	{
		// currentVelocity += Vector2.zero.WithY(-MaxDownwardSpeed - verticalVelocity);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_37 = ___0_currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_38 = ___0_currentVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_38);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		float L_41;
		L_41 = Tank2DMovement_get_MaxDownwardSpeed_m7D6595E04789939916612029425A8A7838C3E80B_inline(__this, NULL);
		float L_42 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = LibraryFunctions_WithY_m2F261415E7644F2B38671C55F18180C2CEDAE8EE(L_40, ((float)il2cpp_codegen_subtract(((-L_41)), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_39, L_43, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_37 = L_44;
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Single Tank2DControllers.Tank2DMovement::GetCannonInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tank2DMovement_GetCannonInput_m4E78EC17B00B83E7F1A68F515599A3F86A0930D6 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float G_B8_0 = 0.0f;
	float G_B11_0 = 0.0f;
	int32_t G_B14_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (camera == null) return 0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___camera_47;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (camera == null) return 0;
		return (0.0f);
	}

IL_0014:
	{
		// var mouseInput = Input.mousePosition.xy();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = LibraryFunctions_xy_m23350819B057EF9C0B832E3A35AA0E25A864EEC8(L_2, NULL);
		V_0 = L_3;
		// var useMouse = mouseInput != _previousMouseInput;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->____previousMouseInput_43;
		bool L_6;
		L_6 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_4, L_5, NULL);
		// if(useMouse && MouseAim)
		if (!L_6)
		{
			goto IL_0084;
		}
	}
	{
		bool L_7 = __this->___MouseAim_5;
		if (!L_7)
		{
			goto IL_0084;
		}
	}
	{
		// _previousMouseInput = mouseInput;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		__this->____previousMouseInput_43 = L_8;
		// _previousJoystickInput = mouseInput;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		__this->____previousJoystickInput_44 = L_9;
		// var screenPos = camera.WorldToScreenPoint(CannonRotor.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___camera_47;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Tank2DMovement_get_CannonRotor_m6539B98BA88E833F688DD391CEEA7F17E4E90E6C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_10, L_12, NULL);
		V_4 = L_13;
		// var offset = mouseInput - screenPos.xy();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = LibraryFunctions_xy_m23350819B057EF9C0B832E3A35AA0E25A864EEC8(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_14, L_16, NULL);
		V_5 = L_17;
		// return Mathf.Atan2(offset.x, offset.y) * Mathf.Rad2Deg;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_5;
		float L_19 = L_18.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_5;
		float L_21 = L_20.___y_1;
		float L_22;
		L_22 = atan2f(L_19, L_21);
		return ((float)il2cpp_codegen_multiply(L_22, (57.2957802f)));
	}

IL_0084:
	{
		// var horizontal = Input.GetAxisRaw(rightJoystickHorizontalInput);
		String_t* L_23 = __this->___rightJoystickHorizontalInput_37;
		float L_24;
		L_24 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_23, NULL);
		V_1 = L_24;
		// var vertical = Input.GetAxisRaw(rightJoystickVerticalInput);
		String_t* L_25 = __this->___rightJoystickVerticalInput_38;
		float L_26;
		L_26 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_25, NULL);
		V_2 = L_26;
		// horizontal = leftJoystickInvertHorizontal ? -horizontal : horizontal;
		bool L_27 = __this->___leftJoystickInvertHorizontal_35;
		if (L_27)
		{
			goto IL_00a7;
		}
	}
	{
		float L_28 = V_1;
		G_B8_0 = L_28;
		goto IL_00a9;
	}

IL_00a7:
	{
		float L_29 = V_1;
		G_B8_0 = ((-L_29));
	}

IL_00a9:
	{
		V_1 = G_B8_0;
		// vertical = leftJoystickInvertVertical ? -vertical : vertical;
		bool L_30 = __this->___leftJoystickInvertVertical_36;
		if (L_30)
		{
			goto IL_00b5;
		}
	}
	{
		float L_31 = V_2;
		G_B11_0 = L_31;
		goto IL_00b7;
	}

IL_00b5:
	{
		float L_32 = V_2;
		G_B11_0 = ((-L_32));
	}

IL_00b7:
	{
		V_2 = G_B11_0;
		// var joystickInput = new Vector2(horizontal, vertical);
		float L_33 = V_1;
		float L_34 = V_2;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), L_33, L_34, NULL);
		// var newInput = Mathf.Abs(horizontal) > 0.2f || Mathf.Abs(vertical) > 0.2f;
		float L_35 = V_1;
		float L_36;
		L_36 = fabsf(L_35);
		if ((((float)L_36) > ((float)(0.200000003f))))
		{
			goto IL_00dd;
		}
	}
	{
		float L_37 = V_2;
		float L_38;
		L_38 = fabsf(L_37);
		G_B14_0 = ((((float)L_38) > ((float)(0.200000003f)))? 1 : 0);
		goto IL_00de;
	}

IL_00dd:
	{
		G_B14_0 = 1;
	}

IL_00de:
	{
		// var useJoystick = newInput && joystickInput != _previousJoystickInput;
		if (!G_B14_0)
		{
			goto IL_00ee;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = __this->____previousJoystickInput_44;
		bool L_41;
		L_41 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_39, L_40, NULL);
		G_B17_0 = ((int32_t)(L_41));
		goto IL_00ef;
	}

IL_00ee:
	{
		G_B17_0 = 0;
	}

IL_00ef:
	{
		// if (!useJoystick)
		if (G_B17_0)
		{
			goto IL_016c;
		}
	}
	{
		// if (_previousJoystickInput != _previousMouseInput) return Mathf.Atan2(_previousJoystickInput.x, _previousJoystickInput.y) * Mathf.Rad2Deg;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = __this->____previousJoystickInput_44;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = __this->____previousMouseInput_43;
		bool L_44;
		L_44 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_42, L_43, NULL);
		if (!L_44)
		{
			goto IL_0126;
		}
	}
	{
		// if (_previousJoystickInput != _previousMouseInput) return Mathf.Atan2(_previousJoystickInput.x, _previousJoystickInput.y) * Mathf.Rad2Deg;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_45 = (&__this->____previousJoystickInput_44);
		float L_46 = L_45->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_47 = (&__this->____previousJoystickInput_44);
		float L_48 = L_47->___y_1;
		float L_49;
		L_49 = atan2f(L_46, L_48);
		return ((float)il2cpp_codegen_multiply(L_49, (57.2957802f)));
	}

IL_0126:
	{
		// var screenPos = camera.WorldToScreenPoint(CannonRotor.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_50 = __this->___camera_47;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Tank2DMovement_get_CannonRotor_m6539B98BA88E833F688DD391CEEA7F17E4E90E6C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_50, L_52, NULL);
		V_6 = L_53;
		// var offset = _previousJoystickInput - screenPos.xy();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = __this->____previousJoystickInput_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		L_56 = LibraryFunctions_xy_m23350819B057EF9C0B832E3A35AA0E25A864EEC8(L_55, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_54, L_56, NULL);
		V_7 = L_57;
		// return Mathf.Atan2(offset.x, offset.y) * Mathf.Rad2Deg;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_7;
		float L_59 = L_58.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = V_7;
		float L_61 = L_60.___y_1;
		float L_62;
		L_62 = atan2f(L_59, L_61);
		return ((float)il2cpp_codegen_multiply(L_62, (57.2957802f)));
	}

IL_016c:
	{
		// _previousJoystickInput = joystickInput;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = V_3;
		__this->____previousJoystickInput_44 = L_63;
		// return Mathf.Atan2(horizontal, vertical) * Mathf.Rad2Deg;
		float L_64 = V_1;
		float L_65 = V_2;
		float L_66;
		L_66 = atan2f(L_64, L_65);
		return ((float)il2cpp_codegen_multiply(L_66, (57.2957802f)));
	}
}
// System.Void Tank2DControllers.Tank2DMovement::UpdateCannon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_UpdateCannon_mC5BDC90694B7B6F8EA19D0E9B0733A4E6E8193A9 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// if (camera == null) return;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___camera_47;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (camera == null) return;
		return;
	}

IL_000f:
	{
		// var newRotation = Quaternion.AngleAxis(cannonAngle, Vector3.back);
		float L_2 = __this->___cannonAngle_51;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_2, L_3, NULL);
		V_0 = L_4;
		// switch(rotorRotationMethod)
		int32_t L_5 = __this->___rotorRotationMethod_46;
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_0084;
			}
			case 3:
			{
				goto IL_00af;
			}
			case 4:
			{
				goto IL_00dc;
			}
		}
	}
	{
		goto IL_0105;
	}

IL_0046:
	{
		// CannonRotor.rotation = newRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Tank2DMovement_get_CannonRotor_m6539B98BA88E833F688DD391CEEA7F17E4E90E6C(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_0;
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_8, NULL);
		// break;
		return;
	}

IL_0053:
	{
		// var smoothTime = (RotorSpeed * 100) * Time.deltaTime;
		float L_9;
		L_9 = Tank2DMovement_get_RotorSpeed_mAF618A4377642636F5CABEDB5D821C2D44E66C6E_inline(__this, NULL);
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_9, (100.0f))), L_10));
		// CannonRotor.rotation = Quaternion.RotateTowards(CannonRotor.rotation, newRotation, smoothTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Tank2DMovement_get_CannonRotor_m6539B98BA88E833F688DD391CEEA7F17E4E90E6C(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Tank2DMovement_get_CannonRotor_m6539B98BA88E833F688DD391CEEA7F17E4E90E6C(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_0;
		float L_15 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline(L_13, L_14, L_15, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_16, NULL);
		// break;
		return;
	}

IL_0084:
	{
		// var smoothTime = RotorSpeed * Time.deltaTime;
		float L_17;
		L_17 = Tank2DMovement_get_RotorSpeed_mAF618A4377642636F5CABEDB5D821C2D44E66C6E_inline(__this, NULL);
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_3 = ((float)il2cpp_codegen_multiply(L_17, L_18));
		// CannonRotor.rotation = Quaternion.Lerp(CannonRotor.rotation, newRotation, smoothTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Tank2DMovement_get_CannonRotor_m6539B98BA88E833F688DD391CEEA7F17E4E90E6C(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Tank2DMovement_get_CannonRotor_m6539B98BA88E833F688DD391CEEA7F17E4E90E6C(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = V_0;
		float L_23 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_21, L_22, L_23, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_19, L_24, NULL);
		// break;
		return;
	}

IL_00af:
	{
		// var smoothTime = RotorSpeed * Time.deltaTime;
		float L_25;
		L_25 = Tank2DMovement_get_RotorSpeed_mAF618A4377642636F5CABEDB5D821C2D44E66C6E_inline(__this, NULL);
		float L_26;
		L_26 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_4 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		// CannonRotor.rotation = Quaternion.Slerp(CannonRotor.rotation, newRotation, smoothTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Tank2DMovement_get_CannonRotor_m6539B98BA88E833F688DD391CEEA7F17E4E90E6C(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Tank2DMovement_get_CannonRotor_m6539B98BA88E833F688DD391CEEA7F17E4E90E6C(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_28, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_0;
		float L_31 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_29, L_30, L_31, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_27, L_32, NULL);
		// break;
		return;
	}

IL_00dc:
	{
		// CannonRotor.rotation = LibraryFunctions.SmoothDamp(CannonRotor.rotation, newRotation,
		//     ref cannonVelocity, rotorSmoothSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Tank2DMovement_get_CannonRotor_m6539B98BA88E833F688DD391CEEA7F17E4E90E6C(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Tank2DMovement_get_CannonRotor_m6539B98BA88E833F688DD391CEEA7F17E4E90E6C(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_34, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_37 = (&__this->___cannonVelocity_52);
		float L_38 = __this->___rotorSmoothSpeed_25;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = LibraryFunctions_SmoothDamp_mA40287B4C6FDDF154EEAEC715EA26B9A215D2D10(L_35, L_36, L_37, L_38, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_33, L_39, NULL);
		// break;
		return;
	}

IL_0105:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_40 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_40, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tank2DMovement_UpdateCannon_mC5BDC90694B7B6F8EA19D0E9B0733A4E6E8193A9_RuntimeMethod_var)));
	}
}
// System.Void Tank2DControllers.Tank2DMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_Update_m56D7144E8089ABC3F79B4509C2705388A8472710 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5C25B77D6B0C426E4F883AAD29E42E5C88C7770);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// anim.SetFloat("Speed", GetComponent<Rigidbody2D>().velocity.magnitude);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_6;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_0, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, L_3, NULL);
		// HandleInput();
		Tank2DMovement_HandleInput_m0C6232EF682F62DBA181C5380957D61B90B37B9D(__this, NULL);
		// if (Input.GetButton(keyboardVerticalInput) && Input.GetAxis(keyboardVerticalInput) > 0 || Input.GetAxis(keyboardVerticalInput) > 0)
		String_t* L_4 = __this->___keyboardVerticalInput_30;
		bool L_5;
		L_5 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(L_4, NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_6 = __this->___keyboardVerticalInput_30;
		float L_7;
		L_7 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_6, NULL);
		if ((((float)L_7) > ((float)(0.0f))))
		{
			goto IL_005a;
		}
	}

IL_0048:
	{
		String_t* L_8 = __this->___keyboardVerticalInput_30;
		float L_9;
		L_9 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_8, NULL);
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_007c;
		}
	}

IL_005a:
	{
		// anim.SetBool("Forward",true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___anim_6;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1, (bool)1, NULL);
		// anim.SetBool("Backward", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___anim_6;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_11, _stringLiteralD5C25B77D6B0C426E4F883AAD29E42E5C88C7770, (bool)0, NULL);
	}

IL_007c:
	{
		// if (Input.GetButton(keyboardVerticalInput) && Input.GetAxis(keyboardVerticalInput) < 0 || Input.GetAxis(keyboardVerticalInput) < 0 )
		String_t* L_12 = __this->___keyboardVerticalInput_30;
		bool L_13;
		L_13 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(L_12, NULL);
		if (!L_13)
		{
			goto IL_009b;
		}
	}
	{
		String_t* L_14 = __this->___keyboardVerticalInput_30;
		float L_15;
		L_15 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_14, NULL);
		if ((((float)L_15) < ((float)(0.0f))))
		{
			goto IL_00ad;
		}
	}

IL_009b:
	{
		String_t* L_16 = __this->___keyboardVerticalInput_30;
		float L_17;
		L_17 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_16, NULL);
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			goto IL_00cf;
		}
	}

IL_00ad:
	{
		// anim.SetBool("Backward", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = __this->___anim_6;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_18, _stringLiteralD5C25B77D6B0C426E4F883AAD29E42E5C88C7770, (bool)1, NULL);
		// anim.SetBool("Forward",false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_19 = __this->___anim_6;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_19, _stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1, (bool)0, NULL);
	}

IL_00cf:
	{
		// if(Input.GetButtonDown(ShootInput)){
		String_t* L_20 = __this->___ShootInput_27;
		bool L_21;
		L_21 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_20, NULL);
		if (!L_21)
		{
			goto IL_00e7;
		}
	}
	{
		// weapon.Shoot();
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_22 = __this->___weapon_53;
		Tank2DShootSystem_Shoot_m20D51D3AD595A6DA932FECE1EB6CEFD70FAC52B3(L_22, NULL);
	}

IL_00e7:
	{
		// if(Input.GetButtonDown(ShieldInput)){
		String_t* L_23 = __this->___ShieldInput_28;
		bool L_24;
		L_24 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_23, NULL);
		if (!L_24)
		{
			goto IL_00ff;
		}
	}
	{
		// weapon.Shield();
		Tank2DShootSystem_tF96B05F1B06C1C077D0C69D2D32F4B80A177B971* L_25 = __this->___weapon_53;
		Tank2DShootSystem_Shield_m58BF80269854F04F0656DF783C21117A180EFA43(L_25, NULL);
	}

IL_00ff:
	{
		// }
		return;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement_FixedUpdate_mECCFC18AEA6711A1A17D29613B539A72443958EF (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// ProcessInput();
		Tank2DMovement_ProcessInput_m16F72386C80B1CC0D27703BD19F573B8BE8C062D(__this, NULL);
		// }
		return;
	}
}
// System.Void Tank2DControllers.Tank2DMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tank2DMovement__ctor_m9428791AEFF034F0557CE4E55A5D034D840D7DF7 (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0549601E569B22E43E64BA4E87DE09DBE74DD1B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402C6E3ED23DA5C25388A2C7380FF5A1731F7107);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51452628837BAB7C283227D4421383559F8F9A27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61F286CA98AA084927C9A5C29EF0A1E9BB34770D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A33FE33BA2472F54E326BFE6F0AC8F486AFA318);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFB9DAA21FF5FBDDD3BE3EFA35A1C531B36AF68A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] public float forwardSpeed = 10.0f;
		__this->___forwardSpeed_9 = (10.0f);
		// [SerializeField] public float backwardSpeed = 6.0f;
		__this->___backwardSpeed_10 = (6.0f);
		// [SerializeField] private float turnSpeed = 5.0f;
		__this->___turnSpeed_11 = (5.0f);
		// [SerializeField] private float speedMultiplier = 2.0f;
		__this->___speedMultiplier_12 = (2.0f);
		// [SerializeField] public float acceleration = 50.0f;
		__this->___acceleration_18 = (50.0f);
		// [SerializeField] public float deceleration = 10.0f;
		__this->___deceleration_19 = (10.0f);
		// [SerializeField] private float maxHorizontalSpeed = 100.0f;
		__this->___maxHorizontalSpeed_20 = (100.0f);
		// [SerializeField] private float maxUpwardSpeed = 100.0f;
		__this->___maxUpwardSpeed_21 = (100.0f);
		// [SerializeField] private float maxDownwardSpeed = 100.0f;
		__this->___maxDownwardSpeed_22 = (100.0f);
		// [SerializeField] private Vector2 friction = new Vector2(10.0f, 2.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (10.0f), (2.0f), /*hidden argument*/NULL);
		__this->___friction_23 = L_0;
		// [SerializeField] private float rotorSpeed = 5.0f;
		__this->___rotorSpeed_24 = (5.0f);
		// [SerializeField] private float rotorSmoothSpeed = 0.2f;
		__this->___rotorSmoothSpeed_25 = (0.200000003f);
		// [HideInInspector] public bool[] hideSection = new bool[6];
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___hideSection_26 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hideSection_26), (void*)L_1);
		// public string ShootInput ="Shoot";
		__this->___ShootInput_27 = _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShootInput_27), (void*)_stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8);
		// public string ShieldInput = "Shield";
		__this->___ShieldInput_28 = _stringLiteral51452628837BAB7C283227D4421383559F8F9A27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShieldInput_28), (void*)_stringLiteral51452628837BAB7C283227D4421383559F8F9A27);
		// public string keyboardHorizontalInput = "Horizontal";
		__this->___keyboardHorizontalInput_29 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyboardHorizontalInput_29), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string keyboardVerticalInput = "Vertical";
		__this->___keyboardVerticalInput_30 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyboardVerticalInput_30), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// public string leftJoystickHorizontalInput = "Left Joystick Horizontal";
		__this->___leftJoystickHorizontalInput_33 = _stringLiteral61F286CA98AA084927C9A5C29EF0A1E9BB34770D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftJoystickHorizontalInput_33), (void*)_stringLiteral61F286CA98AA084927C9A5C29EF0A1E9BB34770D);
		// public string leftJoystickVerticalInput = "Left Joystick Vertical";
		__this->___leftJoystickVerticalInput_34 = _stringLiteral8A33FE33BA2472F54E326BFE6F0AC8F486AFA318;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftJoystickVerticalInput_34), (void*)_stringLiteral8A33FE33BA2472F54E326BFE6F0AC8F486AFA318);
		// public string rightJoystickHorizontalInput = "Right Joystick Horizontal";
		__this->___rightJoystickHorizontalInput_37 = _stringLiteral0549601E569B22E43E64BA4E87DE09DBE74DD1B2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightJoystickHorizontalInput_37), (void*)_stringLiteral0549601E569B22E43E64BA4E87DE09DBE74DD1B2);
		// public string rightJoystickVerticalInput = "Right Joystick Vertical";
		__this->___rightJoystickVerticalInput_38 = _stringLiteralDFB9DAA21FF5FBDDD3BE3EFA35A1C531B36AF68A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightJoystickVerticalInput_38), (void*)_stringLiteralDFB9DAA21FF5FBDDD3BE3EFA35A1C531B36AF68A);
		// public string accelerateInput = "Accelerate";
		__this->___accelerateInput_42 = _stringLiteral402C6E3ED23DA5C25388A2C7380FF5A1731F7107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accelerateInput_42), (void*)_stringLiteral402C6E3ED23DA5C25388A2C7380FF5A1731F7107);
		// public RotorRotationMethod rotorRotationMethod = RotorRotationMethod.SmoothDamp;
		__this->___rotorRotationMethod_46 = 4;
		// public float leftDeadZoneThreshold = 0.2f;
		__this->___leftDeadZoneThreshold_48 = (0.200000003f);
		// public float rightDeadZoneThreshold = 0.2f;
		__this->___rightDeadZoneThreshold_49 = (0.200000003f);
		// public bool limitMaximumSpeed = true;
		__this->___limitMaximumSpeed_50 = (bool)1;
		// public Quaternion cannonVelocity = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___cannonVelocity_52 = L_2;
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
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsZero(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsZero_m936446C5DDE0AC1A7498554F84DBE66CB136A177 (float ___0_value, const RuntimeMethod* method) 
{
	{
		// public static bool IsZero(this float value) => !(Mathf.Abs(value) > 0.0f);
		float L_0 = ___0_value;
		float L_1;
		L_1 = fabsf(L_0);
		return (bool)((((int32_t)((((float)L_1) > ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsZero(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsZero_m4BE5E1A876D26E25BD300D5302E163EC0D7193AB (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, const RuntimeMethod* method) 
{
	{
		// public static bool IsZero(this Vector2 vector) => vector.sqrMagnitude < 9.99999943962493E-11;
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___0_vector), NULL);
		return (bool)((((double)((double)L_0)) < ((double)(9.9999994396249305E-11)))? 1 : 0);
	}
}
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsZero(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsZero_m4899B16BBE2F485899B8054EF7FE8A1EDA48BD90 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	{
		// public static bool IsZero(this Vector3 vector) => vector.sqrMagnitude < 9.99999943962493E-11;
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_vector), NULL);
		return (bool)((((double)((double)L_0)) < ((double)(9.9999994396249305E-11)))? 1 : 0);
	}
}
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsEqual(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsEqual_mDC103DE8DC5F8E2CF29C584F73DFAFC941A57DF5 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, const RuntimeMethod* method) 
{
	{
		// public static bool IsEqual(this Vector2 vector, Vector2 value) => vector == value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_vector;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_value;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsEqual(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsEqual_m99CD4D592094A0FA545B27E5C788A87E25CF7B53 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) 
{
	{
		// public static bool IsEqual(this Vector3 vector, Vector3 value) => vector == value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_value;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 Tank2DLibraryFunctions.LibraryFunctions::xy(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 LibraryFunctions_xy_m23350819B057EF9C0B832E3A35AA0E25A864EEC8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static Vector2 xy(this Vector3 v) => new Vector2(v.x, v.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 Tank2DLibraryFunctions.LibraryFunctions::yz(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 LibraryFunctions_yz_m1CCD7F3146D104F0390CC2A8B38CBCEB9B79A319 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static Vector2 yz(this Vector3 v) => new Vector2(v.y, v.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 Tank2DLibraryFunctions.LibraryFunctions::xz(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 LibraryFunctions_xz_m2E9A54F8B0D324847882B80D452486BA085BE75A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	{
		// public static Vector2 xz(this Vector3 v) => new Vector2(v.x, v.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 Tank2DLibraryFunctions.LibraryFunctions::OnlyX(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LibraryFunctions_OnlyX_mC8642DDD372EFEB5A1B07FFBD58BC511F4158202 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector3, const RuntimeMethod* method) 
{
	{
		// public static Vector3 OnlyX(this Vector3 vector3) => new Vector3(vector3.x, 0.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector3;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), L_1, (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Tank2DLibraryFunctions.LibraryFunctions::OnlyY(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LibraryFunctions_OnlyY_m7400E8B9CBFFFC55AD2B1F87D789F2A5E25776CD (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector3, const RuntimeMethod* method) 
{
	{
		// public static Vector3 OnlyY(this Vector3 vector3) => new Vector3(0.0f, vector3.y, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector3;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), L_1, (0.0f), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Tank2DLibraryFunctions.LibraryFunctions::OnlyZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LibraryFunctions_OnlyZ_mDCD76CD8BCFFEE38E89456D5D0D784AC87134514 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector3, const RuntimeMethod* method) 
{
	{
		// public static Vector3 OnlyZ(this Vector3 vector3) => new Vector3(0.0f, 0.0f, vector3.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector3;
		float L_1 = L_0.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Tank2DLibraryFunctions.LibraryFunctions::OnlyXZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LibraryFunctions_OnlyXZ_mA503685A7C3E9A666D28AC7690CC75FEFE43648A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector3, const RuntimeMethod* method) 
{
	{
		// public static Vector3 OnlyXZ(this Vector3 vector3) => new Vector3(vector3.x, 0.0f, vector3.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector3;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector3;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, (0.0f), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 Tank2DLibraryFunctions.LibraryFunctions::WithX(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LibraryFunctions_WithX_m4224CE339A58286D3FC10472BCBE0A301B2AC241 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector3, float ___1_x, const RuntimeMethod* method) 
{
	{
		// public static Vector3 WithX(this Vector3 vector3, float x) => new Vector3(x, vector3.y, vector3.z);
		float L_0 = ___1_x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_vector3;
		float L_2 = L_1.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_vector3;
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector3 Tank2DLibraryFunctions.LibraryFunctions::WithY(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LibraryFunctions_WithY_m83CC784D5A383251849179FA398186F89F1B7523 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector3, float ___1_y, const RuntimeMethod* method) 
{
	{
		// public static Vector3 WithY(this Vector3 vector3, float y) => new Vector3(vector3.x, y, vector3.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector3;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_vector3;
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector3 Tank2DLibraryFunctions.LibraryFunctions::WithZ(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LibraryFunctions_WithZ_m9F7F2610DCE9C664E425BAC4C21E00E4B5E29C95 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector3, float ___1_z, const RuntimeMethod* method) 
{
	{
		// public static Vector3 WithZ(this Vector3 vector3, float z) => new Vector3(vector3.x, vector3.y, z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector3;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector3;
		float L_3 = L_2.___y_3;
		float L_4 = ___1_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Tank2DLibraryFunctions.LibraryFunctions::WithX(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 LibraryFunctions_WithX_mC6822C65832A522E3F62B84B5405302EBBBA63BA (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector3, float ___1_x, const RuntimeMethod* method) 
{
	{
		// public static Vector2 WithX(this Vector2 vector3, float x) => new Vector2(x, vector3.y);
		float L_0 = ___1_x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_vector3;
		float L_2 = L_1.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector2 Tank2DLibraryFunctions.LibraryFunctions::WithY(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 LibraryFunctions_WithY_m2F261415E7644F2B38671C55F18180C2CEDAE8EE (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector3, float ___1_y, const RuntimeMethod* method) 
{
	{
		// public static Vector2 WithY(this Vector2 vector3, float y) => new Vector2(vector3.x, y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_vector3;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 Tank2DLibraryFunctions.LibraryFunctions::WithZ(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LibraryFunctions_WithZ_m0BAC9BDADEEACF27D76DBA3756D1A168FAEC8535 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector3, float ___1_z, const RuntimeMethod* method) 
{
	{
		// public static Vector3 WithZ(this Vector2 vector3, float z) => new Vector3(vector3.x, vector3.y, z);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_vector3;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_vector3;
		float L_3 = L_2.___y_1;
		float L_4 = ___1_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsLowerThan(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsLowerThan_m31A9F0D8B0255D643A21A32A163C69564375CAF5 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_v2, const RuntimeMethod* method) 
{
	{
		// return v1.sqrMagnitude < v2.sqrMagnitude;
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_v1), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___1_v2), NULL);
		return (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
	}
}
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsHigherThan(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsHigherThan_m93DF48102B322EBA10EC4E6BB0FC590643D11CCB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_v2, const RuntimeMethod* method) 
{
	{
		// return v1.sqrMagnitude > v2.sqrMagnitude;
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_v1), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___1_v2), NULL);
		return (bool)((((float)L_0) > ((float)L_1))? 1 : 0);
	}
}
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsExceeding(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsExceeding_mCA101BE0FB330E356BCF4C1B52C2E90CC14B92AD (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, float ___1_magnitude, const RuntimeMethod* method) 
{
	{
		// return vector.sqrMagnitude > (magnitude * magnitude) * errorTolerance;
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___0_vector), NULL);
		float L_1 = ___1_magnitude;
		float L_2 = ___1_magnitude;
		return (bool)((((float)L_0) > ((float)((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, L_2)), (1.00999999f)))))? 1 : 0);
	}
}
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsExceeding(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsExceeding_m399F243CB42CF13D73B3FD4CB769C2E7D28F63B0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_magnitude, const RuntimeMethod* method) 
{
	{
		// return vector.sqrMagnitude > (magnitude * magnitude) * errorTolerance;
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_vector), NULL);
		float L_1 = ___1_magnitude;
		float L_2 = ___1_magnitude;
		return (bool)((((float)L_0) > ((float)((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, L_2)), (1.00999999f)))))? 1 : 0);
	}
}
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsNaN(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsNaN_m3C6429C07F554C82B934EF0E6C5A73581AF87B93 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, const RuntimeMethod* method) 
{
	{
		// public static bool IsNaN(this Vector2 vector) => float.IsNaN(vector.x) || float.IsNaN(vector.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_vector;
		float L_1 = L_0.___x_0;
		bool L_2;
		L_2 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_vector;
		float L_4 = L_3.___y_1;
		bool L_5;
		L_5 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_4, NULL);
		return L_5;
	}

IL_0019:
	{
		return (bool)1;
	}
}
// System.Boolean Tank2DLibraryFunctions.LibraryFunctions::IsNaN(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LibraryFunctions_IsNaN_mD20D63C2DF84AF44C98CD4EFEF151E02E6D9E45B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	{
		// public static bool IsNaN(this Vector3 vector) => float.IsNaN(vector.x) || float.IsNaN(vector.y) || float.IsNaN(vector.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		bool L_2;
		L_2 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_vector;
		float L_4 = L_3.___y_3;
		bool L_5;
		L_5 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___z_4;
		bool L_8;
		L_8 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_7, NULL);
		return L_8;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Single Tank2DLibraryFunctions.LibraryFunctions::Pow(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LibraryFunctions_Pow_mFBACB67C0EB8F08D615A10FB61B41738686C69E6 (float ___0_f, float ___1_power, const RuntimeMethod* method) 
{
	{
		// return Mathf.Pow(f, power);
		float L_0 = ___0_f;
		float L_1 = ___1_power;
		float L_2;
		L_2 = powf(L_0, L_1);
		return L_2;
	}
}
// System.Single Tank2DLibraryFunctions.LibraryFunctions::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LibraryFunctions_Dot_mE4E142806EFFC91193EC3D77F442DF6DEEE42178 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_v2, const RuntimeMethod* method) 
{
	{
		// return Vector3.Dot(v1, v2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_v2;
		float L_2;
		L_2 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Tank2DLibraryFunctions.LibraryFunctions::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LibraryFunctions_Cross_mE6890043EABD1910061A1B4DCBDEF841649AB9A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_v2, const RuntimeMethod* method) 
{
	{
		// return Vector3.Cross(v1, v2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_v2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Tank2DLibraryFunctions.LibraryFunctions::Tangent(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LibraryFunctions_Tangent_m73967F8731D9F921530F631F72225CAFF42E5F4E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_normal, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var right = Vector3.Cross(vector3, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// var tangent = Vector3.Cross(normal, right);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_normal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_3, L_4, NULL);
		V_1 = L_5;
		// return tangent.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Tank2DLibraryFunctions.LibraryFunctions::ProjectPointOnPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LibraryFunctions_ProjectPointOnPlane_m05B54C93E1922C5189AAB299733889A1D4B655C5 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_planeOrigin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_planeNormal, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var toPoint = point - planeOrigin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_planeOrigin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		// var toPointProjected = Vector3.Project(toPoint, planeNormal.normalized);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___2_planeNormal), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// return point - toPointProjected;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_6, NULL);
		return L_7;
	}
}
// System.Single Tank2DLibraryFunctions.LibraryFunctions::Round(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LibraryFunctions_Round_m5C2A82DFA08B23F71B60544874D22F2C6BD26CE2 (float ___0_f, int32_t ___1_places, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var power = Mathf.Pow(10, places);
		int32_t L_0 = ___1_places;
		float L_1;
		L_1 = powf((10.0f), ((float)L_0));
		V_0 = L_1;
		// return Mathf.Round(Mathf.Abs(f) * power) / power;
		float L_2 = ___0_f;
		float L_3;
		L_3 = fabsf(L_2);
		float L_4 = V_0;
		float L_5;
		L_5 = bankers_roundf(((float)il2cpp_codegen_multiply(L_3, L_4)));
		float L_6 = V_0;
		return ((float)(L_5/L_6));
	}
}
// System.Void Tank2DLibraryFunctions.LibraryFunctions::ResetTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LibraryFunctions_ResetTransform_m49AA6D2E6821505BF657863A675EA89420BC499E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_trans, const RuntimeMethod* method) 
{
	{
		// trans.position = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_trans;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// trans.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_trans;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_2, L_3, NULL);
		// trans.localScale = new Vector3(1, 1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___0_trans;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Tank2DLibraryFunctions.LibraryFunctions::DestroyChildren(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LibraryFunctions_DestroyChildren_m4B337D7B48D38C3F0FA618FC7BB33764AF58163B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_trans, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		goto IL_0045;
	}

IL_0002:
	{
		// foreach (Transform child in trans)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_trans;
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_0044;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0044:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_000b_1:
			{
				// foreach (Transform child in trans)
				RuntimeObject* L_5 = V_0;
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// if (child) UnityEngine.Object.DestroyImmediate(child.gameObject);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_8;
				L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
				if (!L_8)
				{
					goto IL_002a_1;
				}
			}
			{
				// if (child) UnityEngine.Object.DestroyImmediate(child.gameObject);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_1;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_10, NULL);
			}

IL_002a_1:
			{
				// foreach (Transform child in trans)
				RuntimeObject* L_11 = V_0;
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// while (trans.childCount > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___0_trans;
		int32_t L_14;
		L_14 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_13, NULL);
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Tank2DLibraryFunctions.LibraryFunctions::ApplyImpulse(UnityEngine.Rigidbody,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LibraryFunctions_ApplyImpulse_m54E15A3B2F9BD90BD5D2C2B947DC52879DDB4F0F (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___0_rigidbody, float ___1_impulse, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_direction, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var verticalImpulse = direction * impulse;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___2_direction;
		float L_1 = ___1_impulse;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// rigidbody.velocity = rigidbody.velocity.OnlyXZ() + verticalImpulse;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = ___0_rigidbody;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = ___0_rigidbody;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = LibraryFunctions_OnlyXZ_mA503685A7C3E9A666D28AC7690CC75FEFE43648A(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_7, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_8, NULL);
		// }
		return;
	}
}
// System.Void Tank2DLibraryFunctions.LibraryFunctions::ApplyUpwardImpulse(UnityEngine.Rigidbody,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LibraryFunctions_ApplyUpwardImpulse_mA8E74CCD522BF1685D4023AC81F7824968C1A875 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___0_rigidbody, float ___1_impulse, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var verticalImpulse = Vector3.up * impulse;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_1 = ___1_impulse;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// rigidbody.velocity = rigidbody.velocity.OnlyXZ() + verticalImpulse;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = ___0_rigidbody;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = ___0_rigidbody;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = LibraryFunctions_OnlyXZ_mA503685A7C3E9A666D28AC7690CC75FEFE43648A(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_7, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_8, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Tank2DLibraryFunctions.LibraryFunctions::SmoothDamp(UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Quaternion&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 LibraryFunctions_SmoothDamp_mA40287B4C6FDDF154EEAEC715EA26B9A215D2D10 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rot, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_target, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_deriv, float ___3_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float G_B5_0 = 0.0f;
	{
		// if (Time.deltaTime < Mathf.Epsilon) return rot;
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_1 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		// if (Time.deltaTime < Mathf.Epsilon) return rot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___0_rot;
		return L_2;
	}

IL_000e:
	{
		// var dot = Quaternion.Dot(rot, target);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___0_rot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___1_target;
		float L_5;
		L_5 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_3, L_4, NULL);
		// var multi = dot > 0f ? 1f : -1f;
		if ((((float)L_5) > ((float)(0.0f))))
		{
			goto IL_0023;
		}
	}
	{
		G_B5_0 = (-1.0f);
		goto IL_0028;
	}

IL_0023:
	{
		G_B5_0 = (1.0f);
	}

IL_0028:
	{
		V_0 = G_B5_0;
		// target.x *= multi;
		float* L_6 = (&(&___1_target)->___x_0);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		float L_9 = V_0;
		*((float*)L_7) = (float)((float)il2cpp_codegen_multiply(L_8, L_9));
		// target.y *= multi;
		float* L_10 = (&(&___1_target)->___y_1);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13 = V_0;
		*((float*)L_11) = (float)((float)il2cpp_codegen_multiply(L_12, L_13));
		// target.z *= multi;
		float* L_14 = (&(&___1_target)->___z_2);
		float* L_15 = L_14;
		float L_16 = *((float*)L_15);
		float L_17 = V_0;
		*((float*)L_15) = (float)((float)il2cpp_codegen_multiply(L_16, L_17));
		// target.w *= multi;
		float* L_18 = (&(&___1_target)->___w_3);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		float L_21 = V_0;
		*((float*)L_19) = (float)((float)il2cpp_codegen_multiply(L_20, L_21));
		// var result = new Vector4(
		//     Mathf.SmoothDamp(rot.x, target.x, ref deriv.x, time),
		//     Mathf.SmoothDamp(rot.y, target.y, ref deriv.y, time),
		//     Mathf.SmoothDamp(rot.z, target.z, ref deriv.z, time),
		//     Mathf.SmoothDamp(rot.w, target.w, ref deriv.w, time)
		// ).normalized;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___0_rot;
		float L_23 = L_22.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___1_target;
		float L_25 = L_24.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_26 = ___2_deriv;
		float* L_27 = (&L_26->___x_0);
		float L_28 = ___3_time;
		float L_29;
		L_29 = Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline(L_23, L_25, L_27, L_28, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___0_rot;
		float L_31 = L_30.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___1_target;
		float L_33 = L_32.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_34 = ___2_deriv;
		float* L_35 = (&L_34->___y_1);
		float L_36 = ___3_time;
		float L_37;
		L_37 = Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline(L_31, L_33, L_35, L_36, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___0_rot;
		float L_39 = L_38.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___1_target;
		float L_41 = L_40.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_42 = ___2_deriv;
		float* L_43 = (&L_42->___z_2);
		float L_44 = ___3_time;
		float L_45;
		L_45 = Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline(L_39, L_41, L_43, L_44, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___0_rot;
		float L_47 = L_46.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___1_target;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_50 = ___2_deriv;
		float* L_51 = (&L_50->___w_3);
		float L_52 = ___3_time;
		float L_53;
		L_53 = Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline(L_47, L_49, L_51, L_52, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_54), L_29, L_37, L_45, L_53, /*hidden argument*/NULL);
		V_3 = L_54;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_55;
		L_55 = Vector4_get_normalized_mD7671F6DCE4C1A80243139B87858FF65F4B865A3_inline((&V_3), NULL);
		V_1 = L_55;
		// var derivError = Vector4.Project(new Vector4(deriv.x, deriv.y, deriv.z, deriv.w), result);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_56 = ___2_deriv;
		float L_57 = L_56->___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_58 = ___2_deriv;
		float L_59 = L_58->___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_60 = ___2_deriv;
		float L_61 = L_60->___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_62 = ___2_deriv;
		float L_63 = L_62->___w_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_64), L_57, L_59, L_61, L_63, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_65 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_66;
		L_66 = Vector4_Project_mEC70C8D2D5111A0EF91D410259BCD28424238B99_inline(L_64, L_65, NULL);
		V_2 = L_66;
		// deriv.x -= derivError.x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_67 = ___2_deriv;
		float* L_68 = (&L_67->___x_0);
		float* L_69 = L_68;
		float L_70 = *((float*)L_69);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_71 = V_2;
		float L_72 = L_71.___x_1;
		*((float*)L_69) = (float)((float)il2cpp_codegen_subtract(L_70, L_72));
		// deriv.y -= derivError.y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_73 = ___2_deriv;
		float* L_74 = (&L_73->___y_1);
		float* L_75 = L_74;
		float L_76 = *((float*)L_75);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_77 = V_2;
		float L_78 = L_77.___y_2;
		*((float*)L_75) = (float)((float)il2cpp_codegen_subtract(L_76, L_78));
		// deriv.z -= derivError.z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_79 = ___2_deriv;
		float* L_80 = (&L_79->___z_2);
		float* L_81 = L_80;
		float L_82 = *((float*)L_81);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_83 = V_2;
		float L_84 = L_83.___z_3;
		*((float*)L_81) = (float)((float)il2cpp_codegen_subtract(L_82, L_84));
		// deriv.w -= derivError.w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_85 = ___2_deriv;
		float* L_86 = (&L_85->___w_3);
		float* L_87 = L_86;
		float L_88 = *((float*)L_87);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_89 = V_2;
		float L_90 = L_89.___w_4;
		*((float*)L_87) = (float)((float)il2cpp_codegen_subtract(L_88, L_90));
		// return new Quaternion(result.x, result.y, result.z, result.w);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_91 = V_1;
		float L_92 = L_91.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_93 = V_1;
		float L_94 = L_93.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_95 = V_1;
		float L_96 = L_95.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_97 = V_1;
		float L_98 = L_97.___w_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_99;
		memset((&L_99), 0, sizeof(L_99));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_99), L_92, L_94, L_96, L_98, /*hidden argument*/NULL);
		return L_99;
	}
}
// System.Void Tank2DLibraryFunctions.LibraryFunctions::SetLayerMask(UnityEngine.LayerMask&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LibraryFunctions_SetLayerMask_mEE3027742CAD4605C8B0A25896B6355EEB48DFC6 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* ___0_layerMask, int32_t* ___1_ignoreLayer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ignoreLayer = LayerMask.NameToLayer("Ignore Raycast");
		int32_t* L_0 = ___1_ignoreLayer;
		int32_t L_1;
		L_1 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6, NULL);
		*((int32_t*)L_0) = (int32_t)L_1;
		// layerMask &= ~(1 << ignoreLayer);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_2 = ___0_layerMask;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_3 = ___0_layerMask;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = (*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)L_3);
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_4, NULL);
		int32_t* L_6 = ___1_ignoreLayer;
		int32_t L_7 = *((int32_t*)L_6);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_8;
		L_8 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(((int32_t)(L_5&((~((int32_t)(1<<((int32_t)(L_7&((int32_t)31))))))))), NULL);
		*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)L_2 = L_8;
		// }
		return;
	}
}
// System.Void Tank2DLibraryFunctions.LibraryFunctions::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LibraryFunctions_Quit_m3906608F7CC37CCE78A86C0A0E7C3663EEF98933 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBFFAD61A233ED4EE48B6C5A23F05B9B224C09C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("*****Quitting Game*****");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDBFFAD61A233ED4EE48B6C5A23F05B9B224C09C7, NULL);
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
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
// System.Void Complete.CameraControl::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Awake_m0E98AADB7068F752436CE9A6F794D9E5EA11AF9C (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Camera = GetComponentInChildren<Camera> ();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		__this->___m_Camera_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Camera_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void Complete.CameraControl::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_FixedUpdate_mD7231A423DD8C6EF08F2F8DE836493B1ABD06800 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	{
		// Move ();
		CameraControl_Move_m22EF2FEFAFAE3CDFD7FBFF1FD20E57C3FCFF9D47(__this, NULL);
		// Zoom ();
		CameraControl_Zoom_mE73BD9B135D45CAF561647BD922895499ACC1737(__this, NULL);
		// }
		return;
	}
}
// System.Void Complete.CameraControl::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Move_m22EF2FEFAFAE3CDFD7FBFF1FD20E57C3FCFF9D47 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	{
		// FindAveragePosition ();
		CameraControl_FindAveragePosition_m2598B51258C3699DAE73ADFED744AFAA25884CA5(__this, NULL);
		// transform.position = Vector3.SmoothDamp(transform.position, m_DesiredPosition, ref m_MoveVelocity, m_DampTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___m_DesiredPosition_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___m_MoveVelocity_10);
		float L_5 = __this->___m_DampTime_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_2, L_3, L_4, L_5, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void Complete.CameraControl::FindAveragePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_FindAveragePosition_m2598B51258C3699DAE73ADFED744AFAA25884CA5 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Vector3 averagePos = new Vector3 ();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// int numTargets = 0;
		V_1 = 0;
		// for (int i = 0; i < m_Targets.Length; i++)
		V_2 = 0;
		goto IL_003e;
	}

IL_000e:
	{
		// if (!m_Targets[i].gameObject.activeSelf)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___m_Targets_7;
		int32_t L_1 = V_2;
		int32_t L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// averagePos += m_Targets[i].position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_7 = __this->___m_Targets_7;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_11, NULL);
		V_0 = L_12;
		// numTargets++;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003a:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003e:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_15 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_16 = __this->___m_Targets_7;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// if (numTargets > 0)
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// averagePos /= numTargets;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		int32_t L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_18, ((float)L_19), NULL);
		V_0 = L_20;
	}

IL_0056:
	{
		// averagePos.y = transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___y_3;
		(&V_0)->___y_3 = L_23;
		// m_DesiredPosition = averagePos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		__this->___m_DesiredPosition_11 = L_24;
		// }
		return;
	}
}
// System.Void Complete.CameraControl::Zoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_Zoom_mE73BD9B135D45CAF561647BD922895499ACC1737 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float requiredSize = FindRequiredSize();
		float L_0;
		L_0 = CameraControl_FindRequiredSize_m1E117B911293210B9FA6372851EFAFFA4C515DA3(__this, NULL);
		V_0 = L_0;
		// m_Camera.orthographicSize = Mathf.SmoothDamp (m_Camera.orthographicSize, requiredSize, ref m_ZoomSpeed, m_DampTime);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___m_Camera_8;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_8;
		float L_3;
		L_3 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_2, NULL);
		float L_4 = V_0;
		float* L_5 = (&__this->___m_ZoomSpeed_9);
		float L_6 = __this->___m_DampTime_4;
		float L_7;
		L_7 = Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline(L_3, L_4, L_5, L_6, NULL);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_1, L_7, NULL);
		// }
		return;
	}
}
// System.Single Complete.CameraControl::FindRequiredSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraControl_FindRequiredSize_m1E117B911293210B9FA6372851EFAFFA4C515DA3 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 desiredLocalPos = transform.InverseTransformPoint(m_DesiredPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_DesiredPosition_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_0, L_1, NULL);
		V_0 = L_2;
		// float size = 0f;
		V_1 = (0.0f);
		// for (int i = 0; i < m_Targets.Length; i++)
		V_2 = 0;
		goto IL_0083;
	}

IL_001c:
	{
		// if (!m_Targets[i].gameObject.activeSelf)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = __this->___m_Targets_7;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		bool L_8;
		L_8 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_7, NULL);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		// Vector3 targetLocalPos = transform.InverseTransformPoint(m_Targets[i].position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = __this->___m_Targets_7;
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_9, L_14, NULL);
		// Vector3 desiredPosToTarget = targetLocalPos - desiredLocalPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
		V_3 = L_17;
		// size = Mathf.Max(size, Mathf.Abs(desiredPosToTarget.y));
		float L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_3;
		float L_20 = L_19.___y_3;
		float L_21;
		L_21 = fabsf(L_20);
		float L_22;
		L_22 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_18, L_21, NULL);
		V_1 = L_22;
		// size = Mathf.Max(size, Mathf.Abs(desiredPosToTarget.x) / m_Camera.aspect);
		float L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_3;
		float L_25 = L_24.___x_2;
		float L_26;
		L_26 = fabsf(L_25);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_27 = __this->___m_Camera_8;
		float L_28;
		L_28 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_27, NULL);
		float L_29;
		L_29 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_23, ((float)(L_26/L_28)), NULL);
		V_1 = L_29;
	}

IL_007f:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0083:
	{
		// for (int i = 0; i < m_Targets.Length; i++)
		int32_t L_31 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_32 = __this->___m_Targets_7;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// size += m_ScreenEdgeBuffer;
		float L_33 = V_1;
		float L_34 = __this->___m_ScreenEdgeBuffer_5;
		V_1 = ((float)il2cpp_codegen_add(L_33, L_34));
		// size = Mathf.Max (size, m_MinSize);
		float L_35 = V_1;
		float L_36 = __this->___m_MinSize_6;
		float L_37;
		L_37 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_35, L_36, NULL);
		V_1 = L_37;
		// return size;
		float L_38 = V_1;
		return L_38;
	}
}
// System.Void Complete.CameraControl::SetStartPositionAndSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl_SetStartPositionAndSize_mE3A45587A839D7D2B01261C4F70F4AD8C2E1CCD7 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	{
		// FindAveragePosition ();
		CameraControl_FindAveragePosition_m2598B51258C3699DAE73ADFED744AFAA25884CA5(__this, NULL);
		// transform.position = m_DesiredPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_DesiredPosition_11;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// m_Camera.orthographicSize = FindRequiredSize ();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_Camera_8;
		float L_3;
		L_3 = CameraControl_FindRequiredSize_m1E117B911293210B9FA6372851EFAFFA4C515DA3(__this, NULL);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Complete.CameraControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraControl__ctor_m69942BC70513E06D5D6091A0BDFA6EE720327FA9 (CameraControl_tFA2D9EE50E22397050F5AEF6E8DB7A7F19FB065B* __this, const RuntimeMethod* method) 
{
	{
		// public float m_DampTime = 0.2f;                 // Approximate time for the camera to refocus.
		__this->___m_DampTime_4 = (0.200000003f);
		// public float m_ScreenEdgeBuffer = 4f;           // Space between the top/bottom most target and the screen edge.
		__this->___m_ScreenEdgeBuffer_5 = (4.0f);
		// public float m_MinSize = 6.5f;                  // The smallest orthographic size the camera can be.
		__this->___m_MinSize_6 = (6.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CurrentSelected; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentSelected_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_vector), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___1_maxLength;
		float L_3 = ___1_maxLength;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		float L_8 = L_7.___x_2;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___y_3;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_vector;
		float L_14 = L_13.___z_4;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___1_maxLength;
		float L_18 = V_4;
		float L_19 = ___1_maxLength;
		float L_20 = V_5;
		float L_21 = ___1_maxLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___0_vector;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		return L_24;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tank2DMovement_get_HaltMovement_m7760462F3FC140454AC6FA4896A7F0CAAD8ED735_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => _haltMovement;
		bool L_0 = __this->____haltMovement_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Tank2DMovement_get_MovementDirection_mF7BE4D3DCAC82B44072E65D658ECA05E6A0F029C_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => _movementDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->____movementDirection_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_CurrentSpeed_m8EE81766B58A58D355D65FAB9361A6300BED0736_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => _currentSpeed;
		float L_0 = __this->____currentSpeed_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tank2DMovement_set_Speed_m42B09A481DBC03697B6A7E8266406EFB8599CD55_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Speed { get; set; }
		float L_0 = ___0_value;
		__this->___U3CSpeedU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Tank2DMovement_get_Friction_mA6575A05FBD4E90BBEE8B340BF3E81967F47142F_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => friction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___friction_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_currentRotation_mCC7C1E54559D2FF1D643D52FED35E254C40527F4_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => _currentRotation;
		float L_0 = __this->____currentRotation_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_Acceleration_mFBEA511919CF6DF4F0FA14327018D9D6EC77EC48_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => acceleration;
		float L_0 = __this->___acceleration_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_Deceleration_mEA7E1577E0A0D9EF602A06DD355E6A61D72A108B_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => deceleration;
		float L_0 = __this->___deceleration_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) 
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
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_target;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_current;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_target;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_current;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_target;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_current;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___2_maxDistanceDelta;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___2_maxDistanceDelta;
		float L_22 = ___2_maxDistanceDelta;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_target;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___0_current;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___0_current;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___0_current;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_MaxHorizontalSpeed_m90EED88EAAFE59D9E59FEFD9DF0CD4A9D64DBFF0_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => maxHorizontalSpeed;
		float L_0 = __this->___maxHorizontalSpeed_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_MaxUpwardSpeed_mE44FF701EA00979C0E27C3B740B6E2BED5611594_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => maxUpwardSpeed;
		float L_0 = __this->___maxUpwardSpeed_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_MaxDownwardSpeed_m7D6595E04789939916612029425A8A7838C3E80B_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => maxDownwardSpeed;
		float L_0 = __this->___maxDownwardSpeed_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_rhs;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tank2DMovement_get_RotorSpeed_mAF618A4377642636F5CABEDB5D821C2D44E66C6E_inline (Tank2DMovement_t407372EE65354750CB1CE0D0910EF64254BF2EA9* __this, const RuntimeMethod* method) 
{
	{
		// get => rotorSpeed;
		float L_0 = __this->___rotorSpeed_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_from, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_to, float ___2_maxDegreesDelta, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_from;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_to;
		float L_2;
		L_2 = Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) == ((float)(0.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___1_to;
		V_2 = L_5;
		goto IL_0030;
	}

IL_0019:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___0_from;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___1_to;
		float L_8 = ___2_maxDegreesDelta;
		float L_9 = V_0;
		float L_10;
		L_10 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((1.0f), ((float)(L_8/L_9)), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_SlerpUnclamped_mAE7F4DF2F239831CCAA1DFB52F313E5AED52D32D(L_6, L_7, L_10, NULL);
		V_2 = L_11;
		goto IL_0030;
	}

IL_0030:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_lhs;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_rhs;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_lhs;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_rhs;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_lhs;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___1_rhs;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_onNormal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_onNormal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_onNormal;
		float L_2;
		L_2 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_6;
		goto IL_004c;
	}

IL_001d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_onNormal;
		float L_9;
		L_9 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_onNormal;
		float L_11 = L_10.___x_2;
		float L_12 = V_3;
		float L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_onNormal;
		float L_15 = L_14.___y_3;
		float L_16 = V_3;
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_onNormal;
		float L_19 = L_18.___z_4;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)(((float)il2cpp_codegen_multiply(L_11, L_12))/L_13)), ((float)(((float)il2cpp_codegen_multiply(L_15, L_16))/L_17)), ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)), /*hidden argument*/NULL);
		V_2 = L_22;
		goto IL_004c;
	}

IL_004c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		return L_23;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_a;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_b;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_a;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_b;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_normalized_mD7671F6DCE4C1A80243139B87858FF65F4B865A3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_Normalize_m1D1B879617A0F54904EDD0E59D356D605457002B_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Project_mEC70C8D2D5111A0EF91D410259BCD28424238B99_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___1_b;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_a;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_b;
		float L_3;
		L_3 = Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline(L_1, L_2, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___1_b;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = ___1_b;
		float L_6;
		L_6 = Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline(L_4, L_5, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_0, ((float)(L_3/L_6)), NULL);
		V_0 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_current;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_b;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4;
		L_4 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		float L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (2.0f))), (57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Normalize_m1D1B879617A0F54904EDD0E59D356D605457002B_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1;
		L_1 = Vector4_Magnitude_mFBC659211CDF4EDB2B540C58315D1E260FB23B1F_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_a;
		float L_5 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_b;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_a;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_b;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_a;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_b;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___0_a;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___1_b;
		float L_15 = L_14.___w_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1 = L_0.___x_1;
		float L_2 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___0_a;
		float L_4 = L_3.___y_2;
		float L_5 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___0_a;
		float L_7 = L_6.___z_3;
		float L_8 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___0_a;
		float L_10 = L_9.___w_4;
		float L_11 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___0_dot;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Magnitude_mFBC659211CDF4EDB2B540C58315D1E260FB23B1F_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_a;
		float L_2;
		L_2 = Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sqrt(((double)L_2));
		V_0 = ((float)L_3);
		goto IL_0012;
	}

IL_0012:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1 = L_0.___x_1;
		float L_2 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___0_a;
		float L_4 = L_3.___y_2;
		float L_5 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___0_a;
		float L_7 = L_6.___z_3;
		float L_8 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___0_a;
		float L_10 = L_9.___w_4;
		float L_11 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
