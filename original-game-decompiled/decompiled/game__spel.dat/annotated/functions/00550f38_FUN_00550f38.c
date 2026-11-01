
/* ==== FUN_00550f38 @ 00550f38 ==== 
 * signature: undefined __thiscall FUN_00550f38(void * this, undefined4 * param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, undefined4 param_6, uint * param_7, int param_8)
 * body: 00550f38-00551068
 */

void __thiscall
FUN_00550f38(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,uint *param_7,int param_8)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined3 extraout_var;
  undefined4 uVar6;
  void *local_c;
  void *pvStack_8;
  
  iVar2 = param_8;
  puVar1 = param_7;
  local_c = this;
  pvStack_8 = this;
  puVar4 = (undefined4 *)
           (**(code **)(*(int *)this + 0x14))
                     (&local_c,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  param_2 = *puVar4;
  param_3 = puVar4[1];
  if (*puVar1 == 0) {
    if ((char)param_3 == '\0') {
      Peek(&param_2);
    }
    uVar5 = FUN_0054ef7c(0x20);
    if (param_3._2_2_ != (short)uVar5) goto LAB_00550fb2;
    FUN_0055331d(&param_2);
    bVar3 = FUN_005531c8((byte *)&param_2,&param_4,1,0x1f,(int *)(iVar2 + 0xc));
    *puVar1 = *puVar1 | CONCAT31(extraout_var,bVar3);
  }
  else {
LAB_00550fb2:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if ((char)param_3 == '\0') {
      Peek(&param_2);
    }
    uVar5 = FUN_0054ef7c(0x2c);
    if (param_3._2_2_ == (short)uVar5) {
      FUN_0055331d(&param_2);
      uVar6 = FUN_00554775(&param_2,&param_4);
      if ((char)uVar6 == '\0') {
        if ((char)param_3 == '\0') {
          Peek(&param_2);
        }
        uVar5 = FUN_0054ef7c(0x20);
        if (param_3._2_2_ == (short)uVar5) {
          FUN_0055331d(&param_2);
          puVar4 = (undefined4 *)
                   (**(code **)(*(int *)this + 0x18))
                             (&local_c,param_2,param_3,param_4,param_5,param_6,puVar1,iVar2);
          param_2 = *puVar4;
          param_3 = puVar4[1];
          goto LAB_00551041;
        }
      }
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_00551041:
  uVar6 = FUN_00554775(&param_2,&param_4);
  if ((char)uVar6 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


