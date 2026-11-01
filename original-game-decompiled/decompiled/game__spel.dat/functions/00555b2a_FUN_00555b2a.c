
/* ==== FUN_00555b2a @ 00555b2a ==== 
 * signature: undefined __thiscall FUN_00555b2a(void * this, undefined4 * param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, undefined4 param_6, uint * param_7, int param_8)
 * body: 00555b2a-00555c3e
 */

void __thiscall
FUN_00555b2a(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,uint *param_7,int param_8)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
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
    if (param_3._1_1_ != ' ') goto LAB_00555b9c;
    FUN_0054e379(&param_2);
    bVar3 = FUN_00556df8((byte *)&param_2,&param_4,1,0x1f,(int *)(iVar2 + 0xc));
    *puVar1 = *puVar1 | CONCAT31(extraout_var,bVar3);
  }
  else {
LAB_00555b9c:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if ((char)param_3 == '\0') {
      Peek(&param_2);
    }
    if (param_3._1_1_ == ',') {
      FUN_0054e379(&param_2);
      uVar5 = FUN_0054e9af(&param_2,&param_4);
      if ((char)uVar5 == '\0') {
        if ((char)param_3 == '\0') {
          Peek(&param_2);
        }
        if (param_3._1_1_ == ' ') {
          FUN_0054e379(&param_2);
          puVar4 = (undefined4 *)
                   (**(code **)(*(int *)this + 0x18))
                             (&local_c,param_2,param_3,param_4,param_5,param_6,puVar1,iVar2);
          param_2 = *puVar4;
          param_3 = puVar4[1];
          goto LAB_00555c17;
        }
      }
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_00555c17:
  uVar5 = FUN_0054e9af(&param_2,&param_4);
  if ((char)uVar5 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


