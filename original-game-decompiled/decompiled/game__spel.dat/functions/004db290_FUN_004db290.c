
/* ==== FUN_004db290 @ 004db290 ==== 
 * signature: undefined4 * __thiscall FUN_004db290(void * this, void * param_1, void * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, void * param_6)
 * body: 004db290-004db3c3
 */

undefined4 * __thiscall
FUN_004db290(void *this,void *param_1,void *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,void *param_6)

{
  char cVar1;
  code cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570818;
  pvStack_c = ExceptionList;
  uVar7 = 0;
  ExceptionList = &pvStack_c;
  iVar3 = FUN_004d9290(param_2,*(int *)((int)param_2 + 8) + -4);
  if (iVar3 == DAT_0074b888) {
    local_1c[0] = param_2._0_1_;
    uVar5 = 0xffffffff;
    local_18 = 0;
    pcVar6 = s_Cannot_fire_event_for_NIL_object_005b7388;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_14 = 0;
    local_10 = 0;
    FUN_00402940(local_1c,(undefined4 *)s_Cannot_fire_event_for_NIL_object_005b7388,~uVar5 - 1);
    local_4 = 0;
    FUN_004d6900(0xbc0,local_1c,(undefined1 *)((int)this + 0xc),
                 (undefined1 *)(*(int *)((int)this + 8) + 0xc));
    if (pcStack_8 != (code *)0x0) {
      cVar2 = pcStack_8[-1];
      if ((cVar2 == (code)0x0) || (cVar2 == (code)0xff)) {
        FUN_0054b339(pcStack_8 + -1);
      }
      else {
        pcStack_8[-1] = (code)((char)cVar2 + -1);
      }
    }
    pcStack_8 = (code *)0x0;
    local_4 = 0;
    param_2 = param_6;
  }
  piVar4 = *(int **)((int)this + 0x84);
  do {
    if (piVar4 == *(int **)((int)this + 0x88)) {
LAB_004db389:
      FUN_004db3d0(this,param_5,(int)param_2);
      ExceptionList = param_1;
      return param_5;
    }
    if (*(int *)(*(int *)(*piVar4 + 0x90) + 0x2c) == iVar3) {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0x3c))(param_5,param_2,uVar7);
        ExceptionList = param_1;
        return param_5;
      }
      goto LAB_004db389;
    }
    piVar4 = piVar4 + 1;
  } while( true );
}


