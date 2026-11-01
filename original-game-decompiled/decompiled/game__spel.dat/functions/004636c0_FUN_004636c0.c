
/* ==== FUN_004636c0 @ 004636c0 ==== 
 * signature: undefined __cdecl FUN_004636c0(int param_1)
 * body: 004636c0-00463859;0046385d-00463871
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0046385a-0046385c
 */

void __cdecl FUN_004636c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004b75a0(&DAT_00712130,s_MPOLIZEI_005a6340);
  iVar1 = FUN_004a7790(0,0,0,0,0,0,iVar1,0,0,0,0);
  FUN_00450b00(iVar1,s_POLITIE_SIRENE_005a634c);
  FUN_004a79d0(iVar1,0,0,0,0,0,0,1200.0,0.9,0.2,'\0',FUN_0044f970,'\0',1);
  FUN_004a7190(iVar1);
  iVar2 = iVar1 * 0xf0;
  *(undefined4 *)(iVar2 + 0x60 + DAT_00715e50) = 1;
  if (DAT_006fb954 == 1) {
    *(undefined4 *)(iVar2 + 0x50 + DAT_00715e50) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x50 + DAT_00715e50) = 1;
  }
  *(undefined4 *)(iVar2 + 0x5c + DAT_00715e50) = 0;
  *(code **)(iVar2 + 0x70 + DAT_00715e50) = FUN_0042d820;
  if ((-1 < param_1) && (param_1 < DAT_00712108)) {
    (&DAT_0070a244)[param_1 * 0xd0] = iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__Path_does_not_exist__Pat_005a6380);
}


