
/* ==== FUN_004c13e5 @ 004c13e5 ==== 
 * signature: undefined4 __fastcall FUN_004c13e5(uint param_1)
 * body: 004c13e5-004c13e7
 */

undefined4 __fastcall FUN_004c13e5(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined3 extraout_var;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte in_CF;
  int unaff_retaddr;
  
  puVar1 = (uint *)(unaff_retaddr * 2 + 0x5f);
  uVar3 = param_1 + *puVar1;
  uVar6 = uVar3 + in_CF;
  puVar2 = (uint *)(unaff_retaddr * 2 + 0x66);
  uVar3 = (uint)(CARRY4(param_1,*puVar1) || CARRY4(uVar3,(uint)in_CF));
  uVar4 = uVar6 + *puVar2;
  uVar7 = uVar4 + uVar3;
  puVar1 = (uint *)(unaff_retaddr * 2 + 0x6d);
  uVar3 = (uint)(CARRY4(uVar6,*puVar2) || CARRY4(uVar4,uVar3));
  uVar4 = uVar7 + *puVar1;
  uVar6 = uVar4 + uVar3;
  puVar2 = (uint *)(unaff_retaddr * 2 + -0x77);
  uVar3 = (uint)(CARRY4(uVar7,*puVar1) || CARRY4(uVar4,uVar3));
  uVar4 = uVar6 + *puVar2;
  iVar8 = uVar4 + uVar3 + *(int *)(unaff_retaddr * 2) +
          (uint)(CARRY4(uVar6,*puVar2) || CARRY4(uVar4,uVar3));
  if (*(int *)(iVar8 + 0x198) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_description_is_no_005b2ca8);
  }
  bVar5 = FUN_004c1030(iVar8);
  if (CONCAT31(extraout_var,bVar5) == 0) {
    if ((*(byte *)(iVar8 + 0xd0) & 8) != 0) {
      return *(undefined4 *)(iVar8 + 0xf4);
    }
  }
  else if ((*(byte *)(iVar8 + 4) & 8) != 0) {
    return *(undefined4 *)(iVar8 + 0x28);
  }
  return 0xffffffff;
}


