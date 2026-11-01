
/* ==== FUN_00435760 @ 00435760 ==== 
 * signature: undefined __cdecl FUN_00435760(int param_1, int param_2)
 * body: 00435760-00435783;00435787-004357d8;004357dc-00435a62
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00435784-00435786 004357d9-004357db
 */

void __cdecl FUN_00435760(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Illegal_car_type___d__005992e0);
  }
  iVar2 = param_2 * 0xf0;
  iVar1 = *(int *)(iVar2 + 0x24 + DAT_00715e50) * 0xa9;
  if (*(int *)(DAT_0073b168 + *(int *)(iVar1 + 4 + DAT_0073b0d0) * 9) < 2) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____car_type___d__doesn_t_h_00599328);
  }
  FUN_004354e0();
  FUN_004aa390(param_2,*(undefined4 *)(iVar1 + 4 + DAT_0073b0d0),1,-fStack_54,uStack_50,uStack_4c,0,
               0,0);
  FUN_004aa390(param_2,*(undefined4 *)(iVar1 + 4 + DAT_0073b0d0),1,fStack_54,uStack_50,uStack_4c,0,0
               ,0);
  FUN_004aa390(param_2,*(undefined4 *)(iVar1 + 4 + DAT_0073b0d0),1,-fStack_48,uStack_44,uStack_40,0,
               0,0);
  FUN_004aa390(param_2,*(undefined4 *)(iVar1 + 4 + DAT_0073b0d0),1,fStack_48,uStack_44,uStack_40,0,0
               ,0);
  iVar1 = FUN_004a8600((void *)(iVar2 + DAT_00715e50),0);
  FUN_004b5770(DAT_0073b0d0 + iVar1 * 0xa9);
  iVar1 = FUN_004a8600((void *)(iVar2 + DAT_00715e50),1);
  FUN_004b5770(DAT_0073b0d0 + iVar1 * 0xa9);
  iVar1 = FUN_004a8600((void *)(iVar2 + DAT_00715e50),2);
  FUN_004b5770(DAT_0073b0d0 + iVar1 * 0xa9);
  iVar1 = FUN_004a8600((void *)(iVar2 + DAT_00715e50),3);
  FUN_004b5770(DAT_0073b0d0 + iVar1 * 0xa9);
  return;
}


