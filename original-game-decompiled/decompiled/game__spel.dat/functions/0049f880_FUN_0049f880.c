
/* ==== FUN_0049f880 @ 0049f880 ==== 
 * signature: undefined4 __thiscall FUN_0049f880(void * this, int param_1, int param_2, int param_3, char param_4)
 * body: 0049f880-0049f8fe
 */

undefined4 __thiscall FUN_0049f880(void *this,int param_1,int param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_004c3fa0((byte *)s_____Initting_CSndEngine_version___005aee40);
  FUN_004a0100((uint)(-1 < param_1),(byte *)s__s___d__Trying_to_set_an_illegal_005aee00);
  FUN_0049ea90((void *)((int)this + 4),this,param_1);
  uVar1 = FUN_0049ed90((void *)((int)this + 0x14),param_2);
  iVar2 = CONCAT31((int3)((uint)uVar1 >> 8),param_4);
  if (param_4 == '\0') {
    iVar2 = FUN_004c7150(param_3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


