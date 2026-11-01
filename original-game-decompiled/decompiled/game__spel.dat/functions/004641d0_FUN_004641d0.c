
/* ==== FUN_004641d0 @ 004641d0 ==== 
 * signature: undefined __stdcall FUN_004641d0(void)
 * body: 004641d0-00464247;0046424b-0046427d;00464286-004643c5;004643c9-00464419
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00464248-0046424a 0046427e-00464285 004643c6-004643c8
 */

void FUN_004641d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int local_24;
  CHAR local_20 [32];
  
  wsprintfA(local_20,s_etappe_d_pth_005a66d0,DAT_006fb898);
  piVar1 = (int *)FUN_005589a5(local_20,&DAT_005a66e0);
  iVar3 = 0;
  if (piVar1 == (int *)0x0) {
    DAT_00712108 = 0;
    return;
  }
  FUN_00558b35((char *)&local_24,4,1,piVar1);
  if (local_24 != -1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Incorrect_version_path_f_005a6708);
  }
  FUN_00558b35((char *)&DAT_00712108,4,1,piVar1);
  if (0x28 < DAT_00712108) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Too_many_paths_in_use____005a6768);
  }
  if (0 < DAT_00712108) {
    do {
      uVar5 = 1;
      uVar4 = 4;
      piVar6 = piVar1;
      iVar2 = FUN_004641a0(iVar3);
      FUN_00558b35((char *)(&DAT_00709f08 + iVar2 * 0xd0),uVar4,uVar5,piVar6);
      uVar5 = 1;
      uVar4 = 4;
      piVar6 = piVar1;
      iVar2 = FUN_004641a0(iVar3);
      FUN_00558b35(&DAT_00709f0c + iVar2 * 0x340,uVar4,uVar5,piVar6);
      uVar5 = 1;
      uVar4 = 4;
      piVar6 = piVar1;
      iVar2 = FUN_004641a0(iVar3);
      FUN_00558b35((char *)(&DAT_00709f10 + iVar2 * 0xd0),uVar4,uVar5,piVar6);
      uVar5 = 1;
      uVar4 = 4;
      piVar6 = piVar1;
      iVar2 = FUN_004641a0(iVar3);
      FUN_00558b35((char *)(&DAT_00709f14 + iVar2 * 0xd0),uVar4,uVar5,piVar6);
      uVar5 = 1;
      uVar4 = 4;
      piVar6 = piVar1;
      iVar2 = FUN_004641a0(iVar3);
      FUN_00558b35(&DAT_00709f18 + iVar2 * 0x340,uVar4,uVar5,piVar6);
      uVar5 = 1;
      uVar4 = 4;
      piVar6 = piVar1;
      iVar2 = FUN_004641a0(iVar3);
      FUN_00558b35(&DAT_00709f1c + iVar2 * 0x340,uVar4,uVar5,piVar6);
      iVar2 = FUN_004641a0(iVar3);
      if (0x31 < *(int *)(&DAT_00709f1c + iVar2 * 0x340)) {
        FUN_004641a0(iVar3);
        FUN_004641a0(iVar3);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s___d__Not_enough_memory_alloca_005a6798);
      }
      piVar6 = piVar1;
      iVar2 = FUN_004641a0(iVar3);
      uVar4 = *(uint *)(&DAT_00709f1c + iVar2 * 0x340);
      uVar5 = 0x10;
      iVar2 = FUN_004641a0(iVar3);
      FUN_00558b35(&DAT_00709f20 + iVar2 * 0x340,uVar5,uVar4,piVar6);
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00712108);
  }
  return;
}


