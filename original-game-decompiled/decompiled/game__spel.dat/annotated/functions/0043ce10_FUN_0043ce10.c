
/* ==== FUN_0043ce10 @ 0043ce10 ==== 
 * signature: undefined __stdcall FUN_0043ce10(void)
 * body: 0043ce10-0043ce72;0043ce76-0043d137
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043ce73-0043ce75
 */

void FUN_0043ce10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  DAT_006c4098 = (uint)(DAT_006fb894 == 0);
  iVar3 = 0;
  do {
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar2 = FUN_0043cd70(iVar3);
    iVar1 = FUN_004ca420(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar2) * 0x94);
    if (iVar1 == 1000) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s___d___Cannot_open_font_file__I_0059bd20);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x11);
  uVar5 = 0xfffffffc;
  uVar4 = 0xfffffffc;
  iVar3 = FUN_0043cda0(DAT_006c4098);
  iVar1 = FUN_0043cd70(2);
  FUN_0043cdd0((int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar1) * 0x94),uVar4,uVar5);
  uVar5 = 0xfffffffe;
  uVar4 = 0;
  iVar3 = FUN_0043cda0(DAT_006c4098);
  iVar1 = FUN_0043cd70(6);
  FUN_0043cdd0((int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar1) * 0x94),uVar4,uVar5);
  uVar5 = 0xfffffffc;
  uVar4 = 0xfffffffd;
  iVar3 = FUN_0043cda0(DAT_006c4098);
  iVar1 = FUN_0043cd70(3);
  FUN_0043cdd0((int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar1) * 0x94),uVar4,uVar5);
  uVar5 = 0xfffffffc;
  uVar4 = 0xfffffffe;
  iVar3 = FUN_0043cda0(DAT_006c4098);
  iVar1 = FUN_0043cd70(5);
  FUN_0043cdd0((int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar1) * 0x94),uVar4,uVar5);
  uVar5 = 0xfffffffe;
  uVar4 = 0;
  iVar3 = FUN_0043cda0(DAT_006c4098);
  iVar1 = FUN_0043cd70(10);
  FUN_0043cdd0((int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar1) * 0x94),uVar4,uVar5);
  uVar5 = 0xfffffffc;
  uVar4 = 0xffffffff;
  iVar3 = FUN_0043cda0(DAT_006c4098);
  iVar1 = FUN_0043cd70(0xb);
  FUN_0043cdd0((int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar1) * 0x94),uVar4,uVar5);
  uVar5 = 0xfffffffd;
  uVar4 = 0;
  iVar3 = FUN_0043cda0(DAT_006c4098);
  iVar1 = FUN_0043cd70(0xc);
  FUN_0043cdd0((int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar1) * 0x94),uVar4,uVar5);
  uVar5 = 0xfffffffe;
  uVar4 = 0;
  iVar3 = FUN_0043cda0(DAT_006c4098);
  iVar1 = FUN_0043cd70(0xd);
  FUN_0043cdd0((int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar1) * 0x94),uVar4,uVar5);
  uVar5 = 0xfffffff8;
  uVar4 = 0xfffffffe;
  iVar3 = FUN_0043cda0(DAT_006c4098);
  iVar1 = FUN_0043cd70(0);
  FUN_0043cdd0((int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar1) * 0x94),uVar4,uVar5);
  uVar5 = 0xfffffff2;
  uVar4 = 0xfffffffb;
  iVar3 = FUN_0043cda0(DAT_006c4098);
  iVar1 = FUN_0043cd70(0xe);
  FUN_0043cdd0((int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar1) * 0x94),uVar4,uVar5);
  uVar5 = 0xfffffffe;
  uVar4 = 0xffffffff;
  iVar3 = FUN_0043cda0(DAT_006c4098);
  iVar1 = FUN_0043cd70(0xf);
  FUN_0043cdd0((int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar1) * 0x94),uVar4,uVar5);
  uVar5 = 0;
  uVar4 = 0;
  iVar3 = FUN_0043cda0(DAT_006c4098);
  iVar1 = FUN_0043cd70(0x10);
  FUN_0043cdd0((int)(s_lo_fnt3_fnt_0059a8c0 + (iVar3 * 0x11 + iVar1) * 0x94),uVar4,uVar5);
  if (DAT_006fb890 == 0) {
    FUN_004c87f0(0);
  }
  return;
}


