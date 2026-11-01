
/* ==== FUN_00436170 @ 00436170 ==== 
 * signature: undefined __cdecl FUN_00436170(int param_1, int param_2)
 * body: 00436170-00436193;00436197-004361e8;004361ec-00436218;0043621c-00436507
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00436194-00436196 004361e9-004361eb 00436219-0043621b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00436170(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Illegal_car_type___d__0059942c);
  }
  iVar3 = param_2 * 0xf0;
  iVar2 = *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9;
  if (3 < *(int *)(DAT_0073b168 + *(int *)(iVar2 + 4 + DAT_0073b0d0) * 9)) {
    if (4 < *(int *)(DAT_0073b168 + *(int *)(iVar2 + 4 + DAT_0073b0d0) * 9)) {
      FUN_00435620();
      FUN_004aa390(param_2,*(undefined4 *)(iVar2 + 4 + DAT_0073b0d0),3,-fStack_54,uStack_50,
                   uStack_4c,0,_DAT_005b23b8 * 0.5,0);
      if (DAT_006fb940 != 0) {
        iVar1 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),
                             *(int *)(iVar3 + 0xac + DAT_00715e50) + -1);
        *(undefined4 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0xa5) = 2;
      }
      FUN_004aa390(param_2,*(undefined4 *)(iVar2 + 4 + DAT_0073b0d0),3,fStack_54,uStack_50,uStack_4c
                   ,0,_DAT_005b23b8 * 0.5,0);
      if (DAT_006fb940 != 0) {
        iVar1 = FUN_004a8600((void *)(DAT_00715e50 + iVar3),
                             *(int *)(DAT_00715e50 + iVar3 + 0xac) + -1);
        *(undefined4 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0xa5) = 2;
      }
      FUN_004aa390(param_2,*(undefined4 *)(iVar2 + 4 + DAT_0073b0d0),4,-fStack_48,uStack_44,
                   uStack_40,0,0,0);
      if (DAT_006fb940 != 0) {
        iVar1 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),
                             *(int *)(iVar3 + 0xac + DAT_00715e50) + -1);
        *(undefined4 *)(DAT_0073b0d0 + iVar1 * 0xa9 + 0xa5) = 2;
      }
      FUN_004aa390(param_2,*(undefined4 *)(iVar2 + 4 + DAT_0073b0d0),4,fStack_48,uStack_44,uStack_40
                   ,0,0,0);
      if (DAT_006fb940 != 0) {
        iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),
                             *(int *)(iVar3 + 0xac + DAT_00715e50) + -1);
        *(undefined4 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0xa5) = 2;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____car_type___d__doesn_t_h_005994cc);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____car_type___d__doesn_t_h_00599474);
}


