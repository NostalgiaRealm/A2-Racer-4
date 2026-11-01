
/* ==== FUN_0040a1c0 @ 0040a1c0 ==== 
 * signature: undefined __cdecl FUN_0040a1c0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * body: 0040a1c0-0040a25a
 */

void __cdecl
FUN_0040a1c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  int iVar1;
  
  if ((DAT_006fb97c != '\0') && (DAT_005cd9d4 < 0xc5)) {
    iVar1 = DAT_005cd9d4 * 0x20;
    *(undefined4 *)(&DAT_005caf88 + iVar1) = param_1;
    *(undefined4 *)(&DAT_005caf8c + iVar1) = param_2;
    *(undefined4 *)(&DAT_005caf90 + iVar1) = param_3;
    *(undefined4 *)(&DAT_005caf98 + iVar1) = 0xffffffff;
    *(undefined4 *)(&DAT_005cafa8 + iVar1) = param_4;
    DAT_005cd9d4 = DAT_005cd9d4 + 3;
    *(undefined4 *)(&DAT_005cafac + iVar1) = param_5;
    *(undefined4 *)(&DAT_005cafb0 + iVar1) = param_6;
    *(undefined4 *)(&DAT_005cafb8 + iVar1) = 0xffffffff;
    *(undefined4 *)(&DAT_005cafc8 + iVar1) = param_7;
    *(undefined4 *)(&DAT_005cafcc + iVar1) = param_8;
    *(undefined4 *)(&DAT_005cafd0 + iVar1) = param_9;
    *(undefined4 *)(&DAT_005cafd8 + iVar1) = 0xffffffff;
  }
  return;
}


