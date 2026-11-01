
/* ==== FUN_004c7150 @ 004c7150 ==== 
 * signature: undefined4 __cdecl FUN_004c7150(int param_1)
 * body: 004c7150-004c71a8
 */

undefined4 __cdecl FUN_004c7150(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xd;
  while( true ) {
    iVar1 = FUN_004c71b0(param_1,iVar2);
    if (iVar1 == 0x2af9) {
      return 0;
    }
    if (iVar1 != 0x2afa) break;
    iVar2 = iVar2 + -1;
    if (iVar2 < 1) {
      return 0;
    }
  }
  FUN_004c3fa0((byte *)s_Sound_mode_used___d___freq__d__b_005b5104);
  return 1;
}


