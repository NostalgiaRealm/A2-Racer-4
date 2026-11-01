
/* ==== FUN_004e9f60 @ 004e9f60 ==== 
 * signature: undefined __fastcall FUN_004e9f60(undefined4 * param_1)
 * body: 004e9f60-004ea0bc
 */

void __fastcall FUN_004e9f60(undefined4 *param_1)

{
  char cVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 *this;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_005720fa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005781bc;
  pvVar2 = (LPVOID)param_1[0x17];
  local_4 = 4;
  param_1[0x16] = &PTR_FUN_005781c0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_0042f530();
    FUN_0054b339(*(LPVOID *)((int)pvVar2 + 4));
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0;
    FUN_0054b339(pvVar2);
  }
  param_1[0x17] = 0;
  pvVar2 = (LPVOID)param_1[0x15];
  local_4._0_1_ = 3;
  param_1[0x14] = &PTR_FUN_005781d0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_004ec7a0((int)pvVar2);
    FUN_0054b339(pvVar2);
  }
  param_1[0x15] = 0;
  local_4._0_1_ = 2;
  param_1[0xf] = &PTR_FUN_0057820c;
  FUN_004028f0(param_1 + 0x10,'\x01');
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[10] = &PTR_FUN_0057820c;
  FUN_004028f0(param_1 + 0xb,'\x01');
  param_1[5] = &PTR_FUN_0057820c;
  iVar3 = param_1[7];
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  this = param_1 + 1;
  local_4 = 6;
  iVar3 = (**(code **)*this)();
  if (0 < iVar3) {
    do {
      FUN_004ebcb0(this,0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[3] = &PTR_FUN_005781fc;
  if ((void *)param_1[4] != (void *)0x0) {
    FUN_004ed120((void *)param_1[4],1);
  }
  param_1[4] = 0;
  local_4 = 0xffffffff;
  *this = &PTR_FUN_005781ec;
  if ((void *)param_1[2] != (void *)0x0) {
    FUN_004ed120((void *)param_1[2],1);
  }
  param_1[2] = 0;
  ExceptionList = pvStack_c;
  return;
}


