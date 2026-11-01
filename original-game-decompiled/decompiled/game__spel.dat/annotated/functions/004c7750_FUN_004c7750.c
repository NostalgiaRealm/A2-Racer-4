
/* ==== FUN_004c7750 @ 004c7750 ==== 
 * signature: undefined4 __cdecl FUN_004c7750(int param_1, int * param_2, undefined4 param_3, int param_4)
 * body: 004c7750-004c77d8;004c77dc-004c7873;004c7877-004c787f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c77d9-004c77db 004c7874-004c7876
 */

undefined4 __cdecl FUN_004c7750(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint unaff_ESI;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char local_8 [4];
  undefined1 local_4 [4];
  
  piVar2 = param_2;
  if ((param_4 != -1) && (iVar3 = FUN_004c6160(param_2,param_4,0), iVar3 != 0)) {
    return 0x3e9;
  }
  pcVar7 = (char *)0x1;
  pcVar6 = local_8;
  puVar5 = local_4;
  piVar1 = *(int **)(param_1 * 0x44 + 0x28 + DAT_00740934);
  iVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1,0,param_3,puVar5,pcVar6,&param_2,&param_4);
  if (iVar3 != 0) {
    this(iVar3);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_locking_sound_buf_005b54a4);
  }
  if ((puVar5 != (undefined1 *)0x0) &&
     (uVar4 = FUN_00558b35(pcVar6,(uint)puVar5,1,piVar2), uVar4 != 1)) {
    return 0x3e9;
  }
  if ((unaff_ESI != 0) && (uVar4 = FUN_00558b35(pcVar7,unaff_ESI,1,piVar2), uVar4 != 1)) {
    return 0x3e9;
  }
  piVar2 = *(int **)(param_1 * 0x44 + 0x28 + DAT_00740934);
  iVar3 = (**(code **)(*piVar2 + 0x4c))(piVar2,pcVar6,puVar5,pcVar7,unaff_ESI);
  if (iVar3 == 0) {
    return 0;
  }
  this(iVar3);
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____error_unlocking_sound_b_005b5470);
}


