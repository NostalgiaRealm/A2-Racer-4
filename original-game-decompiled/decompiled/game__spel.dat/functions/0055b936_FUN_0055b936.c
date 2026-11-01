
/* ==== FUN_0055b936 @ 0055b936 ==== 
 * signature: undefined2 __thiscall FUN_0055b936(void * this, int * param_1)
 * body: 0055b936-0055ba22
 */

undefined2 __thiscall FUN_0055b936(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_8;
  
  piVar2 = param_1;
  local_8 = this;
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    uVar6 = param_1[4];
    if (uVar6 == 0xffffffff) {
      puVar4 = &DAT_005c8ac8;
    }
    else {
      puVar4 = (undefined *)((&DAT_007500a0)[(int)uVar6 >> 5] + (uVar6 & 0x1f) * 8);
    }
    if ((puVar4[4] & 0x80) != 0) {
      piVar1 = param_1 + 1;
      *piVar1 = *piVar1 + -1;
      uVar6 = 1;
      if (*piVar1 < 0) {
        uVar5 = FUN_0055fb61(param_1);
      }
      else {
        uVar5 = (uint)*(byte *)*param_1;
        *param_1 = (int)((byte *)*param_1 + 1);
      }
      if (uVar5 != 0xffffffff) {
        local_8 = (void *)CONCAT31(local_8._1_3_,(char)uVar5);
        if ((PTR_DAT_005c8384[(uVar5 & 0xff) * 2 + 1] & 0x80) != 0) {
          piVar1 = piVar2 + 1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 < 0) {
            uVar6 = FUN_0055fb61(piVar2);
          }
          else {
            uVar6 = (uint)*(byte *)*piVar2;
            *piVar2 = (int)((byte *)*piVar2 + 1);
          }
          if (uVar6 == 0xffffffff) {
            FUN_0055a45a((int)(char)(byte)local_8,piVar2);
            return 0xffff;
          }
          local_8._0_2_ = CONCAT11((char)uVar6,(byte)local_8);
          uVar6 = 2;
        }
        uVar6 = FUN_00563ddd((LPWSTR)((int)&param_1 + 2),(byte *)&local_8,uVar6);
        if (uVar6 != 0xffffffff) {
          return param_1._2_2_;
        }
        DAT_0074dc60 = 0x2a;
      }
      return 0xffff;
    }
  }
  piVar2 = param_1 + 1;
  *piVar2 = *piVar2 + -2;
  if (*piVar2 < 0) {
    uVar3 = FUN_00563cf9(param_1);
  }
  else {
    uVar3 = *(undefined2 *)*param_1;
    *param_1 = (int)((undefined2 *)*param_1 + 1);
  }
  return uVar3;
}


