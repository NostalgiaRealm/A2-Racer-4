
/* ==== FUN_004d3010 @ 004d3010 ==== 
 * signature: undefined __thiscall FUN_004d3010(void * this, int param_1, char * param_2, undefined4 * param_3, undefined4 * param_4)
 * body: 004d3010-004d3179
 */

void __thiscall
FUN_004d3010(void *this,int param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  void **ppvVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  char *_Str2;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056fcd0;
  pvStack_c = ExceptionList;
  piVar7 = *(int **)((int)this + 4);
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (piVar7 != *(int **)((int)this + 8)) {
    do {
      _Str2 = &DAT_00712694;
      pcVar3 = (char *)(**(code **)(*(int *)*piVar7 + 8))();
      iVar4 = __strcmpi(pcVar3,_Str2);
      if (iVar4 == 0) {
        pcVar3 = *(char **)(*piVar7 + 8);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "";
        }
        iVar4 = __strcmpi(param_2,pcVar3);
        if (iVar4 == 0) {
          if (param_1 == ((int *)*piVar7)[5]) {
            uVar6 = (**(code **)(*(int *)*piVar7 + 0xc))();
            *param_3 = uVar6;
            if (param_4 == (undefined4 *)0x0) {
              ExceptionList = pvStack_c;
              return;
            }
            uVar6 = (**(code **)(*(int *)*piVar7 + 0x10))();
            *param_4 = uVar6;
            ExceptionList = pvStack_c;
            return;
          }
          puVar5 = FUN_004d7610(auStack_2c);
          uStack_4 = 0;
          FUN_004d6f20(0x138a,puVar5,param_2);
          if (iStack_28 == 0) {
            ExceptionList = pvStack_c;
            return;
          }
          pcVar3 = (char *)(iStack_28 + -1);
          cVar2 = *(char *)(iStack_28 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) goto LAB_004d315d;
          goto LAB_004d30c6;
        }
      }
      piVar7 = piVar7 + 1;
      ppvVar1 = ExceptionList;
    } while (piVar7 != *(int **)((int)this + 8));
  }
  ExceptionList = ppvVar1;
  puVar5 = FUN_004d7610(local_1c);
  uStack_4 = 1;
  FUN_004d6f20(0x1389,puVar5,param_2);
  if (iStack_18 != 0) {
    pcVar3 = (char *)(iStack_18 + -1);
    cVar2 = *(char *)(iStack_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
LAB_004d30c6:
      *pcVar3 = cVar2 + -1;
      ExceptionList = pvStack_c;
      return;
    }
LAB_004d315d:
    FUN_0054b339(pcVar3);
  }
  ExceptionList = pvStack_c;
  return;
}


