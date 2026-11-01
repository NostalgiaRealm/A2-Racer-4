
/* ==== FUN_0043f330 @ 0043f330 ==== 
 * signature: undefined __cdecl FUN_0043f330(int param_1)
 * body: 0043f330-0043f3b7;0043f3bb-0043f430
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043f3b8-0043f3ba
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0043f330(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  
  if (DAT_006fb968 != 0) {
    if (2 < DAT_006fb924) {
      FUN_00440cb0(param_1,0x49,0,0,0,0);
      pcVar7 = s_CHECKPOINT_0059bfd8;
      iVar5 = 0;
      iVar4 = 0;
      iVar3 = 1;
      iVar1 = FUN_0043cda0(DAT_006c4098);
      iVar2 = FUN_0043cd70(10);
      FUN_00440b60(param_1,0x4a,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar2) * 0x94),iVar3,
                   iVar4,iVar5,(byte *)pcVar7);
      if (DAT_005a3eec == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d___countdown_speed___0_0059bfe4);
      }
      FUN_00448470(0xb);
      pbVar6 = &DAT_0059c004;
      iVar5 = 0;
      iVar4 = 0;
      iVar3 = 1;
      iVar1 = FUN_0043cda0(DAT_006c4098);
      iVar2 = FUN_0043cd70(0xb);
      FUN_00440b60(param_1,0x4b,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar2) * 0x94),iVar3,
                   iVar4,iVar5,pbVar6);
    }
    if (DAT_006fcf88 != 0) {
      _DAT_006c9414 = GetTickCount();
      DAT_006fcf88 = 0;
    }
  }
  return;
}


