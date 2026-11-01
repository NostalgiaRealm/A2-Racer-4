
/* ==== FUN_00463a60 @ 00463a60 ==== 
 * signature: undefined __cdecl FUN_00463a60(int param_1)
 * body: 00463a60-00463c22;00463c26-00463c3a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00463c23-00463c25
 */

void __cdecl FUN_00463a60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = FUN_004b75a0(&DAT_00712130,s_C_HELI_005a63dc);
  iVar1 = FUN_004a7790(0,0,0,0,0,0,iVar1,0,0,0,0);
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0;
  uVar6 = 0;
  iVar2 = FUN_004b75a0(&DAT_00712130,s_C_LBLADE_005a63e4);
  FUN_004aa390(iVar1,iVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar4 = 0x3cd4fdf4;
  uVar5 = 0x40e1eb85;
  uVar3 = 0;
  uVar6 = 0xc29b2b02;
  iVar2 = FUN_004b75a0(&DAT_00712130,s_C_SBLADE_005a63f0);
  FUN_004aa390(iVar1,iVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  *(undefined4 *)(iVar1 * 0xf0 + 0x5c + DAT_00715e50) = 0;
  FUN_00450b00(iVar1,&DAT_005a63fc);
  if ((-1 < param_1) && (param_1 < DAT_00712108)) {
    (&DAT_0070a244)[param_1 * 0xd0] = iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s___d__Path_does_not_exist__Pat_005a6428);
}


