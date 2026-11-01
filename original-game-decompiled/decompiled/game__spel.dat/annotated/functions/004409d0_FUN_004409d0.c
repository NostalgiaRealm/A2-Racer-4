
/* ==== FUN_004409d0 @ 004409d0 ==== 
 * signature: undefined __cdecl FUN_004409d0(int param_1, uint param_2)
 * body: 004409d0-004409f5;004409f9-00440a1b;00440a1f-00440b03
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004409f6-004409f8 00440a1c-00440a1e
 */

void __cdecl FUN_004409d0(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint uStack_44;
  uint auStack_40 [3];
  undefined1 uStack_31;
  
  uVar1 = param_2;
  if (((int)param_2 < 0) || (0x1d < (int)param_2)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Incorrect_pcx_index___d_0059ca58);
  }
  if ((DAT_006fb890 < 0) || (5 < DAT_006fb890)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Illegal_value_for_game_i_0059ca9c);
  }
  if (DAT_006fb894 != 0) {
    FUN_004c3fa0((byte *)s_Loading_wait_screen_for_8_bit_mo_0059cacc);
    FUN_004cae20(param_1,(LPCSTR)((int)&DAT_006cbefc + uVar1 * 0xd),0x19);
    return;
  }
  FUN_004c3fa0((byte *)s_Loading_wait_screen_for_16_bit_m_0059caf0);
  _strncpy((char *)auStack_40,(char *)((int)&DAT_006cbefc + uVar1 * 0xd),0xe);
  uStack_31 = 0;
  puVar2 = FUN_00558f30(auStack_40,&DAT_0059cb18);
  if (puVar2 != (uint *)0x0) {
    *(undefined1 *)puVar2 = 0;
  }
  iVar5 = -1;
  puVar2 = auStack_40;
  do {
    puVar6 = puVar2;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    puVar6 = (uint *)((int)puVar2 + 1);
    uVar1 = *puVar2;
    puVar2 = puVar6;
  } while ((char)uVar1 != '\0');
  *(undefined4 *)((int)puVar6 + -1) = DAT_0059cb1c;
  *(char *)((int)puVar6 + 3) = DAT_0059cb20;
  piVar3 = FUN_004c00b0((LPCSTR)auStack_40,&uStack_44,&param_2,(int *)0x800,&DAT_00740968);
  piVar4 = (int *)FUN_00440910(param_1);
  FUN_004c9930(piVar3,piVar4,0,0,uStack_44,param_2,0);
  (**(code **)(*piVar3 + 8))(piVar3);
  return;
}


