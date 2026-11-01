
/* ==== FUN_0040a360 @ 0040a360 ==== 
 * signature: undefined __cdecl FUN_0040a360(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * body: 0040a360-0040a3cf
 */

void __cdecl
FUN_0040a360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  if ((DAT_006fb97c != '\0') && (DAT_005cd9d0 < 99)) {
    iVar1 = DAT_005cd9d0 * 0x20;
    *(undefined4 *)(&DAT_005ccd48 + iVar1) = param_1;
    *(undefined4 *)(&DAT_005ccd4c + iVar1) = param_2;
    *(undefined4 *)(&DAT_005ccd50 + iVar1) = param_3;
    *(undefined4 *)(&DAT_005ccd58 + iVar1) = 0xffffffff;
    *(undefined4 *)(&DAT_005ccd68 + iVar1) = param_4;
    DAT_005cd9d0 = DAT_005cd9d0 + 2;
    *(undefined4 *)(&DAT_005ccd6c + iVar1) = param_5;
    *(undefined4 *)(&DAT_005ccd70 + iVar1) = param_6;
    *(undefined4 *)(&DAT_005ccd78 + iVar1) = 0xffffffff;
  }
  return;
}


