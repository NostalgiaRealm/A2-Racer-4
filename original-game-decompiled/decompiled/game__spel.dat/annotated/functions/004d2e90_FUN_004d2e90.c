
/* ==== FUN_004d2e90 @ 004d2e90 ==== 
 * signature: undefined __thiscall FUN_004d2e90(void * this, int param_1, char * param_2, char * param_3, undefined4 * param_4, undefined4 * param_5)
 * body: 004d2e90-004d3001
 */

void __thiscall
FUN_004d2e90(void *this,int param_1,char *param_2,char *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  void **ppvVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056fcb0;
  pvStack_c = ExceptionList;
  piVar7 = *(int **)((int)this + 4);
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (piVar7 != *(int **)((int)this + 8)) {
    do {
      pcVar3 = (char *)(**(code **)(*(int *)*piVar7 + 8))();
      iVar4 = __strcmpi(param_2,pcVar3);
      if (iVar4 == 0) {
        pcVar3 = *(char **)(*piVar7 + 8);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "";
        }
        iVar4 = __strcmpi(param_3,pcVar3);
        if (iVar4 == 0) {
          if (param_1 == ((int *)*piVar7)[5]) {
            uVar6 = (**(code **)(*(int *)*piVar7 + 0xc))();
            *param_4 = uVar6;
            if (param_5 == (undefined4 *)0x0) {
              ExceptionList = pvStack_c;
              return;
            }
            uVar6 = (**(code **)(*(int *)*piVar7 + 0x10))();
            *param_5 = uVar6;
            ExceptionList = pvStack_c;
            return;
          }
          puVar5 = FUN_004d7610(auStack_2c);
          uStack_4 = 0;
          FUN_004d6d30(0x138a,puVar5,param_2,param_3);
          if (iStack_28 == 0) {
            ExceptionList = pvStack_c;
            return;
          }
          pcVar3 = (char *)(iStack_28 + -1);
          cVar2 = *(char *)(iStack_28 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) goto LAB_004d2fe4;
          goto LAB_004d2f49;
        }
      }
      piVar7 = piVar7 + 1;
      ppvVar1 = ExceptionList;
    } while (piVar7 != *(int **)((int)this + 8));
  }
  ExceptionList = ppvVar1;
  puVar5 = FUN_004d7610(local_1c);
  uStack_4 = 1;
  FUN_004d6d30(0x1389,puVar5,param_2,param_3);
  if (iStack_18 != 0) {
    pcVar3 = (char *)(iStack_18 + -1);
    cVar2 = *(char *)(iStack_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
LAB_004d2f49:
      *pcVar3 = cVar2 + -1;
      ExceptionList = pvStack_c;
      return;
    }
LAB_004d2fe4:
    FUN_0054b339(pcVar3);
  }
  ExceptionList = pvStack_c;
  return;
}


