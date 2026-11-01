
/* ==== FUN_004c1e10 @ 004c1e10 ==== 
 * signature: undefined __fastcall FUN_004c1e10(undefined4 param_1)
 * body: 004c1e10-004c1e50;004c1e54-004c1e5f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c1e51-004c1e53
 */

void __fastcall FUN_004c1e10(undefined4 param_1)

{
  int iVar1;
  
  FUN_004c3fa0((byte *)s_TXFORMAT___STARTING_ENUM_TEXTURE_005b30a8);
  iVar1 = (**(code **)(*DAT_0073b4b4 + 0x24))(DAT_0073b4b4,FUN_004c1e60,param_1);
  if (iVar1 != 0) {
    FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____D3DError_EnumDevice_____005b3068);
  }
  FUN_004c3fa0((byte *)s_TXFORMAT___END_ENUM_TEXTURE_FORM_005b3040);
  return;
}


